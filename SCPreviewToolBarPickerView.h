/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@protocol SCPreviewToolBarPickerViewDelegate;
@class UIView;

@interface SCPreviewToolBarPickerView : UIView {

	id<SCPreviewToolBarPickerViewDelegate> _viewModeDelegate;
	UIView* _containerView;
	UIView* _compactButtonView;
	long long _viewMode;

}

@property (nonatomic,retain) UIView * containerView;                                                      //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIView * compactButtonView;                                                  //@synthesize compactButtonView=_compactButtonView - In the implementation block
@property (assign,nonatomic) long long viewMode;                                                          //@synthesize viewMode=_viewMode - In the implementation block
@property (assign,nonatomic,__weak) id<SCPreviewToolBarPickerViewDelegate> viewModeDelegate;              //@synthesize viewModeDelegate=_viewModeDelegate - In the implementation block
-(void)setCompactButtonView:(UIView *)arg1 ;
-(UIView *)compactButtonView;
-(void)animateViews:(long long)arg1 ;
-(void)onPreAnimateForViews:(long long)arg1 ;
-(void)onPostAnimateForViews:(long long)arg1 ;
-(id<SCPreviewToolBarPickerViewDelegate>)viewModeDelegate;
-(void)switchPickerViewMode:(long long)arg1 withAnimation:(BOOL)arg2 withAnimationDuration:(double)arg3 ;
-(void)setViewModeDelegate:(id<SCPreviewToolBarPickerViewDelegate>)arg1 ;
-(id)init;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(long long)viewMode;
-(void)setViewMode:(long long)arg1 ;
@end
