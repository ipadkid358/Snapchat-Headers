/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SCScribbleViewDelegate;
@class UIColor, SCDrawingGestureRecognizer, UIPinchGestureRecognizer, UIImage, SCBrushSizeAffordance, UIBezierPath, NSString;

@interface SCScribbleView : UIView <UIGestureRecognizerDelegate> {

	long long _pinchMode;
	BOOL _tapEnabled;
	BOOL _scribbleShouldClose;
	unsigned _pointCounter;
	id<SCScribbleViewDelegate> _delegate;
	UIColor* _color;
	SCDrawingGestureRecognizer* _drawingGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	UIImage* _incrementalImage;
	SCBrushSizeAffordance* _brushSizeAffordance;
	UIBezierPath* _path;
	double _lineWidth;
	double _radius;
	double _scale;
	double _lastScale;
	CGPoint _startPoint;
	CGRect _scribbleBounds;
	SCD_Struct_SC582 _pointBuffer;

}

@property (nonatomic,retain) UIImage * incrementalImage;                                         //@synthesize incrementalImage=_incrementalImage - In the implementation block
@property (nonatomic,retain) SCBrushSizeAffordance * brushSizeAffordance;                        //@synthesize brushSizeAffordance=_brushSizeAffordance - In the implementation block
@property (nonatomic,retain) UIBezierPath * path;                                                //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) CGRect scribbleBounds;                                              //@synthesize scribbleBounds=_scribbleBounds - In the implementation block
@property (assign,nonatomic) CGPoint startPoint;                                                 //@synthesize startPoint=_startPoint - In the implementation block
@property (assign,nonatomic) SCD_Struct_SC582 pointBuffer;                                       //@synthesize pointBuffer=_pointBuffer - In the implementation block
@property (assign,nonatomic) unsigned pointCounter;                                              //@synthesize pointCounter=_pointCounter - In the implementation block
@property (assign,nonatomic) BOOL tapEnabled;                                                    //@synthesize tapEnabled=_tapEnabled - In the implementation block
@property (assign,nonatomic) double lineWidth;                                                   //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) double radius;                                                      //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) BOOL scribbleShouldClose;                                           //@synthesize scribbleShouldClose=_scribbleShouldClose - In the implementation block
@property (assign,nonatomic) double scale;                                                       //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double lastScale;                                                   //@synthesize lastScale=_lastScale - In the implementation block
@property (assign,nonatomic,__weak) id<SCScribbleViewDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * color;                                                    //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) SCDrawingGestureRecognizer * drawingGestureRecognizer;              //@synthesize drawingGestureRecognizer=_drawingGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIPinchGestureRecognizer * pinchGestureRecognizer;                  //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLastScale:(double)arg1 ;
-(double)lastScale;
-(id)initWithFrame:(CGRect)arg1 lineWidth:(double)arg2 tapEnabled:(BOOL)arg3 radius:(double)arg4 scribbleShouldClose:(BOOL)arg5 pinchMode:(long long)arg6 ;
-(void)_scribblePress:(id)arg1 ;
-(void)_pinchPress:(id)arg1 ;
-(void)drawBitmap;
-(void)drawCircle;
-(void)_toggleBrushAffordanceShown:(BOOL)arg1 ;
-(void)_setBrushAffordanceWidth:(double)arg1 withCenter:(CGPoint)arg2 ;
-(void)_setBrushAffordanceVisibility:(BOOL)arg1 ;
-(void)_setBrushAffordanceColor:(id)arg1 ;
-(SCDrawingGestureRecognizer *)drawingGestureRecognizer;
-(void)setDrawingGestureRecognizer:(SCDrawingGestureRecognizer *)arg1 ;
-(UIImage *)incrementalImage;
-(void)setIncrementalImage:(UIImage *)arg1 ;
-(SCBrushSizeAffordance *)brushSizeAffordance;
-(void)setBrushSizeAffordance:(SCBrushSizeAffordance *)arg1 ;
-(CGRect)scribbleBounds;
-(void)setScribbleBounds:(CGRect)arg1 ;
-(SCD_Struct_SC582)pointBuffer;
-(void)setPointBuffer:(SCD_Struct_SC582)arg1 ;
-(unsigned)pointCounter;
-(void)setPointCounter:(unsigned)arg1 ;
-(BOOL)scribbleShouldClose;
-(void)setScribbleShouldClose:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<SCScribbleViewDelegate>)arg1 ;
-(id<SCScribbleViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setScale:(double)arg1 ;
-(UIBezierPath *)path;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(double)scale;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(void)setStartPoint:(CGPoint)arg1 ;
-(CGPoint)startPoint;
-(void)setPath:(UIBezierPath *)arg1 ;
-(void)setRadius:(double)arg1 ;
-(double)radius;
-(void)setTapEnabled:(BOOL)arg1 ;
-(BOOL)tapEnabled;
-(void)setPinchGestureRecognizer:(UIPinchGestureRecognizer *)arg1 ;
@end

