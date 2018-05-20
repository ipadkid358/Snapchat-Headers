/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:59 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, NSMutableArray, GPBStringInt64Dictionary;

@interface SCMEExplorerStatusQueue : GPBMessage

@property (nonatomic,copy) NSString * userId; 
@property (nonatomic,retain) NSMutableArray * queueArray; 
@property (nonatomic,readonly) unsigned long long queueArray_Count; 
@property (nonatomic,retain) NSMutableArray * recentLocalitiesArray; 
@property (nonatomic,readonly) unsigned long long recentLocalitiesArray_Count; 
@property (nonatomic,retain) GPBStringInt64Dictionary * recentlyViewedFriendLocalities; 
@property (nonatomic,readonly) unsigned long long recentlyViewedFriendLocalities_Count; 
@property (assign,nonatomic) BOOL isOnboarded; 
+(id)descriptor;
@end

