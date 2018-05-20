/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSMutableArray, NSObject, NSURL;

@interface SCPingSession : NSObject {

	NSMutableArray* _pingResultsList;
	NSObject*<OS_dispatch_source> _pingSessionTimer;
	int _numberOfPingResponseReceived;
	BOOL _sessionEnded;
	BOOL _isSessionTimedout;
	double _sessionStartTime;
	/*^block*/id _completionBlock;
	NSURL* _pingURL;

}

@property (nonatomic,readonly) NSURL * pingURL;              //@synthesize pingURL=_pingURL - In the implementation block
-(id)_createSessionTimerWithInterval:(double)arg1 ;
-(void)_pingUsingDownloadSession;
-(id)_pingSessionPerformer;
-(void)_periodicPing;
-(void)_completeAndTeardownSession;
-(id)getPingResults;
-(NSURL *)pingURL;
-(void)_updatePingResult:(id)arg1 WithTotalLatency:(long long)arg2 responseSize:(long long)arg3 ;
-(id)initWithPingURL:(id)arg1 PingInterval:(double)arg2 ;
-(void)endSessionWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)getPingResultsJSONString;
@end
