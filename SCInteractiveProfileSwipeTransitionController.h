/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIPercentDrivenInteractiveTransition.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SCInteractiveProfileSwipeTransitionControllerDelegate, SCInteractiveProfileSwipeTransitionControllerDataSource;
@class UIPanGestureRecognizer, UIView, UIViewController, NSString;

@interface SCInteractiveProfileSwipeTransitionController : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate> {

	unsigned long long _transitionType;
	UIPanGestureRecognizer* _panGesture;
	unsigned long long _direction;
	BOOL _shouldCompleteTransition;
	UIView* _presentingView;
	BOOL _interactionInProgress;
	id<SCInteractiveProfileSwipeTransitionControllerDelegate> _delegate;
	id<SCInteractiveProfileSwipeTransitionControllerDataSource> _presentationDataSource;
	UIViewController* _presentingViewController;
	double _directionalSlopFactor;

}

@property (assign,nonatomic,__weak) id<SCInteractiveProfileSwipeTransitionControllerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCInteractiveProfileSwipeTransitionControllerDataSource> presentationDataSource;              //@synthesize presentationDataSource=_presentationDataSource - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * presentingViewController;                                                   //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * panGesture;                                                                  //@synthesize panGesture=_panGesture - In the implementation block
@property (nonatomic,readonly) unsigned long long transitionType;                                                                    //@synthesize transitionType=_transitionType - In the implementation block
@property (assign,nonatomic) double directionalSlopFactor;                                                                           //@synthesize directionalSlopFactor=_directionalSlopFactor - In the implementation block
@property (assign,nonatomic) BOOL interactionInProgress;                                                                             //@synthesize interactionInProgress=_interactionInProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isDirectionAllowedWithVectorPoint:(CGPoint)arg1 direction:(unsigned long long)arg2 ;
+(double)_translationMagnitudeWithTranslation:(CGPoint)arg1 direction:(unsigned long long)arg2 ;
+(BOOL)_isValidPlaneWithVelocity:(CGPoint)arg1 direction:(unsigned long long)arg2 slopFactor:(double)arg3 ;
-(void)handleGesture:(id)arg1 ;
-(void)setInteractionInProgress:(BOOL)arg1 ;
-(double)_maxTranslationWithDirection:(unsigned long long)arg1 ;
-(id<SCInteractiveProfileSwipeTransitionControllerDataSource>)presentationDataSource;
-(void)wireToView:(id)arg1 ;
-(void)setPresentationDataSource:(id<SCInteractiveProfileSwipeTransitionControllerDataSource>)arg1 ;
-(double)directionalSlopFactor;
-(void)setDirectionalSlopFactor:(double)arg1 ;
-(id)initWithPresentingViewController:(id)arg1 transitionType:(unsigned long long)arg2 direction:(unsigned long long)arg3 ;
-(void)setDelegate:(id<SCInteractiveProfileSwipeTransitionControllerDelegate>)arg1 ;
-(id<SCInteractiveProfileSwipeTransitionControllerDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UIViewController *)presentingViewController;
-(long long)completionCurve;
-(UIPanGestureRecognizer *)panGesture;
-(BOOL)interactionInProgress;
-(unsigned long long)transitionType;
@end

