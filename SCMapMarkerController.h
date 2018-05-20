/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:41 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCContextCardLoaderDelegate.h>
#import <Snapchat/SCContextCardsProvider.h>
#import <Snapchat/SCMapTouchResponder.h>

@protocol SCMapMarkerControllerDelegate;
@class SCMTPointOfInterest, SCContextCardsController, SCContextSession, SCContextCardLoader, SCMapRequest, MGLMapView, SCXRenderLayer, SCUserSession, NSString;

@interface SCMapMarkerController : NSObject <SCContextCardLoaderDelegate, SCContextCardsProvider, SCMapTouchResponder> {

	SCMTPointOfInterest* _selectedMapMarker;
	SCMTPointOfInterest* _depressedMapMarker;
	SCContextCardsController* _contextCardsController;
	SCContextSession* _contextSession;
	SCContextCardLoader* _cardLoader;
	SCMapRequest* _cardsRequest;
	MGLMapView* _mapView;
	SCXRenderLayer* _renderLayer;
	SCUserSession* _userSession;
	id<SCMapMarkerControllerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) MGLMapView * mapView;                                  //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,__weak,readonly) SCXRenderLayer * renderLayer;                          //@synthesize renderLayer=_renderLayer - In the implementation block
@property (nonatomic,__weak,readonly) SCUserSession * userSession;                           //@synthesize userSession=_userSession - In the implementation block
@property (assign,nonatomic,__weak) id<SCMapMarkerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCXRenderLayer *)renderLayer;
-(BOOL)showLoadingCards;
-(void)cardsLoaded:(id)arg1 ;
-(void)cardLoadError:(id)arg1 ;
-(void)cardsResponse:(/*^block*/id)arg1 ;
-(SCMapTouchResponderResult)didTouchDownOnMapAtPoint:(CGPoint)arg1 ;
-(SCMapTouchResponderResult)didTouchUpOnMapAtPoint:(CGPoint)arg1 ;
-(SCMapTouchResponderResult)didLongPressOnMapAtPoint:(CGPoint)arg1 ;
-(void)didCancelTouchOnMapWithReason:(id)arg1 ;
-(void)priorResponderDidHandleTouch:(id)arg1 ;
-(void)didPanMap;
-(void)didZoomMap;
-(id)initWithMapView:(id)arg1 renderLayer:(id)arg2 userSession:(id)arg3 ;
-(void)_cancelFetch;
-(id)_loadingMapCardsViewModel;
-(id)_createCardsView;
-(void)deselectSelectedMapMarker;
-(void)_showCardsForMarker:(id)arg1 ;
-(void)_centerCameraOnMarker:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_hasCalloutAtPoint:(CGPoint)arg1 ;
-(id)_mapMarkerAtPoint:(CGPoint)arg1 ;
-(void)_handleTapOnMarker:(id)arg1 touchPoint:(CGPoint)arg2 ;
-(id)_getMockResponse;
-(void)setDelegate:(id<SCMapMarkerControllerDelegate>)arg1 ;
-(id<SCMapMarkerControllerDelegate>)delegate;
-(SCUserSession *)userSession;
-(MGLMapView *)mapView;
@end

