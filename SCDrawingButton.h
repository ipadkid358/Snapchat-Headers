/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCGrowingButton.h>

@protocol SCDrawingDelegate;
@class SCDrawingGestureRecognizer, UIPinchGestureRecognizer, UIColor, UIView, SCGrowingButton, SCDrawingView;

@interface SCDrawingButton : SCGrowingButton {

	SCDrawingGestureRecognizer* _drawingGestureRecognizer;
	UIPinchGestureRecognizer* _pinchRecognizer;
	double _lastScale;
	CGPoint _previousPoint;
	BOOL _brushIsScaled;
	BOOL _activelyDrawing;
	BOOL _selected;
	BOOL _highlighted;
	id<SCDrawingDelegate> _drawingDelegate;
	UIColor* _color;
	double _scale;
	UIView* _drawingButtonBackground;
	UIView* _undoDrawingBackground;
	SCGrowingButton* _undoDrawingButton;
	SCDrawingView* _drawingView;

}

@property (nonatomic,retain) UIView * drawingButtonBackground;                           //@synthesize drawingButtonBackground=_drawingButtonBackground - In the implementation block
@property (nonatomic,retain) UIView * undoDrawingBackground;                             //@synthesize undoDrawingBackground=_undoDrawingBackground - In the implementation block
@property (nonatomic,retain) SCGrowingButton * undoDrawingButton;                        //@synthesize undoDrawingButton=_undoDrawingButton - In the implementation block
@property (nonatomic,retain) SCDrawingView * drawingView;                                //@synthesize drawingView=_drawingView - In the implementation block
@property (assign,getter=isActivelyDrawing,nonatomic) BOOL activelyDrawing;              //@synthesize activelyDrawing=_activelyDrawing - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                            //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                      //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic,__weak) id<SCDrawingDelegate> drawingDelegate;               //@synthesize drawingDelegate=_drawingDelegate - In the implementation block
@property (nonatomic,readonly) UIColor * color;                                          //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) double scale;                                             //@synthesize scale=_scale - In the implementation block
-(void)showControls:(BOOL)arg1 ;
-(void)setDrawingDelegate:(id<SCDrawingDelegate>)arg1 ;
-(SCDrawingView *)drawingView;
-(void)addToView:(id)arg1 withDrawingView:(id)arg2 ;
-(BOOL)isActivelyDrawing;
-(void)didStartDrawing;
-(void)didEndDrawingWithStrokeSize:(double)arg1 isResized:(BOOL)arg2 ;
-(void)setDrawingView:(SCDrawingView *)arg1 ;
-(void)drawingPressed;
-(void)setDrawingButtonBackground:(UIView *)arg1 ;
-(UIView *)drawingButtonBackground;
-(void)setUndoDrawingBackground:(UIView *)arg1 ;
-(UIView *)undoDrawingBackground;
-(void)initUndoDrawingButton;
-(SCGrowingButton *)undoDrawingButton;
-(void)setUndoDrawingButton:(SCGrowingButton *)arg1 ;
-(void)undoPressed;
-(void)_drawingPress:(id)arg1 ;
-(void)_scalePinch:(id)arg1 ;
-(void)exitDrawingMode;
-(id<SCDrawingDelegate>)drawingDelegate;
-(long long)historyCount;
-(void)setActivelyDrawing:(BOOL)arg1 ;
-(BOOL)drawingExists;
-(id)getUIImageForImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(double)scale;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setOpacity:(float)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)updateColor:(id)arg1 ;
-(void)stateChanged;
@end

