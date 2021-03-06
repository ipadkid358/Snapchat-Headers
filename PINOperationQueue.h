/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;
#import <Snapchat/Snapchat-Structs.h>
@class NSObject, NSMutableOrderedSet, NSMapTable;

@interface PINOperationQueue : NSObject {

	opaque_pthread_mutex_t _lock;
	unsigned long long _operationReferenceCount;
	unsigned long long _maxConcurrentOperations;
	NSObject*<OS_dispatch_group> _group;
	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _serialQueueBusy;
	NSObject*<OS_dispatch_semaphore> _concurrentSemaphore;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	NSObject*<OS_dispatch_queue> _semaphoreQueue;
	NSMutableOrderedSet* _queuedOperations;
	NSMutableOrderedSet* _lowPriorityOperations;
	NSMutableOrderedSet* _defaultPriorityOperations;
	NSMutableOrderedSet* _highPriorityOperations;
	NSMapTable* _referenceToOperations;
	NSMapTable* _identifierToOperations;

}

@property (assign) unsigned long long maxConcurrentOperations; 
+(id)sharedOperationQueue;
-(id)initWithMaxConcurrentOperations:(unsigned long long)arg1 ;
-(id)addOperation:(/*^block*/id)arg1 withPriority:(unsigned long long)arg2 identifier:(id)arg3 coalescingData:(id)arg4 dataCoalescingBlock:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(id)initWithMaxConcurrentOperations:(unsigned long long)arg1 concurrentQueue:(id)arg2 ;
-(id)nextOperationReference;
-(void)locked_addOperation:(id)arg1 ;
-(void)scheduleNextOperations:(BOOL)arg1 ;
-(id)operationQueueWithPriority:(unsigned long long)arg1 ;
-(BOOL)locked_cancelOperation:(id)arg1 ;
-(id)locked_nextOperationByQueue;
-(id)locked_nextOperationByPriority;
-(void)locked_removeOperation:(id)arg1 ;
-(unsigned long long)maxConcurrentOperations;
-(void)setMaxConcurrentOperations:(unsigned long long)arg1 ;
-(void)setOperationPriority:(unsigned long long)arg1 withReference:(id)arg2 ;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(id)addOperation:(/*^block*/id)arg1 ;
-(void)cancelAllOperations;
-(void)waitUntilAllOperationsAreFinished;
-(BOOL)cancelOperation:(id)arg1 ;
-(id)addOperation:(/*^block*/id)arg1 withPriority:(unsigned long long)arg2 ;
@end

