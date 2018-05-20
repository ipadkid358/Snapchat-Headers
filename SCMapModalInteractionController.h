/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

@class UIPanGestureRecognizer, SCMapModalInteractionControllerInteractiveTransition, UIViewController;

@interface SCMapModalInteractionController : UIPercentDrivenInteractiveTransition {

	BOOL _interactionInProgress;
	UIPanGestureRecognizer* _panGestureRecognizer;
	SCMapModalInteractionControllerInteractiveTransition* _interactiveTransition;
	UIViewController* _viewController;

}

@property (assign,nonatomic) BOOL interactionInProgress;                                                                  //@synthesize interactionInProgress=_interactionInProgress - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                                                    //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                                               //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,readonly) SCMapModalInteractionControllerInteractiveTransition * interactiveTransition;              //@synthesize interactiveTransition=_interactiveTransition - In the implementation block
@property (nonatomic,readonly) long long interactionType; 
-(void)_onPan:(id)arg1 ;
-(void)setInteractionInProgress:(BOOL)arg1 ;
-(id)initWithViewController:(id)arg1 gestureRecognizerDelegate:(id)arg2 interactionType:(long long)arg3 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(long long)interactionType;
-(BOOL)interactionInProgress;
-(SCMapModalInteractionControllerInteractiveTransition *)interactiveTransition;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
@end
