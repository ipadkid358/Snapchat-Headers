/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString;

@interface SCPBIdentityLagunaLagunaDevice : GPBMessage

@property (nonatomic,copy) NSString * serialNumber; 
@property (assign,nonatomic) int color; 
@property (assign,nonatomic) int deviceNumber; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSString * firmwareVersion; 
@property (assign,nonatomic) long long lastNameUpdatedTimestamp; 
@property (nonatomic,copy) NSString * pairStatus; 
@property (assign,nonatomic) long long lastPairStatusUpdatedTimestamp; 
@property (assign,nonatomic) long long firstPairedTimestamp; 
@property (nonatomic,copy) NSString * hardwareVersion; 
+(id)descriptor;
@end
