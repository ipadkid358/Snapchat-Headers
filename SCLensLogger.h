/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCLensSession, SCSessionRequestManager, SCFeatureSettingsManager, SCUserSession, NSString, SCLensAnalyticsDataStore, SCLens, NSMutableDictionary, SCLensFpsLogger, SCLensReadyLogger, SCLensThumbnailLogger, SCUnlockableLensTracker;

@interface SCLensLogger : NSObject {

	SCLensSession* _lensSession;
	SCSessionRequestManager* _requestManager;
	SCFeatureSettingsManager* _featureSettingsManager;
	SCUserSession* _userSession;
	BOOL _isCapturing;
	unsigned long long _lensSessionState;
	BOOL _frontCameraActive;
	BOOL _withAttachmentOpen;
	unsigned long long _frontCameraSnapFacesCount;
	unsigned long long _backCameraSnapFacesCount;
	NSString* _topSnapAdRequestId;
	NSString* _topSnapAdId;
	long long _snapSource;
	NSString* _snappableSessionId;
	unsigned long long _lensCount;
	long long _currentLensIndex;
	SCLensAnalyticsDataStore* _lensAnalyticsDataStore;
	NSString* _lensSessionId;
	double _startViewingTime;
	double _cameraStartViewingTime;
	double _startRecordingTime;
	double _spinStartTime;
	SCLens* _currentViewingLens;
	SCLens* _currentSpinningLens;
	double _startViewingTimeLensOption;
	unsigned long long _lensOptionCount;
	long long _currentLensOptionIndex;
	NSString* _currentLensOptionId;
	long long _lensOptionSwipeCount;
	NSMutableDictionary* _triggerFiredForCurrentLens;
	unsigned long long _frontCameraMaxFacesCount;
	unsigned long long _backCameraMaxFacesCount;
	SCLensFpsLogger* _lensFpsLogger;
	SCLensReadyLogger* _lensReadyLogger;
	SCLensThumbnailLogger* _lensThumbnailLogger;

}

