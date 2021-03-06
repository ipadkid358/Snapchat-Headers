/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCDataCoordinating.h>
#import <Snapchat/SCDataCoordinatorListener.h>

@class SCDocObjectContext, SCDataCoordinatorListenerAnnouncer, SCSnapchattersFetchService, SCSnapchattersUpdateService, SCSnapchattersSuggestService, SCQueuePerformer, SCSnapchattersDataRequestTracker, NSString;

@interface SCSnapchattersDataCoordinator : NSObject <SCDataCoordinating, SCDataCoordinatorListener> {

	SCDocObjectContext* _docObjectContext;
	SCDataCoordinatorListenerAnnouncer* _announcer;
	SCSnapchattersFetchService* _fetchService;
	SCSnapchattersUpdateService* _updateService;
	SCSnapchattersSuggestService* _suggestService;
	SCQueuePerformer* _docObjectPerformer;
	SCQueuePerformer* _utilityPerformer;
	SCQueuePerformer* _announcerPerformer;
	SCSnapchattersDataRequestTracker* _dataRequestTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dataCoordinatorIdentifier;
-(void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2 ;
-(void)handleDataRequest:(id)arg1 ;
-(void)addDataUpdateListener:(id)arg1 ;
-(void)removeDataUpdateListener:(id)arg1 ;
-(void)_announceDataCoordinatorUpdateWithDataRequest:(id)arg1 ;
-(void)_processFetchFriendsResponse:(id)arg1 deltaFriendToken:(id)arg2 triggeredByDataRequest:(id)arg3 error:(id)arg4 ;
-(void)_processAddFriendActionWithFriend:(id)arg1 triggeredByDataRequest:(id)arg2 error:(id)arg3 ;
-(void)_processDeleteFriendActionWithFriend:(id)arg1 triggeredByDataRequest:(id)arg2 error:(id)arg3 ;
-(void)_processIgnoreFriendActionWithIncomingFriend:(id)arg1 triggeredByDataRequest:(id)arg2 error:(id)arg3 ;
-(void)_processBlockFriendActionWithBlockedSnapchatter:(id)arg1 triggeredByDataRequest:(id)arg2 error:(id)arg3 ;
-(void)_processUnblockFriendActionWithSnapchatter:(id)arg1 triggeredByDataRequest:(id)arg2 error:(id)arg3 ;
-(void)_processMuteFriendStoryActionWithFriend:(id)arg1 triggeredByDataRequest:(id)arg2 error:(id)arg3 ;
-(void)_processUnmuteFriendStoryActionWithFriend:(id)arg1 triggeredByDataRequest:(id)arg2 error:(id)arg3 ;
-(void)_processSetDisplayActionWithSnapchatter:(id)arg1 displayName:(id)arg2 triggeredByDataRequest:(id)arg3 error:(id)arg4 ;
-(void)_processFetchSuggestedSnapchattersResponse:(id)arg1 triggeredByDataRequest:(id)arg2 error:(id)arg3 ;
-(void)_processHideSuggestedSnapchattersResponse:(id)arg1 triggeredByDataRequest:(id)arg2 error:(id)arg3 ;
-(id)initWithDocObjectContext:(id)arg1 fetchService:(id)arg2 updateService:(id)arg3 suggestService:(id)arg4 dataRequestTracker:(id)arg5 ;
-(void)snapchattersWithUserIds:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

