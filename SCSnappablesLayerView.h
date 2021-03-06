/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Snapchat/SCOperaLayerView.h>

@protocol SCSnappablesLayerViewDelegate;
@class SCHitTestingMaskView, UIVisualEffectView, CAShapeLayer, UIView, UITapGestureRecognizer, UIImageView, SCLoadingIndicatorView, UILabel, UIButton, NSString;

@interface SCSnappablesLayerView : UIView <UIGestureRecognizerDelegate, SCOperaLayerView> {

	SCHitTestingMaskView* _maskableBlurViewContainer;
	UIVisualEffectView* _blurView;
	CAShapeLayer* _maskLayer;
	UIView* _lensBacking;
	UITapGestureRecognizer* _tapRecognizer;
	BOOL _showingOverlay;
	UIView* _lensViewContainer;
	UIImageView* _lensIconImageView;
	SCLoadingIndicatorView* _spinner;
	UIView* _spinnerBacking;
	UILabel* _nameLabel;
	UIButton* _replyButton;
	UILabel* _ctaLabel;
	UILabel* _skipLabel;
	id<SCSnappablesLayerViewDelegate> _delegate;

}

@property (nonatomic,readonly) UIView * lensViewContainer;                                   //@synthesize lensViewContainer=_lensViewContainer - In the implementation block
@property (nonatomic,readonly) UIImageView * lensIconImageView;                              //@synthesize lensIconImageView=_lensIconImageView - In the implementation block
@property (nonatomic,readonly) SCLoadingIndicatorView * spinner;                             //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,readonly) UIView * spinnerBacking;                                      //@synthesize spinnerBacking=_spinnerBacking - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                                          //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) UIButton * replyButton;                                       //@synthesize replyButton=_replyButton - In the implementation block
@property (nonatomic,readonly) UILabel * ctaLabel;                                           //@synthesize ctaLabel=_ctaLabel - In the implementation block
@property (nonatomic,readonly) UILabel * skipLabel;                                          //@synthesize skipLabel=_skipLabel - In the implementation block
@property (assign,nonatomic,__weak) id<SCSnappablesLayerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL showingOverlay;                                          //@synthesize showingOverlay=_showingOverlay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layerViewWithFrame:(CGRect)arg1 ;
-(UIButton *)replyButton;
-(void)_buildView;
-(void)_handlePlayerViewTap:(id)arg1 ;
-(CGRect)_maskFrameForAspectRatio:(double)arg1 ;
-(void)_addSpringAnimationToLayer:(id)arg1 key:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 ;
-(void)_handleEarlyDisplayTap:(id)arg1 ;
-(void)_handleReplyTap:(id)arg1 ;
-(void)displayOverlayWithPlayerView:(id)arg1 aspectRatio:(double)arg2 ;
-(void)enableTouchProcessing;
-(void)replacePlayerView:(id)arg1 aspectRatio:(double)arg2 ;
-(UIView *)lensViewContainer;
-(UIImageView *)lensIconImageView;
-(UIView *)spinnerBacking;
-(UILabel *)ctaLabel;
-(BOOL)showingOverlay;
-(void)setDelegate:(id<SCSnappablesLayerViewDelegate>)arg1 ;
-(id<SCSnappablesLayerViewDelegate>)delegate;
-(void)_reset;
-(void)prepareForReuse;
-(UILabel *)nameLabel;
-(SCLoadingIndicatorView *)spinner;
-(UILabel *)skipLabel;
@end

