/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUCaptionStyle.h>
@class NSString, NSArray, NSNumber, SOJUCaptionShadow;


@protocol SOJUCaptionStyle <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * fontName; 
@property (nonatomic,copy,readonly) NSArray * styleProperty; 
@property (nonatomic,copy,readonly) NSString * caps; 
@property (nonatomic,copy,readonly) NSNumber * kerning; 
@property (nonatomic,copy,readonly) NSNumber * leading; 
@property (nonatomic,copy,readonly) NSNumber * borderWidth; 
@property (nonatomic,copy,readonly) SOJUCaptionShadow * shadow; 
@property (nonatomic,copy,readonly) NSNumber * backgroundColor; 
@property (nonatomic,copy,readonly) NSArray * fontColor; 
@property (nonatomic,copy,readonly) NSString * fontPatternImageUrl; 
@property (nonatomic,copy,readonly) NSString * fontColorMode; 
@property (nonatomic,copy,readonly) NSNumber * colorChangeable; 
@property (nonatomic,copy,readonly) NSNumber * rotation; 
@property (nonatomic,copy,readonly) NSArray * effect; 
@property (nonatomic,copy,readonly) NSString * regularTypefaceUrl; 
@property (nonatomic,copy,readonly) NSString * boldTypefaceUrl; 
@property (nonatomic,copy,readonly) NSString * italicsTypefaceUrl; 
@property (nonatomic,copy,readonly) NSString * italicsBoldTypefaceUrl; 
@property (nonatomic,copy,readonly) NSNumber * backgroundCornerRadius; 
@property (nonatomic,copy,readonly) NSString * fontFamilyName; 
@property (nonatomic,copy,readonly) NSString * backgroundImageUrl; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@required
-(NSArray *)styleProperty;
-(NSString *)fontPatternImageUrl;
-(NSString *)fontColorMode;
-(NSNumber *)colorChangeable;
-(NSString *)regularTypefaceUrl;
-(NSString *)boldTypefaceUrl;
-(NSString *)italicsTypefaceUrl;
-(NSString *)italicsBoldTypefaceUrl;
-(NSNumber *)backgroundCornerRadius;
-(NSString *)fontFamilyName;
-(NSString *)backgroundImageUrl;
-(NSNumber *)backgroundColor;
-(NSString *)name;
-(NSString *)fontName;
-(NSNumber *)rotation;
-(NSArray *)effect;
-(NSNumber *)borderWidth;
-(NSNumber *)leading;
-(NSString *)displayName;
-(SOJUCaptionShadow *)shadow;
-(NSNumber *)kerning;
-(NSArray *)fontColor;
-(NSString *)caps;

@end


@class NSString, NSArray, NSNumber, SOJUCaptionShadow;

@interface SOJUCaptionStyle : NSObject <SOJUCaptionStyle> {

	NSString* _name;
	NSString* _fontName;
	NSArray* _styleProperty;
	NSString* _caps;
	NSNumber* _kerning;
	NSNumber* _leading;
	NSNumber* _borderWidth;
	SOJUCaptionShadow* _shadow;
	NSNumber* _backgroundColor;
	NSArray* _fontColor;
	NSString* _fontPatternImageUrl;
	NSString* _fontColorMode;
	NSNumber* _colorChangeable;
	NSNumber* _rotation;
	NSArray* _effect;
	NSString* _regularTypefaceUrl;
	NSString* _boldTypefaceUrl;
	NSString* _italicsTypefaceUrl;
	NSString* _italicsBoldTypefaceUrl;
	NSNumber* _backgroundCornerRadius;
	NSString* _fontFamilyName;
	NSString* _backgroundImageUrl;
	NSString* _displayName;

}

@property (nonatomic,copy,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * fontName;                            //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * styleProperty;                        //@synthesize styleProperty=_styleProperty - In the implementation block
@property (nonatomic,copy,readonly) NSString * caps;                                //@synthesize caps=_caps - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * kerning;                             //@synthesize kerning=_kerning - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * leading;                             //@synthesize leading=_leading - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * borderWidth;                         //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,copy,readonly) SOJUCaptionShadow * shadow;                     //@synthesize shadow=_shadow - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * backgroundColor;                     //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fontColor;                            //@synthesize fontColor=_fontColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * fontPatternImageUrl;                 //@synthesize fontPatternImageUrl=_fontPatternImageUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * fontColorMode;                       //@synthesize fontColorMode=_fontColorMode - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * colorChangeable;                     //@synthesize colorChangeable=_colorChangeable - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rotation;                            //@synthesize rotation=_rotation - In the implementation block
@property (nonatomic,copy,readonly) NSArray * effect;                               //@synthesize effect=_effect - In the implementation block
@property (nonatomic,copy,readonly) NSString * regularTypefaceUrl;                  //@synthesize regularTypefaceUrl=_regularTypefaceUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * boldTypefaceUrl;                     //@synthesize boldTypefaceUrl=_boldTypefaceUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * italicsTypefaceUrl;                  //@synthesize italicsTypefaceUrl=_italicsTypefaceUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * italicsBoldTypefaceUrl;              //@synthesize italicsBoldTypefaceUrl=_italicsBoldTypefaceUrl - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * backgroundCornerRadius;              //@synthesize backgroundCornerRadius=_backgroundCornerRadius - In the implementation block
@property (nonatomic,copy,readonly) NSString * fontFamilyName;                      //@synthesize fontFamilyName=_fontFamilyName - In the implementation block
@property (nonatomic,copy,readonly) NSString * backgroundImageUrl;                  //@synthesize backgroundImageUrl=_backgroundImageUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
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
-(long long)capsEnum;
-(double)kerningValue;
-(double)leadingValue;
-(double)borderWidthValue;
-(long long)fontColorModeEnum;
-(BOOL)colorChangeableValue;
-(double)rotationValue;
-(double)backgroundCornerRadiusValue;
-(NSArray *)styleProperty;
-(NSString *)fontPatternImageUrl;
-(NSString *)fontColorMode;
-(NSNumber *)colorChangeable;
-(NSString *)regularTypefaceUrl;
-(NSString *)boldTypefaceUrl;
-(NSString *)italicsTypefaceUrl;
-(NSString *)italicsBoldTypefaceUrl;
-(NSNumber *)backgroundCornerRadius;
-(NSString *)fontFamilyName;
-(NSString *)backgroundImageUrl;
-(id)initWithName:(id)arg1 fontName:(id)arg2 styleProperty:(id)arg3 caps:(id)arg4 kerning:(id)arg5 leading:(id)arg6 borderWidth:(id)arg7 shadow:(id)arg8 backgroundColor:(id)arg9 fontColor:(id)arg10 fontPatternImageUrl:(id)arg11 fontColorMode:(id)arg12 colorChangeable:(id)arg13 rotation:(id)arg14 effect:(id)arg15 regularTypefaceUrl:(id)arg16 boldTypefaceUrl:(id)arg17 italicsTypefaceUrl:(id)arg18 italicsBoldTypefaceUrl:(id)arg19 backgroundCornerRadius:(id)arg20 fontFamilyName:(id)arg21 backgroundImageUrl:(id)arg22 displayName:(id)arg23 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)fontName;
-(NSNumber *)rotation;
-(NSArray *)effect;
-(NSNumber *)borderWidth;
-(NSNumber *)leading;
-(NSString *)displayName;
-(SOJUCaptionShadow *)shadow;
-(NSNumber *)kerning;
-(id)toDictionary;
-(NSArray *)fontColor;
-(int)backgroundColorValue;
-(NSString *)caps;
@end

