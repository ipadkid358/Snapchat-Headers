/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Snapchat/SCTimeProfilable.h>
#import <Snapchat/SCLagunaEventListener.h>
#import <Snapchat/SCManagedDeviceCapacityAnalyzerListener.h>
#import <Snapchat/SCLagunaAppStatusListener.h>
#import <Snapchat/TTTAttributedLabelDelegate.h>
#import <Snapchat/InformationSettingsViewDelegate.h>
#import <Snapchat/SCLagunaDeviceNameEditingViewDelegate.h>

@protocol SCLagunaPairingDelegate, SCLagunaAppLogger;
@class SCCapturerToken, UIView, SCLagunaSnapcodeView, UIImageView, UILabel, TTTAttributedLabel, SCLagunaDeviceNameEditingView, SCButton, SCLoadingIndicatorView, UIButton, SCUserSession, NSString, NSDate, NSUUID, SCSpectaclesPairingDeviceInformation, NSTimer, Sound, UIPanGestureRecognizer;

@interface SCLagunaPairingViewController : UIViewController <SCTimeProfilable, SCLagunaEventListener, SCManagedDeviceCapacityAnalyzerListener, SCLagunaAppStatusListener, TTTAttributedLabelDelegate, InformationSettingsViewDelegate, SCLagunaDeviceNameEditingViewDelegate> {

