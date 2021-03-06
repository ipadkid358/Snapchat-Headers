/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaLayerViewController.h>

@protocol SCOperaTimerLayerView;
@class UIView, CADisplayLink;

@interface SCOperaTimerLayerViewController : SCOperaLayerViewController {

	UIView*<SCOperaTimerLayerView> _layerView;
	CADisplayLink* _timerDisplayLink;
	double _lastDisplayLinkTimestamp;
	BOOL _didStartCountingDownBeforePaused;
	BOOL _pausedForAttachment;

}
-(void)viewDidFullyAppear;
-(void)viewDidFullyDisappear;
-(void)setPausedForAttachment:(BOOL)arg1 ;
-(BOOL)isPausedForAttachment;
-(void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2 ;
-(void)didReceiveUpdateProperties:(id)arg1 ;
-(id)shareableMedia;
-(void)_setTimerVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_cleanupTimerDisplayLink;
-(void)_updateLayerViewWithTimeleft:(double)arg1 ;
-(void)_setupTimerDisplayLink;
-(void)_configureLayerView;
-(void)_setInitialViewTimerValue;
-(void)_timerDisplayLinkDidFire;
-(void)stop;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)start;
-(void)resume;
-(void)pause;
@end

