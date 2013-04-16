#import "TapDetectingWindow.h"
@implementation TapDetectingWindow
@synthesize viewToObserve;
@synthesize controllerThatObserves;
- (id)initWithViewToObserver:(UIView *)view andDelegate:(id)delegate {
    if(self == [super init]) {
        self.viewToObserve = view;
        self.controllerThatObserves = delegate;
    }
    return self;
}
- (void)dealloc {
    [viewToObserve release];
    [super dealloc];
}
- (void)forwardTap:(id)touch {
    [controllerThatObserves userDidTapWebView:touch];
}
- (void)forwardTouchBegan:(NSArray *)touch {
    [controllerThatObserves userTouchBegan:[touch objectAtIndex:0] andEvent:[touch objectAtIndex:1]];
}
- (void)forwardTouchMoved:(NSArray *)touch {
    [controllerThatObserves userTouchMoved:[touch objectAtIndex:0] andEvent:[touch objectAtIndex:1]];
}
- (void)forwardTouchEnded:(NSArray *)touch {
    [controllerThatObserves userTouchEnded:[touch objectAtIndex:0] andEvent:[touch objectAtIndex:1]];
}
- (void)sendEvent:(UIEvent *)event {
    [super sendEvent:event];
    if (viewToObserve == nil || controllerThatObserves == nil)
        return;
    NSSet *touches = [event allTouches];
    if (touches.count != 1)
        return;
    UITouch *touch = touches.anyObject;
    // if (touch.phase != UITouchPhaseEnded)
    //     return;
    // if ([touch.view isDescendantOfView:viewToObserve] == NO)
    //     return;
    CGPoint tapPoint = [touch locationInView:viewToObserve];
    //NSLog(@"TapPoint = %f, %f", tapPoint.x, tapPoint.y);
    NSArray *pointArray = [NSArray arrayWithObjects:[NSString stringWithFormat:@"%f", tapPoint.x],
    [NSString stringWithFormat:@"%f", tapPoint.y], nil];
    NSArray *argArray = [NSArray arrayWithObjects:[event allTouches], event, nil];
    if (touch.phase == UITouchPhaseBegan)
    [self performSelector:@selector(forwardTouchBegan:) withObject:argArray];
    else if (touch.phase == UITouchPhaseMoved)
    [self performSelector:@selector(forwardTouchMoved:) withObject:argArray];
    else if (touch.phase == UITouchPhaseEnded)
    [self performSelector:@selector(forwardTouchEnded:) withObject:argArray];
    if (touch.tapCount == 1) {
        [self performSelector:@selector(forwardTap:) withObject:pointArray afterDelay:0.5];
    }
    else if (touch.tapCount > 1) {
        [NSObject cancelPreviousPerformRequestsWithTarget:self selector:@selector(forwardTap:) object:pointArray];
    }
}
@end