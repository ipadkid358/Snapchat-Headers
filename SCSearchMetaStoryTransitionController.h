/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <Snapchat/SCSearchTranslationDrivenInteractiveTransitioning.h>

@class SCSearchNavigationTransitionContext, NSString;

@interface SCSearchMetaStoryTransitionController : NSObject <UIViewControllerAnimatedTransitioning, SCSearchTranslationDrivenInteractiveTransitioning> {

	SCSearchNavigationTransitionContext* _transitionContext;
	BOOL _isPresenting;
	double _metaStoryViewOriginalOffsetY;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(void)_prepareTransition;
-(void)updateInteractiveTransitionWithTransitionY:(double)arg1 ;
-(void)_handleAnimationCompletion;
-(id)initWithIsPresenting:(BOOL)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)cancelInteractiveTransition;
-(void)animateTransition:(id)arg1 ;
-(void)finishInteractiveTransition;
-(void)startInteractiveTransition:(id)arg1 ;
@end

