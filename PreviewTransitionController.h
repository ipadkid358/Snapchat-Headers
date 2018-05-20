/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class SCCameraTimer, AVCameraViewController, NSString;

@interface PreviewTransitionController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> {

	BOOL _presenting;
	BOOL _isZeroAnimationDuration;
	SCCameraTimer* _cameraTimer;
	AVCameraViewController* _cameraViewController;

}

@property (assign,getter=isPresenting,nonatomic) BOOL presenting;                               //@synthesize presenting=_presenting - In the implementation block
@property (nonatomic,retain) SCCameraTimer * cameraTimer;                                       //@synthesize cameraTimer=_cameraTimer - In the implementation block
@property (assign,nonatomic,__weak) AVCameraViewController * cameraViewController;              //@synthesize cameraViewController=_cameraViewController - In the implementation block
@property (assign,nonatomic) BOOL isZeroAnimationDuration;                                      //@synthesize isZeroAnimationDuration=_isZeroAnimationDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCCameraTimer *)cameraTimer;
-(void)setCameraTimer:(SCCameraTimer *)arg1 ;
-(id)initWithCameraViewController:(id)arg1 isZeroAnimationDuration:(BOOL)arg2 ;
-(id)previewViewControllerForTransitionContext:(id)arg1 ;
-(id)mainViewControllerForTransitionContext:(id)arg1 ;
-(CGAffineTransform)_transformForCapturerPreviewContainerWithContainerView:(id)arg1 ;
-(BOOL)isZeroAnimationDuration;
-(void)setIsZeroAnimationDuration:(BOOL)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setPresenting:(BOOL)arg1 ;
-(void)setCameraViewController:(AVCameraViewController *)arg1 ;
-(AVCameraViewController *)cameraViewController;
-(BOOL)isPresenting;
@end

