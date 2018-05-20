/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, SCPBChatFeedRequest, SCPBBroadcastStoryFriendFeedRequest, NSMutableArray, SCPBFriendFeedRequestDebugParam;

@interface SCPBFriendFeedRequest : GPBMessage

@property (nonatomic,copy) NSString * timestamp; 
@property (nonatomic,copy) NSString * reqToken; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,retain) SCPBChatFeedRequest * chatFeedRequest; 
@property (assign,nonatomic) BOOL hasChatFeedRequest; 
@property (nonatomic,retain) SCPBBroadcastStoryFriendFeedRequest * storyFriendFeedRequest; 
@property (assign,nonatomic) BOOL hasStoryFriendFeedRequest; 
@property (nonatomic,copy) NSString * sessionId; 
@property (nonatomic,copy) NSString * requestId; 
@property (nonatomic,copy) NSString * callOriginationType; 
@property (assign,nonatomic) long long creationTimestamp; 
@property (nonatomic,copy) NSString * layoutType; 
@property (nonatomic,retain) NSMutableArray * conversationIdsToFetchArray; 
@property (nonatomic,readonly) unsigned long long conversationIdsToFetchArray_Count; 
@property (nonatomic,retain) NSMutableArray * previousPagesItemIdsArray; 
@property (nonatomic,readonly) unsigned long long previousPagesItemIdsArray_Count; 
@property (nonatomic,retain) SCPBFriendFeedRequestDebugParam * debugParam; 
@property (assign,nonatomic) BOOL hasDebugParam; 
@property (assign,nonatomic) long long lastFullSyncTimestamp; 
@property (assign,nonatomic) BOOL returnRankedStoriesOnly; 
+(id)descriptor;
@end
