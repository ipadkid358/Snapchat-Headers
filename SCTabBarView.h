/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@protocol SCTabBarItem, SCTabBarViewDelegate, SCTabBarViewLayoutAttributesProvider;
@class SCTabBarTransitionEdge, UIView;

@interface SCTabBarView : UIView {

	SCTabBarTransitionEdge* _lastTransitionEdge;
	id<SCTabBarItem> _centerTabItem;
	id<SCTabBarItem> _leftTabItem;
	id<SCTabBarItem> _rightTabItem;
	id<SCTabBarItem> _bottomTabItem;
	UIView* _centerTabItemView;
	UIView* _leftTabItemView;
	UIView* _rightTabItemView;
	UIView* _bottomTabItemView;
	UIView* _barView;
	id<SCTabBarViewDelegate> _delegate;
	id<SCTabBarViewLayoutAttributesProvider> _layoutAttributesProvider;

}

@property (assign,nonatomic,__weak) id<SCTabBarViewDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCTabBarViewLayoutAttributesProvider> layoutAttributesProvider;              //@synthesize layoutAttributesProvider=_layoutAttributesProvider - In the implementation block
+(CGRect)interpolateCGRectFrom:(CGRect)arg1 to:(CGRect)arg2 withProgress:(double)arg3 ;
+(double)interpolateCGFloatFrom:(double)arg1 to:(double)arg2 withProgress:(double)arg3 ;
+(CGPoint)interpolateCGPointFrom:(CGPoint)arg1 to:(CGPoint)arg2 withProgress:(double)arg3 ;
+(CGSize)interpolateCGSizeFrom:(CGSize)arg1 to:(CGSize)arg2 withProgress:(double)arg3 ;
-(void)_performTransitionWithTransitionEdge:(id)arg1 ;
-(BOOL)_shouldPerformTransitionToPosition:(unsigned long long)arg1 ;
-(void)_performLayoutForTabBarViewItem:(unsigned long long)arg1 ;
-(void)_applyLayoutAttributes:(id)arg1 toView:(id)arg2 percentComplete:(double)arg3 ;
-(id)_tabViewWithTabItem:(unsigned long long)arg1 ;
-(id)initWithCenterTabItem:(id)arg1 leftTabItem:(id)arg2 rightTabItem:(id)arg3 bottomTabItem:(id)arg4 ;
-(void)updateToPosition:(unsigned long long)arg1 percentComplete:(double)arg2 ;
-(id<SCTabBarViewLayoutAttributesProvider>)layoutAttributesProvider;
-(void)setLayoutAttributesProvider:(id<SCTabBarViewLayoutAttributesProvider>)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCTabBarViewDelegate>)arg1 ;
-(id<SCTabBarViewDelegate>)delegate;
@end
