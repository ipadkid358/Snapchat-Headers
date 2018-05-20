/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/CLSURLSessionDownloadDelegate.h>

@protocol NSURLSessionDelegate, OS_dispatch_queue;
@class NSOperationQueue, NSURLSessionConfiguration, NSMutableSet, NSObject, NSString;

@interface CLSURLSession : NSObject <CLSURLSessionDownloadDelegate> {

	id<NSURLSessionDelegate> _delegate;
	NSOperationQueue* _delegateQueue;
	NSURLSessionConfiguration* _configuration;
	NSMutableSet* _taskSet;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _sessionDescription;

}

@property (nonatomic,retain) NSOperationQueue * delegateQueue;                     //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) id<NSURLSessionDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSURLSessionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSString * sessionDescription;                          //@synthesize sessionDescription=_sessionDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)NSURLSessionShouldBeUsed;
+(id)newDefaultDelegateQueue;
+(id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
+(id)sessionWithConfiguration:(id)arg1 ;
-(void)downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)configureTask:(id)arg1 withRequest:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)shouldInvokeDelegateSelector:(SEL)arg1 forTask:(id)arg2 ;
-(void)removeTaskFromSet:(id)arg1 ;
-(void)task:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)task:(id)arg1 didReceiveData:(id)arg2 ;
-(id)task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)setDelegate:(id<NSURLSessionDelegate>)arg1 ;
-(id<NSURLSessionDelegate>)delegate;
-(void)setConfiguration:(NSURLSessionConfiguration *)arg1 ;
-(NSURLSessionConfiguration *)configuration;
-(NSOperationQueue *)delegateQueue;
-(void)setDelegateQueue:(NSOperationQueue *)arg1 ;
-(id)dataTaskWithRequest:(id)arg1 ;
-(void)invalidateAndCancel;
-(void)finishTasksAndInvalidate;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)downloadTaskWithRequest:(id)arg1 ;
-(void)getTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)downloadTaskWithURL:(id)arg1 ;
-(NSString *)sessionDescription;
-(void)setSessionDescription:(NSString *)arg1 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 ;
-(id)downloadTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

