/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIViewController.h>
#import <Snapchat/SCModalHamburgerRootViewDelegate.h>
#import <Snapchat/SCChatHamburgerTableSectionPresentationDelegate.h>
#import <Snapchat/SCCardAnimationControllerDelegate.h>

@protocol SCHamburgerAnimationDelegte;
@class SCModalHamburgerRootView, SCChatHamburgerViewController, NSArray, SCChatSideMenuLifeCycleListenerAnnouncer, SCCardAnimationController, NSString;

@interface SCModalHamburgerRootViewController : UIViewController <SCModalHamburgerRootViewDelegate, SCChatHamburgerTableSectionPresentationDelegate, SCCardAnimationControllerDelegate> {

	SCModalHamburgerRootView* _containerView;
	SCChatHamburgerViewController* _hamburgerContentViewController;
	NSArray* _sections;
	SCChatSideMenuLifeCycleListenerAnnouncer* _lifeCycleAnnouncer;
	SCCardAnimationController* _cardAnimationController;
	NSString* _conversationId;
	BOOL _isGroup;
	unsigned long long _type;
	CGPoint _contentViewPreviousYOffset;
	id<SCHamburgerAnimationDelegte> _animationDelegate;

}

@property (assign,nonatomic,__weak) id<SCHamburgerAnimationDelegte> animationDelegate;              //@synthesize animationDelegate=_animationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldDismissViewControllerLater;
-(void)cardAnimationController:(id)arg1 startContentViewPresentAnimationWithDuration:(double)arg2 ;
-(void)cardAnimationController:(id)arg1 startContentViewDismissAnimationWithDuration:(double)arg2 ;
-(BOOL)cardAnimationControllerPullGestureShouldStart:(id)arg1 ;
-(void)cardAnimationControllerPullGestureDidChange:(id)arg1 ;
-(void)cardAnimationControllerPullGestureDidEnd:(id)arg1 ;
-(void)cardAnimationController:(id)arg1 didUpdateContentViewDismissPercentage:(double)arg2 ;
-(void)addLifeCycleListener:(id)arg1 ;
-(id)initWithSections:(id)arg1 animationDelegate:(id)arg2 conversationId:(id)arg3 isGroup:(BOOL)arg4 ;
-(id)initWithSections:(id)arg1 animationDelegate:(id)arg2 conversationId:(id)arg3 isGroup:(BOOL)arg4 type:(unsigned long long)arg5 ;
-(void)removeLifeCycleListener:(id)arg1 ;
-(void)hamburgerTableSection:(id)arg1 presentViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)hamburgerTableSection:(id)arg1 dismissViewControllerAnimated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setupSection:(id)arg1 ;
-(void)modalHamburgerViewDidTapDismiss:(id)arg1 ;
-(BOOL)handleAppNotification:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)loadView;
-(void)setAnimationDelegate:(id<SCHamburgerAnimationDelegte>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id<SCHamburgerAnimationDelegte>)animationDelegate;
@end
