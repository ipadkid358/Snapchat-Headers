/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL;

@interface ANSSettings : NSObject {

	NSDictionary* _settingsDictionary;

}

@property (nonatomic,readonly) NSDictionary * settingsDictionary;                                      //@synthesize settingsDictionary=_settingsDictionary - In the implementation block
@property (nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) NSURL * answersURL; 
@property (nonatomic,readonly) BOOL shouldCollectAnalytics; 
@property (nonatomic,readonly) BOOL shouldCollectCustomEvents; 
@property (nonatomic,readonly) BOOL shouldCollectPredefinedEvents; 
@property (nonatomic,readonly) BOOL shouldForwardToFirebaseAnalytics; 
@property (nonatomic,readonly) BOOL shouldIncludePurchaseEventsInForwardedFirebaseEvents; 
@property (nonatomic,readonly) long long maximumPayloadSize; 
@property (nonatomic,readonly) long long maxPendingSendFiles; 
@property (nonatomic,readonly) double flushInterval; 
@property (nonatomic,readonly) long long samplingRate; 
@property (nonatomic,readonly) double defaultUploadTimeout; 
@property (nonatomic,readonly) double lowPowerUploadTimeout; 
-(NSDictionary *)settingsDictionary;
-(NSURL *)answersURL;
-(BOOL)shouldCollectAnalytics;
-(BOOL)shouldCollectCustomEvents;
-(BOOL)shouldCollectPredefinedEvents;
-(BOOL)shouldForwardToFirebaseAnalytics;
-(BOOL)shouldIncludePurchaseEventsInForwardedFirebaseEvents;
-(long long)maxPendingSendFiles;
-(double)defaultUploadTimeout;
-(double)lowPowerUploadTimeout;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)valid;
-(double)flushInterval;
-(long long)maximumPayloadSize;
-(long long)samplingRate;
@end

