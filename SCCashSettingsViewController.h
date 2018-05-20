/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGenericSettingsViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Snapchat/SCUnlinkCardTableViewCellDelegate.h>
#import <Snapchat/SCCardLinkingDelegate.h>
#import <Snapchat/SCSettingsSwitchTableViewCellDelegate.h>

@class SCSettingsSwitchTableViewCell, UITableView, NSString;

@interface SCCashSettingsViewController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, SCUnlinkCardTableViewCellDelegate, SCCardLinkingDelegate, SCSettingsSwitchTableViewCellDelegate> {

	SCSettingsSwitchTableViewCell* _useCVVCell;
	UITableView* _tableView;

}

@property (nonatomic,retain) UITableView * tableView;               //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)titleForHeader:(id)arg1 ;
-(id)textColorForHeader:(id)arg1 ;
-(void)settingsSwitchTableViewCell:(id)arg1 didToggleSwitch:(BOOL)arg2 ;
-(id)getPageViewName;
-(void)cardLinkingSuccessful;
-(void)cardLinkingCancelled;
-(void)cashStatusUpdated;
-(id)useCVVCell;
-(BOOL)isCardSection:(long long)arg1 ;
-(BOOL)isGeneralCashSettingsSection:(long long)arg1 ;
-(BOOL)isTransactionsSection:(long long)arg1 ;
-(BOOL)isSupportSection:(long long)arg1 ;
-(BOOL)isSecurityCodeIndexPath:(id)arg1 ;
-(BOOL)isDebitCardIndexPath:(id)arg1 ;
-(id)debitCardCellForIndexPath:(id)arg1 ;
-(id)navigationCellForIndexPath:(id)arg1 ;
-(id)unlinkDebitCardCell;
-(id)labelTextColorForIndexPath:(id)arg1 ;
-(void)setTextForCell:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)shouldEnableCellAtIndexPath:(id)arg1 ;
-(BOOL)isTransactionsIndexPath:(id)arg1 ;
-(BOOL)isSupportIndexPath:(id)arg1 ;
-(void)presentCardLinkingVC;
-(void)presentTransactionsVC;
-(void)presentCashSupportVC;
-(void)unlinkCardButtonPressedForCell:(id)arg1 ;
-(id)securityCodeIndexPath;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)resetView;
@end

