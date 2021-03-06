/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SCMTPointOfInterestSizeEquation;

@interface SCXRenderLayerOptions : NSObject {

	BOOL _shouldMipmapTextures;
	BOOL _showEmojiPOIs;
	BOOL _drawThreeDimensionalPois;
	BOOL _showDiscoverPois;
	BOOL _showMapMarkerPois;
	BOOL _enableWeather;
	BOOL _showPoiOnSpriteCollision;
	BOOL _collapseCollidingPois;
	NSString* _tileSetFlavor;
	NSString* _epochOverride;
	SCMTPointOfInterestSizeEquation* _customPoiSizeEquationForMarkers;

}

@property (retain) NSString * tileSetFlavor;                                                       //@synthesize tileSetFlavor=_tileSetFlavor - In the implementation block
@property (retain) NSString * epochOverride;                                                       //@synthesize epochOverride=_epochOverride - In the implementation block
@property (assign) BOOL shouldMipmapTextures;                                                      //@synthesize shouldMipmapTextures=_shouldMipmapTextures - In the implementation block
@property (assign) BOOL showEmojiPOIs;                                                             //@synthesize showEmojiPOIs=_showEmojiPOIs - In the implementation block
@property (assign) BOOL drawThreeDimensionalPois;                                                  //@synthesize drawThreeDimensionalPois=_drawThreeDimensionalPois - In the implementation block
@property (assign) BOOL showDiscoverPois;                                                          //@synthesize showDiscoverPois=_showDiscoverPois - In the implementation block
@property (assign) BOOL showMapMarkerPois;                                                         //@synthesize showMapMarkerPois=_showMapMarkerPois - In the implementation block
@property (assign) BOOL enableWeather;                                                             //@synthesize enableWeather=_enableWeather - In the implementation block
@property (retain) SCMTPointOfInterestSizeEquation * customPoiSizeEquationForMarkers;              //@synthesize customPoiSizeEquationForMarkers=_customPoiSizeEquationForMarkers - In the implementation block
@property (assign) BOOL showPoiOnSpriteCollision;                                                  //@synthesize showPoiOnSpriteCollision=_showPoiOnSpriteCollision - In the implementation block
@property (assign) BOOL collapseCollidingPois;                                                     //@synthesize collapseCollidingPois=_collapseCollidingPois - In the implementation block
-(BOOL)drawThreeDimensionalPois;
-(BOOL)showPoiOnSpriteCollision;
-(void)setShowPoiOnSpriteCollision:(BOOL)arg1 ;
-(BOOL)collapseCollidingPois;
-(void)setCollapseCollidingPois:(BOOL)arg1 ;
-(BOOL)showDiscoverPois;
-(void)setShowDiscoverPois:(BOOL)arg1 ;
-(SCMTPointOfInterestSizeEquation *)customPoiSizeEquationForMarkers;
-(void)setCustomPoiSizeEquationForMarkers:(SCMTPointOfInterestSizeEquation *)arg1 ;
-(void)setDrawThreeDimensionalPois:(BOOL)arg1 ;
-(NSString *)tileSetFlavor;
-(void)setTileSetFlavor:(NSString *)arg1 ;
-(NSString *)epochOverride;
-(void)setEpochOverride:(NSString *)arg1 ;
-(BOOL)shouldMipmapTextures;
-(void)setShouldMipmapTextures:(BOOL)arg1 ;
-(BOOL)showEmojiPOIs;
-(void)setShowEmojiPOIs:(BOOL)arg1 ;
-(BOOL)showMapMarkerPois;
-(void)setShowMapMarkerPois:(BOOL)arg1 ;
-(BOOL)enableWeather;
-(void)setEnableWeather:(BOOL)arg1 ;
@end

