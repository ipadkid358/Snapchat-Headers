/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, SCPBUnlockablesRatingStickerProperties;

@interface SCPBUnlockablesCompanionCreativeProperties : GPBMessage

@property (nonatomic,copy) NSString * companionCreativeType; 
@property (assign,nonatomic) BOOL movable; 
@property (assign,nonatomic) BOOL modifiable; 
@property (nonatomic,retain) SCPBUnlockablesRatingStickerProperties * ratingStickerProperties; 
@property (assign,nonatomic) BOOL hasRatingStickerProperties; 
+(id)descriptor;
@end
