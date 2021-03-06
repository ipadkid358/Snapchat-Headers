/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSObject;

@interface SCBatteryHistory : NSObject {

	NSMutableDictionary* _trackingCount;
	double _lastSampleTime;
	int _networkEventOccurred;
	int _diskEventOccurred;
	int _locationEventOccurred;
	NSObject* _eventLock;
	/*^block*/id _cpuUsageListener;

}

@property (nonatomic,copy) id cpuUsageListener;              //@synthesize cpuUsageListener=_cpuUsageListener - In the implementation block
-(id)cpuUsageListener;
-(BOOL)_readyForNewSample;
-(void)_updateTrackingCount:(id)arg1 to:(BOOL)arg2 ;
-(int)_encodedCpuUsage;
-(void)_updateBitsForEvent:(int)arg1 baseName:(id)arg2 numberBits:(int)arg3 ;
-(double)_deltaSinceLastSample;
-(void)_visualize;
-(void)addPerformanceEvent:(id)arg1 ;
-(void)setCpuUsageListener:(id)arg1 ;
-(id)init;
-(void)resume;
-(BOOL)addSample:(id)arg1 ;
-(id)collection;
@end

