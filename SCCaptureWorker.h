/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:25 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@interface SCCaptureWorker : NSObject
+(void)turnARSessionOn:(id)arg1 ;
+(BOOL)canRunARSession:(id)arg1 ;
+(void)clearARKitData:(id)arg1 ;
+(void)turnARSessionOff:(id)arg1 ;
+(SCD_Struct_SC484)activeSession:(id)arg1 ;
+(SCD_Struct_LS191)firstWrittenAudioBufferDelay:(id)arg1 ;
+(BOOL)audioQueueStarted:(id)arg1 ;
+(BOOL)isLensApplied:(id)arg1 ;
+(BOOL)isVideoMirrored:(id)arg1 ;
+(BOOL)shouldCaptureImageFromVideoWithResource:(id)arg1 ;
+(void)captureStillImageWithCaptureResource:(id)arg1 aspectRatio:(double)arg2 captureSessionID:(id)arg3 shouldCaptureFromVideo:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 context:(id)arg6 ;
+(void)cancelRecordingWithCaptureResource:(id)arg1 ;
+(void)startRunningWithCaptureResource:(id)arg1 token:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)startRecordingWithCaptureResource:(id)arg1 outputSettings:(id)arg2 maxDuration:(double)arg3 fileURL:(id)arg4 captureSessionID:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
+(void)stopRecordingWithCaptureResource:(id)arg1 ;
+(void)startScanWithScanConfiguration:(id)arg1 resource:(id)arg2 ;
+(void)prepareForRecordingWithResource:(id)arg1 ;
+(void)stopScanWithCompletionHandler:(/*^block*/id)arg1 resource:(id)arg2 ;
+(void)setupCapturePreviewLayerController;
+(void)setPortraitModePointOfInterestAsynchronously:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2 resource:(id)arg3 ;
+(id)generateCaptureResource;
+(void)setupVideoPreviewLayer:(id)arg1 ;
+(void)setupWithCaptureResource:(id)arg1 devicePosition:(unsigned long long)arg2 ;
+(void)updateLensesFieldOfViewTracking:(id)arg1 ;
+(void)makeVideoPreviewLayer:(id)arg1 ;
+(BOOL)stopRunningWithCaptureResource:(id)arg1 token:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)startStreaming:(id)arg1 ;
+(void)softwareZoomWithDevice:(id)arg1 resource:(id)arg2 ;
+(void)destroyLivenessConsistencyTimer:(id)arg1 ;
+(void)setupLivenessConsistencyTimerIfForeground:(id)arg1 ;
+(void)redoVideoPreviewLayer:(id)arg1 ;
+(void)configLensesProcessorWithCaptureResource:(id)arg1 ;
+(void)configARSessionWithCaptureResource:(id)arg1 ;
+(void)configCaptureDeviceHandlerWithCaptureResource:(id)arg1 ;
+(void)configAVCaptureSessionWithCaptureResource:(id)arg1 ;
+(void)configImageCapturerWithCaptureResource:(id)arg1 ;
+(void)configDeviceCapacityAnalyzerWithCaptureResource:(id)arg1 ;
+(void)configVideoDataSourceWithCaptureResource:(id)arg1 devicePosition:(unsigned long long)arg2 ;
+(void)configVideoScannerWithCaptureResource:(id)arg1 ;
+(void)configVideoCapturerWithCaptureResource:(id)arg1 ;
+(void)configBlackCameraDetectorWithCaptureResource:(id)arg1 ;
+(void)configureCaptureFaceDetectorWithCaptureResource:(id)arg1 ;
+(void)_captureStillImageAsynchronouslyWithCaptureResource:(id)arg1 aspectRatio:(double)arg2 captureSessionID:(id)arg3 shouldCaptureFromVideo:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

