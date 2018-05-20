/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCOperaLayerViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class SCOperaVolumeControlLayerView, UIPanGestureRecognizer, UITapGestureRecognizer, SCAudioSession, NSString;

@interface SCOperaVolumeControlLayerViewController : SCOperaLayerViewController <UIGestureRecognizerDelegate> {

	SCOperaVolumeControlLayerView* _layerView;
	UIPanGestureRecognizer* _panGesture;
	UITapGestureRecognizer* _tapGesture;
	CGPoint _initialPanPosition;
	double _initialVolume;
	SCAudioSession* _sharedAudioSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidPartiallyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1 ;
-(void)_panGestureHandler:(id)arg1 ;
-(void)_tapGestureHandler:(id)arg1 ;
-(void)_updateSpeakerIcon;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
@end
