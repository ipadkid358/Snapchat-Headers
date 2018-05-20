/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:43 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCPaymentsGenericTableViewController.h>
#import <Snapchat/SCCommerceLoggerPageMetricsDataSource.h>

@protocol SCPaymentsSelectEditListViewControllerDelegate;
@class NSMutableArray, UIFont, NSArray, NSString, NSError, UIVisualEffectView, SCLoadingIndicatorView, SCUserSession, SCPaymentsShippingAddress;

@interface SCPaymentsSelectEditListViewController : SCPaymentsGenericTableViewController <SCCommerceLoggerPageMetricsDataSource> {

	NSMutableArray* _itemList;
	Class _tableViewCellClass;
	UIFont* _defaultFont;
	unsigned long long _selectedItemIndex;
	NSArray* _shippingAddressList;
	NSString* _initiallySelectedItemId;
	BOOL _isSelectedItemInvalid;
	NSError* _selectedItemError;
	UIVisualEffectView* _loadingBackgroundView;
	SCLoadingIndicatorView* _loadingIndicatorView;
	NSString* _metricsDisplayId;
	BOOL _canRemoveEditableItem;
	unsigned long long _mode;
	unsigned long long _itemType;
	id<SCPaymentsSelectEditListViewControllerDelegate> _delegate;
	SCUserSession* _userSession;
	SCPaymentsShippingAddress* _checkoutShippingAddress;
	unsigned long long _theme;

}

@property (nonatomic,readonly) unsigned long long mode;                                                       //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) unsigned long long itemType;                                                   //@synthesize itemType=_itemType - In the implementation block
@property (assign,nonatomic,__weak) id<SCPaymentsSelectEditListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) SCUserSession * userSession;                                            //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) SCPaymentsShippingAddress * checkoutShippingAddress;                             //@synthesize checkoutShippingAddress=_checkoutShippingAddress - In the implementation block
@property (assign,nonatomic) BOOL canRemoveEditableItem;                                                      //@synthesize canRemoveEditableItem=_canRemoveEditableItem - In the implementation block
@property (assign,nonatomic) unsigned long long theme;                                                        //@synthesize theme=_theme - In the implementation block
-(id)imageForLeftButtonInState:(unsigned long long)arg1 ;
-(id)titleForHeader:(id)arg1 ;
-(id)textColorForHeader:(id)arg1 ;
-(void)_showBlurView;
-(void)_hideBlurView;
-(BOOL)shouldPopToRootViewController;
-(BOOL)shouldPopToRootViewControllerLater;
-(void)showErrorRetryCancelDialogWithTitle:(id)arg1 message:(id)arg2 retryActionHandler:(/*^block*/id)arg3 cancelActionHandler:(/*^block*/id)arg4 ;
-(id)initWithItemType:(unsigned long long)arg1 withMode:(unsigned long long)arg2 selectedItemId:(id)arg3 selectedItemError:(id)arg4 withUserSession:(id)arg5 ;
-(void)setCheckoutShippingAddress:(SCPaymentsShippingAddress *)arg1 ;
-(id)initWithItemType:(unsigned long long)arg1 withMode:(unsigned long long)arg2 itemList:(id)arg3 selectedItemId:(id)arg4 withUserSession:(id)arg5 ;
-(long long)_getPageType;
-(id)initWithItemType:(unsigned long long)arg1 withMode:(unsigned long long)arg2 withUserSession:(id)arg3 ;
-(void)_tappedOnItem:(id)arg1 ;
-(BOOL)_itemIsValid:(id)arg1 ;
-(void)_tappedOnNewOrEditableItem:(id)arg1 ;
-(BOOL)_updateSelectionForIndex:(id)arg1 ;
-(void)_returnToPreviousScreen;
-(BOOL)_paymentMethodIsValid:(id)arg1 ;
-(BOOL)canRemoveEditableItem;
-(void)_updateSelectedItemIndex;
-(id)_fetchItemsList;
-(BOOL)_shouldAllowEditingInvalidItem:(id)arg1 ;
-(SCPaymentsShippingAddress *)checkoutShippingAddress;
-(void)setCanRemoveEditableItem:(BOOL)arg1 ;
-(void)setDelegate:(id<SCPaymentsSelectEditListViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<SCPaymentsSelectEditListViewControllerDelegate>)delegate;
-(id)displayId;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)mode;
-(unsigned long long)itemType;
-(SCUserSession *)userSession;
-(unsigned long long)theme;
-(void)setTheme:(unsigned long long)arg1 ;
-(void)setupTableView;
-(void)_loadItems;
@end

