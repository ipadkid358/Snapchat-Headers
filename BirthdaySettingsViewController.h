/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGenericSettingsViewController.h>
#import <Snapchat/SCTextViewDelegate.h>
#import <Snapchat/SCDatePickerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Snapchat/SCSettingsSwitchTableViewCellDelegate.h>

@class SCTextView, SCDatePicker, SCButton, UILabel, UITableView, SCSettingsSwitchTableViewCell, SCUserSession, NSString;

@interface BirthdaySettingsViewController : SCGenericSettingsViewController <SCTextViewDelegate, SCDatePickerDelegate, UITableViewDataSource, UITableViewDelegate, SCSettingsSwitchTableViewCellDelegate> {

	SCTextView* _birthdayTextView;
	SCDatePicker* _birthdayPickerView;
	SCButton* _continueButton;
	UILabel* _upperInfo;
	UITableView* _tableView;
	BOOL _shouldFlipSwitchOnDateChange;
	SCSettingsSwitchTableViewCell* _partyCell;
	SCUserSession* _userSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 ;
-(void)settingsSwitchTableViewCell:(id)arg1 didToggleSwitch:(BOOL)arg2 ;
-(id)getTitle;
-(id)getPageViewName;
-(void)initContinueButton;
-(void)updateBirthday;
-(void)dateWheelIsSpinning;
-(void)dateDidChange;
-(void)setIsWorking:(BOOL)arg1 ;
-(void)initBirthdayTextView;
-(void)initParty;
-(void)initBirthdayPicker;
-(id)partyCell;
-(BOOL)isBirthdaySet;
-(id)getDefaultBirthday;
-(void)continueButtonTapped;
-(BOOL)isSameBirthday;
-(id)birthdayPickerDate;
-(void)handleUnderThirteen;
-(void)handleOverThirteen;
-(void)sendToAccountsWithToken:(id)arg1 ;
-(id)getReportUnderThirteenUrl;
-(void)_updateBirthdayForOver13;
-(void)presentManyUpdatesAlert;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)setContinueButtonTitle:(id)arg1 ;
@end

