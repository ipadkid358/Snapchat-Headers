/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:02 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSMutableArray, GPBInt64Array, GPBInt64ObjectDictionary;

@interface SCSUPSubscriptionResponse : GPBMessage

@property (nonatomic,retain) NSMutableArray * subscribedUsersArray; 
@property (nonatomic,readonly) unsigned long long subscribedUsersArray_Count; 
@property (nonatomic,retain) NSMutableArray * hiddenUsersArray; 
@property (nonatomic,readonly) unsigned long long hiddenUsersArray_Count; 
@property (nonatomic,retain) GPBInt64Array * subscribedPublishersArray; 
@property (nonatomic,readonly) unsigned long long subscribedPublishersArray_Count; 
@property (nonatomic,retain) GPBInt64ObjectDictionary * hiddenPublishers; 
@property (nonatomic,readonly) unsigned long long hiddenPublishers_Count; 
@property (nonatomic,retain) NSMutableArray * subscribedStoriesArray; 
@property (nonatomic,readonly) unsigned long long subscribedStoriesArray_Count; 
@property (nonatomic,retain) NSMutableArray * hiddenStoriesArray; 
@property (nonatomic,readonly) unsigned long long hiddenStoriesArray_Count; 
@property (nonatomic,retain) NSMutableArray * subscribedLivesArray; 
@property (nonatomic,readonly) unsigned long long subscribedLivesArray_Count; 
@property (nonatomic,retain) NSMutableArray * hiddenLivesArray; 
@property (nonatomic,readonly) unsigned long long hiddenLivesArray_Count; 
@property (assign,nonatomic) BOOL hasLiveSubscriptionState; 
+(id)descriptor;
@end

