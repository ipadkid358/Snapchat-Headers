/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class SCPBGenericSnap, SCPBChatMessage, SCPBCashTransaction, NSString;

@interface SCPBChatOrSnapMessage : GPBMessage

@property (nonatomic,retain) SCPBGenericSnap * snap; 
@property (assign,nonatomic) BOOL hasSnap; 
@property (nonatomic,retain) SCPBChatMessage * chatMessage; 
@property (assign,nonatomic) BOOL hasChatMessage; 
@property (nonatomic,retain) SCPBCashTransaction * cashTransaction; 
@property (assign,nonatomic) BOOL hasCashTransaction; 
@property (nonatomic,copy) NSString * iterToken; 
+(id)descriptor;
@end

