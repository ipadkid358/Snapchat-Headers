/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class NYTPhotoTransitionAnimator, NYTPhotoDismissalInteractionController, UIView, NSString;

@interface NYTPhotoTransitionController : NSObject <UIViewControllerTransitioningDelegate> {

	BOOL _forcesNonInteractiveDismissal;
	NYTPhotoTransitionAnimator* _animator;
	NYTPhotoDismissalInteractionController* _interactionController;

}

@property (nonatomic,retain) NYTPhotoTransitionAnimator * animator;                                       //@synthesize animator=_animator - In the implementation block
@property (nonatomic,retain) NYTPhotoDismissalInteractionController * interactionController;              //@synthesize interactionController=_interactionController - In the implementation block
@property (nonatomic,retain) UIView * startingView; 
@property (nonatomic,retain) UIView * endingView; 
@property (assign,nonatomic) BOOL forcesNonInteractiveDismissal;                                          //@synthesize forcesNonInteractiveDismissal=_forcesNonInteractiveDismissal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)startingView;
-(UIView *)endingView;
-(void)setStartingView:(UIView *)arg1 ;
-(void)setEndingView:(UIView *)arg1 ;
-(void)didPanWithPanGestureRecognizer:(id)arg1 viewToPan:(id)arg2 anchorPoint:(CGPoint)arg3 ;
-(BOOL)forcesNonInteractiveDismissal;
-(void)setForcesNonInteractiveDismissal:(BOOL)arg1 ;
-(id)init;
-(NYTPhotoDismissalInteractionController *)interactionController;
-(void)setInteractionController:(NYTPhotoDismissalInteractionController *)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(void)setAnimator:(NYTPhotoTransitionAnimator *)arg1 ;
-(NYTPhotoTransitionAnimator *)animator;
@end

