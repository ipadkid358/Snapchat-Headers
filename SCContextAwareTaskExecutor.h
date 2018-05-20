/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface SCContextAwareTaskExecutor : NSObject {

	unsigned long long _executorStatus;
	NSObject*<OS_dispatch_queue> _concurrentExecutionQueue;

}
-(void)perform:(/*^block*/id)arg1 after:(double)arg2 queue:(id)arg3 ;
-(void)perform:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)performAndWait:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)reset;
-(void)suspend;
-(id)initWithAppContext:(long long)arg1 ;
@end
