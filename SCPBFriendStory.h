/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class SCPBStory, NSString;

@interface SCPBFriendStory : GPBMessage

@property (nonatomic,retain) SCPBStory * story; 
@property (assign,nonatomic) BOOL hasStory; 
@property (assign,nonatomic) BOOL viewed; 
@property (nonatomic,copy) NSString * flushableStoryId; 
+(id)descriptor;
@end
