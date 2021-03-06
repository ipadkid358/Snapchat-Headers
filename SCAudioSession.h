/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCPerforming;
@class NSNotificationCenter, UIDevice, NSMutableSet, NSArray, AVAudioSessionRouteDescription, SCAudioSessionListenerAnnouncer, FBKVOController, NSString, MPVolumeView, UISlider, AVAudioSessionDataSourceDescription;

@interface SCAudioSession : NSObject {

	id<SCPerforming> _performer;
	NSNotificationCenter* _notificationCenter;
	UIDevice* _device;
	NSMutableSet* _playbackTokens;
	NSMutableSet* _recordTokens;
	NSMutableSet* _callingTokens;
	NSMutableSet* _callKitTokens;
	NSMutableSet* _proximityRoutingTokens;
	NSArray* _tokenSets;
	AVAudioSessionRouteDescription* _curRoute;
	BOOL _secretFeatureOn;
	BOOL _ignoreVolumeChangeFromSettingBounds;
	BOOL _proximityState;
	BOOL _appBackgroundedWhenCallKitRequested;
	SCAudioSessionListenerAnnouncer* _announcer;
	FBKVOController* _kvoController;
	NSString* _secretToken;
	unsigned long long _interruptionState;
	double _cachedNonMuteVolume;
	BOOL _isOverridingMuteSwitch;
	NSString* _lastRecordingRequestDebugInfo;
	MPVolumeView* _hiddenVolumeView;
	UISlider* _hiddenVolumeSlider;

}

