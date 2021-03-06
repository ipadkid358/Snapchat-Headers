/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCMapTapToPlayPresenterDelegate.h>
#import <Snapchat/SCMapPOIMiniProfileViewControllerDelegate.h>
#import <Snapchat/SCMapTapToPlayLaunch.h>

@protocol SCMapTouchResponderPresentationDelegate;
@class SCMapTapToPlayLogger, SCUserSession, NSString, NSDictionary, FriendStories, NSArray, SCMapTapToPlayPOIMediaFetcher, SCMapTapToPlayPresenter, SCStatusBarOverlayLabelWindow, SCMTPointOfInterest, MGLMapView, SCXRenderLayer, SCContextSession;

@interface SCMapTapToPlayPOI : NSObject <SCMapTapToPlayPresenterDelegate, SCMapPOIMiniProfileViewControllerDelegate, SCMapTapToPlayLaunch> {

	SCMapTapToPlayLogger* _tapToPlayLogger;
	SCUserSession* _userSession;
	NSString* _instanceIdentifier;
	unsigned long long _state;
	BOOL _animationFinished;
	BOOL _mediaFetchFinished;
	NSDictionary* _mockUsernameToIndex;
	FriendStories* _tappedFriendStories;
	NSArray* _allPois;
	NSArray* _allFriendStories;
	NSArray* _allFetchers;
	SCMapTapToPlayPOIMediaFetcher* _lastTappedFetcher;
	SCMapTapToPlayPresenter* _presenter;
	SCStatusBarOverlayLabelWindow* _statusOverlay;
	SCMTPointOfInterest* _tappedPoi;
	id<SCMapTouchResponderPresentationDelegate> _delegate;
	MGLMapView* _mapView;
	SCXRenderLayer* _mapRenderLayer;

}

@property (nonatomic,retain) SCContextSession * contextSession; 
@property (nonatomic,readonly) SCMTPointOfInterest * tappedPoi;                                        //@synthesize tappedPoi=_tappedPoi - In the implementation block
@property (assign,nonatomic,__weak) id<SCMapTouchResponderPresentationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) MGLMapView * mapView;                                              //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic,__weak) SCXRenderLayer * mapRenderLayer;                                   //@synthesize mapRenderLayer=_mapRenderLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPresentingStory;
-(SCContextSession *)contextSession;
-(void)setContextSession:(SCContextSession *)arg1 ;
-(void)dismissStory;
-(id)visibleStory;
-(void)_presentMiniProfile;
-(SCMapTouchResponderResult)didTouchDownOnMapAtPoint:(CGPoint)arg1 ;
-(SCMapTouchResponderResult)didTouchUpOnMapAtPoint:(CGPoint)arg1 ;
-(SCMapTouchResponderResult)didLongPressOnMapAtPoint:(CGPoint)arg1 ;
-(void)didCancelTouchOnMapWithReason:(id)arg1 ;
-(void)priorResponderDidHandleTouch:(id)arg1 ;
-(void)didPanMap;
-(void)didZoomMap;
-(SCXRenderLayer *)mapRenderLayer;
-(void)setMapRenderLayer:(SCXRenderLayer *)arg1 ;
-(id)baseViewForFriendStories:(id)arg1 ;
-(void)mapTapToPlayPresenter:(id)arg1 didBeginPlayingFriendStories:(id)arg2 ;
-(void)didDismissTapToPlayPresenter:(id)arg1 ;
-(void)_cancelWithReason:(id)arg1 ;
-(void)_logPlayAttemptWithResult:(long long)arg1 ;
-(BOOL)_performHapticError;
-(void)_presentationDidFailWithResult:(unsigned long long)arg1 ;
-(BOOL)_validateChangeToState:(unsigned long long)arg1 ;
-(id)initWithTapToPlayLogger:(id)arg1 userSession:(id)arg2 mapView:(id)arg3 renderLayer:(id)arg4 delegate:(id)arg5 ;
-(id)shakeLogDescription;
-(void)_presentIfReady;
-(void)_didFinishPressAnimation;
-(BOOL)isLaunchingPoiAtPoint:(CGPoint)arg1 ;
-(id)_pointOfInterestAtPoint:(CGPoint)arg1 ;
-(id)_sortedPoisUsingS2CellId;
-(void)_startTTPForPoi:(id)arg1 allPois:(id)arg2 ;
-(BOOL)_isInstanceTerminated:(id)arg1 ;
-(void)mapPOIMiniProfileViewControllerDidDismiss:(id)arg1 ;
-(SCMTPointOfInterest *)tappedPoi;
-(void)setDelegate:(id<SCMapTouchResponderPresentationDelegate>)arg1 ;
-(NSString *)description;
-(id<SCMapTouchResponderPresentationDelegate>)delegate;
-(BOOL)isActive;
-(void)_cleanup;
-(void)_setState:(unsigned long long)arg1 ;
-(void)setMapView:(MGLMapView *)arg1 ;
-(MGLMapView *)mapView;
@end

