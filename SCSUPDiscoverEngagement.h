/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:02 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@interface SCSUPDiscoverEngagement : GPBMessage

@property (assign,nonatomic) BOOL isChannelSubscribed; 
@property (assign,nonatomic) int channelViewCount; 
@property (assign,nonatomic) int channelFinishedCount; 
@property (assign,nonatomic) float channelViewTimeInSecs; 
@property (assign,nonatomic) unsigned totalHides; 
@property (assign,nonatomic) unsigned totalUnhides; 
@property (assign,nonatomic) long long lastStateUpdateMsecs; 
@property (assign,nonatomic) unsigned totalLegacyHides; 
@property (assign,nonatomic) unsigned totalLegacyUnhides; 
@property (assign,nonatomic) long long lastLegacyStateUpdateMsecs; 
@property (assign,nonatomic) BOOL hasLegacyHide; 
+(id)descriptor;
@end
