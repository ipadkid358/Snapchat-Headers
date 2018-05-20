/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUGeofilterDisplayParameters.h>
@class NSNumber, NSString, SOJUTextShadowParameters;


@protocol SOJUGeofilterDisplayParameters <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSNumber * size; 
@property (nonatomic,copy,readonly) NSString * color; 
@property (nonatomic,copy,readonly) NSString * font; 
@property (nonatomic,copy,readonly) NSString * staticText; 
@property (nonatomic,copy,readonly) NSString * align; 
@property (nonatomic,copy,readonly) NSNumber * textAlpha; 
@property (nonatomic,copy,readonly) SOJUTextShadowParameters * textShadow; 
@property (nonatomic,copy,readonly) NSNumber * autoResizeEnabled; 
@property (nonatomic,copy,readonly) NSString * fallbackText; 
@property (nonatomic,copy,readonly) NSNumber * maxFontSize; 
@property (nonatomic,copy,readonly) NSString * dynamicText; 
@property (nonatomic,copy,readonly) NSString * targetDatetime; 
@property (nonatomic,copy,readonly) NSString * targetDatetimeDirection; 
@property (nonatomic,copy,readonly) NSString * capitalization; 
@property (nonatomic,copy,readonly) NSString * calculatedDynamicText; 
@property (nonatomic,copy,readonly) NSString * fallbackMethod; 
@required
-(NSString *)staticText;
-(NSNumber *)autoResizeEnabled;
-(NSString *)fallbackText;
-(NSString *)dynamicText;
-(NSString *)targetDatetime;
-(NSString *)targetDatetimeDirection;
-(NSString *)calculatedDynamicText;
-(NSString *)fallbackMethod;
-(NSNumber *)size;
-(NSString *)color;
-(NSString *)font;
-(NSNumber *)maxFontSize;
-(SOJUTextShadowParameters *)textShadow;
-(NSString *)align;
-(NSNumber *)textAlpha;
-(NSString *)capitalization;

@end


@class NSNumber, NSString, SOJUTextShadowParameters;

@interface SOJUGeofilterDisplayParameters : NSObject <SOJUGeofilterDisplayParameters> {

	NSNumber* _size;
	NSString* _color;
	NSString* _font;
	NSString* _staticText;
	NSString* _align;
	NSNumber* _textAlpha;
	SOJUTextShadowParameters* _textShadow;
	NSNumber* _autoResizeEnabled;
	NSString* _fallbackText;
	NSNumber* _maxFontSize;
	NSString* _dynamicText;
	NSString* _targetDatetime;
	NSString* _targetDatetimeDirection;
	NSString* _capitalization;
	NSString* _calculatedDynamicText;
	NSString* _fallbackMethod;

}

@property (nonatomic,copy,readonly) NSNumber * size;                                    //@synthesize size=_size - In the implementation block
@property (nonatomic,copy,readonly) NSString * color;                                   //@synthesize color=_color - In the implementation block
@property (nonatomic,copy,readonly) NSString * font;                                    //@synthesize font=_font - In the implementation block
@property (nonatomic,copy,readonly) NSString * staticText;                              //@synthesize staticText=_staticText - In the implementation block
@property (nonatomic,copy,readonly) NSString * align;                                   //@synthesize align=_align - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * textAlpha;                               //@synthesize textAlpha=_textAlpha - In the implementation block
@property (nonatomic,copy,readonly) SOJUTextShadowParameters * textShadow;              //@synthesize textShadow=_textShadow - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * autoResizeEnabled;                       //@synthesize autoResizeEnabled=_autoResizeEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * fallbackText;                            //@synthesize fallbackText=_fallbackText - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * maxFontSize;                             //@synthesize maxFontSize=_maxFontSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * dynamicText;                             //@synthesize dynamicText=_dynamicText - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetDatetime;                          //@synthesize targetDatetime=_targetDatetime - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetDatetimeDirection;                 //@synthesize targetDatetimeDirection=_targetDatetimeDirection - In the implementation block
@property (nonatomic,copy,readonly) NSString * capitalization;                          //@synthesize capitalization=_capitalization - In the implementation block
@property (nonatomic,copy,readonly) NSString * calculatedDynamicText;                   //@synthesize calculatedDynamicText=_calculatedDynamicText - In the implementation block
@property (nonatomic,copy,readonly) NSString * fallbackMethod;                          //@synthesize fallbackMethod=_fallbackMethod - In the implementation block
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
-(NSString *)staticText;
-(float)textAlphaValue;
-(BOOL)autoResizeEnabledValue;
-(int)maxFontSizeValue;
-(long long)targetDatetimeDirectionEnum;
-(long long)capitalizationEnum;
-(long long)fallbackMethodEnum;
-(NSNumber *)autoResizeEnabled;
-(NSString *)fallbackText;
-(NSString *)dynamicText;
-(NSString *)targetDatetime;
-(NSString *)targetDatetimeDirection;
-(NSString *)calculatedDynamicText;
-(NSString *)fallbackMethod;
-(id)initWithSize:(id)arg1 color:(id)arg2 font:(id)arg3 staticText:(id)arg4 align:(id)arg5 textAlpha:(id)arg6 textShadow:(id)arg7 autoResizeEnabled:(id)arg8 fallbackText:(id)arg9 maxFontSize:(id)arg10 dynamicText:(id)arg11 targetDatetime:(id)arg12 targetDatetimeDirection:(id)arg13 capitalization:(id)arg14 calculatedDynamicText:(id)arg15 fallbackMethod:(id)arg16 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(NSNumber *)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)color;
-(int)sizeValue;
-(NSString *)font;
-(NSNumber *)maxFontSize;
-(id)toDictionary;
-(SOJUTextShadowParameters *)textShadow;
-(NSString *)align;
-(NSNumber *)textAlpha;
-(NSString *)capitalization;
@end

