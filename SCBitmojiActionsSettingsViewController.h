/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGenericSettingsViewController.h>
#import <Snapchat/SCBitmojiActionsSettingsViewDelegate.h>

@class SCBitmojiActionsSettingsView, SCUserSession, NSArray, NSString;

@interface SCBitmojiActionsSettingsViewController : SCGenericSettingsViewController <SCBitmojiActionsSettingsViewDelegate> {

	SCBitmojiActionsSettingsView* _settingsView;
	SCUserSession* _userSession;
	NSArray* _selfieStickerIds;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 ;
-(id)getTitle;
-(void)_refreshView;
-(void)didPressLinkButton:(id)arg1 linkingView:(id)arg2 settingsView:(id)arg3 ;
-(void)_confirmLink;
-(void)_performUnlinkAction;
-(void)didPressUnlinkLabel:(id)arg1 linkedView:(id)arg2 settingsView:(id)arg3 ;
-(void)dealloc;
-(long long)preferredStatusBarStyle;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

