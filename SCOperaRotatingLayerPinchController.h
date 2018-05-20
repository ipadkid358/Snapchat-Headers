/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SCOperaRotatingLayerPinchControllerDelegate;
@class UIPinchGestureRecognizer, NSString;

@interface SCOperaRotatingLayerPinchController : NSObject <UIGestureRecognizerDelegate> {

	double _smallestScale;
	double _largestScale;
	double _scale;
	double _rotationViewDiameter;
	CGRect _viewBounds;
	id<SCOperaRotatingLayerPinchControllerDelegate> _delegate;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;

}

@property (assign,nonatomic,__weak) id<SCOperaRotatingLayerPinchControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double scale; 
@property (nonatomic,retain) UIPinchGestureRecognizer * pinchGestureRecognizer;                            //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setStartPinched:(BOOL)arg1 ;
-(id)initWithViewBounds:(CGRect)arg1 rotationViewDiameter:(double)arg2 delegate:(id)arg3 ;
-(void)addPinchGesture:(id)arg1 ;
-(BOOL)isInPinchedState;
-(double)computeScaleProgress;
-(double)_adjustedVideoScaleFactor:(double)arg1 ;
-(void)setDelegate:(id<SCOperaRotatingLayerPinchControllerDelegate>)arg1 ;
-(id<SCOperaRotatingLayerPinchControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(double)scale;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(void)_handlePinch:(id)arg1 ;
-(void)setPinchGestureRecognizer:(UIPinchGestureRecognizer *)arg1 ;
@end

