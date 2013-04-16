#import <UIKit/UIKit.h>
@protocol TapDetectingWindowDelegate
- (void)userDidTapWebView:(id)tapPoint;
- (void)userTouchBegan:(NSSet*)touches andEvent:(UIEvent*)event;
- (void)userTouchMoved:(NSSet*)touches andEvent:(UIEvent*)event;
- (void)userTouchEnded:(NSSet*)touches andEvent:(UIEvent*)event;
@end
@interface TapDetectingWindow : UIWindow {
    UIView *viewToObserve;
    id <TapDetectingWindowDelegate> controllerThatObserves;
}
@property (nonatomic, retain) UIView *viewToObserve;
@property (nonatomic, assign) id <TapDetectingWindowDelegate> controllerThatObserves;
@end