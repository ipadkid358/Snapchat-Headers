/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString;

@interface SCPBPurikuraPatternItem : GPBMessage

@property (nonatomic,copy) NSString * uuid; 
@property (nonatomic,copy) NSString * URL; 
@property (assign,nonatomic) int thumbnailX; 
@property (assign,nonatomic) int thumbnailY; 
@property (assign,nonatomic) int thumbnailWidth; 
@property (assign,nonatomic) int thumbnailHeight; 
@property (nonatomic,copy) NSString * colorFilter; 
@property (assign,nonatomic) BOOL bokeh; 
@property (nonatomic,copy) NSString * beauty; 
+(id)descriptor;
@end
