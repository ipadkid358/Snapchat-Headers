/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:00 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class SCMTShareLocationPreferences;

@interface SCMTSetShareLocationPreferencesRequest : GPBMessage

@property (nonatomic,retain) SCMTShareLocationPreferences * preferences; 
@property (assign,nonatomic) BOOL hasPreferences; 
@property (assign,nonatomic) long long locationUpdateSequenceNumber; 
@property (assign,nonatomic) long long ghostModeDurationMillis; 
+(id)descriptor;
@end

