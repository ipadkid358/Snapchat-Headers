/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCConcurrentPerforming;
@class SCLinearFilter;

@interface SCTimeoutIntervalEstimator : NSObject {

	double _defaultTimeoutInterval;
	SCLinearFilter* _RTTEstimator;
	SCLinearFilter* _DevEstimator;
	id<SCConcurrentPerforming> _performer;
	double _timeoutInterval;
	unsigned long long _sampleCount;
	double _filterCoefficient;

}

@property (nonatomic,readonly) unsigned long long sampleCount;              //@synthesize sampleCount=_sampleCount - In the implementation block
@property (nonatomic,readonly) double timeoutInterval;                      //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,readonly) double networkRTT; 
@property (nonatomic,readonly) double filterCoefficient;                    //@synthesize filterCoefficient=_filterCoefficient - In the implementation block
@property (nonatomic,readonly) BOOL isUnderestimate; 
-(BOOL)isUnderestimate;
-(void)filterOnNewRTTSample:(double)arg1 ;
-(double)networkRTT;
-(id)initWithDefaultTimeoutInterval:(double)arg1 ;
-(id)init;
-(unsigned long long)sampleCount;
-(double)timeoutInterval;
-(double)filterCoefficient;
@end
