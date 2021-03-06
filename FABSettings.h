/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSDictionary, NSString, NSFileManager;

@interface FABSettings : NSObject {

	BOOL _reportingEnabled;
	BOOL _errorReportingEnabled;
	NSNumber* _logBufferSize;
	NSNumber* _maxErrors;
	NSNumber* _maxCustomKeys;
	NSDictionary* _settingsDictionary;
	NSString* _settingsPath;
	NSFileManager* _fileManager;

}

@property (nonatomic,retain) NSDictionary * settingsDictionary;              //@synthesize settingsDictionary=_settingsDictionary - In the implementation block
@property (nonatomic,retain) NSString * settingsPath;                        //@synthesize settingsPath=_settingsPath - In the implementation block
@property (nonatomic,retain) NSFileManager * fileManager;                    //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,readonly) BOOL appNeedsOnboarding; 
@property (nonatomic,readonly) BOOL appUpdateRequired; 
@property (nonatomic,readonly) BOOL reportingEnabled;                        //@synthesize reportingEnabled=_reportingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL errorReportingEnabled;                   //@synthesize errorReportingEnabled=_errorReportingEnabled - In the implementation block
@property (nonatomic,readonly) NSNumber * logBufferSize;                     //@synthesize logBufferSize=_logBufferSize - In the implementation block
@property (nonatomic,readonly) NSNumber * maxErrors;                         //@synthesize maxErrors=_maxErrors - In the implementation block
@property (nonatomic,readonly) NSNumber * maxCustomKeys;                     //@synthesize maxCustomKeys=_maxCustomKeys - In the implementation block
-(NSDictionary *)settingsDictionary;
-(BOOL)errorReportingEnabled;
-(NSNumber *)logBufferSize;
-(NSNumber *)maxCustomKeys;
-(id)appBuildVersion;
-(id)appDisplayVersion;
-(NSString *)settingsPath;
-(id)initWithSettingsPath:(id)arg1 fileManager:(id)arg2 ;
-(void)clearSettingsDictionary;
-(BOOL)appNeedsOnboarding;
-(BOOL)appUpdateRequired;
-(id)settingsURLForEndpoint:(id)arg1 appInstanceIdentifer:(id)arg2 ;
-(id)appSettings;
-(id)appStatus;
-(void)setSettingsDictionary:(NSDictionary *)arg1 ;
-(id)appSource;
-(BOOL)reportingEnabled;
-(NSNumber *)maxErrors;
-(void)setSettingsPath:(NSString *)arg1 ;
-(id)appPlatform;
-(id)appBundleIdentifier;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(NSFileManager *)fileManager;
@end

