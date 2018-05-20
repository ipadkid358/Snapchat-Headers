/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:30 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCProfileV3CellController.h>
#import <Snapchat/SCProfileV3CellViewDelegate.h>
#import <Snapchat/SCGroupStorySettingsViewControllerDelegate.h>

@protocol NavigationDelegate, SCStartChatDelegate;
@class SCUserSession, NSString;

@interface SCProfileV3CreateStoryController : SCProfileV3CellController <SCProfileV3CellViewDelegate, SCGroupStorySettingsViewControllerDelegate> {

	SCUserSession* _userSession;
	id<NavigationDelegate> _navigationDelegate;
	id<SCStartChatDelegate> _startChatDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellReuseIdentifier;
-(void)gsSettingsViewControllerDidFinishEditing:(id)arg1 ;
-(void)gsSettingsViewController:(id)arg1 didUpdateSettingsForPublication:(id)arg2 ;
-(void)gsSettingsViewController:(id)arg1 updateTableForPublicationCreation:(id)arg2 ;
-(void)gsSettingsViewControllerDidAttemptToKeepEditing:(id)arg1 ;
-(void)gsSettingsViewController:(id)arg1 updateTableForPublicationReaddition:(id)arg2 ;
-(void)gsSettingsViewController:(id)arg1 updateTableForPublicationRemoval:(id)arg2 groupStories:(id)arg3 ;
-(void)attachCellView:(id)arg1 ;
-(CGSize)sizeForCell;
-(void)cellWasTapped:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 startChatDelegate:(id)arg3 ;
-(Class)cellClass;
@end
