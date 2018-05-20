/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class SCContextViewDisplayMode, UIView, UIColor, CAShapeLayer;

@interface SCContextContentView : UIView {

	SCContextViewDisplayMode* _displayMode;
	UIView* _contentView;
	double _cornerRadius;
	unsigned long long _corners;
	UIColor* _backgroundColor;
	CAShapeLayer* _cornerLayer;
	UIView* _defaultContentBackground;

}

@property (nonatomic,retain) SCContextViewDisplayMode * displayMode;              //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                //@synthesize contentView=_contentView - In the implementation block
-(void)_configureDisplayMode;
-(void)setCornerRadius:(double)arg1 forCorners:(unsigned long long)arg2 ;
-(void)_setColor:(id)arg1 forShapeView:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(SCContextViewDisplayMode *)displayMode;
-(void)setDisplayMode:(SCContextViewDisplayMode *)arg1 ;
@end

