/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:52 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSArray, NSString;

@interface SOJUFriendFeedRequestDebugParamBuilder : NSObject {

	NSNumber* _isDebugRequest;
	NSNumber* _disableFriendsSignalMemcache;
	NSNumber* _disableStoriesAdapter;
	NSNumber* _disableFriendsSignalAdapter;
	NSNumber* _disableConversationsAdapter;
	NSNumber* _disableConversationsMultiGetAdapter;
	NSArray* _trackItems;
	NSNumber* _isReplayRequest;
	NSNumber* _numRecentConversationsToFetch;
	NSNumber* _numStoriesToSelectFromRanking;
	NSNumber* _numFriendsToSelectFromRanking;
	NSString* _conversationsScoringModelToUse;
	NSString* _storiesScoringModelToUse;
	NSString* _friendsScoringModelToUse;
	NSNumber* _shouldReturnAllSignals;
	NSNumber* _disableConversationsPreFetchAdapter;
	NSString* _studyIdToUse;

}
+(id)withJUFriendFeedRequestDebugParam:(id)arg1 ;
-(id)setIsDebugRequestValue:(BOOL)arg1 ;
-(id)setDisableFriendsSignalMemcacheValue:(BOOL)arg1 ;
-(id)setDisableStoriesAdapterValue:(BOOL)arg1 ;
-(id)setDisableFriendsSignalAdapterValue:(BOOL)arg1 ;
-(id)setDisableConversationsAdapterValue:(BOOL)arg1 ;
-(id)setDisableConversationsMultiGetAdapterValue:(BOOL)arg1 ;
-(id)setIsReplayRequestValue:(BOOL)arg1 ;
-(id)setNumRecentConversationsToFetchValue:(int)arg1 ;
-(id)setNumStoriesToSelectFromRankingValue:(int)arg1 ;
-(id)setNumFriendsToSelectFromRankingValue:(int)arg1 ;
-(id)setShouldReturnAllSignalsValue:(BOOL)arg1 ;
-(id)setDisableConversationsPreFetchAdapterValue:(BOOL)arg1 ;
-(id)setIsDebugRequest:(id)arg1 ;
-(id)setDisableFriendsSignalMemcache:(id)arg1 ;
-(id)setDisableStoriesAdapter:(id)arg1 ;
-(id)setDisableFriendsSignalAdapter:(id)arg1 ;
-(id)setDisableConversationsAdapter:(id)arg1 ;
-(id)setDisableConversationsMultiGetAdapter:(id)arg1 ;
-(id)setTrackItems:(id)arg1 ;
-(id)setIsReplayRequest:(id)arg1 ;
-(id)setNumRecentConversationsToFetch:(id)arg1 ;
-(id)setNumStoriesToSelectFromRanking:(id)arg1 ;
-(id)setNumFriendsToSelectFromRanking:(id)arg1 ;
-(id)setConversationsScoringModelToUse:(id)arg1 ;
-(id)setStoriesScoringModelToUse:(id)arg1 ;
-(id)setFriendsScoringModelToUse:(id)arg1 ;
-(id)setShouldReturnAllSignals:(id)arg1 ;
-(id)setDisableConversationsPreFetchAdapter:(id)arg1 ;
-(id)setStudyIdToUse:(id)arg1 ;
-(id)build;
@end

