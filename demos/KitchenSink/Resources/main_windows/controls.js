// create table view data object
var data = [{
	title: 'Scroll view',
	hasChild: true,
	test: '../examples/scroll_views_basic.js'
}, {
	title: 'Webview',
	hasChild: true,
	test: '../examples/web_views.js'
}, {
	title: 'Slider',
	hasChild: true,
	test: '../examples/slider.js'
}, {
	title: 'Switch',
	hasChild: true,
	test: '../examples/switch.js'
}, {
	title: 'Activity Indicator',
	hasChild: true,
	test: '../examples/activity_indicator.js'
}, {
	title: 'Progress Bar',
	hasChild: true,
	test: '../examples/progress_bar.js'
}, {
	title: 'Button',
	hasChild: true,
	test: '../examples/button.js'
}, {
	title: 'Button States',
	hasChild: true,
	test: '../examples/button_state.js'
}, {
	title: 'Label',
	hasChild: true,
	test: '../examples/label.js'
}, {
	title: 'Search Bar',
	hasChild: true,
	test: '../examples/searchbar.js'
}, {
	title: 'Text Field',
	hasChild: true,
	test: '../examples/textfield.js'
}, {
	title: 'Text Area',
	hasChild: true,
	test: '../examples/textarea.js'
}];

// add iphone specific tests
if (Titanium.Platform.name == 'iPhone OS') {
	data.push({
		title: 'Button Bar',
		hasChild: true,
		test: '../examples/buttonbar.js'
	});
	data.push({
		title: 'Tabbed Bar',
		hasChild: true,
		test: '../examples/tabbedbar.js'
	});
	data.push({
		title: 'System Buttons',
		hasChild: true,
		test: '../examples/system_buttons.js'
	});
	data.push({
		title: 'Toolbar',
		hasChild: true,
		test: '../examples/toolbar.js'
	});
}
data.push({
	title: 'Picker',
	hasChild: true,
	test: '../examples/picker.js'
});

// create table view
var tableview = Titanium.UI.createTableView({
	data: data
});

// create table view event listener
tableview.addEventListener('click', function(e) {
	if (e.rowData.test) {
		var win = Titanium.UI.createWindow({
			url: e.rowData.test,
			title: e.rowData.title
		});

		win.addEventListener('touchstart', function(e) {
			console.log('<<<<<<<<------------- Touch start ----------------------->>>>>>');
			console.log('Touch start at x = ' + e.x);
		});

		win.addEventListener('touchmove', function(e) {
			console.log('<<<<<<<<------------- Touch move ----------------------->>>>>>');
			console.log('Touch move at x = ' + e.x);
		});

		win.addEventListener('touchend', function(e) {
			console.log('<<<<<<<<------------- Touch end ----------------------->>>>>>');
			console.log('Touch end at x = ' + e.x);
		});


		Titanium.UI.currentTab.open(win, {
			animated: true
		});
	}
});

// add table view to the window
Titanium.UI.currentWindow.add(tableview);