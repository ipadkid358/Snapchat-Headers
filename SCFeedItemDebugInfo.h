/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDictionary;

@interface SCFeedItemDebugInfo : NSObject <NSCopying> {

	NSString* _feedItemId;
	NSString* _displayName;
	NSString* _friendmoji;
	NSNumber* _finalScore;
	NSDictionary* _incrementalScoringDebugInfo;
	NSDictionary* _fullScoringDebugInfo;
	NSNumber* _countIncrementalScorings;

}

@property (nonatomic,copy,readonly) NSString * feedItemId;                                   //@synthesize feedItemId=_feedItemId - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * friendmoji;                                   //@synthesize friendmoji=_friendmoji - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * finalScore;                                   //@synthesize finalScore=_finalScore - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * incrementalScoringDebugInfo;              //@synthesize incrementalScoringDebugInfo=_incrementalScoringDebugInfo - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * fullScoringDebugInfo;                     //@synthesize fullScoringDebugInfo=_fullScoringDebugInfo - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * countIncrementalScorings;                     //@synthesize countIncrementalScorings=_countIncrementalScorings - In the implementation block
-(NSString *)friendmoji;
-(NSString *)feedItemId;
-(id)initWithFeedItemId:(id)arg1 displayName:(id)arg2 friendmoji:(id)arg3 finalScore:(id)arg4 incrementalScoringDebugInfo:(id)arg5 fullScoringDebugInfo:(id)arg6 countIncrementalScorings:(id)arg7 ;
-(NSNumber *)finalScore;
-(NSDictionary *)incrementalScoringDebugInfo;
-(NSDictionary *)fullScoringDebugInfo;
-(NSNumber *)countIncrementalScorings;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
@end

