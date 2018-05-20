/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SOJUCommerceOrderProductsCommerceOrderProduct, NSNumber, SOJUCommerceCurrencyAmount;

@interface SCCommerceOrderBillingLineItem : NSObject {

	NSString* _billingItemId;
	SOJUCommerceOrderProductsCommerceOrderProduct* _product;
	NSNumber* _quantity;
	SOJUCommerceCurrencyAmount* _cost;
	SOJUCommerceCurrencyAmount* _price;
	SOJUCommerceCurrencyAmount* _taxPrice;

}

@property (nonatomic,copy,readonly) NSString * billingItemId;                                             //@synthesize billingItemId=_billingItemId - In the implementation block
@property (nonatomic,copy,readonly) SOJUCommerceOrderProductsCommerceOrderProduct * product;              //@synthesize product=_product - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * quantity;                                                  //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,copy,readonly) SOJUCommerceCurrencyAmount * cost;                                    //@synthesize cost=_cost - In the implementation block
@property (nonatomic,copy,readonly) SOJUCommerceCurrencyAmount * price;                                   //@synthesize price=_price - In the implementation block
@property (nonatomic,copy,readonly) SOJUCommerceCurrencyAmount * taxPrice;                                //@synthesize taxPrice=_taxPrice - In the implementation block
-(NSString *)billingItemId;
-(SOJUCommerceCurrencyAmount *)taxPrice;
-(id)initWithSOJUModel:(id)arg1 ;
-(id)initWithBillingItemId:(id)arg1 product:(id)arg2 quantity:(id)arg3 cost:(id)arg4 price:(id)arg5 taxPrice:(id)arg6 ;
-(SOJUCommerceCurrencyAmount *)price;
-(SOJUCommerceCurrencyAmount *)cost;
-(NSNumber *)quantity;
-(SOJUCommerceOrderProductsCommerceOrderProduct *)product;
@end

