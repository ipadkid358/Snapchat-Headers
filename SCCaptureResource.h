/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCLensProcessingCore, SCManagedVideoDataSource, SCCaptureFaceDetector, SCManagedSampleBufferDisplayController;
@class FBKVOController, SCManagedCapturerState, SCManagedCaptureDevice, ARSession, SCARImageCapturer, SCManagedCaptureSession, SCManagedDeviceCapacityAnalyzer, SCManagedVideoScanner, SCManagedCapturerListenerAnnouncer, AVCaptureVideoPreviewLayer, SCVideoPreviewGLViewManager, SCManagedStillImageCapturer, SCManagedVideoCapturer, SCQueuePerformer, SCManagedVideoFrameSampler, SCManagedDroppedFramesReporter, SCManagedVideoStreamReporter, SCManagedFrontFlashController, SCManagedVideoCapturerHandler, SCManagedStillImageCapturerHandler, SCManagedDeviceCapacityAnalyzerHandler, SCManagedCaptureDeviceDefaultZoomHandler, SCManagedCaptureDeviceHandler, LSATrackingComponentHandler, SCManagedCapturerARSessionHandler, NSTimer, NSMutableSet, SCSingleFrameStreamCapturer, SCSnapCreationTriggers, NSMutableDictionary, SCManagedCaptureDeviceSubjectAreaHandler, SCBlackCameraNoOutputDetector, SCCaptureSessionFixer, SCBlackCameraDetector;

@interface SCCaptureResource : NSObject {

	FBKVOController* _previewHiddenKVO;
	BOOL _videoRecording;
	BOOL _appInBackground;
	BOOL _stillImageCapturing;
	BOOL _allowsZoom;
	BOOL _notificationRegistered;
	BOOL _isRecreateSessionFixScheduled;
	unsigned long long _status;
	SCManagedCapturerState* _state;
	SCManagedCaptureDevice* _device;
	id<SCLensProcessingCore> _lensProcessingCore;
	ARSession* _arSession;
	SCARImageCapturer* _arImageCapturer;
	SCManagedCaptureSession* _managedSession;
	id<SCManagedVideoDataSource> _videoDataSource;
	SCManagedDeviceCapacityAnalyzer* _deviceCapacityAnalyzer;
	SCManagedVideoScanner* _videoScanner;
	SCManagedCapturerListenerAnnouncer* _announcer;
	AVCaptureVideoPreviewLayer* _videoPreviewLayer;
	SCVideoPreviewGLViewManager* _videoPreviewGLViewManager;
	SCManagedStillImageCapturer* _stillImageCapturer;
	SCManagedVideoCapturer* _videoCapturer;
	SCQueuePerformer* _queuePerformer;
	SCManagedVideoFrameSampler* _videoFrameSampler;
	SCManagedDroppedFramesReporter* _droppedFramesReporter;
	SCManagedVideoStreamReporter* _videoStreamReporter;
	SCManagedFrontFlashController* _frontFlashController;
	SCManagedVideoCapturerHandler* _videoCapturerHandler;
	SCManagedStillImageCapturerHandler* _stillImageCapturerHandler;
	SCManagedDeviceCapacityAnalyzerHandler* _deviceCapacityAnalyzerHandler;
	SCManagedCaptureDeviceDefaultZoomHandler* _deviceZoomHandler;
	SCManagedCaptureDeviceHandler* _captureDeviceHandler;
	id<SCCaptureFaceDetector> _captureFaceDetector;
	FBKVOController* _kvoController;
	LSATrackingComponentHandler* _lsaTrackingComponentHandler;
	SCManagedCapturerARSessionHandler* _arSessionHandler;
	SEL _completeARSessionShutdown;
	SEL _handleAVSessionStatusChange;
	long long _numRetriesFixAVCaptureSessionWithCurrentSession;
	unsigned long long _streamingSequence;
	NSTimer* _livenessTimer;
	NSMutableSet* _tokenSet;
	SCSingleFrameStreamCapturer* _frameCap;
	id<SCManagedSampleBufferDisplayController> _sampleBufferDisplayController;
	SCSnapCreationTriggers* _snapCreationTriggers;
	unsigned long long _numRetriesFixInconsistencyWithCurrentSession;
	NSMutableDictionary* _debugInfoDict;
	SCManagedCaptureDeviceSubjectAreaHandler* _deviceSubjectAreaHandler;
	SEL _sessionRuntimeError;
	SEL _livenessConsistency;
	double _lastFixSessionTimestamp;
	double _lastSessionRuntimeErrorTime;
	SCBlackCameraNoOutputDetector* _blackCameraNoOutputDetector;
	SCCaptureSessionFixer* _captureSessionFixer;
	SCBlackCameraDetector* _blackCameraDetector;

}

