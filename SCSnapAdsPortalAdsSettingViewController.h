/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSnapAdsPortalGenericTableViewController.h>
#import <Snapchat/SCSnapAdsPortalAdsSettingViewNotificationSettingCellDelegate.h>

@protocol SCSnapAdsPortalAdsSettingsViewControllerDelegate;
@class NSArray, SCSnapAdsPortalAdAccount, SCBrowserViewController, SCUserSession, NSString;

@interface SCSnapAdsPortalAdsSettingViewController : SCSnapAdsPortalGenericTableViewController <SCSnapAdsPortalAdsSettingViewNotificationSettingCellDelegate> {

	NSArray* _adAccounts;
	SCSnapAdsPortalAdAccount* _activeAccount;
	SCBrowserViewController* _browserViewController;
	BOOL _pageExiting;
	SCUserSession* _userSession;
	id<SCSnapAdsPortalAdsSettingsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCSnapAdsPortalAdsSettingsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)leftButtonPressed;
-(id)titleForHeader:(id)arg1 ;
-(BOOL)disableLeftSwipe;
-(id)initWithUserSession:(id)arg1 ;
-(void)_presentWebViewWithUrl:(id)arg1 ;
-(void)updateAdAccounts;
-(id)_getAdAccountOrgNameAtIndex:(id)arg1 ;
-(id)_textForRowAtIndexPath:(id)arg1 ;
-(id)_getAdAccountAtIndex:(id)arg1 ;
-(BOOL)_isActiveAccount:(id)arg1 ;
-(void)_selectAccountAtIndexPath:(id)arg1 indexPath:(id)arg2 ;
-(void)_presentSupportCenterWebView;
-(void)exitSettingsPage;
-(id)_getAdAccountNameAtIndex:(id)arg1 ;
-(void)onNotificationSettingsUpdatedWithType:(long long)arg1 enabled:(BOOL)arg2 ;
-(void)setDelegate:(id<SCSnapAdsPortalAdsSettingsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<SCSnapAdsPortalAdsSettingsViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end
