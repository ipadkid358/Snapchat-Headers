/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig.h>
@class SOJUBroadcastUserStoryPrecachingPrecacheCounts, NSString;


@protocol SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) SOJUBroadcastUserStoryPrecachingPrecacheCounts * tapToLoadCounts; 
@property (nonatomic,copy,readonly) SOJUBroadcastUserStoryPrecachingPrecacheCounts * inlineForwardPrecacheCounts; 
@property (nonatomic,copy,readonly) SOJUBroadcastUserStoryPrecachingPrecacheCounts * numStoriesAlwaysPrecached; 
@property (nonatomic,copy,readonly) SOJUBroadcastUserStoryPrecachingPrecacheCounts * numSnapsPerStoryAlwaysPrecached; 
@property (nonatomic,copy,readonly) NSString * order; 
@property (nonatomic,copy,readonly) SOJUBroadcastUserStoryPrecachingPrecacheCounts * numSnapsToLoadBeforeAllowViewing; 
@required
-(SOJUBroadcastUserStoryPrecachingPrecacheCounts *)inlineForwardPrecacheCounts;
-(SOJUBroadcastUserStoryPrecachingPrecacheCounts *)tapToLoadCounts;
-(SOJUBroadcastUserStoryPrecachingPrecacheCounts *)numStoriesAlwaysPrecached;
-(SOJUBroadcastUserStoryPrecachingPrecacheCounts *)numSnapsPerStoryAlwaysPrecached;
-(SOJUBroadcastUserStoryPrecachingPrecacheCounts *)numSnapsToLoadBeforeAllowViewing;
-(NSString *)order;

@end


@class SOJUBroadcastUserStoryPrecachingPrecacheCounts, NSString;

@interface SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig : NSObject <SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig> {

	SOJUBroadcastUserStoryPrecachingPrecacheCounts* _tapToLoadCounts;
	SOJUBroadcastUserStoryPrecachingPrecacheCounts* _inlineForwardPrecacheCounts;
	SOJUBroadcastUserStoryPrecachingPrecacheCounts* _numStoriesAlwaysPrecached;
	SOJUBroadcastUserStoryPrecachingPrecacheCounts* _numSnapsPerStoryAlwaysPrecached;
	NSString* _order;
	SOJUBroadcastUserStoryPrecachingPrecacheCounts* _numSnapsToLoadBeforeAllowViewing;

}

@property (nonatomic,copy,readonly) SOJUBroadcastUserStoryPrecachingPrecacheCounts * tapToLoadCounts;                               //@synthesize tapToLoadCounts=_tapToLoadCounts - In the implementation block
@property (nonatomic,copy,readonly) SOJUBroadcastUserStoryPrecachingPrecacheCounts * inlineForwardPrecacheCounts;                   //@synthesize inlineForwardPrecacheCounts=_inlineForwardPrecacheCounts - In the implementation block
@property (nonatomic,copy,readonly) SOJUBroadcastUserStoryPrecachingPrecacheCounts * numStoriesAlwaysPrecached;                     //@synthesize numStoriesAlwaysPrecached=_numStoriesAlwaysPrecached - In the implementation block
@property (nonatomic,copy,readonly) SOJUBroadcastUserStoryPrecachingPrecacheCounts * numSnapsPerStoryAlwaysPrecached;               //@synthesize numSnapsPerStoryAlwaysPrecached=_numSnapsPerStoryAlwaysPrecached - In the implementation block
@property (nonatomic,copy,readonly) NSString * order;                                                                               //@synthesize order=_order - In the implementation block
@property (nonatomic,copy,readonly) SOJUBroadcastUserStoryPrecachingPrecacheCounts * numSnapsToLoadBeforeAllowViewing;              //@synthesize numSnapsToLoadBeforeAllowViewing=_numSnapsToLoadBeforeAllowViewing - In the implementation block
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
-(SOJUBroadcastUserStoryPrecachingPrecacheCounts *)inlineForwardPrecacheCounts;
-(long long)orderEnum;
-(SOJUBroadcastUserStoryPrecachingPrecacheCounts *)tapToLoadCounts;
-(SOJUBroadcastUserStoryPrecachingPrecacheCounts *)numStoriesAlwaysPrecached;
-(SOJUBroadcastUserStoryPrecachingPrecacheCounts *)numSnapsPerStoryAlwaysPrecached;
-(SOJUBroadcastUserStoryPrecachingPrecacheCounts *)numSnapsToLoadBeforeAllowViewing;
-(id)initWithTapToLoadCounts:(id)arg1 inlineForwardPrecacheCounts:(id)arg2 numStoriesAlwaysPrecached:(id)arg3 numSnapsPerStoryAlwaysPrecached:(id)arg4 order:(id)arg5 numSnapsToLoadBeforeAllowViewing:(id)arg6 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)order;
-(id)toDictionary;
@end

