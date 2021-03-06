/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:52 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSArray, NSNumber, SOJUDynamicContentSetting, SOJUUnlockablesAutoStacking, SOJUUnlockablesArSegmentationFilter, SOJUUnlockablesCarouselGroup;

@interface SOJUGalleryGeoFilterBuilder : NSObject {

	NSString* _type;
	NSString* _unlockableContentType;
	NSString* _idValue;
	NSString* _imageUrl;
	NSDictionary* _imageUrlParams;
	NSArray* _dynamicContent;
	NSString* _scaleSetting;
	NSString* _positionSetting;
	NSNumber* _belowDrawingLayer;
	NSNumber* _isSponsored;
	NSArray* _geofilterMarkups;
	SOJUDynamicContentSetting* _dynamicContentSetting;
	SOJUUnlockablesAutoStacking* _autoStacking;
	NSNumber* _isAnimated;
	SOJUUnlockablesArSegmentationFilter* _arSegmentation;
	SOJUUnlockablesCarouselGroup* _carouselGroup;

}
+(id)withJUGalleryGeoFilter:(id)arg1 ;
-(id)setIdValue:(id)arg1 ;
-(id)setTypeEnum:(long long)arg1 ;
-(id)setUnlockableContentTypeEnum:(long long)arg1 ;
-(id)setScaleSettingEnum:(long long)arg1 ;
-(id)setPositionSettingEnum:(long long)arg1 ;
-(id)setBelowDrawingLayerValue:(BOOL)arg1 ;
-(id)setIsSponsoredValue:(BOOL)arg1 ;
-(id)setIsAnimatedValue:(BOOL)arg1 ;
-(id)setImageUrl:(id)arg1 ;
-(id)setImageUrlParams:(id)arg1 ;
-(id)setScaleSetting:(id)arg1 ;
-(id)setPositionSetting:(id)arg1 ;
-(id)setGeofilterMarkups:(id)arg1 ;
-(id)setUnlockableContentType:(id)arg1 ;
-(id)setDynamicContent:(id)arg1 ;
-(id)setDynamicContentSetting:(id)arg1 ;
-(id)setBelowDrawingLayer:(id)arg1 ;
-(id)setAutoStacking:(id)arg1 ;
-(id)setIsAnimated:(id)arg1 ;
-(id)setCarouselGroup:(id)arg1 ;
-(id)setArSegmentation:(id)arg1 ;
-(id)setType:(id)arg1 ;
-(id)build;
-(id)setIsSponsored:(id)arg1 ;
@end

