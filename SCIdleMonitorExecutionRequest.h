/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface SCIdleMonitorExecutionRequest : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _callbackBlock;
	BOOL _isMainThread;
	const char* _tag;

}

@property (nonatomic,readonly) BOOL isMainThread;              //@synthesize isMainThread=_isMainThread - In the implementation block
@property (nonatomic,readonly) const char* tag;                //@synthesize tag=_tag - In the implementation block
-(id)initWithCallbackQueue:(id)arg1 callbackBlock:(/*^block*/id)arg2 tag:(const char*)arg3 isMainThread:(BOOL)arg4 ;
-(BOOL)isMainThread;
-(const char*)tag;
-(void)perform;
@end

