/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCQueuePerformer, SCBlackCameraViewDetector, SCBlackCameraRunningDetector, SCBlackCameraPreviewDetector, SCBlackCameraSessionBlockDetector;

@interface SCBlackCameraDetector : NSObject {

	BOOL _sessionIsRunning;
	BOOL _cameraIsVisible;
	BOOL _previewIsVisible;
	SCQueuePerformer* _queuePerformer;
	SCBlackCameraViewDetector* _cameraViewDetector;
	SCBlackCameraRunningDetector* _sessionRunningDetector;
	SCBlackCameraPreviewDetector* _previewDetector;
	SCBlackCameraSessionBlockDetector* _sessionBlockDetector;

}

@property (nonatomic,retain) SCQueuePerformer * queuePerformer;                                     //@synthesize queuePerformer=_queuePerformer - In the implementation block
@property (nonatomic,retain) SCBlackCameraViewDetector * cameraViewDetector;                        //@synthesize cameraViewDetector=_cameraViewDetector - In the implementation block
@property (nonatomic,retain) SCBlackCameraRunningDetector * sessionRunningDetector;                 //@synthesize sessionRunningDetector=_sessionRunningDetector - In the implementation block
@property (nonatomic,retain) SCBlackCameraPreviewDetector * previewDetector;                        //@synthesize previewDetector=_previewDetector - In the implementation block
@property (nonatomic,retain) SCBlackCameraSessionBlockDetector * sessionBlockDetector;              //@synthesize sessionBlockDetector=_sessionBlockDetector - In the implementation block
+(id)sharedInstance;
-(SCQueuePerformer *)queuePerformer;
-(void)setQueuePerformer:(SCQueuePerformer *)arg1 ;
-(void)onCameraViewVisible:(BOOL)arg1 ;
-(void)onCameraViewVisibleWithTouch:(id)arg1 ;
-(void)sessionWillCallStartRunning;
-(void)sessionDidCallStartRunning;
-(void)sessionWillCallStopRunning;
-(void)sessionDidChangeIsRunning:(BOOL)arg1 ;
-(void)capturePreviewDidBecomeVisible:(BOOL)arg1 ;
-(void)sessionWillCommitConfiguration;
-(void)sessionDidCommitConfiguration;
-(void)sessionWillRecreate;
-(void)sessionDidRecreate;
-(void)sessionDidCallStopRunning;
-(SCBlackCameraViewDetector *)cameraViewDetector;
-(void)setCameraViewDetector:(SCBlackCameraViewDetector *)arg1 ;
-(SCBlackCameraRunningDetector *)sessionRunningDetector;
-(void)setSessionRunningDetector:(SCBlackCameraRunningDetector *)arg1 ;
-(SCBlackCameraPreviewDetector *)previewDetector;
-(void)setPreviewDetector:(SCBlackCameraPreviewDetector *)arg1 ;
-(SCBlackCameraSessionBlockDetector *)sessionBlockDetector;
-(void)setSessionBlockDetector:(SCBlackCameraSessionBlockDetector *)arg1 ;
-(id)init;
@end