@property (nonatomic,retain) MPVolumeView * hiddenVolumeView;                                       //@synthesize hiddenVolumeView=_hiddenVolumeView - In the implementation block
@property (assign,nonatomic,__weak) UISlider * hiddenVolumeSlider;                                  //@synthesize hiddenVolumeSlider=_hiddenVolumeSlider - In the implementation block
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) unsigned long long categoryOptions; 
@property (nonatomic,readonly) NSString * mode; 
@property (nonatomic,readonly) BOOL secondaryAudioShouldBeSilencedHint; 
@property (nonatomic,readonly) AVAudioSessionRouteDescription * currentRoute; 
@property (nonatomic,readonly) long long maximumInputNumberOfChannels; 
@property (nonatomic,readonly) long long maximumOutputNumberOfChannels; 
@property (nonatomic,readonly) float inputGain; 
@property (nonatomic,readonly) BOOL inputGainSettable; 
@property (nonatomic,readonly) BOOL inputAvailable; 
@property (nonatomic,readonly) NSArray * inputDataSources; 
@property (nonatomic,readonly) AVAudioSessionDataSourceDescription * inputDataSource; 
@property (nonatomic,readonly) NSArray * outputDataSources; 
@property (nonatomic,readonly) AVAudioSessionDataSourceDescription * outputDataSource; 
@property (nonatomic,readonly) double sampleRate; 
@property (nonatomic,readonly) double preferredSampleRate; 
@property (nonatomic,readonly) long long inputNumberOfChannels; 
@property (nonatomic,readonly) long long outputNumberOfChannels; 
@property (assign,nonatomic) float outputVolume; 
@property (nonatomic,readonly) double inputLatency; 
@property (nonatomic,readonly) double outputLatency; 
@property (nonatomic,readonly) double IOBufferDuration; 
@property (nonatomic,readonly) double preferredIOBufferDuration; 
@property (nonatomic,retain) NSString * lastRecordingRequestDebugInfo;                              //@synthesize lastRecordingRequestDebugInfo=_lastRecordingRequestDebugInfo - In the implementation block
@property (assign,nonatomic) BOOL volumeHUDEnabled; 
+(id)_defaultPerformer;
+(id)sharedInstance;
-(id)initWithPerformer:(id)arg1 notificationCenter:(id)arg2 device:(id)arg3 ;
-(void)updateNonMuteVolume;
-(void)_onAVAudioSessionVolumeChanged:(id)arg1 ;
-(void)_onAVAudioSessionRouteChanged:(id)arg1 ;
-(void)_onAVAudioSessionInterruption:(id)arg1 ;
-(void)_onAVAudioSessionMediaServicesWereLost:(id)arg1 ;
-(void)_onAVAudioSessionMediaServicesWereReset:(id)arg1 ;
-(void)_onAVAudioSessionSilenceSecondaryAudioHintNotification:(id)arg1 ;
-(void)_onUIDeviceProximityStateChanged:(id)arg1 ;
-(void)updateConfigurationIfNeededWithCallbackQueue:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)_updateAVAudioSessionIfNeededWithShouldAutoRetry:(BOOL)arg1 ;
-(id)_performRequestWithLabel:(id)arg1 tokensSet:(id)arg2 tokensSet:(id)arg3 shouldRetryRequest:(BOOL)arg4 callbackQueue:(id)arg5 callback:(/*^block*/id)arg6 ;
-(id)requestRecordingWithLabel:(id)arg1 deactivation:(BOOL)arg2 shouldRetryRequest:(BOOL)arg3 callbackQueue:(id)arg4 callback:(/*^block*/id)arg5 ;
-(void)setLastRecordingRequestDebugInfo:(NSString *)arg1 ;
-(void)debugInfoWithUploadInfoCompletion:(/*^block*/id)arg1 ;
-(id)_performRequestWithLabel:(id)arg1 tokensSet:(id)arg2 tokensSet:(id)arg3 deactivation:(BOOL)arg4 shouldRetryRequest:(BOOL)arg5 callbackQueue:(id)arg6 callback:(/*^block*/id)arg7 ;
-(void)_updateProximityMonitoringStatus;
-(id)generateNewTokenWithLabel:(id)arg1 ;
-(void)updateToken:(id)arg1 configuration:(/*^block*/id)arg2 callbackQueue:(id)arg3 callback:(/*^block*/id)arg4 ;
-(BOOL)_shouldRouteBasedOnProximitySensor;
-(id)_updateAVAudioSessionIfNeededWithDeactivation:(BOOL)arg1 shouldAutoRetry:(BOOL)arg2 ;
-(void)_retryUpdateAVAudioSessionBeforeCallbackWithDeactivation:(BOOL)arg1 numRetries:(long long)arg2 callbackQueue:(id)arg3 callBack:(/*^block*/id)arg4 ;
-(BOOL)_shouldUseCallKitSettings;
-(id)_updateAVAudioSessionCategory:(id)arg1 categoryOptions:(unsigned long long)arg2 mode:(id)arg3 deactivating:(BOOL)arg4 activating:(BOOL)arg5 shouldAutoRetry:(BOOL)arg6 ;
-(BOOL)_shouldUseCallingSettings;
-(BOOL)_shouldUseRecordingSettings;
-(BOOL)_shouldUsePlaybackSettings;
-(id)_builtInMicPort;
-(BOOL)_isCategorySilencedByMuteSwitch:(id)arg1 ;
-(BOOL)userUsingHeadphones;
-(void)_setBounds;
-(MPVolumeView *)hiddenVolumeView;
-(UISlider *)hiddenVolumeSlider;
-(BOOL)noSoundCheckAudioSessionIsNil;
-(void)updateConfigurationIfNeeded;
-(id)requestPlaybackWithLabel:(id)arg1 shouldRetryRequest:(BOOL)arg2 callbackQueue:(id)arg3 callback:(/*^block*/id)arg4 ;
-(id)requestRecordingWithLabel:(id)arg1 shouldRetryRequest:(BOOL)arg2 callbackQueue:(id)arg3 callback:(/*^block*/id)arg4 ;
-(id)requestProximityRoutingWithLabel:(id)arg1 shouldRetryRequest:(BOOL)arg2 callbackQueue:(id)arg3 callback:(/*^block*/id)arg4 ;
-(id)requestPlaybackRoutingWithLabel:(id)arg1 shouldRetryRequest:(BOOL)arg2 callbackQueue:(id)arg3 callback:(/*^block*/id)arg4 ;
-(id)requestRecordingRoutingWithLabel:(id)arg1 shouldRetryRequest:(BOOL)arg2 callbackQueue:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)releaseToken:(id)arg1 callbackQueue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)requestConfiguration:(/*^block*/id)arg1 label:(id)arg2 callbackQueue:(id)arg3 callback:(/*^block*/id)arg4 ;
-(id)playbackTokens;
-(id)recordTokens;
-(id)callingTokens;
-(id)callKitTokens;
-(id)proximityRoutingTokens;
-(id)tokenSets;
-(void)setAppBackgrounded:(BOOL)arg1 ;
-(void)toggleMuteWithCompletion:(/*^block*/id)arg1 ;
-(id)selectedDataSourceName;
-(id)tryUseFrontMicWithErrorCode:(long long)arg1 ;
-(void)setIsOverridingMuteSwitch:(BOOL)arg1 ;
-(void)checkStatusWithCallbackQueue:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)checkIsPlayingSoundWithCompletion:(/*^block*/id)arg1 ;
-(id)outputPortTypes;
-(void)setVolumeHUDEnabled:(BOOL)arg1 ;
-(BOOL)volumeHUDEnabled;
-(BOOL)inputGainSettable;
-(NSString *)lastRecordingRequestDebugInfo;
-(void)setHiddenVolumeView:(MPVolumeView *)arg1 ;
-(void)setHiddenVolumeSlider:(UISlider *)arg1 ;
-(id)_humanReadableCategoryOptions:(unsigned long long)arg1 ;
-(id)debugInfoCurrentRoutes;
-(id)formatRoute:(id)arg1 printAllDataSource:(BOOL)arg2 ;
-(void)debugInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)currentAudioStateWithCompletion:(/*^block*/id)arg1 ;
-(long long)outputNumberOfChannels;
-(void)dealloc;
-(NSString *)category;
-(NSString *)mode;
-(double)sampleRate;
-(long long)inputNumberOfChannels;
-(BOOL)setPreferredIOBufferDuration:(double)arg1 error:(id*)arg2 ;
-(double)preferredIOBufferDuration;
-(AVAudioSessionRouteDescription *)currentRoute;
-(BOOL)isPlayingSound;
-(id)session;
-(double)IOBufferDuration;
-(BOOL)inputAvailable;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(NSArray *)outputDataSources;
-(void)setOutputVolume:(float)arg1 ;
-(float)outputVolume;
-(double)outputLatency;
-(BOOL)setPreferredSampleRate:(double)arg1 error:(id*)arg2 ;
-(double)inputLatency;
-(double)preferredSampleRate;
-(unsigned long long)categoryOptions;
-(unsigned long long)recordPermission;
-(void)requestRecordPermission:(/*^block*/id)arg1 ;
-(BOOL)setPreferredInputNumberOfChannels:(long long)arg1 error:(id*)arg2 ;
-(BOOL)setInputGain:(float)arg1 error:(id*)arg2 ;
-(BOOL)setInputDataSource:(id)arg1 error:(id*)arg2 ;
-(BOOL)setOutputDataSource:(id)arg1 error:(id*)arg2 ;
-(float)inputGain;
-(NSArray *)inputDataSources;
-(AVAudioSessionDataSourceDescription *)inputDataSource;
-(AVAudioSessionDataSourceDescription *)outputDataSource;
-(BOOL)isOtherAudioPlaying;
-(BOOL)secondaryAudioShouldBeSilencedHint;
-(long long)maximumInputNumberOfChannels;
-(long long)maximumOutputNumberOfChannels;
-(BOOL)overrideOutputAudioPort:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)setPreferredInput:(id)arg1 error:(id*)arg2 ;
-(BOOL)setPreferredOutputNumberOfChannels:(long long)arg1 error:(id*)arg2 ;
-(void)_applicationDidBecomeActive;
@end

