/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary, SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig, NSDate;

@interface SCUserStoryLoadingConfig : NSObject <NSCoding> {

	NSDictionary* _preloadUserSOJUCounts;
	SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig* _defaultLookaheadPrecache;
	SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig* _feedCarouselLookaheadPrecache;
	SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig* _feedLookaheadPrecache;
	NSDate* _lastUpdateTime;

}

@property (nonatomic,copy,readonly) NSDictionary * preloadUserSOJUCounts;                                                            //@synthesize preloadUserSOJUCounts=_preloadUserSOJUCounts - In the implementation block
@property (nonatomic,readonly) SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig * defaultLookaheadPrecache;                   //@synthesize defaultLookaheadPrecache=_defaultLookaheadPrecache - In the implementation block
@property (nonatomic,readonly) SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig * feedCarouselLookaheadPrecache;              //@synthesize feedCarouselLookaheadPrecache=_feedCarouselLookaheadPrecache - In the implementation block
@property (nonatomic,readonly) SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig * feedLookaheadPrecache;                      //@synthesize feedLookaheadPrecache=_feedLookaheadPrecache - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdateTime;                                                                              //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
+(id)defaultLocalConfig;
-(SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig *)defaultLookaheadPrecache;
-(id)initWithSojuConfig:(id)arg1 ;
-(NSDictionary *)preloadUserSOJUCounts;
-(SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig *)feedCarouselLookaheadPrecache;
-(SOJUBroadcastUserStoryPrecachingLookaheadPrecacheConfig *)feedLookaheadPrecache;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)lastUpdateTime;
@end
