/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:27 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SCCardAnimationControllerDelegate, SCCardAnimationViewProtocol;
@class UIView, UIPanGestureRecognizer, NSString;

@interface SCCardAnimationController : NSObject <UIGestureRecognizerDelegate> {

	id<SCCardAnimationControllerDelegate> _delegate;
	UIView* _contentView;
	UIView*<SCCardAnimationViewProtocol> _backgroundView;
	UIPanGestureRecognizer* _horizontalPanGesture;
	UIPanGestureRecognizer* _verticalPanGesture;
	double _contentViewTopOffset;
	CGPoint _translationStartPoint;

}

@property (assign,nonatomic,__weak) UIView * contentView;                                             //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) UIView*<SCCardAnimationViewProtocol> backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * horizontalPanGesture;                           //@synthesize horizontalPanGesture=_horizontalPanGesture - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * verticalPanGesture;                             //@synthesize verticalPanGesture=_verticalPanGesture - In the implementation block
@property (assign,nonatomic) double contentViewTopOffset;                                             //@synthesize contentViewTopOffset=_contentViewTopOffset - In the implementation block
@property (assign,nonatomic) CGPoint translationStartPoint;                                           //@synthesize translationStartPoint=_translationStartPoint - In the implementation block
@property (assign,nonatomic,__weak) id<SCCardAnimationControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateContentViewWithVerticalPercentDismissed:(double)arg1 animated:(BOOL)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)hideBackgroundViewContent;
-(void)showBackgroundViewContent;
-(void)setTranslationStartPoint:(CGPoint)arg1 ;
-(void)setContentViewTopOffset:(double)arg1 ;
-(UIPanGestureRecognizer *)horizontalPanGesture;
-(UIPanGestureRecognizer *)verticalPanGesture;
-(void)_resetAll;
-(void)handleHorizontalPan:(id)arg1 ;
-(void)handleVerticlePan:(id)arg1 ;
-(double)contentViewTopOffset;
-(void)_updateContentViewWithHorizontalPercentDismissed:(double)arg1 animated:(BOOL)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_resetContentViewAnimated:(BOOL)arg1 duration:(double)arg2 ;
-(CGPoint)translationStartPoint;
-(void)_updateContentViewWithAnimation:(/*^block*/id)arg1 animated:(BOOL)arg2 duration:(double)arg3 percentDismissed:(double)arg4 completion:(/*^block*/id)arg5 ;
-(void)showContentViewWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissContentViewWithCompletion:(/*^block*/id)arg1 ;
-(void)startTrackingWithContentView:(id)arg1 contentViewTopOffset:(double)arg2 backgroundView:(id)arg3 ;
-(void)setHorizontalPanGesture:(UIPanGestureRecognizer *)arg1 ;
-(void)setVerticalPanGesture:(UIPanGestureRecognizer *)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(void)setDelegate:(id<SCCardAnimationControllerDelegate>)arg1 ;
-(id<SCCardAnimationControllerDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setBackgroundView:(UIView*<SCCardAnimationViewProtocol>)arg1 ;
-(UIView*<SCCardAnimationViewProtocol>)backgroundView;
-(void)stopTracking;
@end
