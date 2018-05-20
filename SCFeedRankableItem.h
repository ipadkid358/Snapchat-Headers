/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCFeedItem, NSDictionary, NSData;

@interface SCFeedRankableItem : NSObject <NSCopying> {

	float _score;
	SCFeedItem* _feedItem;
	NSDictionary* _features;
	NSDictionary* _nodes;
	NSData* _registers;

}

@property (nonatomic,readonly) float score;                               //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) SCFeedItem * feedItem;                     //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * features;              //@synthesize features=_features - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * nodes;                 //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,copy,readonly) NSData * registers;                   //@synthesize registers=_registers - In the implementation block
-(NSData *)registers;
-(id)initWithScore:(float)arg1 feedItem:(id)arg2 features:(id)arg3 nodes:(id)arg4 registers:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)nodes;
-(NSDictionary *)features;
-(float)score;
-(SCFeedItem *)feedItem;
@end

