/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:14 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSObject, SCQueuePerformer, NSMutableArray, NSMutableSet, SCImageProcessContext;

@interface SCImageProcessQueue : NSObject {

	NSObject*<OS_dispatch_semaphore> _requestSemaphore;
	SCQueuePerformer* _performer;
	NSMutableArray* _pendingRequests;
	NSMutableSet* _processingRequests;
	SCImageProcessContext* _context;
	BOOL _GPUAvailable;
	unsigned long long _pending;

}

@property (nonatomic,readonly) unsigned long long pending;              //@synthesize pending=_pending - In the implementation block
+(id)sharedQueue;
-(id)queueDebugInfo;
-(void)startSuspendOpenGLOperations;
-(void)resumeOpenGLOperations;
-(void)waitUntilOpenGLOperationsHalted;
-(void)_scheduleNewRequestForProcessing:(id)arg1 ;
-(void)_scheduleOnQueue:(id)arg1 ;
-(id)_queueDebugInfo;
-(void)_executeRequest:(id)arg1 ;
-(unsigned long long)processingRequestIdentifier;
-(id)init;
-(void)dealloc;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)addRequest:(id)arg1 ;
-(unsigned long long)pending;
-(void)_applicationDidReceiveMemoryWarning:(id)arg1 ;
@end
