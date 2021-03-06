/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:56 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUSponsoredSlugStyle.h>
@class NSString, SOJUStrPoint;


@protocol SOJUSponsoredSlugStyle <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * font; 
@property (nonatomic,copy,readonly) NSString * textSize; 
@property (nonatomic,copy,readonly) NSString * color; 
@property (nonatomic,copy,readonly) NSString * dropshadowColor; 
@property (nonatomic,copy,readonly) SOJUStrPoint * dropshadowOffset; 
@required
-(NSString *)dropshadowColor;
-(SOJUStrPoint *)dropshadowOffset;
-(NSString *)color;
-(NSString *)font;
-(NSString *)textSize;

@end


@class NSString, SOJUStrPoint;

@interface SOJUSponsoredSlugStyle : NSObject <SOJUSponsoredSlugStyle> {

	NSString* _font;
	NSString* _textSize;
	NSString* _color;
	NSString* _dropshadowColor;
	SOJUStrPoint* _dropshadowOffset;

}

@property (nonatomic,copy,readonly) NSString * font;                              //@synthesize font=_font - In the implementation block
@property (nonatomic,copy,readonly) NSString * textSize;                          //@synthesize textSize=_textSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * color;                             //@synthesize color=_color - In the implementation block
@property (nonatomic,copy,readonly) NSString * dropshadowColor;                   //@synthesize dropshadowColor=_dropshadowColor - In the implementation block
@property (nonatomic,copy,readonly) SOJUStrPoint * dropshadowOffset;              //@synthesize dropshadowOffset=_dropshadowOffset - In the implementation block
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
-(NSString *)dropshadowColor;
-(SOJUStrPoint *)dropshadowOffset;
-(id)initWithFont:(id)arg1 textSize:(id)arg2 color:(id)arg3 dropshadowColor:(id)arg4 dropshadowOffset:(id)arg5 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)color;
-(NSString *)font;
-(NSString *)textSize;
-(id)toDictionary;
@end

