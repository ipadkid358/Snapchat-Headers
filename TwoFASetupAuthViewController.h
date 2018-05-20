/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGenericSettingsViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Snapchat/SCMobileSettingsDelegate.h>

@class NSString, UILabel, UITableView, SCUserSession;

@interface TwoFASetupAuthViewController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, SCMobileSettingsDelegate> {

	BOOL _leftSwipeEnabled;
	NSString* _pageViewName;
	NSString* _infoText;
	NSString* _moreInfoText;
	UILabel* _infoTextLabel;
	UITableView* _tableView;
	UILabel* _moreInfoTextLabel;
	SCUserSession* _userSession;

}

@property (nonatomic,retain) NSString * pageViewName;                  //@synthesize pageViewName=_pageViewName - In the implementation block
@property (assign,nonatomic) BOOL leftSwipeEnabled;                    //@synthesize leftSwipeEnabled=_leftSwipeEnabled - In the implementation block
@property (nonatomic,retain) NSString * infoText;                      //@synthesize infoText=_infoText - In the implementation block
@property (nonatomic,retain) NSString * moreInfoText;                  //@synthesize moreInfoText=_moreInfoText - In the implementation block
@property (nonatomic,retain) UILabel * infoTextLabel;                  //@synthesize infoTextLabel=_infoTextLabel - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UILabel * moreInfoTextLabel;              //@synthesize moreInfoTextLabel=_moreInfoTextLabel - In the implementation block
@property (nonatomic,retain) SCUserSession * userSession;              //@synthesize userSession=_userSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)leftButtonPressed;
-(BOOL)disableLeftSwipe;
-(void)setPageViewName:(NSString *)arg1 ;
-(NSString *)pageViewName;
-(id)getTitle;
-(id)getPageViewName;
-(void)verifyMobileDidSucceed;
-(void)verifyMobileWasCancelled;
-(void)verifyMobileDidSucceedWithTwoFaRecoveryCode:(id)arg1 ;
-(BOOL)leftSwipeEnabled;
-(void)setLeftSwipeEnabled:(BOOL)arg1 ;
-(id)initWithPageViewName:(id)arg1 title:(id)arg2 leftSwipeEnabled:(BOOL)arg3 userSession:(id)arg4 ;
-(void)setIsWorking:(BOOL)arg1 ;
-(void)presentSmsCodeConfirmationView;
-(void)presentMobileSettingView;
-(void)setInfoTextLabel:(UILabel *)arg1 ;
-(UILabel *)infoTextLabel;
-(void)setMoreInfoText:(NSString *)arg1 ;
-(void)presentRecoveryCodeViewWithRecoveryCode:(id)arg1 ;
-(NSString *)moreInfoText;
-(void)setMoreInfoTextLabel:(UILabel *)arg1 ;
-(UILabel *)moreInfoTextLabel;
-(void)presentSmsSetupView;
-(void)presentTpaSetupView;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(SCUserSession *)userSession;
-(void)setUserSession:(SCUserSession *)arg1 ;
-(void)setInfoText:(NSString *)arg1 ;
-(NSString *)infoText;
@end
