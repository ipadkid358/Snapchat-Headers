/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSNumber;

@interface CLSSettings : NSObject {

	NSDictionary* _settingsDictionary;

}

@property (nonatomic,readonly) NSDictionary * settingsDictionary;                             //@synthesize settingsDictionary=_settingsDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * reportsEndpoint; 
@property (nonatomic,copy,readonly) NSString * betaEndpoint; 
@property (nonatomic,copy,readonly) NSNumber * betaSuspendDuration; 
@property (nonatomic,readonly) BOOL shouldPackageReports; 
@property (nonatomic,readonly) BOOL shouldSubmitReports; 
@property (nonatomic,readonly) BOOL canProcessUrgentReports; 
@property (nonatomic,readonly) BOOL errorReportingEnabled; 
@property (nonatomic,readonly) BOOL customExceptionsEnabled; 
@property (nonatomic,readonly) BOOL crashReportingEnabled; 
@property (nonatomic,readonly) BOOL userPromptEnabled; 
@property (nonatomic,readonly) BOOL firebaseCrashlyticsEnabled; 
@property (nonatomic,readonly) unsigned errorLogBufferSize; 
@property (nonatomic,readonly) unsigned logBufferSize; 
@property (nonatomic,readonly) unsigned maxCustomExceptions; 
@property (nonatomic,readonly) unsigned maxCustomKeys; 
@property (nonatomic,copy,readonly) NSString * interactivePromptTitle; 
@property (nonatomic,copy,readonly) NSString * interactivePromptMessage; 
@property (nonatomic,copy,readonly) NSString * interactivePromptCancelTitle; 
@property (nonatomic,copy,readonly) NSString * interactivePromptSendTitle; 
@property (nonatomic,copy,readonly) NSString * interactivePromptAlwaysSendTitle; 
-(NSDictionary *)settingsDictionary;
-(BOOL)errorReportingEnabled;
-(unsigned)logBufferSize;
-(id)promptValueForSettingsKey:(id)arg1 withLocalizedKey:(id)arg2 defaultValue:(id)arg3 ;
-(NSString *)betaEndpoint;
-(NSNumber *)betaSuspendDuration;
-(NSString *)reportsEndpoint;
-(BOOL)shouldPackageReports;
-(BOOL)shouldSubmitReports;
-(BOOL)canProcessUrgentReports;
-(BOOL)customExceptionsEnabled;
-(BOOL)crashReportingEnabled;
-(BOOL)userPromptEnabled;
-(BOOL)firebaseCrashlyticsEnabled;
-(unsigned)errorLogBufferSize;
-(unsigned)maxCustomExceptions;
-(unsigned)maxCustomKeys;
-(NSString *)interactivePromptTitle;
-(NSString *)interactivePromptMessage;
-(NSString *)interactivePromptCancelTitle;
-(NSString *)interactivePromptSendTitle;
-(NSString *)interactivePromptAlwaysSendTitle;
-(id)initWithDictionary:(id)arg1 ;
-(id)defaultConfiguration;
-(id)configuration;
-(id)valueForConfigurationKey:(id)arg1 ;
@end

