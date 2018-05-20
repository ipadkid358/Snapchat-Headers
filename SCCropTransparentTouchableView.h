/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <Snapchat/SCTouchControllable.h>
#import <Snapchat/SCMovableView.h>

@protocol SCCropOverlayViewListener;
@class NSString;

@interface SCCropTransparentTouchableView : UIView <SCTouchControllable, SCMovableView> {

	BOOL _isAutoAdjusting;
	id<SCCropOverlayViewListener> _delegate;
	double _scale;
	double _rotation;
	double _minimalScale;
	double _maximalScale;
	CGAffineTransform _rotationTransform;
	CGAffineTransform _scaleTransform;

}

@property (assign,nonatomic) CGAffineTransform rotationTransform;                        //@synthesize rotationTransform=_rotationTransform - In the implementation block
@property (assign,nonatomic) CGAffineTransform scaleTransform;                           //@synthesize scaleTransform=_scaleTransform - In the implementation block
@property (assign,nonatomic,__weak) id<SCCropOverlayViewListener> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double scale;                                               //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double rotation;                                            //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic) CGPoint translation; 
@property (assign,nonatomic) double minimalScale;                                        //@synthesize minimalScale=_minimalScale - In the implementation block
@property (assign,nonatomic) double maximalScale;                                        //@synthesize maximalScale=_maximalScale - In the implementation block
@property (assign,nonatomic) BOOL isAutoAdjusting;                                       //@synthesize isAutoAdjusting=_isAutoAdjusting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGRect bounds; 
-(void)pan:(id)arg1 ;
-(void)pinch:(id)arg1 ;
-(void)_recomputeTransform;
-(CGAffineTransform)rotationTransform;
-(void)rotation:(id)arg1 ;
-(void)setRotationTransform:(CGAffineTransform)arg1 ;
-(void)setMinimalScale:(double)arg1 ;
-(void)setMaximalScale:(double)arg1 ;
-(void)setIsAutoAdjusting:(BOOL)arg1 ;
-(double)minimalScale;
-(double)maximalScale;
-(BOOL)isAutoAdjusting;
-(void)setScaleTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)scaleTransform;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SCCropOverlayViewListener>)arg1 ;
-(id<SCCropOverlayViewListener>)delegate;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(CGPoint)translation;
-(void)setTranslation:(CGPoint)arg1 ;
@end
