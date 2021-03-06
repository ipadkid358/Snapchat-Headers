/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol SCUnifiedProfileTransitioning;
@class UIPanGestureRecognizer, SCUnifiedProfileViewController, NSString;

@interface SCUnifiedProfileTransitionController : NSObject <UIViewControllerAnimatedTransitioning, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate> {

	double _startPanGestureOffset;
	double _customDismissDuration;
	UIPanGestureRecognizer* _pullDownToDismissGestureRecognizer;
	SCUnifiedProfileViewController* _containerViewController;
	id<SCUnifiedProfileTransitioning> _profileTransitioning;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_pullDownToDismiss:(id)arg1 ;
-(void)_animateProfileViewToPresent:(id)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)_dismissProfileView;
-(id)init;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
@end

