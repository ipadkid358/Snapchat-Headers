/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SOJUCommerceStoreInfo, NSURL, SOJUCommerceCurrencyAmount, NSArray, NSDictionary, SOJUScannableActionMarcoAction, NSMutableArray;

@interface SCScanProductInfo : NSObject {

	NSString* _title;
	NSString* _storePolicyQueryLink;
	NSString* _storePolicyRefundLink;
	SOJUCommerceStoreInfo* _storeInfo;
	NSString* _storeId;
	NSString* _descriptionHTML;
	NSURL* _imageLink;
	SOJUCommerceCurrencyAmount* _priceBeforeTax;
	NSArray* _productImages;
	NSDictionary* _productOptionMappings;
	NSArray* _optionsArray;
	SOJUScannableActionMarcoAction* _product;
	NSMutableArray* _optionsSelected;
	NSString* _priceLabel;

}

@property (nonatomic,retain) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * storePolicyQueryLink;                          //@synthesize storePolicyQueryLink=_storePolicyQueryLink - In the implementation block
@property (nonatomic,retain) NSString * storePolicyRefundLink;                         //@synthesize storePolicyRefundLink=_storePolicyRefundLink - In the implementation block
@property (nonatomic,retain) SOJUCommerceStoreInfo * storeInfo;                        //@synthesize storeInfo=_storeInfo - In the implementation block
@property (nonatomic,retain) NSString * storeId;                                       //@synthesize storeId=_storeId - In the implementation block
@property (nonatomic,retain) NSString * descriptionHTML;                               //@synthesize descriptionHTML=_descriptionHTML - In the implementation block
@property (nonatomic,retain) NSURL * imageLink;                                        //@synthesize imageLink=_imageLink - In the implementation block
@property (nonatomic,retain) SOJUCommerceCurrencyAmount * priceBeforeTax;              //@synthesize priceBeforeTax=_priceBeforeTax - In the implementation block
@property (nonatomic,retain) NSArray * productImages;                                  //@synthesize productImages=_productImages - In the implementation block
@property (nonatomic,retain) NSDictionary * productOptionMappings;                     //@synthesize productOptionMappings=_productOptionMappings - In the implementation block
@property (nonatomic,retain) NSArray * optionsArray;                                   //@synthesize optionsArray=_optionsArray - In the implementation block
@property (nonatomic,retain) SOJUScannableActionMarcoAction * product;                 //@synthesize product=_product - In the implementation block
@property (nonatomic,retain) NSMutableArray * optionsSelected;                         //@synthesize optionsSelected=_optionsSelected - In the implementation block
@property (nonatomic,readonly) NSString * priceLabel;                                  //@synthesize priceLabel=_priceLabel - In the implementation block
+(id)createScanProductInfo:(id)arg1 ;
-(NSURL *)imageLink;
-(void)setDescriptionHTML:(NSString *)arg1 ;
-(void)setProductImages:(NSArray *)arg1 ;
-(NSString *)storePolicyQueryLink;
-(void)setStorePolicyQueryLink:(NSString *)arg1 ;
-(NSString *)storePolicyRefundLink;
-(void)setStorePolicyRefundLink:(NSString *)arg1 ;
-(NSString *)descriptionHTML;
-(void)setImageLink:(NSURL *)arg1 ;
-(SOJUCommerceCurrencyAmount *)priceBeforeTax;
-(void)setPriceBeforeTax:(SOJUCommerceCurrencyAmount *)arg1 ;
-(NSArray *)productImages;
-(NSDictionary *)productOptionMappings;
-(void)setProductOptionMappings:(NSDictionary *)arg1 ;
-(NSArray *)optionsArray;
-(void)setOptionsArray:(NSArray *)arg1 ;
-(NSMutableArray *)optionsSelected;
-(void)setOptionsSelected:(NSMutableArray *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setStoreInfo:(SOJUCommerceStoreInfo *)arg1 ;
-(void)setStoreId:(NSString *)arg1 ;
-(NSString *)storeId;
-(SOJUCommerceStoreInfo *)storeInfo;
-(NSString *)priceLabel;
-(SOJUScannableActionMarcoAction *)product;
-(void)setProduct:(SOJUScannableActionMarcoAction *)arg1 ;
@end

