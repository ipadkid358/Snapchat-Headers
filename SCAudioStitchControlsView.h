/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@protocol SCAudioStitchControlsViewDelegate;
@class UIImageView, UIView, SCPreviewTooltipBalloon;

@interface SCAudioStitchControlsView : UIView {

	UIImageView* _viewportImageView;
	UIView* _buttonContainerView;
	UIView* _onboardingBackgroundView;
	SCPreviewTooltipBalloon* _toolTipView;
	BOOL _onboardingBeingDismissed;
	long long _onboardingCount;
	BOOL _changeViewportButtonEnabled;
	BOOL _didShowTooltip;
	id<SCAudioStitchControlsViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCAudioStitchControlsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL changeViewportButtonEnabled;                                   //@synthesize changeViewportButtonEnabled=_changeViewportButtonEnabled - In the implementation block
@property (nonatomic,readonly) BOOL displayingOnboarding; 
@property (nonatomic,readonly) BOOL didShowTooltip;                                              //@synthesize didShowTooltip=_didShowTooltip - In the implementation block
@property (assign,nonatomic) double buttonAnimationDuration; 
+(id)_viewportButtonImages;
-(void)setButtonAnimationDuration:(double)arg1 ;
-(void)_changeViewportButtonDidTap:(id)arg1 ;
-(void)setChangeViewportButtonEnabled:(BOOL)arg1 ;
-(void)_setupOnboarding;
-(void)_setupToolTip;
-(void)_teardownOnboarding;
-(void)_teardownToolTip;
-(void)_dismissOnboarding;
-(void)_setOnboardingVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)displayingOnboarding;
-(void)didChangeViewport;
-(double)buttonAnimationDuration;
-(BOOL)changeViewportButtonEnabled;
-(BOOL)didShowTooltip;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCAudioStitchControlsViewDelegate>)arg1 ;
-(void)didMoveToWindow;
-(void)setHidden:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SCAudioStitchControlsViewDelegate>)delegate;
@end

