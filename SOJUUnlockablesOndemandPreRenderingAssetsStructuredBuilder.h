/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:57 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSNumber;

@interface SOJUUnlockablesOndemandPreRenderingAssetsStructuredBuilder : NSObject {

	NSString* _templateId;
	NSString* _categoryId;
	NSString* _platform;
	NSString* _imagePngBase64;
	NSArray* _textBoxArray;
	NSArray* _imageBoxArray;
	NSArray* _stickerBoxArray;
	NSString* _templateInstanceId;
	NSString* _productType;
	NSNumber* _userCanMakePayments;

}
+(id)withJUUnlockablesOndemandPreRenderingAssetsStructured:(id)arg1 ;
-(id)setProductTypeEnum:(long long)arg1 ;
-(id)setPlatformEnum:(long long)arg1 ;
-(id)setUserCanMakePaymentsValue:(BOOL)arg1 ;
-(id)setTemplateId:(id)arg1 ;
-(id)setCategoryId:(id)arg1 ;
-(id)setImagePngBase64:(id)arg1 ;
-(id)setTextBoxArray:(id)arg1 ;
-(id)setImageBoxArray:(id)arg1 ;
-(id)setStickerBoxArray:(id)arg1 ;
-(id)setTemplateInstanceId:(id)arg1 ;
-(id)setUserCanMakePayments:(id)arg1 ;
-(id)build;
-(id)setPlatform:(id)arg1 ;
-(id)setProductType:(id)arg1 ;
@end

