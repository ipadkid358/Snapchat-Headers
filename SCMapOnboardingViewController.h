/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIViewController.h>
#import <Snapchat/SCMapOnboardingActionSheetViewDelegate.h>
#import <Snapchat/SCMapOnboardingGiveAccessViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Snapchat/SCTimeProfilable.h>
#import <Snapchat/SCMapFriendChooserDelegate.h>
#import <Snapchat/SCMapOnboardingSendToViewDelegate.h>
#import <Snapchat/SCLocationObserver.h>
#import <Snapchat/SCDelegatedPresentedDelegate.h>

@protocol SCMapOnboardingViewControllerDelegate;
@class MGLMapView, SCXRenderLayer, SCMapStandingPersonSpriteManager, SCMapOnboardingViewLogger, SCUserSession, UILongPressGestureRecognizer, UIPanGestureRecognizer, SCMTGetOnboardingViewStateResponse, SCMapOnboardingGiveAccessView, UIView, SCMapFloatingActionButton, SCMapOnboardingTitleView, UIButton, CAGradientLayer, SCMapOnboardingActionSheetContainerView, SCMapOnboardingActionSheetView, NSArray, CLLocation, SCMapOnboardingSendToView, NSString;

@interface SCMapOnboardingViewController : UIViewController <SCMapOnboardingActionSheetViewDelegate, SCMapOnboardingGiveAccessViewDelegate, UIGestureRecognizerDelegate, SCTimeProfilable, SCMapFriendChooserDelegate, SCMapOnboardingSendToViewDelegate, SCLocationObserver, SCDelegatedPresentedDelegate> {

	MGLMapView* _mapView;
	SCXRenderLayer* _renderLayer;
	SCMapStandingPersonSpriteManager* _spriteManager;
	SCMapOnboardingViewLogger* _logger;
	SCUserSession* _userSession;
	UILongPressGestureRecognizer* _touchDownGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	long long _currentStage;
	SCMTGetOnboardingViewStateResponse* _poiSearchResponse;
	BOOL _didSearchRequest;
	BOOL _didHandleUserLocationUpdate;
	SCMapOnboardingGiveAccessView* _giveAccessView;
	UIView* _onboardingFlowContainer;
	SCMapFloatingActionButton* _floatingActionButton;
	SCMapOnboardingTitleView* _titleView;
	UIButton* _backButton;
	UIView* _sendToViewContainer;
	CAGradientLayer* _sendToViewGradientLayer;
	SCMapOnboardingActionSheetContainerView* _actionSheetContainerView;
	SCMapOnboardingActionSheetView* _audienceSheet;
	NSArray* _friendChooserSelectedFriends;
	CGAffineTransform _floatingActionButtonTransformVisible;
	CGAffineTransform _floatingActionButtonTransformHidden;
	id<SCMapOnboardingViewControllerDelegate> _delegate;
	CLLocation* _userLocation;
	SCMapOnboardingSendToView* _sendToView;

}

