/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, SCOperaVideoControlsView, SCLoadingIndicatorView, UIView, SCOperaPlayerView;

@interface SCOperaRemoteVideoView : UIView {

	CGRect _currentBounds;
	UIImageView* _firstFrameImageView;
	SCOperaVideoControlsView* _controlsView;
	SCLoadingIndicatorView* _activityIndicator;
	UIView* _screenshot;
	SCOperaPlayerView* _playerView;

}

@property (nonatomic,retain) UIImageView * firstFrameImageView;                       //@synthesize firstFrameImageView=_firstFrameImageView - In the implementation block
@property (nonatomic,retain) SCOperaVideoControlsView * controlsView;                 //@synthesize controlsView=_controlsView - In the implementation block
@property (nonatomic,retain) SCLoadingIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UIView * screenshot;                                     //@synthesize screenshot=_screenshot - In the implementation block
@property (nonatomic,retain) SCOperaPlayerView * playerView;                          //@synthesize playerView=_playerView - In the implementation block
+(id)viewWithFrame:(CGRect)arg1 primaryColor:(id)arg2 disableControls:(BOOL)arg3 hideControls:(BOOL)arg4 showActionMenuButtonEnabled:(BOOL)arg5 ;
-(SCOperaVideoControlsView *)controlsView;
-(void)setControlsView:(SCOperaVideoControlsView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 primaryColor:(id)arg2 disableControls:(BOOL)arg3 hideControls:(BOOL)arg4 showActionMenuButtonEnabled:(BOOL)arg5 ;
-(void)setupControlsViewWithPrimaryColor:(id)arg1 hideControls:(BOOL)arg2 showActionMenuButtonEnabled:(BOOL)arg3 ;
-(void)setupSpinnerWithPrimaryColor:(id)arg1 ;
-(void)updateWithPrimaryColor:(id)arg1 showActionMenuButtonEnabled:(BOOL)arg2 ;
-(void)setRotateButtonVisible:(BOOL)arg1 ;
-(UIImageView *)firstFrameImageView;
-(void)setFirstFrameImageView:(UIImageView *)arg1 ;
-(void)_updateScreenshotFrame;
-(void)setupFirstFrameView:(id)arg1 ;
-(void)setupScreenshot:(id)arg1 ;
-(void)setupPlayerViewWithPlayerLayer:(id)arg1 layersOwnerView:(id)arg2 ;
-(void)layoutSubviews;
-(SCLoadingIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(SCLoadingIndicatorView *)arg1 ;
-(SCOperaPlayerView *)playerView;
-(void)setPlayerView:(SCOperaPlayerView *)arg1 ;
-(UIView *)screenshot;
-(void)setScreenshot:(UIView *)arg1 ;
@end
