/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@protocol SCSearchQueryReplayControlBarDelegate;
@class UIButton, UISlider, UILabel;

@interface SCSearchQueryReplayControlBar : UIView {

	UIButton* _dislikeButton;
	UIButton* _ratingButton;
	UIButton* _playButton;
	UIButton* _skipButton;
	UIButton* _backwardButton;
	UISlider* _querySlider;
	UILabel* _currentQueryLabel;
	BOOL _playing;
	id<SCSearchQueryReplayControlBarDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCSearchQueryReplayControlBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                                          //@synthesize playing=_playing - In the implementation block
-(void)_backwardButtonPressed;
-(void)_dislikeButtonPressed;
-(void)_playButtonPressed;
-(void)_ratingButtonPressed;
-(void)_skipButtonPressed;
-(void)_querySliderValueChanged:(id)arg1 ;
-(void)updateSliderWithText:(id)arg1 ;
-(void)updateSliderMaxValue:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCSearchQueryReplayControlBarDelegate>)arg1 ;
-(id<SCSearchQueryReplayControlBarDelegate>)delegate;
-(BOOL)isPlaying;
-(void)setPlaying:(BOOL)arg1 ;
@end

