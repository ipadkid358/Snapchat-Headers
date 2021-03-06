/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class MGLMapView, SCXTileManager, SCXTileMetadataManager, SCXMediaManager, NSDictionary, NSArray, NSOrderedSet, SCXShadedRadiusViewState, SCXAnimation, SCXWeather, NSString;

@interface SCXRenderContext : NSObject {

	BOOL _drawThreeDimensionalPois;
	BOOL _tapTextureLocationIsSet;
	BOOL _ignoringSpriteCollisions;
	BOOL _contentTilesLoaded;
	BOOL _allStoryThumbnailsLoaded;
	BOOL _allSpritesLoaded;
	unsigned _tapTextureLocation;
	float _poiLayerOpacity;
	float _heatmapLayerOpacity;
	float _spriteLayerOpacity;
	float _blackOverlayLayerOpacity;
	float _unlockablePoiOpacity;
	MGLMapView* _mapView;
	SCXTileManager* _tileManager;
	SCXTileMetadataManager* _tileMetadataManager;
	SCXMediaManager* _mediaManager;
	NSDictionary* _thumbnailViewStates;
	NSArray* _thumbnailRenderOrder;
	NSArray* _overridePoiTile;
	NSDictionary* _tapAnimationViewStates;
	NSOrderedSet* _doodleSprites;
	NSOrderedSet* _travelPaths;
	NSOrderedSet* _spriteClusters;
	NSOrderedSet* _overlaySprites;
	SCXShadedRadiusViewState* _shadedRadiusViewState;
	SCXAnimation* _poiLayerOpacityAnimation;
	SCXAnimation* _heatmapLayerOpacityAnimation;
	SCXAnimation* _spriteLayerOpacityAnimation;
	SCXAnimation* _blackOverlayLayerOpacityAnimation;
	double _zoom;
	double _direction;
	unsigned long long _viewportMaxGameMarkersCount;
	SCXWeather* _weather;
	NSString* _weatherLiveEditHostname;
	unsigned long long _totalHeatPoints;
	CGSize _size;
	CLLocationCoordinate2D _center;

}

