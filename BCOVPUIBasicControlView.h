/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class UIView, BCOVPUIControlLayout, BCOVPUIButton, UILabel, BCOVPUISlider, UIButton, MPVolumeView;

@interface BCOVPUIBasicControlView : UIView {

	BOOL _closedCaptionEnabled;
	BOOL _externalRouteEnabled;
	BOOL _advertisingMode;
	BOOL _controlStatesSaved;
	BOOL _playbackButtonWasEnabled;
	BOOL _jumpBackButtonWasEnabled;
	BOOL _currentTimeLabelWasEnabled;
	BOOL _timeSeparatorLabelWasEnabled;
	BOOL _durationLabelWasEnabled;
	BOOL _progressSliderWasEnabled;
	BOOL _closedCaptionButtonWasEnabled;
	BOOL _video360ButtonWasEnabled;
	BOOL _screenModeButtonWasEnabled;
	BOOL _liveButtonWasEnabled;
	UIView* _backgroundView;
	BCOVPUIControlLayout* _layout;
	BCOVPUIButton* _playbackButton;
	BCOVPUIButton* _jumpBackButton;
	UILabel* _currentTimeLabel;
	UILabel* _timeSeparatorLabel;
	UILabel* _durationLabel;
	BCOVPUISlider* _progressSlider;
	UIButton* _closedCaptionButton;
	BCOVPUIButton* _screenModeButton;
	BCOVPUIButton* _video360Button;
	MPVolumeView* _externalRouteView;
	BCOVPUIButton* _liveButton;

}

