/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface SCFriendsFeedItemRankingRecord : NSObject <NSCopying> {

	float _score;
	NSDate* _lastRankingTime;
	NSDate* _interactionTimeAtLastRanking;

}

@property (nonatomic,copy,readonly) NSDate * lastRankingTime;                           //@synthesize lastRankingTime=_lastRankingTime - In the implementation block
@property (nonatomic,copy,readonly) NSDate * interactionTimeAtLastRanking;              //@synthesize interactionTimeAtLastRanking=_interactionTimeAtLastRanking - In the implementation block
@property (nonatomic,readonly) float score;                                             //@synthesize score=_score - In the implementation block
-(id)initWithLastRankingTime:(id)arg1 interactionTimeAtLastRanking:(id)arg2 score:(float)arg3 ;
-(NSDate *)lastRankingTime;
-(NSDate *)interactionTimeAtLastRanking;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)score;
@end

