/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/AMPStaticShadowConfig.h>

@class SOJUBlizzardClientConfig;

@interface AMPServerConfig : AMPStaticShadowConfig {

	SOJUBlizzardClientConfig* _serverConfig;

}

@property (nonatomic,readonly) SOJUBlizzardClientConfig * serverConfig;              //@synthesize serverConfig=_serverConfig - In the implementation block
-(SOJUBlizzardClientConfig *)serverConfig;
-(unsigned long long)eventUploadMaxBatchSize;
-(id)blacklistedEvents;
-(id)gceCollectorUrl;
-(double)gceCollectorTrafficPercent;
-(id)loggers;
-(id)defaultLoggers;
-(NSDictionary*)eventPrefixToLoggersMap;
-(NSDictionary*)eventnameToLoggersMap;
-(id)criticalEvents;
-(BOOL)_doLoggersExist;
-(id)initWithSOJUConfig:(id)arg1 ;
-(unsigned long long)eventUploadThreshold;
-(unsigned long long)eventMaxCount;
-(unsigned long long)eventRemoveBatchSize;
-(unsigned long long)eventSaveBatchSize;
-(unsigned long long)eventUploadPeriodSeconds;
-(unsigned long long)eventUploadTimeoutSeconds;
-(BOOL)isInitialized;
-(id)version;
@end

