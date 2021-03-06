/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class UIView, UIPanGestureRecognizer, NSString;

@interface SCFullscreenContextDismissAnimator : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {

	UIView* _sourceView;
	UIView* _destinationView;
	UIView* _snapshotView;
	UIView* _backgroundOverlay;
	id<UIViewControllerContextTransitioning> _transitionContext;
	BOOL _isGestureEndedBeforeTransition;
	BOOL _isTransitionCanceledBeforeTransition;
	UIPanGestureRecognizer* _pan;
	BOOL _dismissCanceled;

}

@property (nonatomic,readonly) BOOL dismissCanceled;                    //@synthesize dismissCanceled=_dismissCanceled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(void)_finishInteractiveTransition;
-(id)initWithSourceView:(id)arg1 destinationView:(id)arg2 ;
-(void)updateWithTranslation:(CGPoint)arg1 ;
-(BOOL)dismissCanceled;
-(double)transitionDuration:(id)arg1 ;
-(void)cancelInteractiveTransition;
-(void)animateTransition:(id)arg1 ;
-(void)finishInteractiveTransition;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)_cancelInteractiveTransition;
@end

