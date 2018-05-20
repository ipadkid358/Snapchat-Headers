/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:52 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSingleIconViewBase.h>

@protocol SCStoryIconViewDelegate;
@class SCStoryLoadingIndicatorView, UIImageView;

@interface SCStoryIconView : SCSingleIconViewBase {

	BOOL _isAnimating;
	SCStoryLoadingIndicatorView* _loadingView;
	double _animationScale;
	UIImageView* _replayView;
	UIImageView* _checkmarkImageView;
	BOOL _selected;
	id<SCStoryIconViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCStoryIconViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setLoadingTintColor:(id)arg1 ;
-(void)setSpinnerProgress:(double)arg1 animated:(BOOL)arg2 ;
-(void)showGrayLoadingCircle;
-(void)resetIconView;
-(void)setReplayViewHidden:(BOOL)arg1 ;
-(void)setReplayImage:(id)arg1 ;
-(void)setupCheckmarkView;
-(void)_startAnimatingWithShrinkCompletion:(/*^block*/id)arg1 ;
-(void)_animatedLoadingViewWithCompletion:(/*^block*/id)arg1 ;
-(void)setAnimationScale:(double)arg1 ;
-(void)animateExpansion;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCStoryIconViewDelegate>)arg1 ;
-(id<SCStoryIconViewDelegate>)delegate;
-(CGSize)intrinsicContentSize;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(BOOL)isAnimating;
-(void)_stopAnimating;
-(void)showSpinner;
-(void)setImageAlpha:(double)arg1 ;
-(void)hideSpinner;
@end
