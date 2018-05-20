/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:25 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCQueuePerformer, NSMutableDictionary;

@interface SCCoreCameraLogger : NSObject {

	SCQueuePerformer* _performer;
	NSMutableDictionary* _cameraCreationDelayParameters;
	NSMutableDictionary* _cameraCreationDelaySplits;

}
+(id)sharedInstance;
-(void)logCameraCreationDelaySplitPointStillImageCaptureApi:(id)arg1 ;
-(void)logCameraCreationDelaySplitPointPreCaptureOperationFinishedAt:(double)arg1 ;
-(void)logCameraCreationDelaySplitPointPreCaptureOperationRequested;
-(void)logCameraCreationDelaySplitPointCameraCaptureContentReady;
-(void)logCameraCreationDelayEventStartWithCaptureSessionId:(id)arg1 filterLensId:(id)arg2 underLowLightCondition:(BOOL)arg3 isNightModeActive:(BOOL)arg4 isBackCamera:(BOOL)arg5 isMainCamera:(BOOL)arg6 ;
-(void)cancelCameraCreationDelayEvent;
-(void)logCameraCreationDelaySplitPointRecordingGestureFinished;
-(void)updatedCameraCreationDelayWithContentDuration:(double)arg1 ;
-(void)_addSplitPointForKey:(id)arg1 atTime:(double)arg2 ;
-(void)_completeLogCameraCreationDelayEventWithIsImage:(BOOL)arg1 atTime:(double)arg2 ;
-(void)_logCameraCreationDelayBlizzardEvent;
-(void)logCameraCreationDelaySplitPointPreviewFinishedPreparation;
-(void)logCameraCreationDelaySplitPointPreviewDisplayedForImage:(BOOL)arg1 ;
-(void)logCameraCreationDelaySplitPointPreviewAnimationComplete:(BOOL)arg1 ;
-(void)logCameraCreationDelaySplitPointPreviewFirstFramePlayed:(BOOL)arg1 ;
-(id)init;
@end
