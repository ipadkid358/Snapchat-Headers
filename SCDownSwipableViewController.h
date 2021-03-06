/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition, NSString;

@interface SCDownSwipableViewController : UIViewController <UINavigationControllerDelegate, UIGestureRecognizerDelegate> {

	BOOL _statusBarHiddenPrevious;
	BOOL _interactionInProgress;
	UIPanGestureRecognizer* _downSwipeRecognizer;
	UIPercentDrivenInteractiveTransition* _interactivePopTransition;
	double _contentOffsetY;

}

@property (nonatomic,retain) UIPanGestureRecognizer * downSwipeRecognizer;                                 //@synthesize downSwipeRecognizer=_downSwipeRecognizer - In the implementation block
@property (nonatomic,retain) UIPercentDrivenInteractiveTransition * interactivePopTransition;              //@synthesize interactivePopTransition=_interactivePopTransition - In the implementation block
@property (assign,nonatomic) BOOL interactionInProgress;                                                   //@synthesize interactionInProgress=_interactionInProgress - In the implementation block
@property (assign,nonatomic) double contentOffsetY;                                                        //@synthesize contentOffsetY=_contentOffsetY - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)inValidView:(id)arg1 ;
-(void)setInteractivePopTransition:(UIPercentDrivenInteractiveTransition *)arg1 ;
-(UIPercentDrivenInteractiveTransition *)interactivePopTransition;
-(void)setInteractionInProgress:(BOOL)arg1 ;
-(void)handlePanGestureRecognizer:(id)arg1 ;
-(UIPanGestureRecognizer *)downSwipeRecognizer;
-(void)downSwipeSucceed;
-(double)downSwipeContentOffsetY;
-(void)setDownSwipeRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(BOOL)disableDownSwipe;
-(double)contentOffsetY;
-(void)setContentOffsetY:(double)arg1 ;
-(void)downSwipePrepare;
-(void)downSwipeCancelled;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(BOOL)interactionInProgress;
@end

