/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:30 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIPercentDrivenInteractiveTransition.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <Snapchat/SCProfileTransitionCoordinator.h>

@protocol SCProfileTransitionCoordinatorDelegate, SCProfileTransitionCoordinatorDataSource;
@class UINavigationController, SCProfileV3ViewController, UIViewController, UIView, SCProfileV3TransitionControllerScrollView, SCPassthroughViewsCoordinator, UIGestureRecognizer, NSString;

@interface SCProfileV3TransitionCoordinator : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning, UIScrollViewDelegate, UIViewControllerTransitioningDelegate, SCProfileTransitionCoordinator> {

	unsigned long long _transitionType;
	UINavigationController* _presentedViewController;
	SCProfileV3ViewController* _presentedProfileViewController;
	UIViewController* _presentingViewController;
	UIViewController* _interactivePresentingViewController;
	UIView* _interactivePresentingView;
	SCProfileV3TransitionControllerScrollView* _scrollView;
	SCPassthroughViewsCoordinator* _passthroughCoordinator;
	BOOL _isInteractiveTransitionInProgress;
	id<SCProfileTransitionCoordinatorDelegate> _delegate;
	id<SCProfileTransitionCoordinatorDataSource> _dataSource;
	UIGestureRecognizer* _searchGestureRecognizer;
	UIView* _tintView;

}

@property (nonatomic,readonly) BOOL isPresenting; 
@property (nonatomic,retain) UIView * tintView;                                                           //@synthesize tintView=_tintView - In the implementation block
@property (assign,nonatomic,__weak) id<SCProfileTransitionCoordinatorDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCProfileTransitionCoordinatorDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) BOOL isInteractiveTransitionInProgress;                                    //@synthesize isInteractiveTransitionInProgress=_isInteractiveTransitionInProgress - In the implementation block
@property (nonatomic,readonly) BOOL isPresented; 
@property (nonatomic,readonly) double percentVisible; 
@property (assign,nonatomic,__weak) UIGestureRecognizer * searchGestureRecognizer;                        //@synthesize searchGestureRecognizer=_searchGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)wireToView:(id)arg1 ;
-(id)initWithPassthroughViews:(id)arg1 ;
-(double)percentVisible;
-(id)_configuredPresentedViewController;
-(void)dismissProfileViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentationDidSucceed;
-(void)_dismissalDidSucceed;
-(BOOL)_shouldBeginTransitionWithTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)presentProfileFromViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissProfileViewControllerAnimated:(BOOL)arg1 ;
-(double)_percentCompleteForTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(BOOL)_shouldCompleteTransitionWithTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)_scrollViewDidEndScrolling:(id)arg1 ;
-(void)pushViewControllerOntoProfileViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isInteractiveTransitionInProgress;
-(void)setupForInteractivePresentation:(id)arg1 presentingView:(id)arg2 ;
-(void)setSearchGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(UIGestureRecognizer *)searchGestureRecognizer;
-(void)setDataSource:(id<SCProfileTransitionCoordinatorDataSource>)arg1 ;
-(void)setDelegate:(id<SCProfileTransitionCoordinatorDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(id<SCProfileTransitionCoordinatorDataSource>)dataSource;
-(id<SCProfileTransitionCoordinatorDelegate>)delegate;
-(double)transitionDuration:(id)arg1 ;
-(void)cancelInteractiveTransition;
-(void)animateTransition:(id)arg1 ;
-(void)finishInteractiveTransition;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(UIView *)tintView;
-(BOOL)isPresented;
-(BOOL)isPresenting;
-(void)setTintView:(UIView *)arg1 ;
@end

