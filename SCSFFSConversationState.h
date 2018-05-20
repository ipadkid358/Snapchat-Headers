/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:02 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class SCSFFSChatsState, SCSFFSSnapsState, SCSFFSCashState;

@interface SCSFFSConversationState : GPBMessage

@property (nonatomic,retain) SCSFFSChatsState * chatsState; 
@property (assign,nonatomic) BOOL hasChatsState; 
@property (nonatomic,retain) SCSFFSSnapsState * snapsState; 
@property (assign,nonatomic) BOOL hasSnapsState; 
@property (nonatomic,retain) SCSFFSCashState * cashState; 
@property (assign,nonatomic) BOOL hasCashState; 
+(id)descriptor;
@end

