/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCRequestTask.h>

@protocol SCNetworkInterceptor;
@class NSMutableArray, NSArray;

@interface SCRequestSuccessFailureTask : SCRequestTask {

	NSMutableArray* _successCallbackQueues;
	NSMutableArray* _failureCallbackQueues;
	NSMutableArray* _successCallbacks;
	NSMutableArray* _failureCallbacks;
	NSArray*<SCNetworkInterceptor> _networkInterceptors;

}
-(void)updateTaskWithTask:(id)arg1 ;
-(/*^block*/id)completeTask;
-(void)_addSuccessQueue:(id)arg1 successBlock:(/*^block*/id)arg2 ;
-(void)_addFailureQueue:(id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(id)initWithRequest:(id)arg1 authenticator:(id)arg2 traceFile:(SCNetworkTraceFileStructRef)arg3 networkInterceptors:(id)arg4 successQueue:(id)arg5 failureQueue:(id)arg6 successBlock:(/*^block*/id)arg7 failureBlock:(/*^block*/id)arg8 ;
-(void)dealloc;
@end

