/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCTCameraServices, SCTV3LensesServices;
@class NSString, SCTV3SingleTaskPerformer;

@interface SCTV3CameraManager : NSObject {

	id<SCTCameraServices> _camera;
	id<SCTV3LensesServices> _lenses;
	NSString* _cameraConsumerId;
	unsigned long long _cameraSessionState;
	BOOL _cameraEnabledViaSessionState;
	BOOL _cameraEnabled;
	BOOL _lensesEnabledViaSessionState;
	BOOL _lensesEnabled;
	BOOL _wereLensesEnabledBefore;
	SCTV3SingleTaskPerformer* _performer;

}
-(id)cameraServices;
-(BOOL)isFrontCamera;
-(void)flipCamera;
-(void)_updateCameraStatusWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_needsCameraForSessionState:(id)arg1 ;
-(BOOL)_needsLensesForSessionState:(id)arg1 ;
-(BOOL)_incomingVideoCallForSessionState:(id)arg1 ;
-(void)_updateLensesStatus;
-(id)initWithCameraServices:(id)arg1 lensesServices:(id)arg2 ;
-(void)sessionStateChanged:(id)arg1 ;
-(void)deactivate;
-(void)activate;
-(void)background;
@end

