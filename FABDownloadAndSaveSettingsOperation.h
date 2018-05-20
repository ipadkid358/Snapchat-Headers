/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/FABNetworkOperation.h>

@protocol FABDownloadAndSaveSettingsOperationDelegate;
@class NSError, NSURL, NSFileManager, NSString, FABNetworkClient;

@interface FABDownloadAndSaveSettingsOperation : FABNetworkOperation {

	id<FABDownloadAndSaveSettingsOperationDelegate> _delegate;
	NSError* _error;
	NSURL* _settingsURL;
	NSFileManager* _fileManager;
	NSString* _settingsDirectoryPath;
	NSString* _settingsFilePath;
	NSString* _installIdentifier;
	NSString* _advertisingToken;
	FABNetworkClient* _networkClient;

}

@property (nonatomic,readonly) NSURL * settingsURL;                                                   //@synthesize settingsURL=_settingsURL - In the implementation block
@property (nonatomic,readonly) NSFileManager * fileManager;                                           //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,readonly) NSString * settingsDirectoryPath;                                      //@synthesize settingsDirectoryPath=_settingsDirectoryPath - In the implementation block
@property (nonatomic,readonly) NSString * settingsFilePath;                                           //@synthesize settingsFilePath=_settingsFilePath - In the implementation block
@property (nonatomic,readonly) NSString * installIdentifier;                                          //@synthesize installIdentifier=_installIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * advertisingToken;                                           //@synthesize advertisingToken=_advertisingToken - In the implementation block
@property (nonatomic,__weak,readonly) FABNetworkClient * networkClient;                               //@synthesize networkClient=_networkClient - In the implementation block
@property (nonatomic,readonly) id<FABDownloadAndSaveSettingsOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSError * error;                                                       //@synthesize error=_error - In the implementation block
-(FABNetworkClient *)networkClient;
-(NSString *)installIdentifier;
-(NSString *)advertisingToken;
-(id)initWithAPIKey:(id)arg1 ;
-(id)mutableRequestWithDefaultHTTPHeaderFieldsAndTimeoutForURL:(id)arg1 ;
-(NSURL *)settingsURL;
-(NSString *)settingsDirectoryPath;
-(NSString *)settingsFilePath;
-(id)initWithAPIKey:(id)arg1 delegate:(id)arg2 settingsURL:(id)arg3 settingsDirectoryPath:(id)arg4 settingsFilePath:(id)arg5 fileManager:(id)arg6 installIdentifier:(id)arg7 advertisingToken:(id)arg8 networkClient:(id)arg9 ;
-(id<FABDownloadAndSaveSettingsOperationDelegate>)delegate;
-(void)main;
-(NSError *)error;
-(NSFileManager *)fileManager;
@end