@property (assign,nonatomic,__weak) UIView * backgroundView;                                       //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) BCOVPUIButton * playbackButton;                                //@synthesize playbackButton=_playbackButton - In the implementation block
@property (assign,nonatomic,__weak) BCOVPUIButton * jumpBackButton;                                //@synthesize jumpBackButton=_jumpBackButton - In the implementation block
@property (assign,nonatomic,__weak) UILabel * currentTimeLabel;                                    //@synthesize currentTimeLabel=_currentTimeLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * timeSeparatorLabel;                                  //@synthesize timeSeparatorLabel=_timeSeparatorLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * durationLabel;                                       //@synthesize durationLabel=_durationLabel - In the implementation block
@property (assign,nonatomic,__weak) BCOVPUISlider * progressSlider;                                //@synthesize progressSlider=_progressSlider - In the implementation block
@property (assign,nonatomic,__weak) UIButton * closedCaptionButton;                                //@synthesize closedCaptionButton=_closedCaptionButton - In the implementation block
@property (assign,nonatomic,__weak) BCOVPUIButton * screenModeButton;                              //@synthesize screenModeButton=_screenModeButton - In the implementation block
@property (assign,nonatomic,__weak) BCOVPUIButton * video360Button;                                //@synthesize video360Button=_video360Button - In the implementation block
@property (assign,nonatomic,__weak) MPVolumeView * externalRouteView;                              //@synthesize externalRouteView=_externalRouteView - In the implementation block
@property (assign,nonatomic,__weak) BCOVPUIButton * liveButton;                                    //@synthesize liveButton=_liveButton - In the implementation block
@property (assign,getter=isClosedCaptionEnabled,nonatomic) BOOL closedCaptionEnabled;              //@synthesize closedCaptionEnabled=_closedCaptionEnabled - In the implementation block
@property (assign,getter=isExternalRouteEnabled,nonatomic) BOOL externalRouteEnabled;              //@synthesize externalRouteEnabled=_externalRouteEnabled - In the implementation block
@property (assign,nonatomic) BOOL controlStatesSaved;                                              //@synthesize controlStatesSaved=_controlStatesSaved - In the implementation block
@property (assign,nonatomic) BOOL playbackButtonWasEnabled;                                        //@synthesize playbackButtonWasEnabled=_playbackButtonWasEnabled - In the implementation block
@property (assign,nonatomic) BOOL jumpBackButtonWasEnabled;                                        //@synthesize jumpBackButtonWasEnabled=_jumpBackButtonWasEnabled - In the implementation block
@property (assign,nonatomic) BOOL currentTimeLabelWasEnabled;                                      //@synthesize currentTimeLabelWasEnabled=_currentTimeLabelWasEnabled - In the implementation block
@property (assign,nonatomic) BOOL timeSeparatorLabelWasEnabled;                                    //@synthesize timeSeparatorLabelWasEnabled=_timeSeparatorLabelWasEnabled - In the implementation block
@property (assign,nonatomic) BOOL durationLabelWasEnabled;                                         //@synthesize durationLabelWasEnabled=_durationLabelWasEnabled - In the implementation block
@property (assign,nonatomic) BOOL progressSliderWasEnabled;                                        //@synthesize progressSliderWasEnabled=_progressSliderWasEnabled - In the implementation block
@property (assign,nonatomic) BOOL closedCaptionButtonWasEnabled;                                   //@synthesize closedCaptionButtonWasEnabled=_closedCaptionButtonWasEnabled - In the implementation block
@property (assign,nonatomic) BOOL video360ButtonWasEnabled;                                        //@synthesize video360ButtonWasEnabled=_video360ButtonWasEnabled - In the implementation block
@property (assign,nonatomic) BOOL screenModeButtonWasEnabled;                                      //@synthesize screenModeButtonWasEnabled=_screenModeButtonWasEnabled - In the implementation block
@property (assign,nonatomic) BOOL liveButtonWasEnabled;                                            //@synthesize liveButtonWasEnabled=_liveButtonWasEnabled - In the implementation block
@property (nonatomic,copy) BCOVPUIControlLayout * layout;                                          //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) BOOL advertisingMode;                                                 //@synthesize advertisingMode=_advertisingMode - In the implementation block
+(id)layoutViewWithControlFromTag:(long long)arg1 width:(double)arg2 elasticity:(double)arg3 ;
+(double)widthForText:(id)arg1 font:(id)arg2 ;
+(id)createPUIControlItemWithViewTag:(long long)arg1 ;
+(id)basicControlViewWithVODLayout;
+(id)basicControlViewWithLiveLayout;
+(id)basicControlViewWithLiveDVRLayout;
-(void)importIBInspectable;
-(void)configureViewsFromNib;
-(void)enableControls:(BOOL)arg1 ;
-(BOOL)advertisingMode;
-(void)setAdvertisingMode:(BOOL)arg1 ;
-(void)setUpControlShortcuts;
-(void)configureBackgroundView;
-(BCOVPUISlider *)progressSlider;
-(void)saveControlsEnabledState;
-(BCOVPUIButton *)jumpBackButton;
-(UILabel *)timeSeparatorLabel;
-(UILabel *)durationLabel;
-(UIButton *)closedCaptionButton;
-(BCOVPUIButton *)video360Button;
-(BCOVPUIButton *)screenModeButton;
-(BCOVPUIButton *)liveButton;
-(void)configureSignalForClosedCaptionEnable;
-(void)configureSignalForExternalRouteEnabled;
-(void)updateLayoutConstraints;
-(void)setControlStatesSaved:(BOOL)arg1 ;
-(void)setPlaybackButtonWasEnabled:(BOOL)arg1 ;
-(void)setJumpBackButtonWasEnabled:(BOOL)arg1 ;
-(void)setCurrentTimeLabelWasEnabled:(BOOL)arg1 ;
-(void)setTimeSeparatorLabelWasEnabled:(BOOL)arg1 ;
-(void)setDurationLabelWasEnabled:(BOOL)arg1 ;
-(void)setProgressSliderWasEnabled:(BOOL)arg1 ;
-(void)setClosedCaptionButtonWasEnabled:(BOOL)arg1 ;
-(void)setScreenModeButtonWasEnabled:(BOOL)arg1 ;
-(void)setVideo360ButtonWasEnabled:(BOOL)arg1 ;
-(void)setLiveButtonWasEnabled:(BOOL)arg1 ;
-(BOOL)controlStatesSaved;
-(BOOL)playbackButtonWasEnabled;
-(BOOL)jumpBackButtonWasEnabled;
-(BOOL)currentTimeLabelWasEnabled;
-(BOOL)timeSeparatorLabelWasEnabled;
-(BOOL)durationLabelWasEnabled;
-(BOOL)progressSliderWasEnabled;
-(BOOL)closedCaptionButtonWasEnabled;
-(BOOL)screenModeButtonWasEnabled;
-(BOOL)video360ButtonWasEnabled;
-(BOOL)liveButtonWasEnabled;
-(void)configureBlurEffect;
-(void)updateContraintWithView:(id)arg1 enabled:(BOOL)arg2 ;
-(void)updateConstraintWithViewAndEnabledState:(id)arg1 ;
-(MPVolumeView *)externalRouteView;
-(void)setJumpBackButton:(BCOVPUIButton *)arg1 ;
-(void)setScreenModeButton:(BCOVPUIButton *)arg1 ;
-(void)setClosedCaptionButton:(UIButton *)arg1 ;
-(void)setDurationLabel:(UILabel *)arg1 ;
-(void)setTimeSeparatorLabel:(UILabel *)arg1 ;
-(void)setProgressSlider:(BCOVPUISlider *)arg1 ;
-(void)setVideo360Button:(BCOVPUIButton *)arg1 ;
-(void)setExternalRouteView:(MPVolumeView *)arg1 ;
-(void)setLiveButton:(BCOVPUIButton *)arg1 ;
-(BOOL)isClosedCaptionEnabled;
-(BOOL)isExternalRouteEnabled;
-(void)restoreControlsEnabledState;
-(void)setFontSizeForLabels:(double)arg1 ;
-(void)setTextColorForLabels:(id)arg1 ;
-(void)setFontSizeForButtons:(double)arg1 ;
-(void)setTitleColorForButtons:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setClosedCaptionEnabled:(BOOL)arg1 ;
-(void)setExternalRouteEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)awakeFromNib;
-(CGSize)intrinsicContentSize;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(BCOVPUIControlLayout *)layout;
-(void)setLayout:(BCOVPUIControlLayout *)arg1 ;
-(BCOVPUIButton *)playbackButton;
-(void)setPlaybackButton:(BCOVPUIButton *)arg1 ;
-(void)setCurrentTimeLabel:(UILabel *)arg1 ;
-(UILabel *)currentTimeLabel;
-(void)customInit;
@end

