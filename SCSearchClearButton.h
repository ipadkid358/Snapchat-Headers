/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, UIImageView;

@interface SCSearchClearButton : UIControl {

	long long _buttonMode;
	UIView* _containerView;
	UIImageView* _imageView;
	UIImageView* _highlightedImageView;
	UIImageView* _highlightedImageViewMask;

}

@property (nonatomic,retain) UIView * containerView;                              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                             //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * highlightedImageView;                  //@synthesize highlightedImageView=_highlightedImageView - In the implementation block
@property (nonatomic,retain) UIImageView * highlightedImageViewMask;              //@synthesize highlightedImageViewMask=_highlightedImageViewMask - In the implementation block
@property (assign,nonatomic) long long buttonMode;                                //@synthesize buttonMode=_buttonMode - In the implementation block
-(void)_animateView:(id)arg1 toScale:(double)arg2 withDuration:(double)arg3 delay:(double)arg4 showingClearButton:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(UIImageView *)highlightedImageViewMask;
-(void)setHighlightedImageViewMask:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)highlightedImageView;
-(void)setHighlightedImageView:(UIImageView *)arg1 ;
-(void)setButtonMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setButtonMode:(long long)arg1 ;
-(long long)buttonMode;
@end
