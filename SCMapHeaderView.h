/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@protocol SCMapHeaderViewDelegate;
@class CAGradientLayer, SCSearchNavigationBar, SCGrowingButton, CALayer, NSString, NSArray;

@interface SCMapHeaderView : UIView {

	id<SCMapHeaderViewDelegate> _delegate;
	CAGradientLayer* _gradientLayer;
	SCSearchNavigationBar* _navigationBar;
	SCGrowingButton* _backButton;
	CALayer* _lineLayer;
	NSString* _overrideText;
	NSArray* _rightBarButtonItems;

}

@property (nonatomic,copy) NSArray * rightBarButtonItems;              //@synthesize rightBarButtonItems=_rightBarButtonItems - In the implementation block
@property (nonatomic,copy) NSString * overrideText;                    //@synthesize overrideText=_overrideText - In the implementation block
@property (assign,nonatomic) BOOL backButtonHidden; 
-(void)_didTapOnBackButton;
-(BOOL)backButtonHidden;
-(void)setBackButtonHidden:(BOOL)arg1 ;
-(void)setContentVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setOverrideText:(NSString *)arg1 ;
-(NSString *)overrideText;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(NSArray *)rightBarButtonItems;
-(void)setRightBarButtonItems:(NSArray *)arg1 ;
-(void)_updatePlaceholderText;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
@end

