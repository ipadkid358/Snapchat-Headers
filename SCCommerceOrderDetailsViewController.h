/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:43 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCPaymentsGenericTableViewController.h>
#import <Snapchat/SCCommerceLoggerPageMetricsDataSource.h>

@class UIView, NSString, SCUserSession, SCCommerceOrder;

@interface SCCommerceOrderDetailsViewController : SCPaymentsGenericTableViewController <SCCommerceLoggerPageMetricsDataSource> {

	unsigned long long _totalRows;
	UIView* _helpView;
	NSString* _metricsDisplayId;
	SCUserSession* _userSession;
	SCCommerceOrder* _order;
	unsigned long long _theme;

}

@property (nonatomic,__weak,readonly) SCUserSession * userSession;              //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) SCCommerceOrder * order;                         //@synthesize order=_order - In the implementation block
@property (assign,nonatomic) unsigned long long theme;                          //@synthesize theme=_theme - In the implementation block
-(void)leftButtonPressed;
-(id)imageForLeftButtonInState:(unsigned long long)arg1 ;
-(id)titleForHeader:(id)arg1 ;
-(id)textColorForHeader:(id)arg1 ;
-(BOOL)_isBeingPresented;
-(BOOL)shouldPopToRootViewControllerLater;
-(void)_setupTableView;
-(void)_configureContactsCell:(id)arg1 ;
-(void)_configureShippingAddressCell:(id)arg1 ;
-(void)_configureShippingMethodCell:(id)arg1 ;
-(void)_configurePaymentMethodCell:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 order:(id)arg2 ;
-(void)_presentWebViewWithUrl:(id)arg1 ;
-(void)_setupHelpView;
-(unsigned long long)_rowTypeForIndexPath:(id)arg1 ;
-(void)_configureOrderDate:(id)arg1 ;
-(void)_configureOrderNumber:(id)arg1 ;
-(id)_summaryViewCell;
-(void)_didTapMerchantTerms;
-(void)_didTapMerchantReturnPolicy;
-(void)_didTapMerchantWebButton;
-(void)_didTapMerchantEmail;
-(id)_orderItemCellForIndexPath:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)displayId;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)tableViewStyle;
-(SCCommerceOrder *)order;
-(SCUserSession *)userSession;
-(unsigned long long)theme;
-(void)setTheme:(unsigned long long)arg1 ;
@end

