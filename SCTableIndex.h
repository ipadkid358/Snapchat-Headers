/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SCTableIndexConfiguration, SCTableIndexDelegate;
@class SCShapeView, SCTableIndexGestureRecognizer, UILabel, NSString, UIFont, NSMutableDictionary;

@interface SCTableIndex : UIView <UIGestureRecognizerDelegate> {

	SCShapeView* _scrollView;
	id<SCTableIndexConfiguration> _tableIndexConfig;
	SCShapeView* _scrollBar;
	double _scrollBarPercentOffset;
	double _scrollBarCenterXOffset;
	CGSize _scrollBarSize;
	CGSize _scrollBarCorners;
	CGRect _scrollViewClippingRect;
	SCTableIndexGestureRecognizer* _tableIndexGestureRecognizer;
	BOOL _isLongPressing;
	BOOL _scrollBarWithinHiddenScrollView;
	UILabel* _pressedStateLabel;
	double _rightPaddingForLabelRTL;
	double _fastScrollingLabelMinimumWidth;
	NSString* _lastAllUpdatesLabel;
	BOOL _lastPressedState;
	long long _lastScrollBarStyle;
	double _scrollViewColorPercent;
	BOOL _shouldFlip;
	BOOL _enableScrollingOptimization;
	UIFont* _sectionHeaderLabelFont;
	NSMutableDictionary* _labelTextToLabelTextWidth;
	BOOL _enableScrubberHeaderText;
	double _scrubberSectionHeaderFontSize;
	double _pressedSectionHeaderRightOffset;
	id<SCTableIndexDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCTableIndexDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL supportsRTL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)indexViewWidth;
-(id)initWithTableIndexConfiguration:(id)arg1 ;
-(BOOL)draggingScrollBar;
-(BOOL)supportsRTL;
-(CGPoint)scrollBarPosition;
-(void)updateScrollBarWithContentOffset:(double)arg1 ;
-(BOOL)showingScrollDagger;
-(void)showScrollDaggerWithPressedState:(BOOL)arg1 ;
-(void)updateScrollViewWithHidingFrame:(CGRect)arg1 ;
-(void)updateScrollBarWithHidingFrame:(CGRect)arg1 padding:(double)arg2 ;
-(void)showFastScrollingScrollDagger;
-(void)_setupPressedStateLabel;
-(void)_tableIndexGesture:(id)arg1 ;
-(long long)_scrollBarStyleForLabelText:(id)arg1 pressed:(BOOL)arg2 isSectionHeader:(BOOL)arg3 ;
-(void)_updateScrollBarPressedState:(BOOL)arg1 labelText:(id)arg2 scrollBarStyle:(long long)arg3 ;
-(BOOL)_lastUpdateLabelEqualToString:(id)arg1 ;
-(void)_uninstallScrollBarConstraints;
-(void)_installUnpressedScrollBarConstraints;
-(void)_installPressedRecentUpdatesConstraintsWithLabelText:(id)arg1 ;
-(void)_installPressedAllUpdatesConstraintsWithLabelText:(id)arg1 ;
-(void)_installPressedSectionHeaderConstraintsWithLabelText:(id)arg1 ;
-(void)_installFastScrollingConstraintsWithLabelText:(id)arg1 barStyle:(long long)arg2 ;
-(double)_scrollBarCenterXOffsetForWidth:(double)arg1 ;
-(void)_installExpandedDaggerWithHeight:(double)arg1 width:(double)arg2 centerXOffset:(double)arg3 leftCornerRadius:(double)arg4 rightCornerRadius:(double)arg5 ;
-(void)_installPressedStateLabelWithLabelText:(id)arg1 scrollBarStyle:(long long)arg2 ;
-(double)_widthForFastScrollingPopout:(id)arg1 ;
-(void)_updatePressedStateLabelWithStyle:(long long)arg1 ;
-(id)sectionHeaderLabelFont;
-(double)_colorTransitionPercentWithHidingFrame:(CGRect)arg1 padding:(double)arg2 ;
-(void)_transitionScrollBarColorToPercent:(double)arg1 ;
-(long long)_pressedScrollBarStyleForLabelText:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCTableIndexDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<SCTableIndexDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_setupGestureRecognizers;
@end

