/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:52 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUGalleryGeoFilterDynamicResource.h>
@class NSString, NSNumber;


@protocol SOJUGalleryGeoFilterDynamicResource <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSString * source; 
@property (nonatomic,copy,readonly) NSNumber * xOffset; 
@property (nonatomic,copy,readonly) NSNumber * yOffset; 
@property (nonatomic,copy,readonly) NSNumber * xSize; 
@property (nonatomic,copy,readonly) NSNumber * ySize; 
@property (nonatomic,copy,readonly) NSNumber * rotation; 
@property (nonatomic,copy,readonly) NSString * staticText; 
@property (nonatomic,copy,readonly) NSNumber * fontSize; 
@property (nonatomic,copy,readonly) NSString * fontUrl; 
@property (nonatomic,copy,readonly) NSNumber * fontColor; 
@required
-(NSNumber *)xOffset;
-(NSString *)staticText;
-(NSString *)fontUrl;
-(NSString *)type;
-(NSNumber *)rotation;
-(NSString *)source;
-(NSNumber *)yOffset;
-(NSNumber *)fontSize;
-(NSNumber *)xSize;
-(NSNumber *)ySize;
-(NSNumber *)fontColor;

@end


@class NSString, NSNumber;

@interface SOJUGalleryGeoFilterDynamicResource : NSObject <SOJUGalleryGeoFilterDynamicResource> {

	NSString* _type;
	NSString* _source;
	NSNumber* _xOffset;
	NSNumber* _yOffset;
	NSNumber* _xSize;
	NSNumber* _ySize;
	NSNumber* _rotation;
	NSString* _staticText;
	NSNumber* _fontSize;
	NSString* _fontUrl;
	NSNumber* _fontColor;

}

@property (nonatomic,copy,readonly) NSString * type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                  //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * xOffset;                 //@synthesize xOffset=_xOffset - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * yOffset;                 //@synthesize yOffset=_yOffset - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * xSize;                   //@synthesize xSize=_xSize - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * ySize;                   //@synthesize ySize=_ySize - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rotation;                //@synthesize rotation=_rotation - In the implementation block
@property (nonatomic,copy,readonly) NSString * staticText;              //@synthesize staticText=_staticText - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * fontSize;                //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * fontUrl;                 //@synthesize fontUrl=_fontUrl - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * fontColor;               //@synthesize fontColor=_fontColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
-(NSNumber *)xOffset;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)toJson;
-(long long)typeEnum;
-(double)rotationValue;
-(double)fontSizeValue;
-(double)xOffsetValue;
-(double)yOffsetValue;
-(double)xSizeValue;
-(double)ySizeValue;
-(int)fontColorValue;
-(NSString *)staticText;
-(NSString *)fontUrl;
-(id)initWithType:(id)arg1 source:(id)arg2 xOffset:(id)arg3 yOffset:(id)arg4 xSize:(id)arg5 ySize:(id)arg6 rotation:(id)arg7 staticText:(id)arg8 fontSize:(id)arg9 fontUrl:(id)arg10 fontColor:(id)arg11 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)rotation;
-(NSString *)source;
-(NSNumber *)yOffset;
-(NSNumber *)fontSize;
-(NSNumber *)xSize;
-(NSNumber *)ySize;
-(id)toDictionary;
-(NSNumber *)fontColor;
@end

