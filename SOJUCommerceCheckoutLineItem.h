/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUCommerceCheckoutLineItem.h>
@class NSString, NSNumber, SOJUCommerceCurrencyAmount;


@protocol SOJUCommerceCheckoutLineItem <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * productId; 
@property (nonatomic,copy,readonly) NSString * variantId; 
@property (nonatomic,copy,readonly) NSNumber * quantity; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSNumber * requiresShipping; 
@property (nonatomic,copy,readonly) SOJUCommerceCurrencyAmount * unitPrice; 
@property (nonatomic,copy,readonly) SOJUCommerceCurrencyAmount * linePrice; 
@property (nonatomic,copy,readonly) NSNumber * taxable; 
@required
-(SOJUCommerceCurrencyAmount *)unitPrice;
-(SOJUCommerceCurrencyAmount *)linePrice;
-(NSString *)variantId;
-(NSNumber *)requiresShipping;
-(NSNumber *)taxable;
-(NSString *)title;
-(NSString *)productId;
-(NSNumber *)quantity;

@end


@class NSString, NSNumber, SOJUCommerceCurrencyAmount;

@interface SOJUCommerceCheckoutLineItem : NSObject <SOJUCommerceCheckoutLineItem> {

	NSString* _productId;
	NSString* _variantId;
	NSNumber* _quantity;
	NSString* _title;
	NSNumber* _requiresShipping;
	SOJUCommerceCurrencyAmount* _unitPrice;
	SOJUCommerceCurrencyAmount* _linePrice;
	NSNumber* _taxable;

}

@property (nonatomic,copy,readonly) NSString * productId;                                //@synthesize productId=_productId - In the implementation block
@property (nonatomic,copy,readonly) NSString * variantId;                                //@synthesize variantId=_variantId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * quantity;                                 //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * requiresShipping;                         //@synthesize requiresShipping=_requiresShipping - In the implementation block
@property (nonatomic,copy,readonly) SOJUCommerceCurrencyAmount * unitPrice;              //@synthesize unitPrice=_unitPrice - In the implementation block
@property (nonatomic,copy,readonly) SOJUCommerceCurrencyAmount * linePrice;              //@synthesize linePrice=_linePrice - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * taxable;                                  //@synthesize taxable=_taxable - In the implementation block
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
-(BOOL)requiresShippingValue;
-(BOOL)taxableValue;
-(SOJUCommerceCurrencyAmount *)unitPrice;
-(SOJUCommerceCurrencyAmount *)linePrice;
-(id)initWithProductId:(id)arg1 variantId:(id)arg2 quantity:(id)arg3 title:(id)arg4 requiresShipping:(id)arg5 unitPrice:(id)arg6 linePrice:(id)arg7 taxable:(id)arg8 ;
-(NSString *)variantId;
-(NSNumber *)requiresShipping;
-(NSNumber *)taxable;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)productId;
-(id)toDictionary;
-(NSNumber *)quantity;
-(int)quantityValue;
@end

