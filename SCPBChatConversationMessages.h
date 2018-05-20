/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class SCPBSignedPayload, NSMutableArray, NSString;

@interface SCPBChatConversationMessages : GPBMessage

@property (nonatomic,retain) SCPBSignedPayload * messagingAuth; 
@property (assign,nonatomic) BOOL hasMessagingAuth; 
@property (nonatomic,retain) NSMutableArray * messagesArray; 
@property (nonatomic,readonly) unsigned long long messagesArray_Count; 
@property (nonatomic,copy) NSString * messageIterToken; 
+(id)descriptor;
@end

