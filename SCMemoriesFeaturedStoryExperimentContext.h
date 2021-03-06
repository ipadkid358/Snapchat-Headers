/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCExperimentContext.h>

@interface SCMemoriesFeaturedStoryExperimentContext : SCExperimentContext {

	BOOL _enableFeaturedStory;
	BOOL _enableFeaturedStoryBadge;
	BOOL _enableFeaturedStoryOperaSendButton;

}

@property (nonatomic,readonly) BOOL enableFeaturedStory;                             //@synthesize enableFeaturedStory=_enableFeaturedStory - In the implementation block
@property (nonatomic,readonly) BOOL enableFeaturedStoryBadge;                        //@synthesize enableFeaturedStoryBadge=_enableFeaturedStoryBadge - In the implementation block
@property (nonatomic,readonly) BOOL enableFeaturedStoryOperaSendButton;              //@synthesize enableFeaturedStoryOperaSendButton=_enableFeaturedStoryOperaSendButton - In the implementation block
-(void)setupParameters;
-(BOOL)enableFeaturedStory;
-(BOOL)enableFeaturedStoryBadge;
-(BOOL)enableFeaturedStoryOperaSendButton;
-(id)experimentName;
@end

