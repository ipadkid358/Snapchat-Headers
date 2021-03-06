/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@interface SCNavigationTransitionFactory : NSObject
+(unsigned long long)_reverseDirectionWithDirection:(unsigned long long)arg1 ;
+(id)animationPhaseForItem:(id)arg1 transitionContext:(id)arg2 transitionStyle:(unsigned long long)arg3 ;
+(id)alphaAnimationPhaseForItem:(id)arg1 transitionContext:(id)arg2 ;
+(id)slideAnimationPhaseForItem:(id)arg1 transitionContext:(id)arg2 ;
+(double)_alphaForTransitionState:(unsigned long long)arg1 transitionType:(unsigned long long)arg2 ;
+(CGRect)_frameWithRect:(CGRect)arg1 transitionType:(unsigned long long)arg2 transitionState:(unsigned long long)arg3 direction:(unsigned long long)arg4 ;
+(CGRect)_presentingFrame:(CGRect)arg1 transitionState:(unsigned long long)arg2 direction:(unsigned long long)arg3 ;
+(CGRect)_dismissalFrame:(CGRect)arg1 transitionState:(unsigned long long)arg2 direction:(unsigned long long)arg3 ;
+(CGRect)_offsetRect:(CGRect)arg1 direction:(unsigned long long)arg2 ;
+(double)_presentationAlphaForTransitionState:(unsigned long long)arg1 ;
+(double)_dismissalAlphaForTransitionState:(unsigned long long)arg1 ;
@end

