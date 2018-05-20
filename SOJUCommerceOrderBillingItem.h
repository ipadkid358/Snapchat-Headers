/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUCommerceOrderBillingItem.h>
@class NSString, SOJUCommerceOrderProduct, SOJUCommerceOrderProductsCommerceOrderProduct, NSNumber, SOJUCommerceCurrencyAmount;


@protocol SOJUCommerceOrderBillingItem <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * billingItemId; 
@property (nonatomic,copy,readonly) SOJUCommerceOrderProduct * product; 
@property (nonatomic,copy,readonly) SOJUCommerceOrderProductsCommerceOrderProduct * commerceOrderProduct; 
@property (nonatomic,copy,readonly) NSNumber * quantity; 
@property (nonatomic,copy,readonly) SOJUCommerceCurrencyAmount * cost; 
@property (nonatomic,copy,readonly) SOJUCommerceCurrencyAmount * price; 
@property (nonatomic,copy,readonly) SOJUCommerceCurrencyAmount * taxPrice; 
@required
-(NSString *)billingItemId;
-(SOJUCommerceOrderProductsCommerceOrderProduct *)commerceOrderProduct;
-(SOJUCommerceCurrencyAmount *)taxPrice;
-(SOJUCommerceCurrencyAmount *)price;
-(SOJUCommerceCurrencyAmount *)cost;
-(NSNumber *)quantity;
-(SOJUCommerceOrderProduct *)product;

@end


@class NSString, SOJUCommerceOrderProduct, SOJUCommerceOrderProductsCommerceOrderProduct, NSNumber, SOJUCommerceCurrencyAmount;

@interface SOJUCommerceOrderBillingItem : NSObject <SOJUCommerceOrderBillingItem> {

	NSString* _billingItemId;
	SOJUCommerceOrderProduct* _product;
	SOJUCommerceOrderProductsCommerceOrderProduct* _commerceOrderProduct;
	NSNumber* _quantity;
	SOJUCommerceCurrencyAmount* _cost;
	SOJUCommerceCurrencyAmount* _price;
	SOJUCommerceCurrencyAmount* _taxPrice;

}

@property (nonatomic,copy,readonly) NSString * billingItemId;                                                          //@synthesize billingItemId=_billingItemId - In the implementation block
@property (nonatomic,copy,readonly) SOJUCommerceOrderProduct * product;                                                //@synthesize product=_product - In the implementation block
@property (nonatomic,copy,readonly) SOJUCommerceOrderProductsCommerceOrderProduct * commerceOrderProduct;              //@synthesize commerceOrderProduct=_commerceOrderProduct - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * quantity;                                                               //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,copy,readonly) SOJUCommerceCurrencyAmount * cost;                                                 //@synthesize cost=_cost - In the implementation block
@property (nonatomic,copy,readonly) SOJUCommerceCurrencyAmount * price;                                                //@synthesize price=_price - In the implementation block
@property (nonatomic,copy,readonly) SOJUCommerceCurrencyAmount * taxPrice;                                             //@synthesize taxPrice=_taxPrice - In the implementation block
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
-(NSString *)billingItemId;
-(SOJUCommerceOrderProductsCommerceOrderProduct *)commerceOrderProduct;
-(SOJUCommerceCurrencyAmount *)taxPrice;
-(id)initWithBillingItemId:(id)arg1 product:(id)arg2 commerceOrderProduct:(id)arg3 quantity:(id)arg4 cost:(id)arg5 price:(id)arg6 taxPrice:(id)arg7 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SOJUCommerceCurrencyAmount *)price;
-(SOJUCommerceCurrencyAmount *)cost;
-(id)toDictionary;
-(NSNumber *)quantity;
-(int)quantityValue;
-(SOJUCommerceOrderProduct *)product;
@end
