/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:58 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, SCContextImage, SCContextAppLink;

@interface SCContextAppListCardView_AppListApp : GPBMessage

@property (nonatomic,copy) NSString * id_p; 
@property (nonatomic,retain) SCContextImage * icon; 
@property (assign,nonatomic) BOOL hasIcon; 
@property (nonatomic,retain) SCContextAppLink * appLink; 
@property (assign,nonatomic) BOOL hasAppLink; 
@property (nonatomic,copy) NSString * headline; 
@property (nonatomic,copy) NSString * subText; 
@property (nonatomic,copy) NSString * tertiaryText; 
@property (nonatomic,copy) NSString * quaternaryText; 
@property (nonatomic,retain) SCContextImage * quaternaryInfoIcon; 
@property (assign,nonatomic) BOOL hasQuaternaryInfoIcon; 
+(id)descriptor;
@end