@property (nonatomic,readonly) CLLocation * userLocation;                                            //@synthesize userLocation=_userLocation - In the implementation block
@property (nonatomic,retain) SCMapOnboardingSendToView * sendToView;                                 //@synthesize sendToView=_sendToView - In the implementation block
@property (assign,nonatomic,__weak) id<SCMapOnboardingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldShowOnboardingWithUserSession:(id)arg1 ;
+(BOOL)_needsLocationPermissions;
+(int)context;
-(BOOL)locationObserverWantsActiveLocationMonitoring;
-(id)locationObserverDispatchQueue;
-(double)locationObserverDesiredAccuracy;
-(id)locationObserverIdentifier;
-(void)onLocationUpdate:(id)arg1 ;
-(void)_onPan:(id)arg1 ;
-(void)friendChooserWantsToSaveChanges:(id)arg1 ;
-(void)friendChooserUserDidTapDoneButton:(id)arg1 ;
-(void)onboardingActionSheetView:(id)arg1 didSelectItemAtIndex:(long long)arg2 isNewSelection:(BOOL)arg3 ;
-(void)giveAccessViewGiveAccessButtonTapped:(id)arg1 ;
-(void)giveAccessViewNotNowButtonTapped:(id)arg1 ;
-(void)giveAccessViewCloseButtonTapped:(id)arg1 ;
-(void)mapOnboardingViewBecameReadyToSnapshot:(id)arg1 ;
-(void)_userDidTapOnboardingFlowFloatingActionButton:(id)arg1 ;
-(void)_userDidTapBackButton:(id)arg1 ;
-(void)_onTouchDown:(id)arg1 ;
-(void)_setInitialUserLocation;
-(void)_goToStage:(long long)arg1 ;
-(SCMapOnboardingSendToView *)sendToView;
-(BOOL)_needsLocationPermissionForUser:(id)arg1 ;
-(void)_doSearchRequestIfNeeded;
-(void)_moveCameraToNecessaryPositionAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_goToNextStage;
-(void)_updateStatusBar;
-(void)_handleCurrentLocationPermissions;
-(BOOL)_wantsToShowSendToContainer;
-(void)_updateSnapshotInSendToViewContainer;
-(void)_setSendToViewContainerHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_locationSharingPreferencesForChosenOptions;
-(void)_dismissWithPreferences:(id)arg1 ;
-(void)_validateAudienceSheetSelection;
-(void)_goToPreviousStage;
-(UIEdgeInsets)_edgePaddingForHappeningNow;
-(void)_updateLayerOpacities;
-(id)_titleFromStage:(long long)arg1 ;
-(id)_subtitleFromStage:(long long)arg1 ;
-(void)_didCompleteOnboarding;
-(void)_exitToCamera;
-(void)_moveCameraToCurrentUserLocationAtZoomLevel:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_locationsToShowcaseFromPois:(id)arg1 includeCurrentUserLocation:(BOOL)arg2 ;
-(void)_moveCameraToCoordinateBounds:(MGLCoordinateBounds)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_locationsToShowcaseFromFriendLocations:(id)arg1 includeCurrentUserLocation:(BOOL)arg2 ;
-(void)_moveCameraToCoordinateBounds:(MGLCoordinateBounds)arg1 edgePadding:(UIEdgeInsets)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)_locationsToShowcaseFromLocations:(id)arg1 maxToShowcase:(long long)arg2 includeCurrentUserLocation:(BOOL)arg3 ;
-(id)_sortedLocations:(id)arg1 byDistanceFromLocation:(id)arg2 ;
-(UIEdgeInsets)_cameraEdgePaddingForStage:(long long)arg1 ;
-(MGLCoordinateBounds)_coordinateBoundsFromCoordinateBounds:(MGLCoordinateBounds)arg1 withMinDistanceMeters:(double)arg2 ;
-(double)_cameraDurationForStage:(long long)arg1 ;
-(void)_setBlackOverlayLayerOpacity:(double)arg1 duration:(double)arg2 ;
-(void)_setSpriteLayerOpacity:(double)arg1 duration:(double)arg2 ;
-(void)_setHeatmapLayerOpacity:(double)arg1 duration:(double)arg2 ;
-(void)_setPoiLayerOpacity:(double)arg1 duration:(double)arg2 ;
-(id)_friendLocationsToShowcase;
-(void)_setDefaultLayerOpacitiesWithDuration:(double)arg1 ;
-(void)presentedAnimationForTransitionDelegate:(id)arg1 ;
-(void)dismissedAnimationForTransitionDelegate:(id)arg1 ;
-(id)initWithLoggerSession:(id)arg1 userSession:(id)arg2 mapView:(id)arg3 renderLayer:(id)arg4 spriteManager:(id)arg5 ;
-(void)didGetPresented;
-(void)setSendToView:(SCMapOnboardingSendToView *)arg1 ;
-(void)setDelegate:(id<SCMapOnboardingViewControllerDelegate>)arg1 ;
-(id<SCMapOnboardingViewControllerDelegate>)delegate;
-(BOOL)prefersStatusBarHidden;
-(long long)preferredStatusBarUpdateAnimation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)_didBecomeActive:(id)arg1 ;
-(CLLocation *)userLocation;
@end
