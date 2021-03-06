/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSearchView.h>

@protocol SCHovaSearchViewDataSource;
@class SCPreviewTooltipBalloon, NSDictionary, UIView, UILabel;

@interface SCHovaSearchView : SCSearchView {

	SCPreviewTooltipBalloon* _toolTipBalloon;
	BOOL _transitioningPlaceholder;
	id<SCHovaSearchViewDataSource> _dataSource;
	long long _placeholderTransitionDirection;
	NSDictionary* _transitionPlaceholderLabels;
	long long _visibleIndex;
	UIView* _textShadowView;
	NSRange _previousVisibleRange;

}

@property (assign,getter=isTransitioningPlaceholder,nonatomic) BOOL transitioningPlaceholder;              //@synthesize transitioningPlaceholder=_transitioningPlaceholder - In the implementation block
@property (assign,nonatomic) long long placeholderTransitionDirection;                                     //@synthesize placeholderTransitionDirection=_placeholderTransitionDirection - In the implementation block
@property (nonatomic,retain) NSDictionary * transitionPlaceholderLabels;                                   //@synthesize transitionPlaceholderLabels=_transitionPlaceholderLabels - In the implementation block
@property (assign,nonatomic) NSRange previousVisibleRange;                                                 //@synthesize previousVisibleRange=_previousVisibleRange - In the implementation block
@property (assign,nonatomic) long long visibleIndex;                                                       //@synthesize visibleIndex=_visibleIndex - In the implementation block
@property (nonatomic,readonly) UILabel * visiblePlaceholderLabel; 
@property (nonatomic,retain) UIView * textShadowView;                                                      //@synthesize textShadowView=_textShadowView - In the implementation block
@property (assign,nonatomic,__weak) id<SCHovaSearchViewDataSource> dataSource;                             //@synthesize dataSource=_dataSource - In the implementation block
+(id)placeholderLabelTextAttributes;
-(double)defaultSearchButtonPercentStroked;
-(BOOL)shouldLazyLoadTextField;
-(id)_placeholderAttributes;
-(void)updatePercentOverscrolled:(double)arg1 ;
-(void)setPlaceholderAlpha:(double)arg1 ;
-(void)reloadLabelsWithVisiblePlaceholderRange:(NSRange)arg1 ;
-(void)updateWithVisiblePlaceholderRange:(NSRange)arg1 percentVisible:(double*)arg2 ;
-(NSRange)previousVisibleRange;
-(id)placeholderTransitionLabelForIndex:(long long)arg1 ;
-(void)setPreviousVisibleRange:(NSRange)arg1 ;
-(void)reloadPlaceHolderTransitionLabelForIndex:(long long)arg1 ;
-(NSDictionary *)transitionPlaceholderLabels;
-(UILabel *)visiblePlaceholderLabel;
-(UIView *)textShadowView;
-(void)setTransitionPlaceholderLabels:(NSDictionary *)arg1 ;
-(double)placeholderTranslationForDirection:(long long)arg1 ;
-(BOOL)hasOngoingToolTip;
-(void)showSearchToolTipForPage:(long long)arg1 ;
-(BOOL)isTransitioningPlaceholder;
-(void)setTransitioningPlaceholder:(BOOL)arg1 ;
-(long long)placeholderTransitionDirection;
-(void)setPlaceholderTransitionDirection:(long long)arg1 ;
-(void)setTextShadowView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(void)setDataSource:(id<SCHovaSearchViewDataSource>)arg1 ;
-(id<SCHovaSearchViewDataSource>)dataSource;
-(long long)visibleIndex;
-(void)setVisibleIndex:(long long)arg1 ;
-(void)setPlaceholderText:(id)arg1 ;
@end

