/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:57 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUUnlockablesOndemandAssetTextBox.h>
@class NSNumber, NSString;


@protocol SOJUUnlockablesOndemandAssetTextBox <NSObject,NSCoding,NSCopying,SOJUUnlockablesOndemandAssetBox>
@property (nonatomic,copy,readonly) NSNumber * posX; 
@property (nonatomic,copy,readonly) NSNumber * posY; 
@property (nonatomic,copy,readonly) NSNumber * width; 
@property (nonatomic,copy,readonly) NSNumber * height; 
@property (nonatomic,copy,readonly) NSNumber * rotation; 
@property (nonatomic,copy,readonly) NSNumber * index; 
@property (nonatomic,copy,readonly) NSString * text; 
@property (nonatomic,copy,readonly) NSNumber * fontSize; 
@property (nonatomic,copy,readonly) NSString * fontFamily; 
@required
-(NSNumber *)posX;
-(NSNumber *)posY;
-(NSString *)text;
-(NSNumber *)width;
-(NSNumber *)height;
-(NSNumber *)index;
-(NSNumber *)rotation;
-(NSNumber *)fontSize;
-(NSString *)fontFamily;

@end


@class NSNumber, NSString;

@interface SOJUUnlockablesOndemandAssetTextBox : NSObject <SOJUUnlockablesOndemandAssetTextBox> {

	NSNumber* _posX;
	NSNumber* _posY;
	NSNumber* _width;
	NSNumber* _height;
	NSNumber* _rotation;
	NSNumber* _index;
	NSString* _text;
	NSNumber* _fontSize;
	NSString* _fontFamily;

}

@property (nonatomic,copy,readonly) NSNumber * posX;                    //@synthesize posX=_posX - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * posY;                    //@synthesize posY=_posY - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * width;                   //@synthesize width=_width - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * height;                  //@synthesize height=_height - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rotation;                //@synthesize rotation=_rotation - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * index;                   //@synthesize index=_index - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                    //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * fontSize;                //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * fontFamily;              //@synthesize fontFamily=_fontFamily - In the implementation block
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
-(double)heightValue;
-(double)widthValue;
-(double)rotationValue;
-(double)fontSizeValue;
-(double)posXValue;
-(double)posYValue;
-(NSNumber *)posX;
-(NSNumber *)posY;
-(id)initWithPosX:(id)arg1 posY:(id)arg2 width:(id)arg3 height:(id)arg4 rotation:(id)arg5 index:(id)arg6 text:(id)arg7 fontSize:(id)arg8 fontFamily:(id)arg9 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(NSNumber *)width;
-(NSNumber *)height;
-(NSNumber *)index;
-(NSNumber *)rotation;
-(NSNumber *)fontSize;
-(int)indexValue;
-(id)toDictionary;
-(NSString *)fontFamily;
@end

