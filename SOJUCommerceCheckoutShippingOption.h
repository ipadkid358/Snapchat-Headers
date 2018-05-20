/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUCommerceCheckoutShippingOption.h>
@class NSString, SOJUCommerceCurrencyAmount;


@protocol SOJUCommerceCheckoutShippingOption <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * idValue; 
@property (nonatomic,copy,readonly) SOJUCommerceCurrencyAmount * price; 
@property (nonatomic,copy,readonly) NSString * title; 
@required
-(NSString *)idValue;
-(NSString *)title;
-(SOJUCommerceCurrencyAmount *)price;

@end


@class NSString, SOJUCommerceCurrencyAmount;

@interface SOJUCommerceCheckoutShippingOption : NSObject <SOJUCommerceCheckoutShippingOption> {

	NSString* _idValue;
	SOJUCommerceCurrencyAmount* _price;
	NSString* _title;

}

@property (nonatomic,copy,readonly) NSString * idValue;                              //@synthesize idValue=_idValue - In the implementation block
@property (nonatomic,copy,readonly) SOJUCommerceCurrencyAmount * price;              //@synthesize price=_price - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                //@synthesize title=_title - In the implementation block
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
-(NSString *)idValue;
-(id)initWithIdValue:(id)arg1 price:(id)arg2 title:(id)arg3 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SOJUCommerceCurrencyAmount *)price;
-(id)toDictionary;
@end

