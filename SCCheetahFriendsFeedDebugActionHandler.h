/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:30 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCCheetahFriendsFeedDebugViewControllerDelegate.h>
#import <Snapchat/SCSearchActionHandling.h>

@protocol UIViewControllerTransitioningDelegate;
@class SCSessionRequestManager, SCASTProvider, UIViewController, NSString;

@interface SCCheetahFriendsFeedDebugActionHandler : NSObject <SCCheetahFriendsFeedDebugViewControllerDelegate, SCSearchActionHandling> {

	SCSessionRequestManager* _sessionRequestManager;
	SCASTProvider* _astProvider;
	UIViewController* _presentingViewController;
	id<UIViewControllerTransitioningDelegate> _transitioningDelegate;

}

@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                                  //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (assign,nonatomic,__weak) id<UIViewControllerTransitioningDelegate> transitioningDelegate;              //@synthesize transitioningDelegate=_transitioningDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3 ;
-(void)_presentDebugViewControllerWithModelString:(id)arg1 debugInfos:(id)arg2 DDMLFeatures:(id)arg3 ;
-(void)cheetahFriendsFeedDebugViewControllerNeedsToDismiss:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithSessionRequestManager:(id)arg1 astProvider:(id)arg2 ;
-(UIViewController *)presentingViewController;
-(id<UIViewControllerTransitioningDelegate>)transitioningDelegate;
-(void)setTransitioningDelegate:(id<UIViewControllerTransitioningDelegate>)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
@end

