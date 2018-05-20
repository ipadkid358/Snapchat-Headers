/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:55 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUPaymentsPaymentMethod.h>
@class NSString, NSNumber, SOJUPaymentsCreditCard, SOJUPaymentsVaultedCreditAccount;


@protocol SOJUPaymentsPaymentMethod <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * idValue; 
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSNumber * isDefault; 
@property (nonatomic,copy,readonly) SOJUPaymentsCreditCard * creditCard; 
@property (nonatomic,copy,readonly) SOJUPaymentsVaultedCreditAccount * vaultedCreditAccount; 
@required
-(NSString *)idValue;
-(SOJUPaymentsVaultedCreditAccount *)vaultedCreditAccount;
-(NSString *)type;
-(NSNumber *)isDefault;
-(SOJUPaymentsCreditCard *)creditCard;

@end


@class NSString, NSNumber, SOJUPaymentsCreditCard, SOJUPaymentsVaultedCreditAccount;

@interface SOJUPaymentsPaymentMethod : NSObject <SOJUPaymentsPaymentMethod> {

	NSString* _idValue;
	NSString* _type;
	NSNumber* _isDefault;
	SOJUPaymentsCreditCard* _creditCard;
	SOJUPaymentsVaultedCreditAccount* _vaultedCreditAccount;

}

@property (nonatomic,copy,readonly) NSString * idValue;                                                   //@synthesize idValue=_idValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isDefault;                                                 //@synthesize isDefault=_isDefault - In the implementation block
@property (nonatomic,copy,readonly) SOJUPaymentsCreditCard * creditCard;                                  //@synthesize creditCard=_creditCard - In the implementation block
@property (nonatomic,copy,readonly) SOJUPaymentsVaultedCreditAccount * vaultedCreditAccount;              //@synthesize vaultedCreditAccount=_vaultedCreditAccount - In the implementation block
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
-(long long)typeEnum;
-(NSString *)idValue;
-(BOOL)isDefaultValue;
-(SOJUPaymentsVaultedCreditAccount *)vaultedCreditAccount;
-(id)initWithIdValue:(id)arg1 type:(id)arg2 isDefault:(id)arg3 creditCard:(id)arg4 vaultedCreditAccount:(id)arg5 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)isDefault;
-(id)toDictionary;
-(SOJUPaymentsCreditCard *)creditCard;
@end
