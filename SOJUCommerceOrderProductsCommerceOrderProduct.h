/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUCommerceOrderProductsCommerceOrderProduct.h>
@class NSString, SOJUCommerceVariantImages;


@protocol SOJUCommerceOrderProductsCommerceOrderProduct <NSObject,NSCoding,NSCopying,SOJUCommerceOrderProduct>
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * platform; 
@property (nonatomic,copy,readonly) NSString * storeId; 
@property (nonatomic,copy,readonly) NSString * productId; 
@property (nonatomic,copy,readonly) NSString * variantId; 
@property (nonatomic,copy,readonly) NSString * variantDescription; 
@property (nonatomic,copy,readonly) NSString * productImageUrl; 
@property (nonatomic,copy,readonly) SOJUCommerceVariantImages * imageList; 
@required
-(NSString *)variantId;
-(NSString *)variantDescription;
-(NSString *)productImageUrl;
-(SOJUCommerceVariantImages *)imageList;
-(NSString *)name;
-(NSString *)type;
-(NSString *)productId;
-(NSString *)storeId;
-(NSString *)platform;

@end


@class NSString, SOJUCommerceVariantImages;

@interface SOJUCommerceOrderProductsCommerceOrderProduct : NSObject <SOJUCommerceOrderProductsCommerceOrderProduct> {

	NSString* _type;
	NSString* _name;
	NSString* _platform;
	NSString* _storeId;
	NSString* _productId;
	NSString* _variantId;
	NSString* _variantDescription;
	NSString* _productImageUrl;
	SOJUCommerceVariantImages* _imageList;

}

@property (nonatomic,copy,readonly) NSString * type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * platform;                                //@synthesize platform=_platform - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeId;                                 //@synthesize storeId=_storeId - In the implementation block
@property (nonatomic,copy,readonly) NSString * productId;                               //@synthesize productId=_productId - In the implementation block
@property (nonatomic,copy,readonly) NSString * variantId;                               //@synthesize variantId=_variantId - In the implementation block
@property (nonatomic,copy,readonly) NSString * variantDescription;                      //@synthesize variantDescription=_variantDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * productImageUrl;                         //@synthesize productImageUrl=_productImageUrl - In the implementation block
@property (nonatomic,copy,readonly) SOJUCommerceVariantImages * imageList;              //@synthesize imageList=_imageList - In the implementation block
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
-(NSString *)variantId;
-(NSString *)variantDescription;
-(NSString *)productImageUrl;
-(SOJUCommerceVariantImages *)imageList;
-(id)initWithType:(id)arg1 name:(id)arg2 platform:(id)arg3 storeId:(id)arg4 productId:(id)arg5 variantId:(id)arg6 variantDescription:(id)arg7 productImageUrl:(id)arg8 imageList:(id)arg9 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)productId;
-(NSString *)storeId;
-(NSString *)platform;
-(id)toDictionary;
@end

