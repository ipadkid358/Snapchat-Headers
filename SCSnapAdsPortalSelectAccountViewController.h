/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSnapAdsPortalGenericTableViewController.h>
#import <Snapchat/SCSnapAdsPortalButtonDelegate.h>

@protocol SCStartChatDelegate;
@class SCSnapAdsPortalButton, SCUserSession, SCSnapAdsPortalAdAccount, NSArray, UIView, SCLoadingIndicatorView, NSDictionary, NSString;

@interface SCSnapAdsPortalSelectAccountViewController : SCSnapAdsPortalGenericTableViewController <SCSnapAdsPortalButtonDelegate> {

	SCSnapAdsPortalButton* _continueButton;
	SCUserSession* _userSession;
	SCSnapAdsPortalAdAccount* _activeAccount;
	NSArray* _adAccounts;
	long long _accountLoadStatus;
	UIView* _accessAccountHeader;
	UIView* _noAccessAccountHeader;
	UIView* _requestFailureHeader;
	UIView* _loadingHeader;
	SCLoadingIndicatorView* _loadingSpinner;
	NSDictionary* _headerViews;
	CGSize _screenSize;
	id<SCStartChatDelegate> _startChatDelegate;

}

@property (assign,nonatomic,__weak) id<SCStartChatDelegate> startChatDelegate;              //@synthesize startChatDelegate=_startChatDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)leftButtonPressed;
-(id)titleForHeader:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 ;
-(void)setStartChatDelegate:(id<SCStartChatDelegate>)arg1 ;
-(id<SCStartChatDelegate>)startChatDelegate;
-(void)initContinueButton;
-(id)_textForRowAtIndexPath:(id)arg1 ;
-(BOOL)_isActiveAccount:(id)arg1 ;
-(void)initAccessAccountHeader;
-(void)initNoAccessAccountHeader;
-(void)initRequestFailureHeader;
-(void)initLoadingHeader;
-(double)_defaultHeaderViewHeight;
-(void)_accessAccountsDidUpdate;
-(void)_accessAccountsFailedToLoad;
-(void)_setupAccounts;
-(id)_adAccountOrgNameAtIndex:(id)arg1 ;
-(void)didPressButton;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_reloadData;
@end

