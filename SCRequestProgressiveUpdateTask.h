/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCRequestTask.h>

@protocol OS_dispatch_queue, SCNetworkInterceptor;
@class NSObject, NSArray;

@interface SCRequestProgressiveUpdateTask : SCRequestTask {

	NSObject*<OS_dispatch_queue> _progressiveUpdateQueue;
	/*^block*/id _progressiveUpdateBlock;
	NSArray*<SCNetworkInterceptor> _networkInterceptors;

}
-(id)initWithRequest:(id)arg1 authenticator:(id)arg2 traceFile:(SCNetworkTraceFileStructRef)arg3 networkInterceptors:(id)arg4 progressiveUpdateQueue:(id)arg5 progressiveUpdateBlock:(/*^block*/id)arg6 ;
-(void)updateTaskWithTask:(id)arg1 ;
-(void)progressiveUpdate;
-(BOOL)shouldRetryRequestWithError:(id)arg1 response:(id)arg2 ;
-(/*^block*/id)completeTask;
@end
