/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <Snapchat/SCTimeProfilable.h>
#import <Snapchat/SCOperaLayerView.h>

@class NSArray, SCOperaActionMenuV2HDButton, SCOperaHeaderView, SCGradientView, NSString;

@interface SCOperaChromeLayerView : UIView <SCTimeProfilable, SCOperaLayerView> {

	NSArray* _gradientAlphaArray;
	double _gradientHeight;
	BOOL _isTitleViewHidden;
	double _yOffset;
	SCOperaActionMenuV2HDButton* _hdButton;
	SCOperaHeaderView* _headerView;
	SCGradientView* _gradientView;

}

@property (nonatomic,readonly) SCOperaActionMenuV2HDButton * hdButton;              //@synthesize hdButton=_hdButton - In the implementation block
@property (nonatomic,readonly) SCOperaHeaderView * headerView;                      //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) SCGradientView * gradientView;                       //@synthesize gradientView=_gradientView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layerViewWithFrame:(CGRect)arg1 ;
+(int)context;
+(BOOL)requiresConstraintBasedLayout;
-(void)_setupHdIconViewWithLayer:(id)arg1 ;
-(void)setupViewForLayer:(id)arg1 ;
-(void)setHeaderAlpha:(double)arg1 ;
-(void)setTitleViewFadeAnimation:(BOOL)arg1 shortAnimationDuration:(double)arg2 longAnimationDuration:(double)arg3 delay:(double)arg4 ;
-(void)updateViewYOffset:(double)arg1 ;
-(SCOperaActionMenuV2HDButton *)hdButton;
-(void)fadeOutWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setVisible:(BOOL)arg1 ;
-(SCOperaHeaderView *)headerView;
-(SCGradientView *)gradientView;
-(void)setGradientAlpha:(double)arg1 ;
@end

