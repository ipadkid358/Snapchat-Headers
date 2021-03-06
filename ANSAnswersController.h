/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/ANSUploaderDelegate.h>

@class NSOperationQueue, NSString, ANSMetadata, ANSCrashMetadata, ANSUploader, ANSNetworkRetryHandler, NSURL, ANSEventFilter, ANSSettings, ANSTimer, ANSFirebaseAnalyticsBridge;

@interface ANSAnswersController : NSObject <ANSUploaderDelegate> {

	NSOperationQueue* _eventQueue;
	NSString* _rootEventDirectory;
	ANSMetadata* _metadata;
	ANSCrashMetadata* _previousExecutionMetadata;
	ANSUploader* _uploader;
	ANSNetworkRetryHandler* _networkRetryHandler;
	NSURL* _currentLogURL;
	ANSEventFilter* _eventFilter;
	ANSSettings* _settings;
	ANSTimer* _flushTimer;
	ANSFirebaseAnalyticsBridge* _firebaseAnalyticsBridge;

}

@property (nonatomic,readonly) NSOperationQueue * eventQueue;                                     //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,readonly) NSString * rootEventDirectory;                                     //@synthesize rootEventDirectory=_rootEventDirectory - In the implementation block
@property (nonatomic,readonly) ANSMetadata * metadata;                                            //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) ANSCrashMetadata * previousExecutionMetadata;                      //@synthesize previousExecutionMetadata=_previousExecutionMetadata - In the implementation block
@property (nonatomic,readonly) ANSUploader * uploader;                                            //@synthesize uploader=_uploader - In the implementation block
@property (nonatomic,readonly) ANSNetworkRetryHandler * networkRetryHandler;                      //@synthesize networkRetryHandler=_networkRetryHandler - In the implementation block
@property (nonatomic,readonly) NSURL * currentLogURL;                                             //@synthesize currentLogURL=_currentLogURL - In the implementation block
@property (nonatomic,readonly) ANSEventFilter * eventFilter;                                      //@synthesize eventFilter=_eventFilter - In the implementation block
@property (nonatomic,readonly) ANSSettings * settings;                                            //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) ANSTimer * flushTimer;                                             //@synthesize flushTimer=_flushTimer - In the implementation block
@property (nonatomic,readonly) ANSFirebaseAnalyticsBridge * firebaseAnalyticsBridge;              //@synthesize firebaseAnalyticsBridge=_firebaseAnalyticsBridge - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rootDirectory;
-(void)logCrashEvent:(id)arg1 ;
-(id)initWithBetaToken:(id)arg1 ;
-(id)sharedFabricSDK;
-(id)uploader:(id)arg1 filePathForUniqueName:(id)arg2 ;
-(void)uploader:(id)arg1 didFinishUploadWithUniqueName:(id)arg2 error:(id)arg3 ;
-(void)uploader:(id)arg1 session:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)uploader:(id)arg1 completedRequest:(id)arg2 withResponse:(id)arg3 uniqueName:(id)arg4 error:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)initWithBetaToken:(id)arg1 rootDirectory:(id)arg2 ;
-(id)eventDirectoryForRootDirectory:(id)arg1 ;
-(NSString *)rootEventDirectory;
-(id)generateNewLogPath;
-(id)replacePreviousExecutionMetadataWithCurrentMetadata:(id)arg1 inRootDirectory:(id)arg2 ;
-(id)uploaderWithQueue:(id)arg1 delegate:(id)arg2 ;
-(void)cleanupAndProcessExistingFiles;
-(void)registerForApplicationLifecycleEvents;
-(void)fabricSettingsDidBecomeAvailable:(id)arg1 ;
-(void)initializeSettingsIfNeededWithFabricSettings:(id)arg1 ;
-(void)applicationLifecycleEvent:(id)arg1 ;
-(void)removeAllLogs;
-(void)setupFlushTimer;
-(ANSUploader *)uploader;
-(void)uploadAllMultipartFiles;
-(void)flushTimerFired;
-(NSURL *)currentLogURL;
-(BOOL)shouldSubmitLogAtURL:(id)arg1 ;
-(void)rotateAndSubmitCurrentLog;
-(id)crashMetadataPathForRootDirectory:(id)arg1 ;
-(BOOL)shouldLogEvent;
-(ANSCrashMetadata *)previousExecutionMetadata;
-(void)logEventToFirebase:(id)arg1 ;
-(ANSFirebaseAnalyticsBridge *)firebaseAnalyticsBridge;
-(id)operationsForUncompressedLog:(id)arg1 ;
-(id)multipartMimeURLWithBoundary:(id)arg1 ;
-(id)uploadOperationForFileAtURL:(id)arg1 withBoundary:(id)arg2 ;
-(id)operationsForCompressedLog:(id)arg1 ;
-(void)uploadMultipartFiles:(id)arg1 ;
-(id)boundaryFromURL:(id)arg1 ;
-(ANSNetworkRetryHandler *)networkRetryHandler;
-(ANSTimer *)flushTimer;
-(ANSSettings *)settings;
-(NSOperationQueue *)eventQueue;
-(ANSMetadata *)metadata;
-(void)logEvent:(id)arg1 ;
-(void)enqueueEvent:(id)arg1 ;
-(ANSEventFilter *)eventFilter;
@end

