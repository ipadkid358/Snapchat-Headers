/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:01 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, AdPreferences;

@interface TargetingProxyRequest : GPBMessage

@property (assign,nonatomic) int request; 
@property (nonatomic,readonly) int userOneOfCase; 
@property (nonatomic,copy) NSString * userId; 
@property (nonatomic,copy) NSString * userToken; 
@property (nonatomic,readonly) int requestBodyOneOfCase; 
@property (nonatomic,retain) AdPreferences * adPreferences; 
@property (nonatomic,copy) NSString * userLocale; 
+(id)descriptor;
@end

