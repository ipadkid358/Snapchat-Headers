/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCTimeProfilable.h>
#import <Snapchat/SCGroupManager.h>

@protocol SCGroupManager <SCArchiveObjectManager>
@required
-(id)announcer;
-(id)selfUsername;
-(id)userIdForUsername:(id)arg1;
-(void)notifyGroupsDidFinishLoading;
-(void)leaveGroupWithId:(id)arg1 completion:(/*^block*/id)arg2;
-(id)getGroupWithId:(id)arg1;
-(void)updateGroupNameWithId:(id)arg1 groupName:(id)arg2 completion:(/*^block*/id)arg3;
-(void)updateGroupNotificationWithId:(id)arg1 notificationOn:(BOOL)arg2 source:(long long)arg3 completion:(/*^block*/id)arg4;
-(void)grantGroupExemptBlockedUsersWithId:(id)arg1 newBlockedParticipantExceptions:(id)arg2;
-(void)updateGroupMuteStateForGroupWithId:(id)arg1 isMuted:(BOOL)arg2 shouldLog:(BOOL)arg3 updatedGroupBlock:(/*^block*/id)arg4;
-(id)groupForGroup:(id)arg1 blockedParticipantExceptions:(id)arg2;
-(id)getAllGroups;
-(BOOL)isFriendWithUser:(id)arg1;
-(BOOL)isUsernameBlocked:(id)arg1;
-(void)clearTemporaryGroupsExcludingGroupIds:(id)arg1;
-(id)groupForGroup:(id)arg1 participantLastContent:(id)arg2;
-(void)configureWithFriendManagerProvider:(id)arg1 feedManager:(id)arg2 managerAPI:(id)arg3 logger:(id)arg4 selfUsername:(id)arg5 selfUserId:(id)arg6;
-(void)refreshWithFeedManager:(id)arg1;
-(void)syncGroupsWithConversationGroups:(id)arg1;
-(void)createGroupsOnServerIfNecessary:(id)arg1 source:(long long)arg2 groupStoryRequest:(id)arg3 completion:(/*^block*/id)arg4;
-(id)localGroupWithFriends:(id)arg1 creationSource:(long long)arg2;
-(void)addToGroupWithId:(id)arg1 friends:(id)arg2 completion:(/*^block*/id)arg3;
-(id)updateGroup:(id)arg1 withMetaData:(id)arg2 withInteractionTimestamp:(id)arg3;
-(void)updateGroupWithId:(id)arg1 lastInteractionTimestamp:(id)arg2;
-(void)refreshGroupIdentityInfo:(id)arg1 completion:(/*^block*/id)arg2;
-(void)updateGroupParticipantLastContentWithId:(id)arg1 participantLastContent:(id)arg2;
-(void)updateGroupVideoChatParamsWithId:(id)arg1 videoChatParams:(id)arg2;
-(id)dummyGroupParticipantsForFriends:(id)arg1;
-(id)getAllGroupIds;
-(id)getRecentGroups;
-(id)updateGroupsWithSOJUGroup:(id)arg1;
-(void)addGroupIfItDoesntExist:(id)arg1;
-(void)clearTemporaryGroups;
-(void)willSendToGroupIds:(id)arg1;
-(id)selfUserId;
-(BOOL)hasDisplayNameForParticipantUsername:(id)arg1;
-(id)displayNameForParticipant:(id)arg1;
-(BOOL)isLeavingGroupId:(id)arg1;
-(BOOL)isLoaded;
-(void)clear;
-(BOOL)isConfigured;

@end


@protocol SCFriendManagerProvider, SCGroupManagerAPI, SCGroupLogger;
@class SCFeedManager, NSMutableDictionary, SCArchiveLoader, SCQueuePerformer, NSMutableSet, SCGroupManagerListenerAnnouncer, NSDictionary, NSSet, NSString;

@interface SCGroupManager : NSObject <SCTimeProfilable, SCGroupManager> {

