/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol ANSUploaderDelegate;
@class NSURLSession, NSOperationQueue, NSString;

@interface ANSUploader : NSObject <NSURLSessionDelegate> {

	NSURLSession* _session;
	id<ANSUploaderDelegate> _delegate;
	double _defaultUploadTimeout;
	double _lowPowerUploadTimeout;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) NSOperationQueue * operationQueue;                  //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) BOOL lowPowerMode; 
@property (assign,nonatomic,__weak) id<ANSUploaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL supportsBackgroundRequests; 
@property (assign,nonatomic) double defaultUploadTimeout;                          //@synthesize defaultUploadTimeout=_defaultUploadTimeout - In the implementation block
@property (assign,nonatomic) double lowPowerUploadTimeout;                         //@synthesize lowPowerUploadTimeout=_lowPowerUploadTimeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)attemptToReconnectBackgroundSessionWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)supportsBackgroundRequests;
-(void)checkForExistingTaskMatchingDescription:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)handleTaskDescription:(id)arg1 completedWithError:(id)arg2 ;
-(BOOL)taskArray:(id)arg1 hasTaskMatchingDescription:(id)arg2 ;
-(void)checkSession:(id)arg1 forTasksMatchingDescription:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)restartTask:(id)arg1 ;
-(void)handleTask:(id)arg1 completedWithError:(id)arg2 ;
-(double)defaultUploadTimeout;
-(double)lowPowerUploadTimeout;
-(BOOL)supportsPowerStateNotifications;
-(void)powerStageChanged:(id)arg1 ;
-(BOOL)shouldUseBackgroundRequests;
-(Class)urlSessionConfigurationClass;
-(BOOL)lowPowerMode;
-(id)createBackgroundSessionConfiguration;
-(Class)urlSessionClass;
-(void)startNewUploadRequest:(id)arg1 filePath:(id)arg2 uniqueName:(id)arg3 ;
-(id)errorUserInfoWithFilePath:(id)arg1 uniqueName:(id)arg2 ;
-(void)startUploadRequest:(id)arg1 filePath:(id)arg2 uniqueName:(id)arg3 ;
-(void)setDefaultUploadTimeout:(double)arg1 ;
-(void)setLowPowerUploadTimeout:(double)arg1 ;
-(void)setDelegate:(id<ANSUploaderDelegate>)arg1 ;
-(id<ANSUploaderDelegate>)delegate;
-(NSOperationQueue *)operationQueue;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)initWithQueue:(id)arg1 delegate:(id)arg2 ;
-(id)errorWithCode:(long long)arg1 userInfo:(id)arg2 ;
-(id)session;
@end

