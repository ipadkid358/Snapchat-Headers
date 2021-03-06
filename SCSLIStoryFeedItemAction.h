/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:02 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class SCSLIStoryFeedBaseInfo, NSString, NSData;

@interface SCSLIStoryFeedItemAction : GPBMessage

@property (nonatomic,retain) SCSLIStoryFeedBaseInfo * baseInfo; 
@property (assign,nonatomic) BOOL hasBaseInfo; 
@property (assign,nonatomic) int gesture; 
@property (assign,nonatomic) int action; 
@property (nonatomic,copy) NSString * subitemId; 
@property (assign,nonatomic) int subitemIndex; 
@property (nonatomic,copy) NSString * tileId; 
@property (nonatomic,copy) NSString * variantId; 
@property (nonatomic,copy) NSData * attachedInfo; 
+(id)descriptor;
@end

