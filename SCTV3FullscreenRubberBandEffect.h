/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCTV3FullscreenDraggableGesture.h>
#import <Snapchat/SCTV3FullscreenRubberBandEffect.h>

@protocol SCTV3FullscreenRubberBandEffect <NSObject>
@required
-(void)addRubberBandRegionsListener:(id)arg1;
-(void)prepareRubberBandDismissWithoutDragging;

@end


@protocol SCTV3FullscreenRubberBandDelegate, SCTV3FullscreenRubberBandRegionsListener;
@class UIView, NSString;

@interface SCTV3FullscreenRubberBandEffect : NSObject <SCTV3FullscreenDraggableGesture, SCTV3FullscreenRubberBandEffect> {

	id<SCTV3FullscreenRubberBandDelegate> _delegate;
	id<SCTV3FullscreenRubberBandRegionsListener> _regionsListener;
	UIView* _subviewToMask;
	UIView* _gestureReceivingView;
	CGPoint _initialTouchPoint;
	CGRect _targetCircleRect;
	unsigned long long _currentRubberBandRegion;
	BOOL _dismissView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupWithGestureReceivingView:(id)arg1 ;
-(void)setupWithGestureReceivingView:(id)arg1 subviewToMask:(id)arg2 ;
-(void)onDragGestureBegin:(CGPoint)arg1 ;
-(void)onDragGestureChange:(CGPoint)arg1 ;
-(BOOL)onDragGestureEnd;
-(void)updateDragTargetCircleFrame:(CGRect)arg1 ;
-(void)didLayoutSubviews;
-(id)_fullscreenPreview;
-(void)_handleRubberBandGesture:(CGPoint)arg1 ;
-(void)_handleRubberBandSubview:(CGRect)arg1 ;
-(double)_rubberBandedTranslate:(double)arg1 withScale:(double)arg2 ;
-(BOOL)_edgeIsOnScreen:(double)arg1 container:(id)arg2 ;
-(BOOL)_bottomEdgeIsOnScreen:(double)arg1 container:(id)arg2 ;
-(void)addRubberBandRegionsListener:(id)arg1 ;
-(void)prepareRubberBandDismissWithoutDragging;
-(id)initWithFullscreenPreviewDelegate:(id)arg1 ;
@end
