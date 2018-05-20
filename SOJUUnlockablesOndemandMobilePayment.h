/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:57 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUUnlockablesOndemandMobilePayment.h>
@class NSString, NSNumber, SOJUUnlockablesOndemandMobileLocalizedMonetaryAmount;


@protocol SOJUUnlockablesOndemandMobilePayment <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * platform; 
@property (nonatomic,copy,readonly) NSString * productId; 
@property (nonatomic,copy,readonly) NSString * paymentUserAgent; 
@property (nonatomic,copy,readonly) NSNumber * isEligibleToPay; 
@property (nonatomic,copy,readonly) NSNumber * isEligibleToRefund; 
@property (nonatomic,copy,readonly) NSString * receipt; 
@property (nonatomic,copy,readonly) NSString * signature; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandMobileLocalizedMonetaryAmount * localizedMonetaryAmount; 
@required
-(NSString *)paymentUserAgent;
-(NSNumber *)isEligibleToPay;
-(NSNumber *)isEligibleToRefund;
-(SOJUUnlockablesOndemandMobileLocalizedMonetaryAmount *)localizedMonetaryAmount;
-(NSString *)productId;
-(NSString *)platform;
-(NSString *)signature;
-(NSString *)receipt;

@end


@class NSString, NSNumber, SOJUUnlockablesOndemandMobileLocalizedMonetaryAmount;

@interface SOJUUnlockablesOndemandMobilePayment : NSObject <SOJUUnlockablesOndemandMobilePayment> {

	NSString* _platform;
	NSString* _productId;
	NSString* _paymentUserAgent;
	NSNumber* _isEligibleToPay;
	NSNumber* _isEligibleToRefund;
	NSString* _receipt;
	NSString* _signature;
	SOJUUnlockablesOndemandMobileLocalizedMonetaryAmount* _localizedMonetaryAmount;

}

@property (nonatomic,copy,readonly) NSString * platform;                                                                         //@synthesize platform=_platform - In the implementation block
@property (nonatomic,copy,readonly) NSString * productId;                                                                        //@synthesize productId=_productId - In the implementation block
@property (nonatomic,copy,readonly) NSString * paymentUserAgent;                                                                 //@synthesize paymentUserAgent=_paymentUserAgent - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isEligibleToPay;                                                                  //@synthesize isEligibleToPay=_isEligibleToPay - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isEligibleToRefund;                                                               //@synthesize isEligibleToRefund=_isEligibleToRefund - In the implementation block
@property (nonatomic,copy,readonly) NSString * receipt;                                                                          //@synthesize receipt=_receipt - In the implementation block
@property (nonatomic,copy,readonly) NSString * signature;                                                                        //@synthesize signature=_signature - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandMobileLocalizedMonetaryAmount * localizedMonetaryAmount;              //@synthesize localizedMonetaryAmount=_localizedMonetaryAmount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)toJson;
-(long long)platformEnum;
-(BOOL)isEligibleToPayValue;
-(BOOL)isEligibleToRefundValue;
-(NSString *)paymentUserAgent;
-(NSNumber *)isEligibleToPay;
-(NSNumber *)isEligibleToRefund;
-(SOJUUnlockablesOndemandMobileLocalizedMonetaryAmount *)localizedMonetaryAmount;
-(id)initWithPlatform:(id)arg1 productId:(id)arg2 paymentUserAgent:(id)arg3 isEligibleToPay:(id)arg4 isEligibleToRefund:(id)arg5 receipt:(id)arg6 signature:(id)arg7 localizedMonetaryAmount:(id)arg8 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)productId;
-(NSString *)platform;
-(id)toDictionary;
-(NSString *)signature;
-(NSString *)receipt;
@end
