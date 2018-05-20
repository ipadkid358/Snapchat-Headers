/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:52 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUFriendFeedRequestDebugParam.h>
@class NSNumber, NSArray, NSString;


@protocol SOJUFriendFeedRequestDebugParam <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSNumber * isDebugRequest; 
@property (nonatomic,copy,readonly) NSNumber * disableFriendsSignalMemcache; 
@property (nonatomic,copy,readonly) NSNumber * disableStoriesAdapter; 
@property (nonatomic,copy,readonly) NSNumber * disableFriendsSignalAdapter; 
@property (nonatomic,copy,readonly) NSNumber * disableConversationsAdapter; 
@property (nonatomic,copy,readonly) NSNumber * disableConversationsMultiGetAdapter; 
@property (nonatomic,copy,readonly) NSArray * trackItems; 
@property (nonatomic,copy,readonly) NSNumber * isReplayRequest; 
@property (nonatomic,copy,readonly) NSNumber * numRecentConversationsToFetch; 
@property (nonatomic,copy,readonly) NSNumber * numStoriesToSelectFromRanking; 
@property (nonatomic,copy,readonly) NSNumber * numFriendsToSelectFromRanking; 
@property (nonatomic,copy,readonly) NSString * conversationsScoringModelToUse; 
@property (nonatomic,copy,readonly) NSString * storiesScoringModelToUse; 
@property (nonatomic,copy,readonly) NSString * friendsScoringModelToUse; 
@property (nonatomic,copy,readonly) NSNumber * shouldReturnAllSignals; 
@property (nonatomic,copy,readonly) NSNumber * disableConversationsPreFetchAdapter; 
@property (nonatomic,copy,readonly) NSString * studyIdToUse; 
@required
-(NSNumber *)isDebugRequest;
-(NSNumber *)disableFriendsSignalMemcache;
-(NSNumber *)disableStoriesAdapter;
-(NSNumber *)disableFriendsSignalAdapter;
-(NSNumber *)disableConversationsAdapter;
-(NSNumber *)disableConversationsMultiGetAdapter;
-(NSArray *)trackItems;
-(NSNumber *)isReplayRequest;
-(NSNumber *)numRecentConversationsToFetch;
-(NSNumber *)numStoriesToSelectFromRanking;
-(NSNumber *)numFriendsToSelectFromRanking;
-(NSString *)conversationsScoringModelToUse;
-(NSString *)storiesScoringModelToUse;
-(NSString *)friendsScoringModelToUse;
-(NSNumber *)shouldReturnAllSignals;
-(NSNumber *)disableConversationsPreFetchAdapter;
-(NSString *)studyIdToUse;

@end


@class NSNumber, NSArray, NSString;

@interface SOJUFriendFeedRequestDebugParam : NSObject <SOJUFriendFeedRequestDebugParam> {

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

@property (nonatomic,copy,readonly) NSNumber * isDebugRequest;                                   //@synthesize isDebugRequest=_isDebugRequest - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * disableFriendsSignalMemcache;                     //@synthesize disableFriendsSignalMemcache=_disableFriendsSignalMemcache - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * disableStoriesAdapter;                            //@synthesize disableStoriesAdapter=_disableStoriesAdapter - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * disableFriendsSignalAdapter;                      //@synthesize disableFriendsSignalAdapter=_disableFriendsSignalAdapter - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * disableConversationsAdapter;                      //@synthesize disableConversationsAdapter=_disableConversationsAdapter - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * disableConversationsMultiGetAdapter;              //@synthesize disableConversationsMultiGetAdapter=_disableConversationsMultiGetAdapter - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackItems;                                        //@synthesize trackItems=_trackItems - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isReplayRequest;                                  //@synthesize isReplayRequest=_isReplayRequest - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numRecentConversationsToFetch;                    //@synthesize numRecentConversationsToFetch=_numRecentConversationsToFetch - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numStoriesToSelectFromRanking;                    //@synthesize numStoriesToSelectFromRanking=_numStoriesToSelectFromRanking - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numFriendsToSelectFromRanking;                    //@synthesize numFriendsToSelectFromRanking=_numFriendsToSelectFromRanking - In the implementation block
@property (nonatomic,copy,readonly) NSString * conversationsScoringModelToUse;                   //@synthesize conversationsScoringModelToUse=_conversationsScoringModelToUse - In the implementation block
@property (nonatomic,copy,readonly) NSString * storiesScoringModelToUse;                         //@synthesize storiesScoringModelToUse=_storiesScoringModelToUse - In the implementation block
@property (nonatomic,copy,readonly) NSString * friendsScoringModelToUse;                         //@synthesize friendsScoringModelToUse=_friendsScoringModelToUse - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * shouldReturnAllSignals;                           //@synthesize shouldReturnAllSignals=_shouldReturnAllSignals - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * disableConversationsPreFetchAdapter;              //@synthesize disableConversationsPreFetchAdapter=_disableConversationsPreFetchAdapter - In the implementation block
@property (nonatomic,copy,readonly) NSString * studyIdToUse;                                     //@synthesize studyIdToUse=_studyIdToUse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)toJson;
-(BOOL)isDebugRequestValue;
-(BOOL)disableFriendsSignalMemcacheValue;
-(BOOL)disableStoriesAdapterValue;
-(BOOL)disableFriendsSignalAdapterValue;
-(BOOL)disableConversationsAdapterValue;
-(BOOL)disableConversationsMultiGetAdapterValue;
-(BOOL)isReplayRequestValue;
-(int)numRecentConversationsToFetchValue;
-(int)numStoriesToSelectFromRankingValue;
-(int)numFriendsToSelectFromRankingValue;
-(BOOL)shouldReturnAllSignalsValue;
-(BOOL)disableConversationsPreFetchAdapterValue;
-(NSNumber *)isDebugRequest;
-(NSNumber *)disableFriendsSignalMemcache;
-(NSNumber *)disableStoriesAdapter;
-(NSNumber *)disableFriendsSignalAdapter;
-(NSNumber *)disableConversationsAdapter;
-(NSNumber *)disableConversationsMultiGetAdapter;
-(NSArray *)trackItems;
-(NSNumber *)isReplayRequest;
-(NSNumber *)numRecentConversationsToFetch;
-(NSNumber *)numStoriesToSelectFromRanking;
-(NSNumber *)numFriendsToSelectFromRanking;
-(NSString *)conversationsScoringModelToUse;
-(NSString *)storiesScoringModelToUse;
-(NSString *)friendsScoringModelToUse;
-(NSNumber *)shouldReturnAllSignals;
-(NSNumber *)disableConversationsPreFetchAdapter;
-(NSString *)studyIdToUse;
-(id)initWithIsDebugRequest:(id)arg1 disableFriendsSignalMemcache:(id)arg2 disableStoriesAdapter:(id)arg3 disableFriendsSignalAdapter:(id)arg4 disableConversationsAdapter:(id)arg5 disableConversationsMultiGetAdapter:(id)arg6 trackItems:(id)arg7 isReplayRequest:(id)arg8 numRecentConversationsToFetch:(id)arg9 numStoriesToSelectFromRanking:(id)arg10 numFriendsToSelectFromRanking:(id)arg11 conversationsScoringModelToUse:(id)arg12 storiesScoringModelToUse:(id)arg13 friendsScoringModelToUse:(id)arg14 shouldReturnAllSignals:(id)arg15 disableConversationsPreFetchAdapter:(id)arg16 studyIdToUse:(id)arg17 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
@end

