/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:25 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCPotentiallyEligibleFlowDelegate.h>
#import <Snapchat/SCSnapCashCardLinkingDelegate.h>
#import <Snapchat/SCSnapCashRainSenderViewControllerDelegate.h>
#import <Snapchat/SCSnapCVVPasscodeViewControllerDelegate.h>
#import <Snapchat/SCSnapCashBlockerResolutionResultProtocol.h>
#import <Snapchat/SCSnapCashRainReceiverViewControllerDelegate.h>
#import <Snapchat/SCChatMessageReceiveListener.h>

@protocol SCChatMessageActionHandler, SCSnapCashControllerDelegate;
@class NSString, UIViewController, SCSnapCashRainSenderViewController, SCUserSession, SCSnapCashPaymentV3, SCPotentiallyEligibleCashUserFlow;

@interface SCSnapCashController : NSObject <SCPotentiallyEligibleFlowDelegate, SCSnapCashCardLinkingDelegate, SCSnapCashRainSenderViewControllerDelegate, SCSnapCVVPasscodeViewControllerDelegate, SCSnapCashBlockerResolutionResultProtocol, SCSnapCashRainReceiverViewControllerDelegate, SCChatMessageReceiveListener> {

	NSString* _senderName;
	UIViewController* _viewController;
	id<SCChatMessageActionHandler> _actionHandler;
	id<SCSnapCashControllerDelegate> _delegate;
	SCSnapCashRainSenderViewController* _swipeSenderViewController;
	SCUserSession* _userSession;
	BOOL _didAttemptTapToSaveDuringSession;
	BOOL _cashRainedViaCurrentSCCPSession;
	SCSnapCashPaymentV3* _blockedSnapCash;
	SCPotentiallyEligibleCashUserFlow* _potentiallyEligibleFlow;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_recipient;
-(void)didReceiveConversations:(id)arg1 username:(id)arg2 originType:(long long)arg3 source:(long long)arg4 ;
-(void)didReceiveWireMessage:(id)arg1 ;
-(void)didReceiveMischiefs:(id)arg1 username:(id)arg2 hasStaleChats:(BOOL)arg3 originType:(long long)arg4 source:(long long)arg5 ;
-(id)conversationViewModel;
-(void)viewWillResignActive;
-(void)viewDidSwipeIn;
-(void)viewDidSwipeOut;
-(void)blockerResolutionFailedWithError:(id)arg1 ;
-(void)cardLinkingSuccessful;
-(void)cardLinkingCancelled;
-(void)flowSuccessfullyCompleted;
-(void)confirmResolutionSucceeded:(id)arg1 ;
-(void)confirmResolutionFailed:(id)arg1 ;
-(void)confirmResolutionCancelled:(id)arg1 ;
-(void)blockerResolutionSuccessful:(id)arg1 ;
-(void)blockerResolutionCancelled:(id)arg1 ;
-(void)cashRainViewControllerDidFinishSwipeToSend:(id)arg1 completed:(BOOL)arg2 ;
-(void)cashRainViewControllerDidFinishSwipeDown;
-(void)cashRainViewControllerDidSwipe:(id)arg1 ;
-(void)presentPaymentRainIfNecessary;
-(void)_promptConfirmationForPaymentWithText:(id)arg1 cashTagRanges:(id)arg2 amount:(unsigned long long)arg3 forSwipe:(BOOL)arg4 ;
-(void)_beginSendingPaymentMessageWithText:(id)arg1 cashTagRanges:(id)arg2 amount:(unsigned long long)arg3 swipe:(BOOL)arg4 ;
-(void)startPotentiallyEligibleFlow;
-(void)presentCardLinkingVCForCashTag;
-(void)_resolveBlockersAfterAcceptingTOSAndCreditCardLinking:(id)arg1 ;
-(void)_captureCVVForPayment:(id)arg1 ;
-(void)_sendSnapCash:(id)arg1 ;
-(void)presentSwipesWithCount:(unsigned long long)arg1 wasPresent:(BOOL)arg2 ;
-(void)didReceiveCashRainMessage:(id)arg1 ;
-(void)didFinishReceivingCashRain:(id)arg1 ;
-(id)initWithSenderName:(id)arg1 delegate:(id)arg2 parentViewController:(id)arg3 userSession:(id)arg4 actionHandler:(id)arg5 ;
-(BOOL)isEligibleSenderReceiverPair;
-(void)viewWillEnterBackground;
-(void)presentPaymentSwipeSenderViewController;
-(void)trySendingPaymentText:(id)arg1 cashtagRanges:(id)arg2 amount:(unsigned long long)arg3 ;
-(BOOL)shouldResolveBlockersForSnapCash:(id)arg1 ;
-(void)resolveBlockersForSnapCash:(id)arg1 ;
-(BOOL)paymentSwipeSenderViewControllerVisible;
-(void)onSnapCashMessageTapped:(id)arg1 ;
@end

