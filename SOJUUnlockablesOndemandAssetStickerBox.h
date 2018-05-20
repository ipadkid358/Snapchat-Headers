/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:57 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUUnlockablesOndemandAssetStickerBox.h>
@class NSString, NSNumber;


@protocol SOJUUnlockablesOndemandAssetStickerBox <NSObject,NSCoding,NSCopying,SOJUUnlockablesOndemandAssetImageBox>
@property (nonatomic,copy,readonly) NSString * imagePngBase64; 
@property (nonatomic,copy,readonly) NSNumber * posX; 
@property (nonatomic,copy,readonly) NSNumber * posY; 
@property (nonatomic,copy,readonly) NSNumber * width; 
@property (nonatomic,copy,readonly) NSNumber * height; 
@property (nonatomic,copy,readonly) NSNumber * rotation; 
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSString * templateId; 
@property (nonatomic,copy,readonly) NSString * resourceUrl; 
@required
-(NSNumber *)posX;
-(NSNumber *)posY;
-(NSString *)templateId;
-(NSString *)imagePngBase64;
-(NSString *)type;
-(NSNumber *)width;
-(NSNumber *)height;
-(NSNumber *)rotation;
-(NSString *)resourceUrl;

@end


@class NSString, NSNumber;

@interface SOJUUnlockablesOndemandAssetStickerBox : NSObject <SOJUUnlockablesOndemandAssetStickerBox> {

	NSString* _imagePngBase64;
	NSNumber* _posX;
	NSNumber* _posY;
	NSNumber* _width;
	NSNumber* _height;
	NSNumber* _rotation;
	NSString* _type;
	NSString* _templateId;
	NSString* _resourceUrl;

}

@property (nonatomic,copy,readonly) NSString * imagePngBase64;              //@synthesize imagePngBase64=_imagePngBase64 - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * posX;                        //@synthesize posX=_posX - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * posY;                        //@synthesize posY=_posY - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * width;                       //@synthesize width=_width - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * height;                      //@synthesize height=_height - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rotation;                    //@synthesize rotation=_rotation - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * templateId;                  //@synthesize templateId=_templateId - In the implementation block
@property (nonatomic,copy,readonly) NSString * resourceUrl;                 //@synthesize resourceUrl=_resourceUrl - In the implementation block
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
-(double)heightValue;
-(double)widthValue;
-(double)rotationValue;
-(double)posXValue;
-(double)posYValue;
-(id)initWithImagePngBase64:(id)arg1 posX:(id)arg2 posY:(id)arg3 width:(id)arg4 height:(id)arg5 rotation:(id)arg6 type:(id)arg7 templateId:(id)arg8 resourceUrl:(id)arg9 ;
-(NSNumber *)posX;
-(NSNumber *)posY;
-(NSString *)templateId;
-(NSString *)imagePngBase64;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)width;
-(NSNumber *)height;
-(NSNumber *)rotation;
-(NSString *)resourceUrl;
-(id)toDictionary;
@end