	SCCapturerToken* _managedCapturerToken;
	UIView* _snapcodePlaceholder;
	SCLagunaSnapcodeView* _snapcodeView;
	UIImageView* _backupPairingHelperView;
	UIImageView* _connectingImageView;
	UILabel* _pairingStatusLabel;
	UILabel* _pairingSubMessageLabel;
	UILabel* _needHelpLabel;
	UILabel* _brightnessLabel;
	TTTAttributedLabel* _tosLabel;
	SCLagunaDeviceNameEditingView* _namingView;
	UILabel* _cancelPairingLabel;
	SCButton* _namingButton;
	SCLoadingIndicatorView* _pairingLoadingIndicator;
	BOOL _viewHasAppearedBefore;
	BOOL _isViewingTermsOfService;
	BOOL _isViewingInformationPage;
	BOOL _seenPairingInactiveAlert;
	UIImageView* _pairingSuccessfulImageView;
	UIButton* _cancelButton;
	long long _samplingCounter;
	double _previousBrightness;
	double _lastAdaptiveBrightness;
	double _targetBrightness;
	BOOL _didLookingHintAppear;
	unsigned long long _currentIndicatorPos;
	unsigned long long _currentStatusLabelPos;
	unsigned long long _currentSubMsgLabelPos;
	SCUserSession* _userSession;
	BOOL _isBluetoothPowerOff;
	double _screenRatio;
	NSString* _pairingDeviceName;
	NSDate* _pairingStartTime;
	NSUUID* _pairingSessionId;
	unsigned long long _pairingSource;
	long long _numRetries;
	SCSpectaclesPairingDeviceInformation* _pairingDeviceInformation;
	unsigned long long _backupPairingStartReason;
	id<SCLagunaPairingDelegate> _delegate;
	unsigned long long _state;
	BOOL _isManualMode;
	NSTimer* _lookingSnapcodeTimeoutTimer;
	NSTimer* _lookingHintTimer;
	NSTimer* _pairingTimeoutTimer;
	NSTimer* _backupPairingTimeoutTimer;
	NSTimer* _brightnessTimer;
	double _pageStartTimestamp;
	long long _currentPageName;
	id<SCLagunaAppLogger> _analyticsLogger;
	BOOL _pairingSessionEnded;
	Sound* _scanSound;
	Sound* _pushSound;
	BOOL _lookingManualHapticFeedbackSent;
	UIPanGestureRecognizer* _panGestureRecognizer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_pairingStateDescription:(unsigned long long)arg1 ;
+(void)_successFeedbackOrVibrate;
+(void)_showAlertWithDescription:(id)arg1 actions:(id)arg2 ;
+(int)context;
-(void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2 ;
-(void)lagunaOnPairingStateUpdate:(unsigned long long)arg1 deviceInformation:(id)arg2 ;
-(id)_specsConnectionInfo;
-(void)lagunaOnDevicePaired:(id)arg1 ;
-(void)statusCoordinatorBluetoothTurnedOn:(id)arg1 ;
-(void)statusCoordinatorBluetoothTurnedOff:(id)arg1 ;
-(void)dismissInformationSettingsView:(id)arg1 ;
-(void)managedDeviceCapacityAnalyzer:(id)arg1 didChangeBrightness:(float)arg2 ;
-(void)_logPairingStarted;
-(void)_initCancelButton;
-(void)_initSnapcodeView;
-(void)_initNeedHelpLabel;
-(void)_pairManually;
-(void)namingButtonPressed;
-(void)lookingHintTimeout;
-(void)lookingSnapcodeTimeout;
-(void)lookingBackupPairingStateTimeout;
-(void)_cancelPairingTimeoutTimer;
-(void)pairingStateTimeout:(id)arg1 ;
-(id)pairingStatusLabel;
-(void)_tapNeedHelp;
-(void)_cleanUpTimers;
-(void)_pushViewControllerWithUrl:(id)arg1 ;
-(id)_currentPairingSessionInfo;
-(id)connectingImageView;
-(id)pairingSubMessageLabel;
-(void)_resetScreenBrightnessIfNecessary;
-(void)_startLookingHintTimer;
-(void)_startLookingSnapcodeTimer;
-(void)_updateConnectingImageView:(BOOL)arg1 ;
-(void)_logPairingSnapcodeRecognized;
-(void)_logPairingSuccess:(id)arg1 ;
-(void)_refreshViewForAlreadyPaired;
-(void)_refreshViewForPreviouslyPairedDeviceInAlertFlow:(id)arg1 ;
-(void)_logPairingFailure:(unsigned long long)arg1 ;
-(void)_refreshViewForPairingFailure:(unsigned long long)arg1 ;
-(void)_refreshViewForDetectOverload;
-(void)_refreshViewForWrongiPhoneVersion;
-(void)_refreshViewForPairingCanceled:(unsigned long long)arg1 inAlertFlow:(id)arg2 cancellationSource:(unsigned long long)arg3 ;
-(void)_refreshViewForBTSelectorFailure;
-(void)_updatePairingLoadingIndicator:(BOOL)arg1 pos:(unsigned long long)arg2 ;
-(void)_updatePairingStatusLabel:(id)arg1 pos:(unsigned long long)arg2 ;
-(void)_updatePairingSubMessageLabel:(id)arg1 pos:(unsigned long long)arg2 ;
-(id)brightnessLabel;
-(void)_updateBackupPairingHelperView:(BOOL)arg1 ;
-(void)_updatePairingSuccessfulImageView:(BOOL)arg1 ;
-(void)_updateCurrentPage:(long long)arg1 ;
-(void)_logPairingBleDetected;
-(void)_updateNamingViews:(BOOL)arg1 ;
-(void)_updateViewColors;
-(void)_startLookingBackupPairingTimer;
-(void)_startPairingTimeoutTimer;
-(void)_stopBrightnessAdjust;
-(void)brightnessAnimate;
-(void)_dismissPage;
-(void)_handlePairingFailure:(unsigned long long)arg1 ;
-(void)pairRetryButtonPressed;
-(id)_getCancelButton:(unsigned long long)arg1 ;
-(id)_pairingFailureDescription:(id)arg1 ;
-(void)_logPairingCancellation:(unsigned long long)arg1 ;
-(void)resumeButtonPressed;
-(void)resumePairingFromBluetoothPickerPressed;
-(void)_updatePairingStatusLabelPosition:(unsigned long long)arg1 ;
-(void)_updatePairingSubMessagePosition:(unsigned long long)arg1 ;
-(id)pairingLoadingIndicator;
-(void)_updatePairingLoadingIndicatorPosition:(unsigned long long)arg1 ;
-(id)pairingSuccessfulImageView;
-(void)_setScreenBrightnessGently:(double)arg1 ;
-(id)backupPairingHelperView;
-(void)_initNamingViews;
-(void)_cancelSearchAndGenerateNewSnapcode;
-(void)_logPairingTosViewed;
-(void)_resumeSnapcodePairingFromNonSnapcode;
-(void)_updateSnapcodeBrightness:(float)arg1 ;
-(void)_refreshViewForNameTooShortInAlertFlow:(id)arg1 ;
-(BOOL)_deviceNameExisted:(id)arg1 ;
-(void)_refreshViewForNameExisted:(id)arg1 inAlertFlow:(id)arg2 ;
-(void)_showInactiveAlertView;
-(id)initWithUserSession:(id)arg1 delegate:(id)arg2 source:(unsigned long long)arg3 ;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)textViewShouldReturn:(id)arg1 ;
-(void)_transitionToState:(unsigned long long)arg1 ;
-(void)cancelButtonPressed;
@end

