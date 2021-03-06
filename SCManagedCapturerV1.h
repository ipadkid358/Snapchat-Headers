/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCCapturer.h>
#import <Snapchat/SCTimeProfilable.h>

@class SCCaptureResource, NSString;

@interface SCManagedCapturerV1 : NSObject <SCCapturer, SCTimeProfilable> {

	SCCaptureResource* _captureResource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(int)context;
-(void)mediaServicesWereLost;
-(id)startRunningAsynchronouslyWithCompletionHandler:(/*^block*/id)arg1 context:(id)arg2 ;
-(void)setLensesActive:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 context:(id)arg3 ;
-(void)recreateAVCaptureSession;
-(void)setFlashActive:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 context:(id)arg3 ;
-(void)addTimedTask:(id)arg1 context:(id)arg2 ;
-(void)continuousAutofocusAndExposureAsynchronouslyWithCompletionHandler:(/*^block*/id)arg1 context:(id)arg2 ;
-(void)convertViewCoordinates:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2 context:(id)arg3 ;
-(void)setAutofocusPointOfInterestAsynchronously:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2 context:(id)arg3 ;
-(void)setExposurePointOfInterestAsynchronously:(CGPoint)arg1 fromUser:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 context:(id)arg4 ;
-(void)setPortraitModePointOfInterestAsynchronously:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2 context:(id)arg3 ;
-(id)captureResource;
-(id)lensProcessingCore;
-(void)captureStillImageAsynchronouslyWithAspectRatio:(double)arg1 captureSessionID:(id)arg2 completionHandler:(/*^block*/id)arg3 context:(id)arg4 ;
-(void)startScanAsynchronouslyWithScanConfiguration:(id)arg1 context:(id)arg2 ;
-(void)stopScanAsynchronouslyWithCompletionHandler:(/*^block*/id)arg1 context:(id)arg2 ;
-(id)snapCreationTriggers;
-(void)startStreamingAsynchronouslyWithCompletionHandler:(/*^block*/id)arg1 context:(id)arg2 ;
-(void)addSampleBufferDisplayController:(id)arg1 context:(id)arg2 ;
-(void)detectLensCategoryOnNextFrame:(CGPoint)arg1 lenses:(id)arg2 completion:(/*^block*/id)arg3 context:(id)arg4 ;
-(void)setDevicePositionAsynchronously:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 context:(id)arg3 ;
-(void)setLensesActive:(BOOL)arg1 filterFactory:(id)arg2 completionHandler:(/*^block*/id)arg3 context:(id)arg4 ;
-(void)setLensesInTalkActive:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 context:(id)arg3 ;
-(void)setTorchActiveAsynchronously:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 context:(id)arg3 ;
-(void)setNightModeActiveAsynchronously:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 context:(id)arg3 ;
-(void)lockZoomWithContext:(id)arg1 ;
-(void)unlockZoomWithContext:(id)arg1 ;
-(void)setZoomFactorAsynchronously:(double)arg1 context:(id)arg2 ;
-(void)resetZoomFactorAsynchronously:(double)arg1 devicePosition:(unsigned long long)arg2 context:(id)arg3 ;
-(void)mediaServicesWereReset;
-(void)addVideoDataSourceListener:(id)arg1 ;
-(void)removeVideoDataSourceListener:(id)arg1 ;
-(void)addDeviceCapacityAnalyzerListener:(id)arg1 ;
-(void)removeDeviceCapacityAnalyzerListener:(id)arg1 ;
-(id)currentVideoDataSource;
-(void)checkRestrictedCamera:(/*^block*/id)arg1 ;
-(SCD_Struct_SC484)activeSession;
-(void)captureSingleVideoFrameAsynchronouslyWithCompletionHandler:(/*^block*/id)arg1 context:(id)arg2 ;
-(void)sampleFrameWithCompletionHandler:(/*^block*/id)arg1 context:(id)arg2 ;
-(void)clearTimedTasksWithContext:(id)arg1 ;
-(SCD_Struct_LS191)firstWrittenAudioBufferDelay;
-(BOOL)audioQueueStarted;
-(BOOL)isLensApplied;
-(void)setupWithDevicePositionAsynchronously:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 context:(id)arg3 ;
-(void)stopRunningAsynchronously:(id)arg1 completionHandler:(/*^block*/id)arg2 context:(id)arg3 ;
-(void)stopRunningAsynchronously:(id)arg1 completionHandler:(/*^block*/id)arg2 after:(double)arg3 context:(id)arg4 ;
-(void)prepareForRecordingAsynchronouslyWithContext:(id)arg1 ;
-(void)startRecordingAsynchronouslyWithOutputSettings:(id)arg1 maxDuration:(double)arg2 fileURL:(id)arg3 captureSessionID:(id)arg4 completionHandler:(/*^block*/id)arg5 context:(id)arg6 ;
-(void)stopRecordingAsynchronouslyWithContext:(id)arg1 ;
-(void)cancelRecordingAsynchronouslyWithContext:(id)arg1 ;
-(BOOL)stopRunningWithCaptureToken:(id)arg1 completionHandler:(/*^block*/id)arg2 context:(id)arg3 ;
-(void)setupWithDevicePosition:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleAVSessionStatusChange:(id)arg1 ;
-(void)_sessionRuntimeError:(id)arg1 ;
-(void)_livenessConsistency:(id)arg1 ;
-(void)_startRunningWithNewCaptureSessionIfNecessary;
-(void)_fixAVSessionIfNecessary;
-(void)_fixNonMetalSessionPreviewInconsistency;
-(void)_updateHRSIEnabled;
-(void)_updateStillImageStabilizationEnabled;
-(BOOL)_shouldCaptureImageFromVideo;
-(void)_setNightModeActive:(BOOL)arg1 ;
-(void)_logFailureSetDevicePositionFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 reason:(id)arg3 ;
-(void)_setLensesActive:(BOOL)arg1 liveVideoStreaming:(BOOL)arg2 filterFactory:(id)arg3 completionHandler:(/*^block*/id)arg4 context:(id)arg5 ;
-(void)_setLiveVideoStreaming:(BOOL)arg1 ;
-(void)_setBlackCameraNoOutputDetectorEnabled:(BOOL)arg1 ;
-(void)_toggleSoftwareNightmode:(BOOL)arg1 ;
-(void)_runningConsistencyCheckAndFix;
-(void)_pauseCaptureSessionKVOCheck;
-(void)_resumeCaptureSessionKVOCheck;
-(void)_runningARSessionConsistencyCheckAndFix;
-(void)_runningAVCaptureSessionConsistencyCheckAndFix;
-(void)_startRunningWithNewCaptureSession;
-(void)_resetAVCaptureSession;
-(void)_setupNewVideoFileDataSource;
-(void)_setupNewVideoDataSource;
-(void)_setupVideoDataSourceWithNewSession;
-(void)_setupVideoDataSourceListeners;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(id)initWithResource:(id)arg1 ;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(BOOL)isVideoMirrored;
-(id)debugInfo;
@end

