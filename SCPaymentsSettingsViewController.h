/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:43 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCPaymentsGenericTableViewController.h>
#import <Snapchat/SCPaymentsCardCreateUpdateViewControllerDelegate.h>
#import <Snapchat/SCCommerceLoggerPageMetricsDataSource.h>

@class SCCommerceManager, UIVisualEffectView, SCLoadingIndicatorView, NSString, SCUserSession, NSMutableArray, NSArray;

@interface SCPaymentsSettingsViewController : SCPaymentsGenericTableViewController <SCPaymentsCardCreateUpdateViewControllerDelegate, SCCommerceLoggerPageMetricsDataSource> {

	SCCommerceManager* _commerceManager;
	UIVisualEffectView* _loadingBackgroundView;
	SCLoadingIndicatorView* _loadingIndicatorView;
	NSString* _metricsDisplayId;
	BOOL _loadingPayments;
	BOOL _loadingOrders;
	SCUserSession* _userSession;
	NSMutableArray* _orderList;
	long long _numberOfOrdersToShow;
	NSArray* _paymentMethods;
	NSString* _orderHistoryInfoString;
	NSMutableArray* _tableSections;

}

@property (nonatomic,retain) NSMutableArray * orderList;                        //@synthesize orderList=_orderList - In the implementation block
@property (assign,nonatomic) long long numberOfOrdersToShow;                    //@synthesize numberOfOrdersToShow=_numberOfOrdersToShow - In the implementation block
@property (nonatomic,retain) NSArray * paymentMethods;                          //@synthesize paymentMethods=_paymentMethods - In the implementation block
@property (assign,nonatomic) BOOL loadingPayments;                              //@synthesize loadingPayments=_loadingPayments - In the implementation block
@property (assign,nonatomic) BOOL loadingOrders;                                //@synthesize loadingOrders=_loadingOrders - In the implementation block
@property (nonatomic,retain) NSString * orderHistoryInfoString;                 //@synthesize orderHistoryInfoString=_orderHistoryInfoString - In the implementation block
@property (retain) NSMutableArray * tableSections;                              //@synthesize tableSections=_tableSections - In the implementation block
@property (nonatomic,__weak,readonly) SCUserSession * userSession;              //@synthesize userSession=_userSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)leftButtonPressed;
-(id)titleForHeader:(id)arg1 ;
-(void)leftSwipeSucceed;
-(void)_showBlurView;
-(void)_hideBlurView;
-(BOOL)shouldPopToRootViewController;
-(BOOL)shouldPopToRootViewControllerLater;
-(id)_pagenameForPageView;
-(NSMutableArray *)orderList;
-(void)paymentsCardCreationEditViewController:(id)arg1 didCreatePaymentsMethod:(id)arg2 ;
-(void)loadPaymentMethods;
-(void)loadPurchases;
-(id)tableView:(id)arg1 paymentsTableViewCellAtIndexPath:(id)arg2 ;
-(id)_purchaseCellForRowAtIndexPath:(id)arg1 ;
-(id)_viewAllCellForRowAtIndexPath:(id)arg1 ;
-(id)_shippingAddressCellForRowAtIndexPath:(id)arg1 ;
-(id)_contactInformationCellForRowAtIndexPath:(id)arg1 ;
-(id)paymentMethodWrapperForIndexPath:(id)arg1 ;
-(id)_baseSettingsCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)setLoadingPayments:(BOOL)arg1 ;
-(void)setLoadingOrders:(BOOL)arg1 ;
-(void)setOrderList:(NSMutableArray *)arg1 ;
-(void)setNumberOfOrdersToShow:(long long)arg1 ;
-(void)setOrderHistoryInfoString:(NSString *)arg1 ;
-(long long)numberOfOrdersToShow;
-(void)setTableSections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)tableSections;
-(BOOL)loadingOrders;
-(BOOL)loadingPayments;
-(id)initWithUserSession:(id)arg1 error:(id*)arg2 ;
-(void)didTapDoneButton;
-(id)_odgCellForRowAtIndexPath:(id)arg1 ;
-(void)handleSelectionForPaymentsTableViewCellAtIndexPath:(id)arg1 ;
-(NSString *)orderHistoryInfoString;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)displayId;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(SCUserSession *)userSession;
-(void)setupTableView;
-(NSArray *)paymentMethods;
-(void)setPaymentMethods:(NSArray *)arg1 ;
@end

