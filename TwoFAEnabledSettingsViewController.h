/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCGenericSettingsViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Snapchat/SCLayoutAccessoryTableViewCellDelegate.h>
#import <Snapchat/SCMobileSettingsDelegate.h>
#import <Snapchat/TwoFARecoveryCodeViewBackDelegate.h>
#import <Snapchat/SCSettingsSwitchTableViewCellDelegate.h>

@class SCSettingsSwitchTableViewCell, NSString, UILabel, UITableView, SCLoadingScreen, SCUserSession;

@interface TwoFAEnabledSettingsViewController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, SCLayoutAccessoryTableViewCellDelegate, SCMobileSettingsDelegate, TwoFARecoveryCodeViewBackDelegate, SCSettingsSwitchTableViewCellDelegate> {

	SCSettingsSwitchTableViewCell* _smsCell;
	SCSettingsSwitchTableViewCell* _tpaCell;
	BOOL _leftSwipeable;
	NSString* _pageViewName;
	UILabel* _infoLabel;
	UITableView* _tableView;
	SCLoadingScreen* _loadingScreen;
	SCUserSession* _userSession;

}

@property (nonatomic,retain) NSString * pageViewName;                      //@synthesize pageViewName=_pageViewName - In the implementation block
@property (nonatomic,retain) UILabel * infoLabel;                          //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                      //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) SCLoadingScreen * loadingScreen;              //@synthesize loadingScreen=_loadingScreen - In the implementation block
@property (assign,nonatomic) BOOL leftSwipeable;                           //@synthesize leftSwipeable=_leftSwipeable - In the implementation block
@property (nonatomic,retain) SCUserSession * userSession;                  //@synthesize userSession=_userSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)leftButtonPressed;
-(BOOL)disableLeftSwipe;
-(void)setPageViewName:(NSString *)arg1 ;
-(NSString *)pageViewName;
-(void)settingsSwitchTableViewCell:(id)arg1 didToggleSwitch:(BOOL)arg2 ;
-(id)getTitle;
-(id)getPageViewName;
-(void)verifyMobileDidSucceed;
-(void)verifyMobileWasCancelled;
-(void)setLoadingScreen:(SCLoadingScreen *)arg1 ;
-(CGRect)layoutAccessoryTableViewCell:(id)arg1 frameForAccessoryView:(id)arg2 ;
-(void)setLeftSwipeable:(BOOL)arg1 ;
-(id)smsCell;
-(id)tpaCell;
-(void)refreshRecoveryCodeCell;
-(void)presentSettingPage;
-(void)tryEnableSMSSwitch;
-(void)disableSwitch:(id)arg1 withAction:(long long)arg2 ;
-(void)presentAuthAppSetupView;
-(void)showLoadingScreenWithLabelText:(id)arg1 ;
-(void)hideLoadingScreen;
-(void)presentSmsCodeConfirmationView;
-(void)presentMobileSettingView;
-(id)initWithPageViewName:(id)arg1 title:(id)arg2 leftSwipeable:(BOOL)arg3 userSession:(id)arg4 ;
-(id)getDisableAlertTitle:(id)arg1 ;
-(id)getDisableAlertDescription:(id)arg1 ;
-(void)presentRecoveryCode;
-(void)presentForgetDevice;
-(BOOL)leftSwipeable;
-(void)onTapLeftBackButton:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(SCUserSession *)userSession;
-(void)setUserSession:(SCUserSession *)arg1 ;
-(UILabel *)infoLabel;
-(void)setInfoLabel:(UILabel *)arg1 ;
-(SCLoadingScreen *)loadingScreen;
@end
