/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchEventListener.h>

@class SCCheetahSendToRecipientDataProvider, SCCheetahSendToStoryDataSource, SCSearchEventListenerAnnouncer, SCSendToConfiguration, NSString, SCARankingSessionMetadata, NSMutableDictionary, NSMutableOrderedSet, NSMutableArray, NSMutableSet, NSArray, NSDictionary;

@interface SCCheetahSendToLogger : NSObject <SCSearchEventListener> {

	SCCheetahSendToRecipientDataProvider* _dataSource;
	SCCheetahSendToStoryDataSource* _storyDataSource;
	SCSearchEventListenerAnnouncer* _eventAnnouncer;
	SCSendToConfiguration* _configuration;
	NSString* _rankingModelId;
	NSString* _sessionId;
	NSString* _serverRankingId;
	SCARankingSessionMetadata* _rankingSessionMetadata;
	NSMutableDictionary* _storyAvailable;
	NSMutableOrderedSet* _storyAvailableOrderedKeys;
	NSMutableArray* _storySeenIndicesBasedOnStoryAvailable;
	NSMutableArray* _storySelectedIndiciesBasedOnStoryAvailable;
	NSMutableDictionary* _storyTypesAvailable;
	NSMutableDictionary* _storyTypeSeen;
	NSMutableDictionary* _storyTypeSelected;
	NSMutableSet* _storySeenSet;
	NSMutableDictionary* _recipientsAvailableCountBySection;
	NSMutableDictionary* _recipientsSeenCountBySection;
	NSMutableDictionary* _recipientsSeenBySection;
	NSMutableDictionary* _selectedRecipientsBySection;
	NSMutableSet* _recipientsSelected;
	long long _firstSelectedSection;
	long long _storySeenCount;
	NSMutableDictionary* _sendToCellViews;
	NSArray* _orderedSection;
	NSMutableDictionary* _recipientsSelectedIndices;
	NSMutableDictionary* _sendToRankedViews;
	NSDictionary* _scores;
	NSDictionary* _realtimeLastInteractionAgeInSecs;
	NSDictionary* _realtimeStreakLength;
	NSDictionary* _realtimeStreakExpiringTimeInSecs;
	NSDictionary* _realtimeIsStreakExpiring;
	NSDictionary* _realtimeFriendshipRecencyInHrs;
	NSDictionary* _realtimeIsFriendBirthday;
	NSDictionary* _realtimeIsMutualFriendshipPending;
	long long _sendToCellViewBufferSize;
	long long _sendToCellRankedViewBufferSize;
	BOOL _shouldShowStorySectionInListView;
	NSString* _cellLoadTrackSessionId;

}

@property (nonatomic,retain) NSString * cellLoadTrackSessionId;              //@synthesize cellLoadTrackSessionId=_cellLoadTrackSessionId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3 ;
-(id)initWithRecipientDataSource:(id)arg1 storyDataSource:(id)arg2 sessionId:(id)arg3 configuration:(id)arg4 ;
-(void)setCellLoadTrackSessionId:(NSString *)arg1 ;
-(void)logPageSendToSessionEnd:(long long)arg1 status:(long long)arg2 ;
-(void)logSendToCellView:(long long)arg1 ;
-(void)logSendToRankedCellView;
-(void)_setUpRankingSessionMetadata;
-(void)_initAvailableStory;
-(void)_initRecipientsAvailable;
-(void)_updateFriendsAvailableCountBySectionName:(id)arg1 ;
-(void)_updateFriendsSelectedRecipientBySection:(id)arg1 ;
-(void)_updateSelectedStoryType:(id)arg1 ;
-(void)_updateSelectedStory:(id)arg1 ;
-(void)_updateAvailableStory;
-(void)_updateSeenStory:(id)arg1 ;
-(void)_updateFriendsSeen:(id)arg1 ;
-(void)_updateSectionsOrder:(id)arg1 ;
-(void)_updateRankedCellViewWithScore:(id)arg1 ;
-(id)_recipientsSelectedCountBySection;
-(void)_updateFriendsSeenCountBySectionName:(id)arg1 ;
-(void)_updateSendToCellView:(id)arg1 recipientViewModel:(id)arg2 ;
-(void)_updateSendToCellRankedView:(id)arg1 recipientViewModel:(id)arg2 ;
-(void)_updateFirstSelectedSection:(long long)arg1 ;
-(void)_updateSelectedRecipients:(id)arg1 ;
-(void)_updateSelectedRecipientsIndices:(id)arg1 name:(id)arg2 section:(id)arg3 rowIndex:(long long)arg4 ;
-(void)_updateAvailableStoryType;
-(void)_updateGroupStoryTypeAvailable:(id)arg1 ;
-(NSString *)cellLoadTrackSessionId;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

