/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDate;

@interface SCFriendsFeedStoriesSignals : NSObject <NSCopying, NSCoding> {

	BOOL _hasActiveStories;
	BOOL _hasUnviewedStories;
	NSDate* _lastStoryUpdateTimestamp;
	NSDate* _lastStoryViewedTimestamp;

}

@property (nonatomic,readonly) BOOL hasActiveStories;                               //@synthesize hasActiveStories=_hasActiveStories - In the implementation block
@property (nonatomic,readonly) BOOL hasUnviewedStories;                             //@synthesize hasUnviewedStories=_hasUnviewedStories - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastStoryUpdateTimestamp;              //@synthesize lastStoryUpdateTimestamp=_lastStoryUpdateTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastStoryViewedTimestamp;              //@synthesize lastStoryViewedTimestamp=_lastStoryViewedTimestamp - In the implementation block
-(BOOL)hasUnviewedStories;
-(BOOL)hasActiveStories;
-(NSDate *)lastStoryUpdateTimestamp;
-(NSDate *)lastStoryViewedTimestamp;
-(id)initWithHasActiveStories:(BOOL)arg1 hasUnviewedStories:(BOOL)arg2 lastStoryUpdateTimestamp:(id)arg3 lastStoryViewedTimestamp:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

