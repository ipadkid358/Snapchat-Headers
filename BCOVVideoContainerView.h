/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <Snapchat/BCOVPlaybackSessionConsumer.h>

@class BCOVBasicControlsView, UIView, NSString;

@interface BCOVVideoContainerView : UIView <BCOVPlaybackSessionConsumer> {

	BOOL _controlsEnabled;
	BOOL _controlsVisible;
	BCOVBasicControlsView* _controlsView;
	UIView* _videoView;

}

@property (assign,nonatomic,__weak) BCOVBasicControlsView * controlsView;                //@synthesize controlsView=_controlsView - In the implementation block
@property (assign,nonatomic,__weak) UIView * videoView;                                  //@synthesize videoView=_videoView - In the implementation block
@property (assign,nonatomic) BOOL controlsVisible;                                       //@synthesize controlsVisible=_controlsVisible - In the implementation block
@property (assign,getter=isControlsEnabled,nonatomic) BOOL controlsEnabled;              //@synthesize controlsEnabled=_controlsEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didAdvanceToPlaybackSession:(id)arg1 ;
-(BCOVBasicControlsView *)controlsView;
-(void)setControlsView:(BCOVBasicControlsView *)arg1 ;
-(BOOL)isControlsEnabled;
-(void)setControlsVisible:(BOOL)arg1 ;
-(id)initWithVideoView:(id)arg1 controlsView:(id)arg2 ;
-(void)setControlsEnabled:(BOOL)arg1 ;
-(BOOL)controlsVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)videoView;
-(void)setVideoView:(UIView *)arg1 ;
@end

