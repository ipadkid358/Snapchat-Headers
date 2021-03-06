/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <Snapchat/SCOperaLayerView.h>

@class SCActionMenuTableView, NSArray, SCOperaActionMenuHeaderView, UIView, NSString;

@interface SCOperaActionMenuV2LayerView : UIView <SCOperaLayerView> {

	double _lastSetVisiblePercent;
	SCActionMenuTableView* _actionMenuView;
	NSArray* _menuItems;
	SCOperaActionMenuHeaderView* _header;
	UIView* _backgroundView;

}

@property (nonatomic,readonly) SCOperaActionMenuHeaderView * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                           //@synthesize backgroundView=_backgroundView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layerViewWithFrame:(CGRect)arg1 ;
-(void)_setupActionMenuWithLayer:(id)arg1 ;
-(void)_setupHeaderWithLayer:(id)arg1 ;
-(void)setupViewForLayer:(id)arg1 menuItems:(id)arg2 ;
-(void)setVisiblePercent:(double)arg1 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 animationDuration:(double)arg3 springDampening:(double)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)backgroundView;
-(void)_setupBackgroundView;
-(SCOperaActionMenuHeaderView *)header;
@end

