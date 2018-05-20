/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCXGameStateProvider;
#import <Snapchat/Snapchat-Structs.h>
@class NSMutableSet, SCThrottleTimer, SCXRenderContext, SCXPOITile, SCMTPointOfInterestSizeEquation;

@interface SCXThumbnailViewStateManager : NSObject {

	NSMutableSet* _fadingOut;
	NSMutableSet* _loading;
	NSMutableSet* _nonCollidedPoiIds;
	SCThrottleTimer* _throttleTimer;
	SCXRenderContext* _latestContext;
	BOOL _showPoiOnSpriteCollision;
	BOOL _collapseCollidingPois;
	BOOL _showDiscoverPois;
	BOOL _showCardPois;
	BOOL _ignoringSpriteCollisions;
	SCXPOITile* _overridePoiTile;
	id<SCXGameStateProvider> _gameStateProvider;
	SCMTPointOfInterestSizeEquation* _customPoiSizeEquationForMarkers;

}

@property (nonatomic,retain) SCXPOITile * overridePoiTile;                                                   //@synthesize overridePoiTile=_overridePoiTile - In the implementation block
@property (assign,nonatomic) BOOL showPoiOnSpriteCollision;                                                  //@synthesize showPoiOnSpriteCollision=_showPoiOnSpriteCollision - In the implementation block
@property (assign,nonatomic) BOOL collapseCollidingPois;                                                     //@synthesize collapseCollidingPois=_collapseCollidingPois - In the implementation block
@property (assign,nonatomic) BOOL showDiscoverPois;                                                          //@synthesize showDiscoverPois=_showDiscoverPois - In the implementation block
@property (assign,nonatomic) BOOL showCardPois;                                                              //@synthesize showCardPois=_showCardPois - In the implementation block
@property (assign,nonatomic) BOOL ignoringSpriteCollisions;                                                  //@synthesize ignoringSpriteCollisions=_ignoringSpriteCollisions - In the implementation block
@property (nonatomic,readonly) NSMutableSet * nonCollidedPoiIds; 
@property (assign,nonatomic,__weak) id<SCXGameStateProvider> gameStateProvider;                              //@synthesize gameStateProvider=_gameStateProvider - In the implementation block
@property (nonatomic,retain) SCMTPointOfInterestSizeEquation * customPoiSizeEquationForMarkers;              //@synthesize customPoiSizeEquationForMarkers=_customPoiSizeEquationForMarkers - In the implementation block
+(void)initialize;
-(BOOL)hasInProgressAnimations:(id)arg1 ;
-(void)_applyTileDeltaUnthrottled:(id)arg1 ;
-(SCXPOITile *)overridePoiTile;
-(BOOL)_shouldShowPoi:(id)arg1 ;
-(BOOL)ignoringSpriteCollisions;
-(int)_thumbCollides:(id)arg1 clusters:(id)arg2 view:(id)arg3 ;
-(id)_fadeIn:(float)arg1 ;
-(void)_scaleIn:(id)arg1 ;
-(id)_fadeOut:(id)arg1 context:(id)arg2 ;
-(void)_sortDrawOrder:(id)arg1 viewStates:(id)arg2 ;
-(CGRect)_superRectForSprites:(id)arg1 view:(id)arg2 ;
-(void)_applyTileDelta:(id)arg1 ;
-(void)setOverridePoiTile:(SCXPOITile *)arg1 ;
-(NSMutableSet *)nonCollidedPoiIds;
-(BOOL)_poi:(id)arg1 outsideOfView:(id)arg2 withPadding:(float)arg3 ;
-(void)mapViewChangedWithContext:(id)arg1 ;
-(void)didLoadTiles:(id)arg1 inContext:(id)arg2 ;
-(void)mapDidLoadWithContext:(id)arg1 ;
-(void)didLoadThumbnail:(id)arg1 inContext:(id)arg2 ;
-(void)didCreateLabel:(id)arg1 inContext:(id)arg2 ;
-(BOOL)addScalingAnimation:(id)arg1 toPoi:(id)arg2 inContext:(id)arg3 ;
-(void)addLoadingSpinnerToPointOfInterest:(id)arg1 context:(id)arg2 ;
-(void)removeLoadingSpinnerFromPointOfInterest:(id)arg1 context:(id)arg2 ;
-(BOOL)showPoiOnSpriteCollision;
-(void)setShowPoiOnSpriteCollision:(BOOL)arg1 ;
-(BOOL)collapseCollidingPois;
-(void)setCollapseCollidingPois:(BOOL)arg1 ;
-(BOOL)showDiscoverPois;
-(void)setShowDiscoverPois:(BOOL)arg1 ;
-(BOOL)showCardPois;
-(void)setShowCardPois:(BOOL)arg1 ;
-(void)setIgnoringSpriteCollisions:(BOOL)arg1 ;
-(SCMTPointOfInterestSizeEquation *)customPoiSizeEquationForMarkers;
-(void)setCustomPoiSizeEquationForMarkers:(SCMTPointOfInterestSizeEquation *)arg1 ;
-(id<SCXGameStateProvider>)gameStateProvider;
-(void)setGameStateProvider:(id<SCXGameStateProvider>)arg1 ;
-(id)init;
-(void)_timerFired:(id)arg1 ;
@end

