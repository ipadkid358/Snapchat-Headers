/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCLensTestSessionProtocol.h>

@protocol SCPerforming;
@class SCLens, SCRunningStatistics, SCGCDTimer, LSAEffectComponent, NSURL, NSString;

@interface SCUITestRunningLensTestSession : NSObject <SCLensTestSessionProtocol> {

	SCLens* _activeLens;
	SCRunningStatistics* _fpsStatistics;
	SCRunningStatistics* _processingTimeStatistics;
	long long _usedRam;
	double _previousLensTotalMemoryUsage;
	double _currentLensMemoryUsage;
	SCGCDTimer* _updateScenariumMemoryUsageTimer;
	LSAEffectComponent* _effectComponent;
	id<SCPerforming> _performer;
	NSURL* _reportingRootUrl;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)frameRateCounter:(id)arg1 didUpdateLensFrameProcessingInfo:(SCD_Struct_SC564)arg2 ;
-(void)lensEffectActivator:(id)arg1 didStartApplyingLens:(id)arg2 atTime:(double)arg3 ;
-(void)lensEffectActivator:(id)arg1 didSuccessfullyApplyLensAtTime:(double)arg2 ;
-(void)lensEffectActivator:(id)arg1 didFailToApplyLensAtTime:(double)arg2 ;
-(id)initEffectComponent:(id)arg1 ;
-(id)_prepareReportingRootUrl;
-(void)updateMemoryUsage;
-(void)_logCurrent;
-(void)updateScenariumLensMemoryUsage;
-(id)deviceClassString;
-(void)fire;
@end

