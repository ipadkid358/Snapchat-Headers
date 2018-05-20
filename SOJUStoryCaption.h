/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:56 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUStoryCaption.h>
@class NSNumber, NSString;


@protocol SOJUStoryCaption <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSNumber * fontSize; 
@property (nonatomic,copy,readonly) NSNumber * centerX; 
@property (nonatomic,copy,readonly) NSNumber * centerY; 
@property (nonatomic,copy,readonly) NSNumber * rotation; 
@property (nonatomic,copy,readonly) NSNumber * tracking; 
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSNumber * width; 
@property (nonatomic,copy,readonly) NSNumber * height; 
@required
-(NSString *)type;
-(NSNumber *)width;
-(NSNumber *)height;
-(NSNumber *)rotation;
-(NSNumber *)fontSize;
-(NSNumber *)tracking;
-(NSNumber *)centerX;
-(NSNumber *)centerY;

@end


@class NSNumber, NSString;

@interface SOJUStoryCaption : NSObject <SOJUStoryCaption> {

	NSNumber* _fontSize;
	NSNumber* _centerX;
	NSNumber* _centerY;
	NSNumber* _rotation;
	NSNumber* _tracking;
	NSString* _type;
	NSNumber* _width;
	NSNumber* _height;

}

@property (nonatomic,copy,readonly) NSNumber * fontSize;              //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * centerX;               //@synthesize centerX=_centerX - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * centerY;               //@synthesize centerY=_centerY - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rotation;              //@synthesize rotation=_rotation - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * tracking;              //@synthesize tracking=_tracking - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * width;                 //@synthesize width=_width - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * height;                //@synthesize height=_height - In the implementation block
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
-(float)heightValue;
-(float)widthValue;
-(float)rotationValue;
-(float)fontSizeValue;
-(float)centerXValue;
-(float)centerYValue;
-(BOOL)trackingValue;
-(id)initWithFontSize:(id)arg1 centerX:(id)arg2 centerY:(id)arg3 rotation:(id)arg4 tracking:(id)arg5 type:(id)arg6 width:(id)arg7 height:(id)arg8 ;
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
-(NSNumber *)fontSize;
-(NSNumber *)tracking;
-(NSNumber *)centerX;
-(NSNumber *)centerY;
-(id)toDictionary;
@end