	SCFeedManager* _feedManager;
	NSMutableDictionary* _groups;
	id<SCFriendManagerProvider> _friendManagerProvider;
	id<SCGroupManagerAPI> _managerAPI;
	id<SCGroupLogger> _groupLogger;
	SCArchiveLoader* _loader;
	SCQueuePerformer* _performer;
	NSMutableDictionary* _updatingNameGroups;
	NSMutableDictionary* _groupsLeftMischiefVersions;
	NSMutableSet* _currentlyLeavingGroupIds;
	BOOL _syncingInProgress;
	NSMutableSet* _groupIdsToLeaveAfterSyncing;
	BOOL _isFullyConfigured;
	SCGroupManagerListenerAnnouncer* _announcer;
	NSDictionary* _groupsSnapshot;
	NSSet* _leavingGroupIds;
	NSDictionary* _groupsLeftMischiefVersionsSnapshot;
	NSString* _username;
	NSString* _userId;

}

@property (retain) NSDictionary * groupsSnapshot;                                        //@synthesize groupsSnapshot=_groupsSnapshot - In the implementation block
@property (retain) NSSet * leavingGroupIds;                                              //@synthesize leavingGroupIds=_leavingGroupIds - In the implementation block
@property (retain) NSDictionary * groupsLeftMischiefVersionsSnapshot;                    //@synthesize groupsLeftMischiefVersionsSnapshot=_groupsLeftMischiefVersionsSnapshot - In the implementation block
@property (retain) NSString * username;                                                  //@synthesize username=_username - In the implementation block
@property (retain) NSString * userId;                                                    //@synthesize userId=_userId - In the implementation block
@property (assign) BOOL isFullyConfigured;                                               //@synthesize isFullyConfigured=_isFullyConfigured - In the implementation block
@property (nonatomic,readonly) SCGroupManagerListenerAnnouncer * announcer;              //@synthesize announcer=_announcer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)estimatedMainLabelWidthWithGroupMoji;
+(int)context;
-(SCGroupManagerListenerAnnouncer *)announcer;
-(/*^block*/id)_loadedBlock;
-(void)loadFromDiskAsync:(BOOL)arg1 ;
-(void)markAsLoadedWithoutLoadingFromDisk;
-(BOOL)shouldLoadFromDiskImmediately;
-(void)setGroupsSnapshot:(NSDictionary *)arg1 ;
-(void)setGroupsLeftMischiefVersionsSnapshot:(NSDictionary *)arg1 ;
-(void)setLeavingGroupIds:(NSSet *)arg1 ;
-(void)mergeWithLocal:(id)arg1 ;
-(id)selfUsername;
-(id)userIdForUsername:(id)arg1 ;
-(void)_updateInteractionEventBatchForGroups:(id)arg1 ;
-(void)notifyGroupsDidFinishLoading;
-(NSDictionary *)groupsSnapshot;
-(void)setIsFullyConfigured:(BOOL)arg1 ;
-(void)leaveGroupWithId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_createGroupsOnServerIfNecessary:(id)arg1 source:(long long)arg2 groupStoryRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)getUpdatedGroupsFromGroups:(id)arg1 ;
-(id)_mischiefCreationSourceForChatSource:(long long)arg1 ;
-(id)_updateGroupsWithGroup:(id)arg1 ;
-(id)getGroupWithId:(id)arg1 ;
-(id)_createGroupWithSOJUGroup:(id)arg1 shouldUpdate:(BOOL)arg2 ;
-(void)notifyGroupDidGetCreatedOnServer:(id)arg1 initialSOJUMischief:(id)arg2 ;
-(void)updateGroupNameWithId:(id)arg1 groupName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateGroupNotificationWithId:(id)arg1 notificationOn:(BOOL)arg2 source:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)grantGroupExemptBlockedUsersWithId:(id)arg1 newBlockedParticipantExceptions:(id)arg2 ;
-(void)updateGroupMuteStateForGroupWithId:(id)arg1 isMuted:(BOOL)arg2 shouldLog:(BOOL)arg3 updatedGroupBlock:(/*^block*/id)arg4 ;
-(id)_groupIdForToken:(id)arg1 ;
-(void)notifyGroupDidJoin:(id)arg1 ;
-(id)_createGroupWithGroupResponseNoContent:(id)arg1 ;
-(id)keyForUpdatingGroupNameWithGroupId:(id)arg1 groupName:(id)arg2 ;
-(void)notifyGroupInfoDidChange:(id)arg1 ;
-(void)resetUpdatingNameGroupWithGroupId:(id)arg1 groupName:(id)arg2 ;
-(void)_removeGroupWithId:(id)arg1 ;
-(void)notifyGroupDidBeginLeaving:(id)arg1 ;
-(void)_clearCurrentlyLeavingGroupId:(id)arg1 ;
-(id)updateTemporaryGroup:(id)arg1 friends:(id)arg2 ;
-(id)_getIdsJsonStringFromFriends:(id)arg1 ;
-(id)_getUsernamesFromFriends:(id)arg1 ;
-(id)groupForGroup:(id)arg1 blockedParticipantExceptions:(id)arg2 ;
-(id)_newBlockedParticipantExceptionsJsonString:(id)arg1 ;
-(id)_getIdsFromFriends:(id)arg1 ;
-(id)_getIdsJsonStringFromUserIds:(id)arg1 ;
-(void)_takeCurrentlyLeftGroupsSnapshot;
-(void)_updateWithBuilder:(id)arg1 existingParticipantLastContent:(id)arg2 participantLastContent:(id)arg3 ;
-(id)_updateGroupsWithNewGroup:(id)arg1 oldGroup:(id)arg2 ;
-(NSDictionary *)groupsLeftMischiefVersionsSnapshot;
-(id)_getSafeGroupsDictionary;
-(id)getAllGroups;
-(BOOL)isFriendWithUser:(id)arg1 ;
-(BOOL)isUsernameBlocked:(id)arg1 ;
-(NSSet *)leavingGroupIds;
-(BOOL)isFullyConfigured;
-(void)clearTemporaryGroupsExcludingGroupIds:(id)arg1 ;
-(id)groupForGroup:(id)arg1 participantLastContent:(id)arg2 ;
-(void)_updateWithBuilder:(id)arg1 existingBlockedParticipantExceptions:(id)arg2 blockedParticipantExceptions:(id)arg3 ;
-(void)configureWithFriendManagerProvider:(id)arg1 feedManager:(id)arg2 managerAPI:(id)arg3 logger:(id)arg4 selfUsername:(id)arg5 selfUserId:(id)arg6 ;
-(void)refreshWithFeedManager:(id)arg1 ;
-(void)syncGroupsWithConversationGroups:(id)arg1 ;
-(void)createGroupsOnServerIfNecessary:(id)arg1 source:(long long)arg2 groupStoryRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)localGroupWithFriends:(id)arg1 creationSource:(long long)arg2 ;
-(void)addToGroupWithId:(id)arg1 friends:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)updateGroup:(id)arg1 withMetaData:(id)arg2 withInteractionTimestamp:(id)arg3 ;
-(void)updateGroupWithId:(id)arg1 lastInteractionTimestamp:(id)arg2 ;
-(void)refreshGroupIdentityInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateGroupParticipantLastContentWithId:(id)arg1 participantLastContent:(id)arg2 ;
-(void)updateGroupVideoChatParamsWithId:(id)arg1 videoChatParams:(id)arg2 ;
-(id)dummyGroupParticipantsForFriends:(id)arg1 ;
-(id)getAllGroupIds;
-(id)getRecentGroups;
-(id)updateGroupsWithSOJUGroup:(id)arg1 ;
-(void)addGroupIfItDoesntExist:(id)arg1 ;
-(void)clearTemporaryGroups;
-(void)willSendToGroupIds:(id)arg1 ;
-(id)selfUserId;
-(BOOL)hasDisplayNameForParticipantUsername:(id)arg1 ;
-(id)displayNameForParticipant:(id)arg1 ;
-(BOOL)isLeavingGroupId:(id)arg1 ;
-(id)init;
-(BOOL)isLoaded;
-(void)clear;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(BOOL)saveState;
-(void)_takeSnapshot;
-(BOOL)isConfigured;
@end

