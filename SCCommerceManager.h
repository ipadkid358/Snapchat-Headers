/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCPerforming;
@class SCRequestManager, SCCommerceManagerTokenTask, Manager, SCUserSession, SCCache, SCQueuePerformer;

@interface SCCommerceManager : NSObject {

	id<SCPerforming> _workPerformer;
	SCRequestManager* _requestManager;
	SCCommerceManagerTokenTask* _tokenTask;
	Manager* _userManager;
	SCUserSession* _userSession;
	SCCache* _cache;
	SCQueuePerformer* _performer;

}

@property (nonatomic,readonly) id<SCPerforming> workPerformer;              //@synthesize workPerformer=_workPerformer - In the implementation block
-(id)checkoutLineItemsArrayForStoreId:(id)arg1 ;
-(id)lineItemsArrayForStoreId:(id)arg1 ;
-(void)clearCurrentCartWithStoreId:(id)arg1 ;
-(id)cart;
-(void)_sendRequestToProxyEndpoint:(id)arg1 parameters:(id)arg2 payload:(id)arg3 requestUUID:(id)arg4 requestMethod:(long long)arg5 metricsEndpoint:(unsigned long long)arg6 metricsUserAction:(unsigned long long)arg7 successBlock:(/*^block*/id)arg8 failureBlock:(/*^block*/id)arg9 ;
-(void)_removeObjectWithKeys:(id)arg1 ;
-(void)getAccountInfoWithCompletionBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)getPaymentMethodsWithCompletionBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)_removeAllObjects;
-(id)_errorForBadSojuModel:(id)arg1 ;
-(void)_getAccountInfoWithCompletionBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)_updateContactDetailsInCache:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateShippingAddressInCache:(id)arg1 addingNew:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_removeShippingAddressInCache:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)convertToPaymentMethodsFromSojuList:(id)arg1 ;
-(void)_fetchPaymentMethodsWithCompletionBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)_objectForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_tokenizeAndSavePaymentMethod:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 update:(BOOL)arg4 ;
-(void)_removePaymentInCache:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_postTokenizedPaymentMethod:(id)arg1 paymentCard:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 creditCardId:(id)arg5 ;
-(void)_getBraintreeClientTokenWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)_updatePaymentInCache:(id)arg1 paymentMethod:(id)arg2 updateRequest:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchOrderHistorySkipCacheWithLimit:(unsigned long long)arg1 offset:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)_fetchProductsWithStoreInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_sendAccountInfoRequestWithCompletionBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)_sendRequestToProxyEndpoint:(id)arg1 parameters:(id)arg2 payload:(id)arg3 token:(id)arg4 requestUUID:(id)arg5 requestMethod:(long long)arg6 metricsEndpoint:(unsigned long long)arg7 metricsUserAction:(unsigned long long)arg8 successBlock:(/*^block*/id)arg9 failureBlock:(/*^block*/id)arg10 ;
-(id)_getEndpointforEnvironment;
-(id)initWithRequestManager:(id)arg1 tokenTask:(id)arg2 cache:(id)arg3 userManager:(id)arg4 userSession:(id)arg5 ;
-(id)numberOfItemsInCartForStoreId:(id)arg1 ;
-(void)createNewCheckoutWithStoreId:(id)arg1 contactDetails:(id)arg2 shippingAddress:(id)arg3 partner:(id)arg4 lineItems:(id)arg5 completionBlock:(/*^block*/id)arg6 failureBlock:(/*^block*/id)arg7 ;
-(void)updateCheckout:(id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)deleteCheckout:(id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)finalizeCheckout:(id)arg1 paymentRequest:(id)arg2 completionBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)prefetchCheckoutData;
-(void)getContactDetailsWithCompletionBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)updateContactDetails:(id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)getShippingAddressesWithCompletionBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)addNewShippingAddress:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)updateShippingAddress:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)deleteShippingAddress:(id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)addPaymentMethod:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)updatePaymentMethod:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)deletePaymentMethod:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)getOrderHistoryWithLimit:(unsigned long long)arg1 offset:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)getProductInfoWithId:(id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)getProductsWithStoreInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)getCategoryProductsWithStoreInfo:(id)arg1 categoryId:(id)arg2 completionBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)_objectForKey:(id)arg1 resetExpirationWithInterval:(double)arg2 whenLessThanDelta:(double)arg3 completion:(/*^block*/id)arg4 ;
-(id<SCPerforming>)workPerformer;
-(void)clear;
@end
