/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, UIPanGestureRecognizer, UIView, UIImageView, UIViewController, NSArray, UIVisualEffectView, SCMiniProfileSectionsView, NSString;

@interface SCMiniProfileBaseViewController : UIViewController <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate> {

	BOOL _startingStatusBarHidden;
	long long _startingStatusBarStyle;
	BOOL _shouldDismissImmediatelyOnNextAppearance;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	double _startPanGestureOffset;
	double _customDismissDuration;
	UITapGestureRecognizer* _xButtonTapGestureRecognizer;
	UIView* _xButtonContainerView;
	UIImageView* _xButtonImageView;
	UIViewController* _viewControllerNeedingAppearanceMethods;
	BOOL _suppressesAppearanceMethods;
	BOOL _closeButtonVisible;
	long long _cellViewPosition;
	NSArray* _localSectionControllers;
	UIVisualEffectView* _blurView;
	SCMiniProfileSectionsView* _sectionsView;
	NSArray* _sectionControllers;

}

@property (assign,nonatomic,__weak) UIVisualEffectView * blurView;                         //@synthesize blurView=_blurView - In the implementation block
@property (assign,nonatomic,__weak) SCMiniProfileSectionsView * sectionsView;              //@synthesize sectionsView=_sectionsView - In the implementation block
@property (nonatomic,copy) NSArray * sectionControllers;                                   //@synthesize sectionControllers=_sectionControllers - In the implementation block
@property (assign,nonatomic) BOOL suppressesAppearanceMethods;                             //@synthesize suppressesAppearanceMethods=_suppressesAppearanceMethods - In the implementation block
@property (assign,nonatomic) long long cellViewPosition;                                   //@synthesize cellViewPosition=_cellViewPosition - In the implementation block
@property (nonatomic,copy) NSArray * localSectionControllers;                              //@synthesize localSectionControllers=_localSectionControllers - In the implementation block
@property (assign,nonatomic) BOOL closeButtonVisible;                                      //@synthesize closeButtonVisible=_closeButtonVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didPan:(id)arg1 ;
-(void)setCellViewPosition:(long long)arg1 ;
-(long long)cellViewPosition;
-(NSArray *)sectionControllers;
-(void)_didTap:(id)arg1 ;
-(void)setSectionControllers:(NSArray *)arg1 ;
-(void)_updateViewSectionControllers;
-(void)_setupCloseButton;
-(void)_didTapCloseButton:(id)arg1 ;
-(BOOL)suppressesAppearanceMethods;
-(void)_notifyParentViewControllerIfNeededOfAppearanceChange:(BOOL)arg1 ;
-(NSArray *)localSectionControllers;
-(void)setShouldDismissImmediatelyOnNextAppearance;
-(SCMiniProfileSectionsView *)sectionsView;
-(void)setLocalSectionControllers:(NSArray *)arg1 ;
-(void)closeButtonVisible:(BOOL)arg1 ;
-(void)setSuppressesAppearanceMethods:(BOOL)arg1 ;
-(BOOL)closeButtonVisible;
-(void)setCloseButtonVisible:(BOOL)arg1 ;
-(void)setSectionsView:(SCMiniProfileSectionsView *)arg1 ;
-(id)init;
-(void)reload;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(long long)preferredStatusBarUpdateAnimation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(UIVisualEffectView *)blurView;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
@end
