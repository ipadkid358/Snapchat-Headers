/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:25 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSnapCashBlockerResolverV2.h>
#import <Snapchat/SCPasscodeForConfirmBlockerDelegate.h>

@protocol SCSnapCashBlockerResolutionResultDelegateV2;
@class SCCVVPasscodeViewController, SCPayment, SCPaymentBlocker, NSNumber, NSString;

@interface SCConfirmBlockerResolver : NSObject <SCSnapCashBlockerResolverV2, SCPasscodeForConfirmBlockerDelegate> {

	SCCVVPasscodeViewController* _viewController;
	id<SCSnapCashBlockerResolutionResultDelegateV2> _resultDelegate;
	SCPayment* _payment;
	SCPaymentBlocker* _blocker;
	NSNumber* _confirmResult;

}

@property (nonatomic,retain) SCCVVPasscodeViewController * viewController;                                       //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id<SCSnapCashBlockerResolutionResultDelegateV2> resultDelegate;              //@synthesize resultDelegate=_resultDelegate - In the implementation block
@property (nonatomic,retain) SCPayment * payment;                                                                //@synthesize payment=_payment - In the implementation block
@property (nonatomic,retain) SCPaymentBlocker * blocker;                                                         //@synthesize blocker=_blocker - In the implementation block
@property (nonatomic,retain) NSNumber * confirmResult;                                                           //@synthesize confirmResult=_confirmResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)blockerType;
-(id)getViewController;
-(void)resolveBlockerWithDelegate:(id)arg1 ;
-(id)initWithBlocker:(id)arg1 payment:(id)arg2 ;
-(SCPaymentBlocker *)blocker;
-(void)setBlocker:(SCPaymentBlocker *)arg1 ;
-(void)confirmResolutionSucceeded;
-(void)confirmResolutionFailed;
-(void)confirmResolutionCancelled;
-(BOOL)needsViewController;
-(NSNumber *)confirmResult;
-(void)resolveConfirmBlocker;
-(void)setConfirmResult:(NSNumber *)arg1 ;
-(void)setViewController:(SCCVVPasscodeViewController *)arg1 ;
-(SCCVVPasscodeViewController *)viewController;
-(void)setPayment:(SCPayment *)arg1 ;
-(id<SCSnapCashBlockerResolutionResultDelegateV2>)resultDelegate;
-(void)setResultDelegate:(id<SCSnapCashBlockerResolutionResultDelegateV2>)arg1 ;
-(SCPayment *)payment;
@end

