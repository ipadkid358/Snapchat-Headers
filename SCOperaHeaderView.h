/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@protocol SCOperaLabelTextProvider;
@class UIView, UILabel, UIImageView, NSDictionary, UIColor, UIFont;

@interface SCOperaHeaderView : UIView {

	UIView* _containerView;
	UILabel* _titleView;
	UILabel* _subtitleView;
	UILabel* _additionalTitleView;
	UIImageView* _titleIconView;
	UIView* _iconView;
	UIImageView* _iconViewBackground;
	UIImageView* _imageView;
	UIView* _imageViewContainer;
	BOOL _hasShadow;
	BOOL _fadeOut;
	BOOL _fadeOutOnTransition;
	BOOL _fadeOutSubtitleOnTransition;
	CGRect _titleViewShadowPathRect;
	CGRect _additionalTitleViewShadowPathRect;
	CGRect _subtitleViewShadowPathRect;
	id<SCOperaLabelTextProvider> _displayNameTextProvider;
	NSDictionary* _displayNameTextProviderProperties;
	double _titleViewMaxWidth;
	UIColor* _displayNameColor;
	UIFont* _displayNameFont;

}
-(id)_displayNameFromProviderWithWidth:(double)arg1 ;
-(void)setTitleViewFadeAnimation:(BOOL)arg1 shortAnimationDuration:(double)arg2 longAnimationDuration:(double)arg3 delay:(double)arg4 ;
-(void)setImageIcon:(id)arg1 ;
-(void)setIconView:(id)arg1 showBackground:(BOOL)arg2 showAddControl:(BOOL)arg3 ;
-(void)_setTitleViewText:(id)arg1 font:(id)arg2 color:(id)arg3 ;
-(id)imageViewContainer;
-(void)setupWithPageProperties:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)imageView;
-(void)teardown;
-(void)_setShadowVisible:(BOOL)arg1 ;
@end
