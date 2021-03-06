/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol CLSNetworkClientDelegate;
@class NSURLSession, NSOperationQueue, FABCertificatePinner, CLSFileManager, NSString;

@interface CLSNetworkClient : NSObject <NSURLSessionDelegate> {

	NSURLSession* _session;
	BOOL _canUseBackgroundSession;
	id<CLSNetworkClientDelegate> _delegate;
	NSOperationQueue* _operationQueue;
	FABCertificatePinner* _certPinner;
	/*^block*/id _backgroundCompletionHandler;
	CLSFileManager* _fileManager;

}

@property (nonatomic,readonly) FABCertificatePinner * certPinner;                       //@synthesize certPinner=_certPinner - In the implementation block
@property (nonatomic,copy) id backgroundCompletionHandler;                              //@synthesize backgroundCompletionHandler=_backgroundCompletionHandler - In the implementation block
@property (nonatomic,readonly) NSURLSession * session; 
@property (assign,nonatomic) BOOL canUseBackgroundSession;                              //@synthesize canUseBackgroundSession=_canUseBackgroundSession - In the implementation block
@property (nonatomic,retain) CLSFileManager * fileManager;                              //@synthesize fileManager=_fileManager - In the implementation block
@property (assign,nonatomic,__weak) id<CLSNetworkClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                       //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) BOOL supportsBackgroundRequests; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pinner;
-(id)initWithQueue:(id)arg1 fileManager:(id)arg2 delegate:(id)arg3 ;
-(void)attemptToReconnectBackgroundSessionWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)supportsBackgroundRequests;
-(void)startUploadRequest:(id)arg1 filePath:(id)arg2 immediately:(BOOL)arg3 ;
-(void)setCanUseBackgroundSession:(BOOL)arg1 ;
-(BOOL)NSURLSessionAvailable;
-(BOOL)canUseBackgroundSession;
-(void)startImmediateUploadRequest:(id)arg1 filePath:(id)arg2 ;
-(id)relativeTaskPathForAbsolutePath:(id)arg1 ;
-(void)startNewUploadRequest:(id)arg1 filePath:(id)arg2 ;
-(void)checkForExistingTaskMatchingDescription:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)handleTaskDescription:(id)arg1 completedWithError:(id)arg2 ;
-(BOOL)taskArray:(id)arg1 hasTaskMatchingDescription:(id)arg2 ;
-(void)checkSession:(id)arg1 forTasksMatchingDescription:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)absolutePathForRelativeTaskPath:(id)arg1 ;
-(void)runAfterRetryValueFromResponse:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)backgroundCompletionHandler;
-(void)setBackgroundCompletionHandler:(id)arg1 ;
-(void)restartTask:(id)arg1 ;
-(void)handleTask:(id)arg1 completedWithError:(id)arg2 ;
-(FABCertificatePinner *)certPinner;
-(void)setDelegate:(id<CLSNetworkClientDelegate>)arg1 ;
-(id<CLSNetworkClientDelegate>)delegate;
-(NSOperationQueue *)operationQueue;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)setFileManager:(CLSFileManager *)arg1 ;
-(id)rootPath;
-(NSURLSession *)session;
-(CLSFileManager *)fileManager;
@end

