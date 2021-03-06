/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCChatSCChatHamburgerSectionSettingCellDelegate.h>
#import <Snapchat/SCChatHamburgerTableSectionProtocol.h>

@protocol SCChatHamburgerTableSectionDataSource, SCChatHamburgerTableSectionDelegate, SCChatHamburgerTableSectionPresentationDelegate, SCChatHamburgerTableSectionGroupSettingDataSource, SCChatHamburgerTableSectionGroupSettingDelegate;
@class NSDictionary, SCEditGroupNameAlertViewController, SCLeaveGroupAlertViewController, NSString;

@interface SCChatHamburgerTableSectionGroupSetting : NSObject <SCChatSCChatHamburgerSectionSettingCellDelegate, SCChatHamburgerTableSectionProtocol> {

	id<SCChatHamburgerTableSectionDataSource> tableDataSource;
	id<SCChatHamburgerTableSectionDelegate> tableDelegate;
	id<SCChatHamburgerTableSectionPresentationDelegate> presentationDelegate;
	id<SCChatHamburgerTableSectionGroupSettingDataSource> _dataSource;
	id<SCChatHamburgerTableSectionGroupSettingDelegate> _delegate;
	NSDictionary* _reuseCellClassesByIdentifiers;
	SCEditGroupNameAlertViewController* _editGroupNameAlertViewController;
	SCLeaveGroupAlertViewController* _leaveGroupAlertViewController;

}

@property (nonatomic,copy) NSDictionary * reuseCellClassesByIdentifiers;                                                   //@synthesize reuseCellClassesByIdentifiers=_reuseCellClassesByIdentifiers - In the implementation block
@property (nonatomic,retain) SCEditGroupNameAlertViewController * editGroupNameAlertViewController;                        //@synthesize editGroupNameAlertViewController=_editGroupNameAlertViewController - In the implementation block
@property (nonatomic,retain) SCLeaveGroupAlertViewController * leaveGroupAlertViewController;                              //@synthesize leaveGroupAlertViewController=_leaveGroupAlertViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SCChatHamburgerTableSectionGroupSettingDataSource> dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SCChatHamburgerTableSectionGroupSettingDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCChatHamburgerTableSectionDataSource> tableDataSource; 
@property (assign,nonatomic,__weak) id<SCChatHamburgerTableSectionDelegate> tableDelegate; 
@property (assign,nonatomic,__weak) id<SCChatHamburgerTableSectionPresentationDelegate> presentationDelegate; 
-(NSDictionary *)reuseCellClassesByIdentifiers;
-(void)hamburgerRoundedCornerCellTapped:(id)arg1 ;
-(void)hamburgerRoundedCornerCellLongPressed:(id)arg1 ;
-(id)cellForRowAtIndex:(unsigned long long)arg1 ;
-(double)heightForCellAtIndex:(unsigned long long)arg1 ;
-(void)resetSection;
-(void)setReuseCellClassesByIdentifiers:(NSDictionary *)arg1 ;
-(id)_titleForCellType:(unsigned long long)arg1 ;
-(id)_iconImageForCellType:(unsigned long long)arg1 ;
-(BOOL)_showSwitchForCellType:(unsigned long long)arg1 ;
-(BOOL)_isSwitchOnForCellTpe:(unsigned long long)arg1 ;
-(BOOL)_showRightCaretForCellType:(unsigned long long)arg1 ;
-(BOOL)_touchEnabledForCellType:(unsigned long long)arg1 ;
-(void)_handleEditNameGroupOption;
-(void)_handleAddParticipantsOption;
-(void)_handleLeaveGroupOption;
-(void)_createGroupStoryWithLocalPublication:(id)arg1 cell:(id)arg2 ;
-(void)_updateGroupStoryAutosaveSettingsOnServer:(id)arg1 cell:(id)arg2 ;
-(void)_showGroupStoryUpdateFailureAlert;
-(void)_handleCellTappedAndLongPressedActionForCell:(unsigned long long)arg1 ;
-(void)_handleNotificationSwitched;
-(void)_handleAutosaveToggled:(id)arg1 ;
-(void)hamburgerSectionSettingCell:(id)arg1 switchTapped:(BOOL)arg2 ;
-(SCEditGroupNameAlertViewController *)editGroupNameAlertViewController;
-(void)setEditGroupNameAlertViewController:(SCEditGroupNameAlertViewController *)arg1 ;
-(SCLeaveGroupAlertViewController *)leaveGroupAlertViewController;
-(void)setLeaveGroupAlertViewController:(SCLeaveGroupAlertViewController *)arg1 ;
-(void)setDataSource:(id<SCChatHamburgerTableSectionGroupSettingDataSource>)arg1 ;
-(void)setDelegate:(id<SCChatHamburgerTableSectionGroupSettingDelegate>)arg1 ;
-(id<SCChatHamburgerTableSectionGroupSettingDataSource>)dataSource;
-(id<SCChatHamburgerTableSectionGroupSettingDelegate>)delegate;
-(void)setTableDataSource:(id<SCChatHamburgerTableSectionDataSource>)arg1 ;
-(id<SCChatHamburgerTableSectionDataSource>)tableDataSource;
-(unsigned long long)numberOfCells;
-(id<SCChatHamburgerTableSectionPresentationDelegate>)presentationDelegate;
-(void)setPresentationDelegate:(id<SCChatHamburgerTableSectionPresentationDelegate>)arg1 ;
-(id<SCChatHamburgerTableSectionDelegate>)tableDelegate;
-(void)setTableDelegate:(id<SCChatHamburgerTableSectionDelegate>)arg1 ;
@end

