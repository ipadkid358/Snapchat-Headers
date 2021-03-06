/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:43 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCPaymentsOperationalMetrics : NSObject
+(id)shared;
-(id)convertUserActionToString:(long long)arg1 ;
-(id)convertProductTypeToString:(long long)arg1 ;
-(id)convertCardToString:(id)arg1 ;
-(void)logGetDataResponse:(long long)arg1 statusCode:(long long)arg2 duration:(double)arg3 errorDetails:(id)arg4 ;
-(void)logSubmitEvent:(id)arg1 productType:(long long)arg2 errorType:(id)arg3 ;
-(void)logPaymentAction:(long long)arg1 cardType:(id)arg2 existingPaymentMethods:(long long)arg3 adAccountId:(id)arg4 ;
-(id)convertCurrencyTypeToString:(long long)arg1 ;
-(long long)convertCardToAllowedCardTypes:(id)arg1 ;
@end