@property (assign,nonatomic) unsigned long long status;                                                             //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) SCManagedCapturerState * state;                                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) SCManagedCaptureDevice * device;                                                       //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) id<SCLensProcessingCore> lensProcessingCore;                                           //@synthesize lensProcessingCore=_lensProcessingCore - In the implementation block
@property (nonatomic,retain) ARSession * arSession;                                                                 //@synthesize arSession=_arSession - In the implementation block
@property (nonatomic,retain) SCARImageCapturer * arImageCapturer;                                                   //@synthesize arImageCapturer=_arImageCapturer - In the implementation block
@property (nonatomic,retain) SCManagedCaptureSession * managedSession;                                              //@synthesize managedSession=_managedSession - In the implementation block
@property (nonatomic,retain) id<SCManagedVideoDataSource> videoDataSource;                                          //@synthesize videoDataSource=_videoDataSource - In the implementation block
@property (nonatomic,retain) SCManagedDeviceCapacityAnalyzer * deviceCapacityAnalyzer;                              //@synthesize deviceCapacityAnalyzer=_deviceCapacityAnalyzer - In the implementation block
@property (nonatomic,retain) SCManagedVideoScanner * videoScanner;                                                  //@synthesize videoScanner=_videoScanner - In the implementation block
@property (nonatomic,retain) SCManagedCapturerListenerAnnouncer * announcer;                                        //@synthesize announcer=_announcer - In the implementation block
@property (nonatomic,retain) AVCaptureVideoPreviewLayer * videoPreviewLayer;                                        //@synthesize videoPreviewLayer=_videoPreviewLayer - In the implementation block
@property (nonatomic,retain) SCVideoPreviewGLViewManager * videoPreviewGLViewManager;                               //@synthesize videoPreviewGLViewManager=_videoPreviewGLViewManager - In the implementation block
@property (nonatomic,retain) SCManagedStillImageCapturer * stillImageCapturer;                                      //@synthesize stillImageCapturer=_stillImageCapturer - In the implementation block
@property (nonatomic,retain) SCManagedVideoCapturer * videoCapturer;                                                //@synthesize videoCapturer=_videoCapturer - In the implementation block
@property (nonatomic,retain) SCQueuePerformer * queuePerformer;                                                     //@synthesize queuePerformer=_queuePerformer - In the implementation block
@property (nonatomic,retain) SCManagedVideoFrameSampler * videoFrameSampler;                                        //@synthesize videoFrameSampler=_videoFrameSampler - In the implementation block
@property (nonatomic,retain) SCManagedDroppedFramesReporter * droppedFramesReporter;                                //@synthesize droppedFramesReporter=_droppedFramesReporter - In the implementation block
@property (nonatomic,retain) SCManagedVideoStreamReporter * videoStreamReporter;                                    //@synthesize videoStreamReporter=_videoStreamReporter - In the implementation block
@property (nonatomic,retain) SCManagedFrontFlashController * frontFlashController;                                  //@synthesize frontFlashController=_frontFlashController - In the implementation block
@property (nonatomic,retain) SCManagedVideoCapturerHandler * videoCapturerHandler;                                  //@synthesize videoCapturerHandler=_videoCapturerHandler - In the implementation block
@property (nonatomic,retain) SCManagedStillImageCapturerHandler * stillImageCapturerHandler;                        //@synthesize stillImageCapturerHandler=_stillImageCapturerHandler - In the implementation block
@property (nonatomic,retain) SCManagedDeviceCapacityAnalyzerHandler * deviceCapacityAnalyzerHandler;                //@synthesize deviceCapacityAnalyzerHandler=_deviceCapacityAnalyzerHandler - In the implementation block
@property (nonatomic,retain) SCManagedCaptureDeviceDefaultZoomHandler * deviceZoomHandler;                          //@synthesize deviceZoomHandler=_deviceZoomHandler - In the implementation block
@property (nonatomic,retain) SCManagedCaptureDeviceHandler * captureDeviceHandler;                                  //@synthesize captureDeviceHandler=_captureDeviceHandler - In the implementation block
@property (nonatomic,retain) id<SCCaptureFaceDetector> captureFaceDetector;                                         //@synthesize captureFaceDetector=_captureFaceDetector - In the implementation block
@property (nonatomic,retain) FBKVOController * kvoController;                                                       //@synthesize kvoController=_kvoController - In the implementation block
@property (nonatomic,retain) LSATrackingComponentHandler * lsaTrackingComponentHandler;                             //@synthesize lsaTrackingComponentHandler=_lsaTrackingComponentHandler - In the implementation block
@property (nonatomic,retain) SCManagedCapturerARSessionHandler * arSessionHandler;                                  //@synthesize arSessionHandler=_arSessionHandler - In the implementation block
@property (assign,nonatomic) SEL completeARSessionShutdown;                                                         //@synthesize completeARSessionShutdown=_completeARSessionShutdown - In the implementation block
@property (assign,nonatomic) SEL handleAVSessionStatusChange;                                                       //@synthesize handleAVSessionStatusChange=_handleAVSessionStatusChange - In the implementation block
@property (assign,nonatomic) BOOL videoRecording;                                                                   //@synthesize videoRecording=_videoRecording - In the implementation block
@property (assign,nonatomic) long long numRetriesFixAVCaptureSessionWithCurrentSession;                             //@synthesize numRetriesFixAVCaptureSessionWithCurrentSession=_numRetriesFixAVCaptureSessionWithCurrentSession - In the implementation block
@property (assign,nonatomic) BOOL appInBackground;                                                                  //@synthesize appInBackground=_appInBackground - In the implementation block
@property (assign,nonatomic) unsigned long long streamingSequence;                                                  //@synthesize streamingSequence=_streamingSequence - In the implementation block
@property (assign,nonatomic) BOOL stillImageCapturing;                                                              //@synthesize stillImageCapturing=_stillImageCapturing - In the implementation block
@property (nonatomic,retain) NSTimer * livenessTimer;                                                               //@synthesize livenessTimer=_livenessTimer - In the implementation block
@property (nonatomic,retain) NSMutableSet * tokenSet;                                                               //@synthesize tokenSet=_tokenSet - In the implementation block
@property (nonatomic,retain) SCSingleFrameStreamCapturer * frameCap;                                                //@synthesize frameCap=_frameCap - In the implementation block
@property (nonatomic,retain) id<SCManagedSampleBufferDisplayController> sampleBufferDisplayController;              //@synthesize sampleBufferDisplayController=_sampleBufferDisplayController - In the implementation block
@property (nonatomic,retain) SCSnapCreationTriggers * snapCreationTriggers;                                         //@synthesize snapCreationTriggers=_snapCreationTriggers - In the implementation block
@property (assign,nonatomic) BOOL allowsZoom;                                                                       //@synthesize allowsZoom=_allowsZoom - In the implementation block
@property (assign,nonatomic) unsigned long long numRetriesFixInconsistencyWithCurrentSession;                       //@synthesize numRetriesFixInconsistencyWithCurrentSession=_numRetriesFixInconsistencyWithCurrentSession - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * debugInfoDict;                                                   //@synthesize debugInfoDict=_debugInfoDict - In the implementation block
@property (assign,nonatomic) BOOL notificationRegistered;                                                           //@synthesize notificationRegistered=_notificationRegistered - In the implementation block
@property (nonatomic,retain) SCManagedCaptureDeviceSubjectAreaHandler * deviceSubjectAreaHandler;                   //@synthesize deviceSubjectAreaHandler=_deviceSubjectAreaHandler - In the implementation block
@property (assign,nonatomic) SEL sessionRuntimeError;                                                               //@synthesize sessionRuntimeError=_sessionRuntimeError - In the implementation block
@property (assign,nonatomic) SEL livenessConsistency;                                                               //@synthesize livenessConsistency=_livenessConsistency - In the implementation block
@property (assign,nonatomic) double lastFixSessionTimestamp;                                                        //@synthesize lastFixSessionTimestamp=_lastFixSessionTimestamp - In the implementation block
@property (assign,nonatomic) double lastSessionRuntimeErrorTime;                                                    //@synthesize lastSessionRuntimeErrorTime=_lastSessionRuntimeErrorTime - In the implementation block
@property (assign,nonatomic) BOOL isRecreateSessionFixScheduled;                                                    //@synthesize isRecreateSessionFixScheduled=_isRecreateSessionFixScheduled - In the implementation block
@property (nonatomic,retain) SCBlackCameraNoOutputDetector * blackCameraNoOutputDetector;                           //@synthesize blackCameraNoOutputDetector=_blackCameraNoOutputDetector - In the implementation block
@property (nonatomic,retain) SCCaptureSessionFixer * captureSessionFixer;                                           //@synthesize captureSessionFixer=_captureSessionFixer - In the implementation block
@property (nonatomic,retain) SCBlackCameraDetector * blackCameraDetector;                                           //@synthesize blackCameraDetector=_blackCameraDetector - In the implementation block
-(SCManagedCapturerListenerAnnouncer *)announcer;
-(SCQueuePerformer *)queuePerformer;
-(void)setAnnouncer:(SCManagedCapturerListenerAnnouncer *)arg1 ;
-(void)setQueuePerformer:(SCQueuePerformer *)arg1 ;
-(FBKVOController *)kvoController;
-(void)setKvoController:(FBKVOController *)arg1 ;
-(ARSession *)arSession;
-(id<SCLensProcessingCore>)lensProcessingCore;
-(SCSnapCreationTriggers *)snapCreationTriggers;
-(SCManagedCaptureSession *)managedSession;
-(void)setHandleAVSessionStatusChange:(SEL)arg1 ;
-(void)setSessionRuntimeError:(SEL)arg1 ;
-(void)setLivenessConsistency:(SEL)arg1 ;
-(void)setDeviceSubjectAreaHandler:(SCManagedCaptureDeviceSubjectAreaHandler *)arg1 ;
-(void)setSnapCreationTriggers:(SCSnapCreationTriggers *)arg1 ;
-(BOOL)appInBackground;
-(SCBlackCameraDetector *)blackCameraDetector;
-(BOOL)isRecreateSessionFixScheduled;
-(double)lastFixSessionTimestamp;
-(void)setLastFixSessionTimestamp:(double)arg1 ;
-(long long)numRetriesFixAVCaptureSessionWithCurrentSession;
-(void)setNumRetriesFixAVCaptureSessionWithCurrentSession:(long long)arg1 ;
-(SCManagedStillImageCapturer *)stillImageCapturer;
-(SCBlackCameraNoOutputDetector *)blackCameraNoOutputDetector;
-(void)setSampleBufferDisplayController:(id<SCManagedSampleBufferDisplayController>)arg1 ;
-(SCSingleFrameStreamCapturer *)frameCap;
-(void)setFrameCap:(SCSingleFrameStreamCapturer *)arg1 ;
-(SCManagedVideoCapturer *)videoCapturer;
-(SCManagedVideoFrameSampler *)videoFrameSampler;
-(void)setVideoFrameSampler:(SCManagedVideoFrameSampler *)arg1 ;
-(SCManagedCaptureDeviceHandler *)captureDeviceHandler;
-(SCManagedDroppedFramesReporter *)droppedFramesReporter;
-(SCManagedFrontFlashController *)frontFlashController;
-(SCManagedDeviceCapacityAnalyzer *)deviceCapacityAnalyzer;
-(BOOL)videoRecording;
-(NSMutableDictionary *)debugInfoDict;
-(SCVideoPreviewGLViewManager *)videoPreviewGLViewManager;
-(void)setAllowsZoom:(BOOL)arg1 ;
-(BOOL)allowsZoom;
-(SCManagedCaptureDeviceDefaultZoomHandler *)deviceZoomHandler;
-(NSMutableSet *)tokenSet;
-(void)setAppInBackground:(BOOL)arg1 ;
-(void)setNumRetriesFixInconsistencyWithCurrentSession:(unsigned long long)arg1 ;
-(unsigned long long)numRetriesFixInconsistencyWithCurrentSession;
-(void)setIsRecreateSessionFixScheduled:(BOOL)arg1 ;
-(double)lastSessionRuntimeErrorTime;
-(void)setLastSessionRuntimeErrorTime:(double)arg1 ;
-(SCManagedVideoStreamReporter *)videoStreamReporter;
-(SCManagedVideoScanner *)videoScanner;
-(SCARImageCapturer *)arImageCapturer;
-(void)setArSession:(ARSession *)arg1 ;
-(void)setArImageCapturer:(SCARImageCapturer *)arg1 ;
-(void)setVideoDataSource:(id<SCManagedVideoDataSource>)arg1 ;
-(id<SCManagedSampleBufferDisplayController>)sampleBufferDisplayController;
-(void)setStillImageCapturer:(SCManagedStillImageCapturer *)arg1 ;
-(void)setManagedSession:(SCManagedCaptureSession *)arg1 ;
-(SEL)handleAVSessionStatusChange;
-(SCManagedStillImageCapturerHandler *)stillImageCapturerHandler;
-(void)setVideoRecording:(BOOL)arg1 ;
-(void)setLensProcessingCore:(id<SCLensProcessingCore>)arg1 ;
-(void)setDeviceCapacityAnalyzer:(SCManagedDeviceCapacityAnalyzer *)arg1 ;
-(void)setVideoScanner:(SCManagedVideoScanner *)arg1 ;
-(void)setVideoPreviewGLViewManager:(SCVideoPreviewGLViewManager *)arg1 ;
-(void)setVideoCapturer:(SCManagedVideoCapturer *)arg1 ;
-(void)setDroppedFramesReporter:(SCManagedDroppedFramesReporter *)arg1 ;
-(void)setVideoStreamReporter:(SCManagedVideoStreamReporter *)arg1 ;
-(void)setFrontFlashController:(SCManagedFrontFlashController *)arg1 ;
-(SCManagedVideoCapturerHandler *)videoCapturerHandler;
-(void)setVideoCapturerHandler:(SCManagedVideoCapturerHandler *)arg1 ;
-(void)setStillImageCapturerHandler:(SCManagedStillImageCapturerHandler *)arg1 ;
-(SCManagedDeviceCapacityAnalyzerHandler *)deviceCapacityAnalyzerHandler;
-(void)setDeviceCapacityAnalyzerHandler:(SCManagedDeviceCapacityAnalyzerHandler *)arg1 ;
-(void)setDeviceZoomHandler:(SCManagedCaptureDeviceDefaultZoomHandler *)arg1 ;
-(void)setCaptureDeviceHandler:(SCManagedCaptureDeviceHandler *)arg1 ;
-(id<SCCaptureFaceDetector>)captureFaceDetector;
-(void)setCaptureFaceDetector:(id<SCCaptureFaceDetector>)arg1 ;
-(LSATrackingComponentHandler *)lsaTrackingComponentHandler;
-(void)setLsaTrackingComponentHandler:(LSATrackingComponentHandler *)arg1 ;
-(SCManagedCapturerARSessionHandler *)arSessionHandler;
-(void)setArSessionHandler:(SCManagedCapturerARSessionHandler *)arg1 ;
-(SEL)completeARSessionShutdown;
-(void)setCompleteARSessionShutdown:(SEL)arg1 ;
-(unsigned long long)streamingSequence;
-(void)setStreamingSequence:(unsigned long long)arg1 ;
-(BOOL)stillImageCapturing;
-(void)setStillImageCapturing:(BOOL)arg1 ;
-(NSTimer *)livenessTimer;
-(void)setLivenessTimer:(NSTimer *)arg1 ;
-(void)setTokenSet:(NSMutableSet *)arg1 ;
-(void)setDebugInfoDict:(NSMutableDictionary *)arg1 ;
-(BOOL)notificationRegistered;
-(void)setNotificationRegistered:(BOOL)arg1 ;
-(SCManagedCaptureDeviceSubjectAreaHandler *)deviceSubjectAreaHandler;
-(SEL)sessionRuntimeError;
-(SEL)livenessConsistency;
-(void)setBlackCameraNoOutputDetector:(SCBlackCameraNoOutputDetector *)arg1 ;
-(SCCaptureSessionFixer *)captureSessionFixer;
-(void)setCaptureSessionFixer:(SCCaptureSessionFixer *)arg1 ;
-(void)setBlackCameraDetector:(SCBlackCameraDetector *)arg1 ;
-(SCManagedCapturerState *)state;
-(void)setState:(SCManagedCapturerState *)arg1 ;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(id<SCManagedVideoDataSource>)videoDataSource;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
-(void)setVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
-(SCManagedCaptureDevice *)device;
-(void)setDevice:(SCManagedCaptureDevice *)arg1 ;
@end

