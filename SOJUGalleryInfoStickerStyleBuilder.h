/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:52 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SOJUGalleryDateInfoFilter, NSString, SOJUGalleryAltitudeInfoFilterStyle, SOJUGalleryRatingStickerStyle;

@interface SOJUGalleryInfoStickerStyleBuilder : NSObject {

	SOJUGalleryDateInfoFilter* _date;
	NSString* _weather;
	SOJUGalleryAltitudeInfoFilterStyle* _altitude;
	SOJUGalleryRatingStickerStyle* _rating;

}
+(id)withJUGalleryInfoStickerStyle:(id)arg1 ;
-(id)setWeatherEnum:(long long)arg1 ;
-(id)setWeather:(id)arg1 ;
-(id)setDate:(id)arg1 ;
-(id)setAltitude:(id)arg1 ;
-(id)build;
-(id)setRating:(id)arg1 ;
@end