@property (__weak) MGLMapView * mapView;                                          //@synthesize mapView=_mapView - In the implementation block
@property (retain) SCXTileManager * tileManager;                                  //@synthesize tileManager=_tileManager - In the implementation block
@property (retain) SCXTileMetadataManager * tileMetadataManager;                  //@synthesize tileMetadataManager=_tileMetadataManager - In the implementation block
@property (retain) SCXMediaManager * mediaManager;                                //@synthesize mediaManager=_mediaManager - In the implementation block
@property (retain) NSDictionary * thumbnailViewStates;                            //@synthesize thumbnailViewStates=_thumbnailViewStates - In the implementation block
@property (retain) NSArray * thumbnailRenderOrder;                                //@synthesize thumbnailRenderOrder=_thumbnailRenderOrder - In the implementation block
@property (assign) BOOL drawThreeDimensionalPois;                                 //@synthesize drawThreeDimensionalPois=_drawThreeDimensionalPois - In the implementation block
@property (nonatomic,retain) NSArray * overridePoiTile;                           //@synthesize overridePoiTile=_overridePoiTile - In the implementation block
@property (retain) NSDictionary * tapAnimationViewStates;                         //@synthesize tapAnimationViewStates=_tapAnimationViewStates - In the implementation block
@property (assign) BOOL tapTextureLocationIsSet;                                  //@synthesize tapTextureLocationIsSet=_tapTextureLocationIsSet - In the implementation block
@property (assign) unsigned tapTextureLocation;                                   //@synthesize tapTextureLocation=_tapTextureLocation - In the implementation block
@property (retain) NSOrderedSet * doodleSprites;                                  //@synthesize doodleSprites=_doodleSprites - In the implementation block
@property (retain) NSOrderedSet * travelPaths;                                    //@synthesize travelPaths=_travelPaths - In the implementation block
@property (retain) NSOrderedSet * spriteClusters;                                 //@synthesize spriteClusters=_spriteClusters - In the implementation block
@property (retain) NSOrderedSet * overlaySprites;                                 //@synthesize overlaySprites=_overlaySprites - In the implementation block
@property (retain) SCXShadedRadiusViewState * shadedRadiusViewState;              //@synthesize shadedRadiusViewState=_shadedRadiusViewState - In the implementation block
@property (retain) SCXAnimation * poiLayerOpacityAnimation;                       //@synthesize poiLayerOpacityAnimation=_poiLayerOpacityAnimation - In the implementation block
@property (assign) float poiLayerOpacity;                                         //@synthesize poiLayerOpacity=_poiLayerOpacity - In the implementation block
@property (retain) SCXAnimation * heatmapLayerOpacityAnimation;                   //@synthesize heatmapLayerOpacityAnimation=_heatmapLayerOpacityAnimation - In the implementation block
@property (assign) float heatmapLayerOpacity;                                     //@synthesize heatmapLayerOpacity=_heatmapLayerOpacity - In the implementation block
@property (retain) SCXAnimation * spriteLayerOpacityAnimation;                    //@synthesize spriteLayerOpacityAnimation=_spriteLayerOpacityAnimation - In the implementation block
@property (assign) float spriteLayerOpacity;                                      //@synthesize spriteLayerOpacity=_spriteLayerOpacity - In the implementation block
@property (retain) SCXAnimation * blackOverlayLayerOpacityAnimation;              //@synthesize blackOverlayLayerOpacityAnimation=_blackOverlayLayerOpacityAnimation - In the implementation block
@property (assign) float blackOverlayLayerOpacity;                                //@synthesize blackOverlayLayerOpacity=_blackOverlayLayerOpacity - In the implementation block
@property (assign) float unlockablePoiOpacity;                                    //@synthesize unlockablePoiOpacity=_unlockablePoiOpacity - In the implementation block
@property (assign) BOOL ignoringSpriteCollisions;                                 //@synthesize ignoringSpriteCollisions=_ignoringSpriteCollisions - In the implementation block
@property (assign) CGSize size;                                                   //@synthesize size=_size - In the implementation block
@property (assign) CLLocationCoordinate2D center;                                 //@synthesize center=_center - In the implementation block
@property (assign) double zoom;                                                   //@synthesize zoom=_zoom - In the implementation block
@property (assign) double direction;                                              //@synthesize direction=_direction - In the implementation block
@property (assign) BOOL contentTilesLoaded;                                       //@synthesize contentTilesLoaded=_contentTilesLoaded - In the implementation block
@property (assign) BOOL allStoryThumbnailsLoaded;                                 //@synthesize allStoryThumbnailsLoaded=_allStoryThumbnailsLoaded - In the implementation block
@property (assign) BOOL allSpritesLoaded;                                         //@synthesize allSpritesLoaded=_allSpritesLoaded - In the implementation block
@property (assign) unsigned long long viewportMaxGameMarkersCount;                //@synthesize viewportMaxGameMarkersCount=_viewportMaxGameMarkersCount - In the implementation block
@property (retain) SCXWeather * weather;                                          //@synthesize weather=_weather - In the implementation block
@property (copy) NSString * weatherLiveEditHostname;                              //@synthesize weatherLiveEditHostname=_weatherLiveEditHostname - In the implementation block
@property (assign) unsigned long long totalHeatPoints;                            //@synthesize totalHeatPoints=_totalHeatPoints - In the implementation block
-(SCXWeather *)weather;
-(void)setWeather:(SCXWeather *)arg1 ;
-(float)blackOverlayLayerOpacity;
-(SCXAnimation *)blackOverlayLayerOpacityAnimation;
-(NSOrderedSet *)travelPaths;
-(NSArray *)thumbnailRenderOrder;
-(NSOrderedSet *)spriteClusters;
-(NSDictionary *)thumbnailViewStates;
-(NSString *)weatherLiveEditHostname;
-(SCXMediaManager *)mediaManager;
-(SCXShadedRadiusViewState *)shadedRadiusViewState;
-(NSOrderedSet *)doodleSprites;
-(NSOrderedSet *)overlaySprites;
-(void)setAllSpritesLoaded:(BOOL)arg1 ;
-(float)spriteLayerOpacity;
-(SCXAnimation *)spriteLayerOpacityAnimation;
-(SCXTileManager *)tileManager;
-(void)setTotalHeatPoints:(unsigned long long)arg1 ;
-(float)heatmapLayerOpacity;
-(SCXAnimation *)heatmapLayerOpacityAnimation;
-(BOOL)tapTextureLocationIsSet;
-(unsigned)tapTextureLocation;
-(NSDictionary *)tapAnimationViewStates;
-(void)setTapAnimationViewStates:(NSDictionary *)arg1 ;
-(void)setTapTextureLocationIsSet:(BOOL)arg1 ;
-(void)setTapTextureLocation:(unsigned)arg1 ;
-(void)setAllStoryThumbnailsLoaded:(BOOL)arg1 ;
-(NSArray *)overridePoiTile;
-(BOOL)ignoringSpriteCollisions;
-(BOOL)drawThreeDimensionalPois;
-(void)setThumbnailViewStates:(NSDictionary *)arg1 ;
-(void)setThumbnailRenderOrder:(NSArray *)arg1 ;
-(unsigned long long)viewportMaxGameMarkersCount;
-(void)setViewportMaxGameMarkersCount:(unsigned long long)arg1 ;
-(void)setOverridePoiTile:(NSArray *)arg1 ;
-(void)setIgnoringSpriteCollisions:(BOOL)arg1 ;
-(void)setTileManager:(SCXTileManager *)arg1 ;
-(SCXTileMetadataManager *)tileMetadataManager;
-(void)setTileMetadataManager:(SCXTileMetadataManager *)arg1 ;
-(void)setMediaManager:(SCXMediaManager *)arg1 ;
-(void)setDrawThreeDimensionalPois:(BOOL)arg1 ;
-(void)setDoodleSprites:(NSOrderedSet *)arg1 ;
-(void)setTravelPaths:(NSOrderedSet *)arg1 ;
-(void)setSpriteClusters:(NSOrderedSet *)arg1 ;
-(void)setOverlaySprites:(NSOrderedSet *)arg1 ;
-(void)setShadedRadiusViewState:(SCXShadedRadiusViewState *)arg1 ;
-(SCXAnimation *)poiLayerOpacityAnimation;
-(void)setPoiLayerOpacityAnimation:(SCXAnimation *)arg1 ;
-(float)poiLayerOpacity;
-(void)setPoiLayerOpacity:(float)arg1 ;
-(void)setHeatmapLayerOpacityAnimation:(SCXAnimation *)arg1 ;
-(void)setHeatmapLayerOpacity:(float)arg1 ;
-(void)setSpriteLayerOpacityAnimation:(SCXAnimation *)arg1 ;
-(void)setSpriteLayerOpacity:(float)arg1 ;
-(void)setBlackOverlayLayerOpacityAnimation:(SCXAnimation *)arg1 ;
-(void)setBlackOverlayLayerOpacity:(float)arg1 ;
-(float)unlockablePoiOpacity;
-(void)setUnlockablePoiOpacity:(float)arg1 ;
-(BOOL)contentTilesLoaded;
-(void)setContentTilesLoaded:(BOOL)arg1 ;
-(BOOL)allStoryThumbnailsLoaded;
-(BOOL)allSpritesLoaded;
-(void)setWeatherLiveEditHostname:(NSString *)arg1 ;
-(unsigned long long)totalHeatPoints;
-(CGSize)size;
-(CLLocationCoordinate2D)center;
-(void)setSize:(CGSize)arg1 ;
-(void)setCenter:(CLLocationCoordinate2D)arg1 ;
-(void)setDirection:(double)arg1 ;
-(double)direction;
-(double)zoom;
-(void)setZoom:(double)arg1 ;
-(void)setMapView:(MGLMapView *)arg1 ;
-(MGLMapView *)mapView;
@end