@property (nonatomic,copy) NSString * lensSessionId;                                           //@synthesize lensSessionId=_lensSessionId - In the implementation block
@property (assign,nonatomic) double startViewingTime;                                          //@synthesize startViewingTime=_startViewingTime - In the implementation block
@property (assign,nonatomic) double cameraStartViewingTime;                                    //@synthesize cameraStartViewingTime=_cameraStartViewingTime - In the implementation block
@property (assign,nonatomic) double startRecordingTime;                                        //@synthesize startRecordingTime=_startRecordingTime - In the implementation block
@property (assign,nonatomic) double spinStartTime;                                             //@synthesize spinStartTime=_spinStartTime - In the implementation block
@property (nonatomic,retain) SCLens * currentViewingLens;                                      //@synthesize currentViewingLens=_currentViewingLens - In the implementation block
@property (nonatomic,retain) SCLens * currentSpinningLens;                                     //@synthesize currentSpinningLens=_currentSpinningLens - In the implementation block
@property (assign,nonatomic) BOOL withAttachmentOpen;                                          //@synthesize withAttachmentOpen=_withAttachmentOpen - In the implementation block
@property (assign,nonatomic) unsigned long long lensCount;                                     //@synthesize lensCount=_lensCount - In the implementation block
@property (assign,nonatomic) long long currentLensIndex;                                       //@synthesize currentLensIndex=_currentLensIndex - In the implementation block
@property (assign,nonatomic) double startViewingTimeLensOption;                                //@synthesize startViewingTimeLensOption=_startViewingTimeLensOption - In the implementation block
@property (assign,nonatomic) unsigned long long lensOptionCount;                               //@synthesize lensOptionCount=_lensOptionCount - In the implementation block
@property (assign,nonatomic) long long currentLensOptionIndex;                                 //@synthesize currentLensOptionIndex=_currentLensOptionIndex - In the implementation block
@property (nonatomic,copy) NSString * currentLensOptionId;                                     //@synthesize currentLensOptionId=_currentLensOptionId - In the implementation block
@property (assign,nonatomic) long long lensOptionSwipeCount;                                   //@synthesize lensOptionSwipeCount=_lensOptionSwipeCount - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * triggerFiredForCurrentLens;                 //@synthesize triggerFiredForCurrentLens=_triggerFiredForCurrentLens - In the implementation block
@property (assign,nonatomic) unsigned long long frontCameraMaxFacesCount;                      //@synthesize frontCameraMaxFacesCount=_frontCameraMaxFacesCount - In the implementation block
@property (assign,nonatomic) unsigned long long backCameraMaxFacesCount;                       //@synthesize backCameraMaxFacesCount=_backCameraMaxFacesCount - In the implementation block
@property (assign,nonatomic) unsigned long long frontCameraSnapFacesCount;                     //@synthesize frontCameraSnapFacesCount=_frontCameraSnapFacesCount - In the implementation block
@property (assign,nonatomic) unsigned long long backCameraSnapFacesCount;                      //@synthesize backCameraSnapFacesCount=_backCameraSnapFacesCount - In the implementation block
@property (nonatomic,retain) SCLensFpsLogger * lensFpsLogger;                                  //@synthesize lensFpsLogger=_lensFpsLogger - In the implementation block
@property (nonatomic,retain) SCLensReadyLogger * lensReadyLogger;                              //@synthesize lensReadyLogger=_lensReadyLogger - In the implementation block
@property (nonatomic,retain) SCLensThumbnailLogger * lensThumbnailLogger;                      //@synthesize lensThumbnailLogger=_lensThumbnailLogger - In the implementation block
@property (nonatomic,retain) NSString * topSnapAdRequestId;                                    //@synthesize topSnapAdRequestId=_topSnapAdRequestId - In the implementation block
@property (nonatomic,retain) NSString * topSnapAdId;                                           //@synthesize topSnapAdId=_topSnapAdId - In the implementation block
@property (assign,nonatomic) long long snapSource;                                             //@synthesize snapSource=_snapSource - In the implementation block
@property (assign,nonatomic) BOOL frontCameraActive;                                           //@synthesize frontCameraActive=_frontCameraActive - In the implementation block
@property (nonatomic,readonly) long long lensSource; 
@property (nonatomic,readonly) SCUnlockableLensTracker * unlockableLensTracker; 
@property (nonatomic,retain) NSString * snappableSessionId;                                    //@synthesize snappableSessionId=_snappableSessionId - In the implementation block
@property (nonatomic,readonly) SCLensAnalyticsDataStore * lensAnalyticsDataStore;              //@synthesize lensAnalyticsDataStore=_lensAnalyticsDataStore - In the implementation block
@property (nonatomic,readonly) BOOL isLensSessionPaused; 
-(void)setLensSessionId:(NSString *)arg1 ;
-(BOOL)withAttachmentOpen;
-(void)setWithAttachmentOpen:(BOOL)arg1 ;
-(NSString *)lensSessionId;
-(void)setSnapSource:(long long)arg1 ;
-(long long)snapSource;
-(long long)lensSource;
-(void)setLensOptionSwipeCount:(long long)arg1 ;
-(long long)lensOptionSwipeCount;
-(void)setSnappableSessionId:(NSString *)arg1 ;
-(NSString *)snappableSessionId;
-(void)setTopSnapAdId:(NSString *)arg1 ;
-(void)setTopSnapAdRequestId:(NSString *)arg1 ;
-(void)recordingStarted;
-(void)cameraToggledWithAction:(long long)arg1 recording:(BOOL)arg2 ;
-(void)recordingStopped;
-(void)setFrontCameraActive:(BOOL)arg1 ;
-(unsigned long long)frontCameraSnapFacesCount;
-(unsigned long long)backCameraSnapFacesCount;
-(long long)currentLensIndex;
-(unsigned long long)lensCount;
-(void)openAttachmentView;
-(SCUnlockableLensTracker *)unlockableLensTracker;
-(void)trackLensInteraction:(id)arg1 appliedLensId:(id)arg2 beforeSnap:(BOOL)arg3 ;
-(void)lensOptionPresentedAtIndex:(long long)arg1 lensOptionId:(id)arg2 lensOptionCount:(unsigned long long)arg3 ;
-(SCLensReadyLogger *)lensReadyLogger;
-(void)lensSessionStopped;
-(void)lensSessionStartedForSourceType:(long long)arg1 ;
-(void)lensSessionResumed;
-(BOOL)isLensSessionPaused;
-(void)lensSessionPaused;
-(SCLensThumbnailLogger *)lensThumbnailLogger;
-(void)triggerFired:(id)arg1 ;
-(void)faceCountChanged:(unsigned long long)arg1 ;
-(void)lensPresented:(id)arg1 atIndex:(unsigned long long)arg2 originalLensIndex:(unsigned long long)arg3 count:(unsigned long long)arg4 afterRecording:(BOOL)arg5 ;
-(void)lensSpinning:(id)arg1 atIndex:(unsigned long long)arg2 originalLensIndex:(unsigned long long)arg3 count:(unsigned long long)arg4 ;
-(void)setLensFpsLogger:(SCLensFpsLogger *)arg1 ;
-(SCLensFpsLogger *)lensFpsLogger;
-(SCLensAnalyticsDataStore *)lensAnalyticsDataStore;
-(void)lensSessionStartedWithSessionId:(id)arg1 sourceType:(long long)arg2 ;
-(void)logCustomLensEventsFor:(id)arg1 eventsArray:(id)arg2 ;
-(void)setTriggerFiredForCurrentLens:(NSMutableDictionary *)arg1 ;
-(void)setCurrentLensOptionIndex:(long long)arg1 ;
-(void)setCurrentLensOptionId:(NSString *)arg1 ;
-(void)setBackCameraMaxFacesCount:(unsigned long long)arg1 ;
-(void)setFrontCameraMaxFacesCount:(unsigned long long)arg1 ;
-(void)setFrontCameraSnapFacesCount:(unsigned long long)arg1 ;
-(void)setBackCameraSnapFacesCount:(unsigned long long)arg1 ;
-(SCLens *)currentSpinningLens;
-(id)_fillLensSwipeEvent:(id)arg1 lensSourceType:(long long)arg2 lens:(id)arg3 lensSwipeOptionCount:(long long)arg4 isGeoEvent:(BOOL)arg5 indexPos:(long long)arg6 snapSource:(long long)arg7 ;
-(double)spinStartTime;
-(void)setCurrentSpinningLens:(SCLens *)arg1 ;
-(void)setSpinStartTime:(double)arg1 ;
-(void)setLensCount:(unsigned long long)arg1 ;
-(SCLens *)currentViewingLens;
-(void)lensOptionSessionStopped;
-(void)logLensSwipeEvent:(long long)arg1 afterRecording:(BOOL)arg2 ;
-(long long)_currentCameraType;
-(void)_logCameraFlipEvent:(long long)arg1 isRecording:(BOOL)arg2 action:(long long)arg3 sourceType:(long long)arg4 ;
-(void)setStartViewingTime:(double)arg1 ;
-(void)setCameraStartViewingTime:(double)arg1 ;
-(void)setCurrentViewingLens:(SCLens *)arg1 ;
-(void)setCurrentLensIndex:(long long)arg1 ;
-(long long)_getLensAttachmentType:(id)arg1 ;
-(NSString *)topSnapAdId;
-(NSString *)topSnapAdRequestId;
-(unsigned long long)backCameraMaxFacesCount;
-(unsigned long long)frontCameraMaxFacesCount;
-(NSMutableDictionary *)triggerFiredForCurrentLens;
-(double)cameraStartViewingTime;
-(double)startRecordingTime;
-(double)startViewingTime;
-(BOOL)frontCameraActive;
-(void)setStartRecordingTime:(double)arg1 ;
-(NSString *)currentLensOptionId;
-(unsigned long long)lensOptionCount;
-(long long)currentLensOptionIndex;
-(double)startViewingTimeLensOption;
-(void)setStartViewingTimeLensOption:(double)arg1 ;
-(void)setLensOptionCount:(unsigned long long)arg1 ;
-(id)initWithRequestManager:(id)arg1 featureSettingsManager:(id)arg2 userPrefernces:(id)arg3 gallerySavingLogger:(id)arg4 snapLogger:(id)arg5 storyUsageLogger:(id)arg6 userSession:(id)arg7 ;
-(void)closeAttachmentView;
-(void)setLensReadyLogger:(SCLensReadyLogger *)arg1 ;
-(void)setLensThumbnailLogger:(SCLensThumbnailLogger *)arg1 ;
@end

