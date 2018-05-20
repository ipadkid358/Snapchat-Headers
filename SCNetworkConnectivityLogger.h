/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCConcurrentPerforming, OS_dispatch_source;
@class SCQueueWithCapacity, NSString, NSObject;

@interface SCNetworkConnectivityLogger : NSObject {

	SCQueueWithCapacity* _connectivityLogs;
	id<SCConcurrentPerforming> _loggerPerformer;
	NSString* _currentWifiSSID;
	NSObject*<OS_dispatch_source> _wifiSSIDUpdateTimer;
	double _lastNetworkStatusChangedTimeStamp;

}

@property (readonly) double lastNetworkStatusChangedTimeStamp;              //@synthesize lastNetworkStatusChangedTimeStamp=_lastNetworkStatusChangedTimeStamp - In the implementation block
+(id)sharedInstance;
-(void)networkConnectivityDidChange:(id)arg1 ;
-(void)_startScanWifiSSID;
-(void)_stopScanWifiSSID;
-(id)_createSessionTimerWithInterval:(double)arg1 queue:(id)arg2 ;
-(void)_updateWifiSSID;
-(id)connectivityReportWithStartTime:(double)arg1 endTime:(double)arg2 ;
-(id)getCurrentWifiSSID;
-(double)lastNetworkStatusChangedTimeStamp;
-(id)init;
-(void)dealloc;
@end

