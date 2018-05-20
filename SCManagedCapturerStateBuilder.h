/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCManagedCapturerStateBuilder : NSObject {

	BOOL _isRunning;
	BOOL _isNightModeActive;
	BOOL _isPortraitModeActive;
	BOOL _lowLightCondition;
	BOOL _adjustingExposure;
	unsigned long long _devicePosition;
	double _zoomFactor;
	BOOL _flashSupported;
	BOOL _torchSupported;
	BOOL _flashActive;
	BOOL _torchActive;
	BOOL _lensesActive;
	BOOL _arSessionActive;
	BOOL _liveVideoStreaming;
	BOOL _lensProcessorReady;

}
+(id)withManagedCapturerState:(id)arg1 ;
-(id)setLensesActive:(BOOL)arg1 ;
-(id)setDevicePosition:(unsigned long long)arg1 ;
-(id)setIsNightModeActive:(BOOL)arg1 ;
-(id)setLowLightCondition:(BOOL)arg1 ;
-(id)setAdjustingExposure:(BOOL)arg1 ;
-(id)setFlashSupported:(BOOL)arg1 ;
-(id)setTorchSupported:(BOOL)arg1 ;
-(id)setFlashActive:(BOOL)arg1 ;
-(id)setTorchActive:(BOOL)arg1 ;
-(id)setArSessionActive:(BOOL)arg1 ;
-(id)setLiveVideoStreaming:(BOOL)arg1 ;
-(id)setIsPortraitModeActive:(BOOL)arg1 ;
-(id)setLensProcessorReady:(BOOL)arg1 ;
-(id)setIsRunning:(BOOL)arg1 ;
-(id)build;
-(id)setZoomFactor:(double)arg1 ;
@end
