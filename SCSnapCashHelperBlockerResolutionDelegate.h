/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:25 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSnapCashBlockerResolutionResultProtocol.h>

@class SCSnapCashPaymentV3, NSString;

@interface SCSnapCashHelperBlockerResolutionDelegate : NSObject <SCSnapCashBlockerResolutionResultProtocol> {

	SCSnapCashPaymentV3* _payment;
	/*^block*/id _success;
	/*^block*/id _failure;

}

@property (assign,nonatomic,__weak) SCSnapCashPaymentV3 * payment;              //@synthesize payment=_payment - In the implementation block
@property (nonatomic,copy) id success;                                          //@synthesize success=_success - In the implementation block
@property (nonatomic,copy) id failure;                                          //@synthesize failure=_failure - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)failure;
-(void)blockerResolutionFailedWithError:(id)arg1 ;
-(void)blockerResolutionSuccessful:(id)arg1 ;
-(void)blockerResolutionCancelled:(id)arg1 ;
-(void)setFailure:(id)arg1 ;
-(id)initWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)setSuccess:(id)arg1 ;
-(id)success;
-(void)setPayment:(SCSnapCashPaymentV3 *)arg1 ;
-(SCSnapCashPaymentV3 *)payment;
@end

