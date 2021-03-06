/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol SCProfileMenuDataProvider;
@class SCProfileMenuView, UIView, NSString;

@interface SCProfileMenuViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {

	SCProfileMenuView* _menuView;
	UIView* _darkGradientBackground;
	id<SCProfileMenuDataProvider> _dataProvider;
	BOOL _hasShownMenuView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleBackgroundTap;
-(void)_handleSwipeMenuView;
-(id)initWithMenuViewDataProvider:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)_initSubviews;
@end

