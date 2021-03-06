/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchUpdateAnnouncing.h>
#import <Snapchat/SCUserSelectionManaging.h>

@protocol SCPerforming;
@class SCSearchUpdateListenerAnnouncer, NSOrderedSet, NSString;

@interface SCSendToSelectionStateManager : NSObject <SCSearchUpdateAnnouncing, SCUserSelectionManaging> {

	SCSearchUpdateListenerAnnouncer* _updateAnnouncer;
	id<SCPerforming> _performer;
	NSOrderedSet* _previouslySelectedItems;
	NSOrderedSet* _selectedItems;
	long long _numberOfNonPrivateGroupStoriesSelected;
	long long _numberOfStoriesSelected;
	long long _numberOfRecpientsSelected;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)addUpdateListener:(id)arg1 ;
-(void)removeUpdateListener:(id)arg1 ;
-(void)_setItemType:(long long)arg1 itemId:(id)arg2 selected:(BOOL)arg3 ;
-(void)_deselectedGroupParticipantsInGroup:(id)arg1 ;
-(void)_updatePreviouslySelectedItems;
-(BOOL)_isItemSelectedItemType:(long long)arg1 itemId:(id)arg2 ;
-(BOOL)_wasItemJustToggledItemType:(long long)arg1 itemId:(id)arg2 ;
-(id)_selectionResults;
-(void)_updateForNewlyAddedFriend:(id)arg1 ;
-(void)_announceUpdate;
-(void)_setItemType:(long long)arg1 itemId:(id)arg2 selected:(BOOL)arg3 announceUpdate:(BOOL)arg4 ;
-(BOOL)_canSelectItemType:(long long)arg1 ;
-(void)_didUpdateItemType:(long long)arg1 selected:(BOOL)arg2 ;
-(void)setItemType:(long long)arg1 itemId:(id)arg2 selected:(BOOL)arg3 ;
-(void)setCreatedGroupSelected:(id)arg1 ;
-(BOOL)isItemSelectedItemType:(long long)arg1 itemId:(id)arg2 ;
-(BOOL)wasItemJustToggledItemType:(long long)arg1 itemId:(id)arg2 ;
-(void)updatePreviouslySelectedItems;
-(void)selectNewlyAddedFriend:(id)arg1 ;
-(id)selectionResults;
-(long long)numberOfNonPrivateGroupStoriesSelected;
-(long long)numberOfStoriesSelected;
-(id)init;
@end

