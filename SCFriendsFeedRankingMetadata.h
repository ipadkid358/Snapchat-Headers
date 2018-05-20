/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCFriendsFeedRankingMetadata : NSObject <NSCopying> {

	BOOL _rerankerEnabled;
	float _rerankerChatDemotionFactor;
	float _rerankerStoryDemotionFactor;
	float _lastFullRankingTimeThresholdInSecs;
	float _friendFeedTimeAwayThresholdInSecs;
	float _warmStartLastFullRankingTimeThresholdInSecs;
	float _warmStartBackgroundTimeThresholdInSeconds;
	NSString* _astVersionToUse;
	long long _serverSignalTimeEpochInMilliseconds;

}

@property (nonatomic,copy,readonly) NSString * astVersionToUse;                                //@synthesize astVersionToUse=_astVersionToUse - In the implementation block
@property (nonatomic,readonly) BOOL rerankerEnabled;                                           //@synthesize rerankerEnabled=_rerankerEnabled - In the implementation block
@property (nonatomic,readonly) float rerankerChatDemotionFactor;                               //@synthesize rerankerChatDemotionFactor=_rerankerChatDemotionFactor - In the implementation block
@property (nonatomic,readonly) float rerankerStoryDemotionFactor;                              //@synthesize rerankerStoryDemotionFactor=_rerankerStoryDemotionFactor - In the implementation block
@property (nonatomic,readonly) float lastFullRankingTimeThresholdInSecs;                       //@synthesize lastFullRankingTimeThresholdInSecs=_lastFullRankingTimeThresholdInSecs - In the implementation block
@property (nonatomic,readonly) float friendFeedTimeAwayThresholdInSecs;                        //@synthesize friendFeedTimeAwayThresholdInSecs=_friendFeedTimeAwayThresholdInSecs - In the implementation block
@property (nonatomic,readonly) float warmStartLastFullRankingTimeThresholdInSecs;              //@synthesize warmStartLastFullRankingTimeThresholdInSecs=_warmStartLastFullRankingTimeThresholdInSecs - In the implementation block
@property (nonatomic,readonly) float warmStartBackgroundTimeThresholdInSeconds;                //@synthesize warmStartBackgroundTimeThresholdInSeconds=_warmStartBackgroundTimeThresholdInSeconds - In the implementation block
@property (nonatomic,readonly) long long serverSignalTimeEpochInMilliseconds;                  //@synthesize serverSignalTimeEpochInMilliseconds=_serverSignalTimeEpochInMilliseconds - In the implementation block
-(float)rerankerStoryDemotionFactor;
-(float)rerankerChatDemotionFactor;
-(BOOL)rerankerEnabled;
-(float)lastFullRankingTimeThresholdInSecs;
-(float)warmStartLastFullRankingTimeThresholdInSecs;
-(float)friendFeedTimeAwayThresholdInSecs;
-(float)warmStartBackgroundTimeThresholdInSeconds;
-(id)initWithAstVersionToUse:(id)arg1 rerankerEnabled:(BOOL)arg2 rerankerChatDemotionFactor:(float)arg3 rerankerStoryDemotionFactor:(float)arg4 lastFullRankingTimeThresholdInSecs:(float)arg5 friendFeedTimeAwayThresholdInSecs:(float)arg6 warmStartLastFullRankingTimeThresholdInSecs:(float)arg7 warmStartBackgroundTimeThresholdInSeconds:(float)arg8 serverSignalTimeEpochInMilliseconds:(long long)arg9 ;
-(NSString *)astVersionToUse;
-(long long)serverSignalTimeEpochInMilliseconds;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

