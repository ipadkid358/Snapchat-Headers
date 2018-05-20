/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:02 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class SCCORECompositeStoryId, NSMutableArray;

@interface StoryBoosts : GPBMessage

@property (nonatomic,retain) SCCORECompositeStoryId * compositeStoryId; 
@property (assign,nonatomic) BOOL hasCompositeStoryId; 
@property (nonatomic,retain) NSMutableArray * storyBoostsArray; 
@property (nonatomic,readonly) unsigned long long storyBoostsArray_Count; 
@property (assign,nonatomic) long long lastUpdatedTimestampMsecs; 
+(id)descriptor;
@end
