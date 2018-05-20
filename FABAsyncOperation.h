/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSRecursiveLock;

@interface FABAsyncOperation : NSOperation {

	BOOL _internalExecuting;
	BOOL _internalFinished;
	/*^block*/id _asyncCompletion;
	NSRecursiveLock* _lock;

}

@property (nonatomic,retain) NSRecursiveLock * lock;              //@synthesize lock=_lock - In the implementation block
@property (nonatomic,copy) id asyncCompletion;                    //@synthesize asyncCompletion=_asyncCompletion - In the implementation block
-(BOOL)checkForCancellation;
-(void)markStarted;
-(void)markDone;
-(void)changeValueForKey:(id)arg1 inBlock:(/*^block*/id)arg2 ;
-(void)unlockedMarkStarted;
-(void)lock:(/*^block*/id)arg1 ;
-(void)unlockedMarkComplete;
-(void)unlockedMarkFinished;
-(id)asyncCompletion;
-(void)setAsyncCompletion:(id)arg1 ;
-(id)init;
-(NSRecursiveLock *)lock;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(BOOL)isConcurrent;
-(void)finishWithError:(id)arg1 ;
-(void)setLock:(NSRecursiveLock *)arg1 ;
@end

