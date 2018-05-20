/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCPreviewToolBarPickerView.h>

@protocol SCColorPickerViewDelegate;
@class SCShapeView, SCColorPickerGradientView, SCColorPickerDropletView, UILongPressGestureRecognizer, UIImpactFeedbackGenerator;

@interface SCColorPickerView : SCPreviewToolBarPickerView {

	BOOL _heightExpanded;
	BOOL _colorLocked;
	id<SCColorPickerViewDelegate> _delegate;
	SCShapeView* _backgroundShapeView;
	SCColorPickerGradientView* _gradientColorView;
	SCColorPickerDropletView* _dropletView;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UIImpactFeedbackGenerator* _feedbackGenerator;
	double _heightScale;
	double _dropletOffset;
	double _dropletOriginY;
	double _lockedColorOriginY;
	CGPoint _beginPanLocation;
	CGSize _previousBoundsSize;
	CGPoint _previousDropletCenter;

}

@property (nonatomic,retain) SCShapeView * backgroundShapeView;                                      //@synthesize backgroundShapeView=_backgroundShapeView - In the implementation block
@property (nonatomic,retain) SCColorPickerGradientView * gradientColorView;                          //@synthesize gradientColorView=_gradientColorView - In the implementation block
@property (nonatomic,retain) SCColorPickerDropletView * dropletView;                                 //@synthesize dropletView=_dropletView - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * feedbackGenerator;                          //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,nonatomic) CGPoint beginPanLocation;                                               //@synthesize beginPanLocation=_beginPanLocation - In the implementation block
@property (assign,nonatomic) CGSize previousBoundsSize;                                              //@synthesize previousBoundsSize=_previousBoundsSize - In the implementation block
@property (assign,nonatomic) CGPoint previousDropletCenter;                                          //@synthesize previousDropletCenter=_previousDropletCenter - In the implementation block
@property (assign,nonatomic) double heightScale;                                                     //@synthesize heightScale=_heightScale - In the implementation block
@property (assign,nonatomic) double dropletOffset;                                                   //@synthesize dropletOffset=_dropletOffset - In the implementation block
@property (assign,nonatomic) double dropletOriginY;                                                  //@synthesize dropletOriginY=_dropletOriginY - In the implementation block
@property (assign,getter=isHeightExpanded,nonatomic) BOOL heightExpanded;                            //@synthesize heightExpanded=_heightExpanded - In the implementation block
@property (assign,getter=isColorLocked,nonatomic) BOOL colorLocked;                                  //@synthesize colorLocked=_colorLocked - In the implementation block
@property (assign,nonatomic) double lockedColorOriginY;                                              //@synthesize lockedColorOriginY=_lockedColorOriginY - In the implementation block
@property (assign,nonatomic,__weak) id<SCColorPickerViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
-(CGSize)previousBoundsSize;
-(void)setPreviousBoundsSize:(CGSize)arg1 ;
-(CGPoint)locationForColor:(id)arg1 ;
-(BOOL)isHeightExpanded;
-(SCColorPickerDropletView *)dropletView;
-(SCShapeView *)backgroundShapeView;
-(SCColorPickerGradientView *)gradientColorView;
-(void)animatePathToDefault;
-(id)colorAtLocation:(CGPoint)arg1 ;
-(BOOL)isColorLocked;
-(double)colorContainerDefaultHeight;
-(void)setHeightScale:(double)arg1 ;
-(double)heightScale;
-(void)animateViews:(long long)arg1 ;
-(void)onPreAnimateForViews:(long long)arg1 ;
-(void)onPostAnimateForViews:(long long)arg1 ;
-(void)setDropletOriginY:(double)arg1 offsetX:(double)arg2 ;
-(double)dropletOriginY;
-(void)setHeightExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGPoint)beginPanLocation;
-(double)pathCurveForLocation:(CGPoint)arg1 ;
-(void)setColorLocked:(BOOL)arg1 ;
-(void)setLockedColorOriginY:(double)arg1 ;
-(UIImpactFeedbackGenerator *)feedbackGenerator;
-(double)lockedColorOriginY;
-(void)setBeginPanLocation:(CGPoint)arg1 ;
-(void)_updateDropletWithLocation:(CGPoint)arg1 ;
-(void)_updateColorWithLocation:(CGPoint)arg1 ;
-(BOOL)shouldExpandHeightWithGesture:(id)arg1 ;
-(void)setHeightExpanded:(BOOL)arg1 ;
-(void)_updatePathsForLocation:(CGPoint)arg1 ;
-(id)pathForLocation:(CGPoint)arg1 ;
-(void)setCompactButtonIcon:(id)arg1 ;
-(void)moveDropletToColor:(id)arg1 ;
-(void)syncFromColorPicker:(id)arg1 ;
-(void)setBackgroundShapeView:(SCShapeView *)arg1 ;
-(void)setGradientColorView:(SCColorPickerGradientView *)arg1 ;
-(void)setDropletView:(SCColorPickerDropletView *)arg1 ;
-(void)setFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(CGPoint)previousDropletCenter;
-(void)setPreviousDropletCenter:(CGPoint)arg1 ;
-(double)dropletOffset;
-(void)setDropletOffset:(double)arg1 ;
-(void)setDropletOriginY:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCColorPickerViewDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SCColorPickerViewDelegate>)delegate;
-(double)defaultHeight;
-(void)longPress:(id)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
@end
