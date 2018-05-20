/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCOperaLayerViewController.h>
#import <Snapchat/SCOperaWSVideoLayerViewDelegate.h>
#import <Snapchat/SCMomentsSyncManagerDelegate.h>
#import <Snapchat/SCOperaWSVideoEndViewDelegate.h>
#import <Snapchat/SCOperaLayerViewControllerMediaContainer.h>

@class SCOperaWSVideoLayerView, FBKVOController, SCStopwatch, NSDate, SCMomentsSyncManager, NSString;

@interface SCOperaWSVideoLayerViewController : SCOperaLayerViewController <SCOperaWSVideoLayerViewDelegate, SCMomentsSyncManagerDelegate, SCOperaWSVideoEndViewDelegate, SCOperaLayerViewControllerMediaContainer> {

	SCOperaWSVideoLayerView* _layerView;
	long long _virtualOrientation;
	FBKVOController* _kvoController;
	unsigned long long _totalStallCount;
	double _firstStallMediaTime;
	double _firstStallDuration;
	SCStopwatch* _totalStallDurationStopwatch;
	BOOL _syncedWithEndTimeInFutureAtLeastOnce;
	NSDate* _playerTryToStartTime;
	NSDate* _firstPlayerStartTime;
	SCMomentsSyncManager* _momentsSyncManager;
	unsigned long long _latestMediaResolution;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)momentsSyncManagerDidUpdateEndTime:(long long)arg1 ;
-(void)viewDidFullyAppear;
-(void)viewDidFullyDisappear;
-(void)viewWillFullyAppear;
-(CGRect)mediaViewFrame;
-(double)mediaHeightToWidthAspectRatio;
-(void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2 ;
-(void)didReceiveUpdateProperties:(id)arg1 ;
-(id)currentViewParameters;
-(id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3 ;
-(void)rotateBasedOnOrientation;
-(void)wsVideoEndViewDidTapOptIn:(id)arg1 ;
-(void)wsVideoEndViewDidTapCancel:(id)arg1 ;
-(void)wsVideoLayerViewStreamEnded:(id)arg1 ;
-(void)wsVideoLayerView:(id)arg1 didChangeOrientation:(long long)arg2 ;
-(void)wsVideoLayerView:(id)arg1 didEnterFullScreen:(BOOL)arg2 ;
-(void)wsVideoLayerViewIsBuffering:(id)arg1 ;
-(void)wsVideoLayerViewFinishedBuffering:(id)arg1 ;
-(void)_setLoadingImageViewWithImage:(id)arg1 ;
-(void)_updateChromeVisibility:(BOOL)arg1 ;
-(void)_resetPlaybackTracking;
-(void)_observePlayerViewForStreamingIfNecessary:(id)arg1 ;
-(id)_stallTrackingParameters;
-(void)_setTargetOrientation:(long long)arg1 ;
-(id)_mediaResolution;
-(void)_playerDidPlay;
-(void)_saveMediaResolution:(id)arg1 ;
-(void)_playerDidStall:(id)arg1 ;
-(void)_playerDidResume:(id)arg1 ;
-(void)loadView;
-(void)teardown;
-(BOOL)isOverlay;
@end

