/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIVisualEffectView.h>

@class UIView, UIImageView;

@interface SCMainBlurView : UIVisualEffectView {

	double _percentVisible;
	UIView* _overlayView;
	UIImageView* _gradientView;

}

@property (nonatomic,retain) UIView * overlayView;                    //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIImageView * gradientView;              //@synthesize gradientView=_gradientView - In the implementation block
@property (assign,nonatomic) double percentVisible;                   //@synthesize percentVisible=_percentVisible - In the implementation block
-(double)percentVisible;
-(void)setPercentVisible:(double)arg1 ;
-(void)setPercentVisible:(double)arg1 animated:(BOOL)arg2 ;
-(void)_removeAnimation;
-(void)_addAnimationIfNeeded;
-(id)init;
-(void)layoutSubviews;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
-(void)setGradientView:(UIImageView *)arg1 ;
-(UIImageView *)gradientView;
@end

