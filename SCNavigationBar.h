/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol SCNavigationItem;
@class SCBaseItemView, SCAnimationPhaseCoordinator;

@interface SCNavigationBar : UIView {

	SCBaseItemView* _currentContentItemView;
	SCBaseItemView* _incomingContentItemView;
	id<SCNavigationItem> _currentNavigationItem;
	SCAnimationPhaseCoordinator* _presentationAnimator;
	SCAnimationPhaseCoordinator* _dismissalAnimator;

}
-(void)prepareTransitionWithNavigationItem:(id)arg1 transitionDirection:(unsigned long long)arg2 ;
-(void)configureWithNavigationItem:(id)arg1 transitionDirection:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)completeTransitionWithNavigationItem:(id)arg1 ;
-(void)_transitionFromNavigationItem:(id)arg1 toNavigationItem:(id)arg2 transitionDirection:(unsigned long long)arg3 transitionState:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)performTransitionWithNavigationItem:(id)arg1 transitionDirection:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelTransitionWithNavigationItem:(id)arg1 ;
-(void)layoutSubviews;
@end

