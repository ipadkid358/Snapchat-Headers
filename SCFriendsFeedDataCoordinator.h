/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCDataCoordinating.h>
#import <Snapchat/SCDataCoordinatorListener.h>

@class NSArray, SCDocObjectContext, SCLazy, SCDataCoordinatorListenerAnnouncer, SCQueuePerformer, NSString;

@interface SCFriendsFeedDataCoordinator : NSObject <SCDataCoordinating, SCDataCoordinatorListener> {

	NSArray* _friendsFeedItems;
	SCDocObjectContext* _docObjectContext;
	SCLazy* _messagingDataCoordinatorLazy;
	SCLazy* _personDataCoordinatorLazy;
	SCLazy* _storiesDataCoordinatorLazy;
	SCLazy* _serverSignalDataCoordinatorLazy;
	SCDataCoordinatorListenerAnnouncer* _eventAnnouncer;
	SCQueuePerformer* _dataUpdatePerformer;

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
-(void)_handleFeedItemUpdatesWithDataRequest:(id)arg1 ;
-(void)_announceDataCoordinatorUpdateWithDataRequest:(id)arg1 ;
-(void)_handleMultiRecipientWithDataRequestType:(long long)arg1 feedItemId:(id)arg2 messageId:(id)arg3 dataRequest:(id)arg4 ;
-(void)_handleMessageUpdatesWithDataRequest:(id)arg1 ;
-(void)_fetchFeedInfoWithFeedItemInfos:(id)arg1 dataRequest:(id)arg2 ;
-(void)_updateMultiRecipientDataToTablesWithFeedItemInfo:(id)arg1 conversationState:(id)arg2 dataRequest:(id)arg3 ;
-(void)_buildFeedItemsAndUpdate:(id)arg1 dataRequest:(id)arg2 activeMessageDataByFeedId:(id)arg3 entityDataByFeedId:(id)arg4 storiesDataByFeedId:(id)arg5 serverSignalsByFeedId:(id)arg6 ;
-(void)_updateFriendsFeedItemsWithFeedItems:(id)arg1 dataRequest:(id)arg2 ;
-(id)initWithDocObjectContext:(id)arg1 messagingDataCoordinatorLazy:(id)arg2 personDataCoordinatorLazy:(id)arg3 storiesDataCoordinatorLazy:(id)arg4 serverSignalDataCoordinatorLazy:(id)arg5 ;
-(id)friendsFeedItems;
@end
