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
#import <UIKit/UIAlertViewDelegate.h>
#import <Snapchat/SCGalleryImportCameraRollViewControllerDelegate.h>
#import <Snapchat/SCGalleryPrivateGallerySetupFlowDelegate.h>
#import <Snapchat/SCSettingsSwitchTableViewCellDelegate.h>

@class SCUserSession, UITableView, NSMutableArray, SCGalleryPrivateGallerySetupFlow, SCSettingsSwitchTableViewCell, NSString;

@interface SCGallerySettingsViewController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, SCGalleryImportCameraRollViewControllerDelegate, SCGalleryPrivateGallerySetupFlowDelegate, SCSettingsSwitchTableViewCellDelegate> {

	SCUserSession* _userSession;
	UITableView* _tableView;
	NSMutableArray* _visibleSettingTags;
	NSMutableArray* _cumulativeSectionSizes;
	BOOL _backupPageVisited;
	BOOL _initialBackupOnCellular;
	SCGalleryPrivateGallerySetupFlow* _privateGallerySetupFlow;
	SCSettingsSwitchTableViewCell* _cellularBackupCell;
	SCSettingsSwitchTableViewCell* _autosaveCell;
	SCSettingsSwitchTableViewCell* _defaultMyEyesOnlyCell;
	BOOL _pressNotificationToSetting;

}

@property (assign,nonatomic) BOOL pressNotificationToSetting;              //@synthesize pressNotificationToSetting=_pressNotificationToSetting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)titleForHeader:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 ;
-(void)settingsSwitchTableViewCell:(id)arg1 didToggleSwitch:(BOOL)arg2 ;
-(id)getPageViewName;
-(void)privateGallerySetupFlowDidCancel:(id)arg1 ;
-(void)privateGallerySetupFlowDidFinish:(id)arg1 ;
-(void)galleryImportCameraRollViewControllerDidFinish:(id)arg1 ;
-(void)setPressNotificationToSetting:(BOOL)arg1 ;
-(void)_resetView;
-(id)cellularBackupCell;
-(id)autosaveCell;
-(id)defaultMyEyesOnlyCell;
-(void)_logBackupNotificationSettingChange;
-(id)_optionsCellForSettingTag:(long long)arg1 ;
-(double)_estimatedHeightForSettingTag:(long long)arg1 ;
-(void)_presentBackupProgress;
-(void)_presentImportCameraRoll;
-(void)_presentSaveTo;
-(void)_enableDefaultToMyEyesOnly;
-(void)_disableDefaultToMyEyesOnly;
-(id)_backupProgressCell;
-(id)_saveToCell;
-(id)_importCameraRollCell;
-(id)_indexPathForTag:(long long)arg1 ;
-(void)_reloadCellForSettingTag:(long long)arg1 ;
-(BOOL)pressNotificationToSetting;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)_makeCell:(id)arg1 ;
-(long long)_tagForIndexPath:(id)arg1 ;
-(id)getInfo;
@end

