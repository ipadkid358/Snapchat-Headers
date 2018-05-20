/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:57 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUUnlockablesOndemandAssetDraft.h>
@class NSString, NSArray, NSNumber;


@protocol SOJUUnlockablesOndemandAssetDraft <NSObject,NSCoding,NSCopying,SOJUUnlockablesOndemandCreativeBase>
@property (nonatomic,copy,readonly) NSString * imageUrl; 
@property (nonatomic,copy,readonly) NSString * thumbnailUrl; 
@property (nonatomic,copy,readonly) NSArray * backgroundImageUrls; 
@property (nonatomic,copy,readonly) NSString * defaultFontName; 
@property (nonatomic,copy,readonly) NSString * defaultFontUrl; 
@property (nonatomic,copy,readonly) NSNumber * defaultWidth; 
@property (nonatomic,copy,readonly) NSNumber * defaultHeight; 
@property (nonatomic,copy,readonly) NSString * productType; 
@property (nonatomic,copy,readonly) NSString * idValue; 
@property (nonatomic,copy,readonly) NSString * templateInstanceId; 
@property (nonatomic,copy,readonly) NSString * templateId; 
@property (nonatomic,copy,readonly) NSString * categoryId; 
@property (nonatomic,copy,readonly) NSArray * textBoxSpecArray; 
@property (nonatomic,copy,readonly) NSArray * stickers; 
@property (nonatomic,copy,readonly) NSString * imagePngBase64; 
@required
-(NSString *)categoryId;
-(NSString *)defaultFontName;
-(NSString *)idValue;
-(NSString *)imageUrl;
-(NSString *)thumbnailUrl;
-(NSArray *)backgroundImageUrls;
-(NSString *)defaultFontUrl;
-(NSArray *)textBoxSpecArray;
-(NSString *)templateId;
-(NSString *)templateInstanceId;
-(NSString *)imagePngBase64;
-(NSNumber *)defaultHeight;
-(NSNumber *)defaultWidth;
-(NSArray *)stickers;
-(NSString *)productType;

@end


@class NSString, NSArray, NSNumber;

@interface SOJUUnlockablesOndemandAssetDraft : NSObject <SOJUUnlockablesOndemandAssetDraft> {

	NSString* _imageUrl;
	NSString* _thumbnailUrl;
	NSArray* _backgroundImageUrls;
	NSString* _defaultFontName;
	NSString* _defaultFontUrl;
	NSNumber* _defaultWidth;
	NSNumber* _defaultHeight;
	NSString* _productType;
	NSString* _idValue;
	NSString* _templateInstanceId;
	NSString* _templateId;
	NSString* _categoryId;
	NSArray* _textBoxSpecArray;
	NSArray* _stickers;
	NSString* _imagePngBase64;

}

@property (nonatomic,copy,readonly) NSString * imageUrl;                        //@synthesize imageUrl=_imageUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * thumbnailUrl;                    //@synthesize thumbnailUrl=_thumbnailUrl - In the implementation block
@property (nonatomic,copy,readonly) NSArray * backgroundImageUrls;              //@synthesize backgroundImageUrls=_backgroundImageUrls - In the implementation block
@property (nonatomic,copy,readonly) NSString * defaultFontName;                 //@synthesize defaultFontName=_defaultFontName - In the implementation block
@property (nonatomic,copy,readonly) NSString * defaultFontUrl;                  //@synthesize defaultFontUrl=_defaultFontUrl - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * defaultWidth;                    //@synthesize defaultWidth=_defaultWidth - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * defaultHeight;                   //@synthesize defaultHeight=_defaultHeight - In the implementation block
@property (nonatomic,copy,readonly) NSString * productType;                     //@synthesize productType=_productType - In the implementation block
@property (nonatomic,copy,readonly) NSString * idValue;                         //@synthesize idValue=_idValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * templateInstanceId;              //@synthesize templateInstanceId=_templateInstanceId - In the implementation block
@property (nonatomic,copy,readonly) NSString * templateId;                      //@synthesize templateId=_templateId - In the implementation block
@property (nonatomic,copy,readonly) NSString * categoryId;                      //@synthesize categoryId=_categoryId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * textBoxSpecArray;                 //@synthesize textBoxSpecArray=_textBoxSpecArray - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stickers;                         //@synthesize stickers=_stickers - In the implementation block
@property (nonatomic,copy,readonly) NSString * imagePngBase64;                  //@synthesize imagePngBase64=_imagePngBase64 - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
+(id)buildAssetDraftWithCreativeData:(id)arg1 thumbnailImageData:(id)arg2 ;
-(NSString *)categoryId;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(NSString *)defaultFontName;
-(id)toJson;
-(NSString *)idValue;
-(NSString *)imageUrl;
-(NSString *)thumbnailUrl;
-(long long)productTypeEnum;
-(int)defaultWidthValue;
-(int)defaultHeightValue;
-(NSArray *)backgroundImageUrls;
-(NSString *)defaultFontUrl;
-(NSArray *)textBoxSpecArray;
-(id)initWithImageUrl:(id)arg1 thumbnailUrl:(id)arg2 backgroundImageUrls:(id)arg3 defaultFontName:(id)arg4 defaultFontUrl:(id)arg5 defaultWidth:(id)arg6 defaultHeight:(id)arg7 productType:(id)arg8 idValue:(id)arg9 templateInstanceId:(id)arg10 templateId:(id)arg11 categoryId:(id)arg12 textBoxSpecArray:(id)arg13 stickers:(id)arg14 imagePngBase64:(id)arg15 ;
-(NSString *)templateId;
-(NSString *)templateInstanceId;
-(NSString *)imagePngBase64;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)templateData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSNumber *)defaultHeight;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)defaultWidth;
-(NSArray *)stickers;
-(id)toDictionary;
-(NSString *)productType;
@end
