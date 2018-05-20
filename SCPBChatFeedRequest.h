/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, SCPBFriendsRequest, NSMutableArray, NSMutableDictionary;

@interface SCPBChatFeedRequest : GPBMessage

@property (nonatomic,copy) NSString * checksumsDict; 
@property (nonatomic,copy) NSString * featuresMap; 
@property (assign,nonatomic) BOOL pullToRefresh; 
@property (nonatomic,retain) SCPBFriendsRequest * friendsRequest; 
@property (assign,nonatomic) BOOL hasFriendsRequest; 
@property (nonatomic,retain) NSMutableArray * groupDeltaRequestsArray; 
@property (nonatomic,readonly) unsigned long long groupDeltaRequestsArray_Count; 
@property (assign,nonatomic) BOOL excludeFriends; 
@property (nonatomic,copy) NSString * messagesTier; 
@property (nonatomic,retain) NSMutableDictionary * conversationDeltaQueryMap; 
@property (nonatomic,readonly) unsigned long long conversationDeltaQueryMap_Count; 
@property (nonatomic,retain) NSMutableDictionary * conversationSnapDeltaQueryMap; 
@property (nonatomic,readonly) unsigned long long conversationSnapDeltaQueryMap_Count; 
@property (nonatomic,copy) NSString * feedIterToken; 
@property (nonatomic,copy) NSString * messageIterToken; 
@property (nonatomic,copy) NSString * groupPaginationType; 
@property (nonatomic,copy) NSString * fetchReason; 
+(id)descriptor;
@end

