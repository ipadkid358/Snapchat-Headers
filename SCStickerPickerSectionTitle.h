/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCStickerPickerSectionTitle.h>
@class NSString;


@protocol SCStickerPickerSectionTitle <NSObject,NSCoding,NSCopying>
@property (nonatomic,readonly) long long style; 
@property (nonatomic,copy,readonly) NSString * content; 
@required
-(NSString *)content;
-(long long)style;

@end


@class NSString;

@interface SCStickerPickerSectionTitle : NSObject <SCStickerPickerSectionTitle> {

	long long _style;
	NSString* _content;

}

@property (nonatomic,readonly) long long style;                      //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * content;              //@synthesize content=_content - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)initWithStyle:(long long)arg1 content:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)content;
-(long long)style;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

