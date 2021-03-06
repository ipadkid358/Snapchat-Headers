/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:26 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@protocol SCMediaDrawerTabBarDelegate;
@class UIVisualEffectView, UIButton, UILabel, UIView, MASConstraint;

@interface SCMediaDrawerTabBar : UIView {

	UIVisualEffectView* _backgroundView;
	UIButton* _cameraRollButton;
	UILabel* _cameraRollLabel;
	UIButton* _galleryButton;
	UILabel* _galleryLabel;
	UIView* _selectionIndicator;
	MASConstraint* _selectionIndicatorCenterXConstraint;
	MASConstraint* _selectionIndicatorWidthConstraint;
	id<SCMediaDrawerTabBarDelegate> _delegate;
	long long _style;

}

@property (assign,nonatomic,__weak) id<SCMediaDrawerTabBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long style;                                              //@synthesize style=_style - In the implementation block
-(void)_updateSelectionIndicatorPositionWithRatio:(double)arg1 ;
-(void)tabScrollViewDidScrollToRatio:(double)arg1 ;
-(void)setDelegate:(id<SCMediaDrawerTabBarDelegate>)arg1 ;
-(id<SCMediaDrawerTabBarDelegate>)delegate;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)_handleTap:(id)arg1 ;
@end

