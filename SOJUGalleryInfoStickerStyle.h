/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:52 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUGalleryInfoStickerStyle.h>
@class SOJUGalleryDateInfoFilter, NSString, SOJUGalleryAltitudeInfoFilterStyle, SOJUGalleryRatingStickerStyle;


@protocol SOJUGalleryInfoStickerStyle <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) SOJUGalleryDateInfoFilter * date; 
@property (nonatomic,copy,readonly) NSString * weather; 
@property (nonatomic,copy,readonly) SOJUGalleryAltitudeInfoFilterStyle * altitude; 
@property (nonatomic,copy,readonly) SOJUGalleryRatingStickerStyle * rating; 
@required
-(NSString *)weather;
-(SOJUGalleryDateInfoFilter *)date;
-(SOJUGalleryAltitudeInfoFilterStyle *)altitude;
-(SOJUGalleryRatingStickerStyle *)rating;

@end


@class SOJUGalleryDateInfoFilter, NSString, SOJUGalleryAltitudeInfoFilterStyle, SOJUGalleryRatingStickerStyle;

@interface SOJUGalleryInfoStickerStyle : NSObject <SOJUGalleryInfoStickerStyle> {

	SOJUGalleryDateInfoFilter* _date;
	NSString* _weather;
	SOJUGalleryAltitudeInfoFilterStyle* _altitude;
	SOJUGalleryRatingStickerStyle* _rating;

}

@property (nonatomic,copy,readonly) SOJUGalleryDateInfoFilter * date;                           //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSString * weather;                                         //@synthesize weather=_weather - In the implementation block
@property (nonatomic,copy,readonly) SOJUGalleryAltitudeInfoFilterStyle * altitude;              //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,copy,readonly) SOJUGalleryRatingStickerStyle * rating;                     //@synthesize rating=_rating - In the implementation block
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
-(long long)weatherEnum;
-(NSString *)weather;
-(id)initWithDate:(id)arg1 weather:(id)arg2 altitude:(id)arg3 rating:(id)arg4 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(SOJUGalleryDateInfoFilter *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SOJUGalleryAltitudeInfoFilterStyle *)altitude;
-(SOJUGalleryRatingStickerStyle *)rating;
-(id)toDictionary;
@end

