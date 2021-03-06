/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:43 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, SCPaymentsMethodDidLoadPaymentsMethodListenerAnnouncer, SCMonetizationAccount;

@interface SCPaymentsManager : NSObject {

	NSMutableArray* _paymentMethods;
	SCPaymentsMethodDidLoadPaymentsMethodListenerAnnouncer* _annoucer;
	SCMonetizationAccount* _account;

}

@property (nonatomic,readonly) SCMonetizationAccount * account;                                                //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) SCPaymentsMethodDidLoadPaymentsMethodListenerAnnouncer * annoucer;              //@synthesize annoucer=_annoucer - In the implementation block
+(id)managerForMonetizationAccount:(id)arg1 ;
+(id)accountToManagerDictionary;
+(void)clearPaymentsManagers;
-(void)fetchPaymentsMethodsWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)insertPaymentMethod:(id)arg1 ;
-(SCPaymentsMethodDidLoadPaymentsMethodListenerAnnouncer *)annoucer;
-(void)sendRequestToEndpoint:(id)arg1 parameters:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)registerTokenizedCard:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)getBraintreeClientTokenWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)removePaymentMethod:(id)arg1 ;
-(void)updateTokenizedCard:(id)arg1 paymentsCard:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)_paymentsServiceBackendURL;
-(void)fetchPaymentsMethods;
-(void)createAndRegisterBraintreeCard:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)deletePaymentsMethod:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)setDefaultPaymentsMethod:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)updateAndRegisterBraintreeCard:(id)arg1 paymentsCard:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)initWithMonetizationAccount:(id)arg1 ;
-(id)primaryPaymentMethod;
-(id)paymentsMethodForId:(id)arg1 ;
-(void)insertPaymentMethod:(id)arg1 index:(unsigned long long)arg2 ;
-(SCMonetizationAccount *)account;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)clearPaymentMethods;
-(id)paymentMethods;
@end

