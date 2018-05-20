/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCLagunaEventListener.h>

@protocol SCLagunaLibraryLogger;
@class SCWeakTimer, NSDate, SCLagunaDevice, NSString;

@interface SCSpectaclesTransferProgressMonitor : NSObject <SCLagunaEventListener> {

	SCWeakTimer* _uptimeTimer;
	NSDate* _timerStartDate;
	double _cumulativeWatchdogUptime;
	long long _failureCount;
	SCLagunaDevice* _device;
	id<SCLagunaLibraryLogger> _analyticsLogger;

}

@property (nonatomic,retain) SCWeakTimer * uptimeTimer;                                     //@synthesize uptimeTimer=_uptimeTimer - In the implementation block
@property (nonatomic,retain) NSDate * timerStartDate;                                       //@synthesize timerStartDate=_timerStartDate - In the implementation block
@property (assign,nonatomic) double cumulativeWatchdogUptime;                               //@synthesize cumulativeWatchdogUptime=_cumulativeWatchdogUptime - In the implementation block
@property (assign,nonatomic) long long failureCount;                                        //@synthesize failureCount=_failureCount - In the implementation block
@property (assign,nonatomic,__weak) SCLagunaDevice * device;                                //@synthesize device=_device - In the implementation block
@property (assign,nonatomic,__weak) id<SCLagunaLibraryLogger> analyticsLogger;              //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 announcer:(id)arg2 analyticsLogger:(id)arg3 ;
-(void)lagunaOnTransferUpdate:(id)arg1 updateType:(unsigned long long)arg2 ;
-(id<SCLagunaLibraryLogger>)analyticsLogger;
-(void)lagunaOnDeviceFirmwareUpdate:(id)arg1 updateType:(unsigned long long)arg2 progress:(float)arg3 ;
-(void)setAnalyticsLogger:(id<SCLagunaLibraryLogger>)arg1 ;
-(void)lagunaOnDeviceStateUpdate:(id)arg1 ;
-(void)setCumulativeWatchdogUptime:(double)arg1 ;
-(SCWeakTimer *)uptimeTimer;
-(void)setUptimeTimer:(SCWeakTimer *)arg1 ;
-(void)_startUptimeWatchdog;
-(double)cumulativeWatchdogUptime;
-(void)_uptimeWatchdogTimedOut;
-(void)_kickUptimeWatchdog;
-(void)_stopUptimeWatchdog;
-(long long)failureCount;
-(void)setFailureCount:(long long)arg1 ;
-(SCLagunaDevice *)device;
-(void)setDevice:(SCLagunaDevice *)arg1 ;
-(NSDate *)timerStartDate;
-(void)setTimerStartDate:(NSDate *)arg1 ;
@end

