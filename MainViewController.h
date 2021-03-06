/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIViewController.h>
#import <Snapchat/SCRequestManagerDelegate.h>
#import <Snapchat/NavigationDelegate.h>
#import <Snapchat/SCStartChatDelegate.h>
#import <Snapchat/SCTimeProfilable.h>
#import <Snapchat/SCTabBarViewDelegate_DEPRECATED.h>
#import <Snapchat/SCTabBarViewDataSource_DEPRECATED.h>
#import <Snapchat/SCHovaNavigationBarDataSource.h>
#import <Snapchat/SCSearchViewDelegate.h>
#import <Snapchat/SCSearchResultsViewControllerDelegate.h>
#import <Snapchat/SCHovaStatusBarControllerDataSource.h>
#import <Snapchat/SCHovaOverscrollControllerDelegate.h>
#import <Snapchat/SCProfileTransitionCoordinatorDelegate.h>
#import <Snapchat/SCProfileTransitionCoordinatorDataSource.h>
#import <Snapchat/SCIdleMonitorScrollController.h>
#import <Snapchat/SearchTransitionControllerDelegate.h>
#import <Snapchat/SCSearchStoriesPresenterDelegate.h>
#import <Snapchat/SCProfileViewControllerDelegate.h>
#import <Snapchat/SCFeedManagerListener.h>
#import <Snapchat/SCSearchCameraDismissing.h>
#import <Snapchat/SCLagunaPairingDelegate.h>
#import <Snapchat/SCFailedStoryPostTooltipDelegate.h>
#import <Snapchat/SCHovaNavigationBarDelegate.h>
#import <Snapchat/SCFastPagingDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Snapchat/AVCameraViewControllerDelegate.h>
#import <Snapchat/SendSnapNavigationControllerDelegate.h>
#import <Snapchat/SCStoriesViewControllerDelegate.h>
#import <Snapchat/SCSwipeViewParentDelegate.h>
#import <Snapchat/SCReplyDelegate.h>
#import <Snapchat/SCViewingMediaDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Snapchat/SCCommerceOperaPresenterDelegate.h>

@protocol SCProfileTransitionCoordinator, SwipeView, SCFeedPage, SCStoriesPage;
@class SCCapturerToken, SCChatMainViewController, SCAppNotification, SCFeedToChatTapDetectionView, SCStatusBarLabelController, SCSpringAnimationHeartbeat, NSArray, SCHovaOverscrollController, SCFastPaging, SCMainBlurView, SCScreenshotSendingController, SCSearchTransitionController, SCSearchStoriesPresenter, SCMapPresenter, SCMomentsOperaPresenter, SCCheetahStoriesMiniProfileHandler, SCFailedStoryPostTooltipController, SCCommerceOperaPresenter, SCChatCardsOperaController, AVCameraViewController, UIViewController, SCUserSession, UIView, SCHovaTabBarView, SCHovaNavigationBar, SCHovaStatusBarController, SCMainScrollView, NSMutableSet, NSString, UIPanGestureRecognizer, UIPinchGestureRecognizer;

@interface MainViewController : UIViewController <SCRequestManagerDelegate, NavigationDelegate, SCStartChatDelegate, SCTimeProfilable, SCTabBarViewDelegate_DEPRECATED, SCTabBarViewDataSource_DEPRECATED, SCHovaNavigationBarDataSource, SCSearchViewDelegate, SCSearchResultsViewControllerDelegate, SCHovaStatusBarControllerDataSource, SCHovaOverscrollControllerDelegate, SCProfileTransitionCoordinatorDelegate, SCProfileTransitionCoordinatorDataSource, SCIdleMonitorScrollController, SearchTransitionControllerDelegate, SCSearchStoriesPresenterDelegate, SCProfileViewControllerDelegate, SCFeedManagerListener, SCSearchCameraDismissing, SCLagunaPairingDelegate, SCFailedStoryPostTooltipDelegate, SCHovaNavigationBarDelegate, SCFastPagingDelegate, UIScrollViewDelegate, AVCameraViewControllerDelegate, SendSnapNavigationControllerDelegate, SCStoriesViewControllerDelegate, SCSwipeViewParentDelegate, SCReplyDelegate, SCViewingMediaDelegate, UIGestureRecognizerDelegate, SCCommerceOperaPresenterDelegate> {

	SCCapturerToken* _token;
	SCChatMainViewController* _farLeftVC;
	id<SCProfileTransitionCoordinator> _profileTransitionCoordinator;
	SCAppNotification* _pendingNotificationToProcess;
	SCFeedToChatTapDetectionView* _feedToChatTapDetectionView;
	SCStatusBarLabelController* _statusBarLabelController;
	SCSpringAnimationHeartbeat* _springAnimationHeartbeat;
	long long _viewControllersCount;
	NSArray* _allViewControllers;
	NSArray* _hovaViewControllers;
	SCHovaOverscrollController* _overscrollController;
	SCFastPaging* _fastPaging;
	SCMainBlurView* _blurView;
	SCScreenshotSendingController* _screenshotSendingController;
	SCSearchTransitionController* _searchTransitionController;
	SCSearchStoriesPresenter* _searchStoriesPresenter;
	SCMapPresenter* _mapPresenter;
	SCMomentsOperaPresenter* _momentsOperaPresenter;
	SCCheetahStoriesMiniProfileHandler* _miniProfileHandler;
	SCFailedStoryPostTooltipController* _failedStoryTooltipController;
	SCCommerceOperaPresenter* _commercePresenter;
	SCChatCardsOperaController* _chatCardsOperaController;
	BOOL isFailedStoryTooltipInitialized;
	NSRange _visibleViewControllerRange;
	long long _beginDraggingPageIndex;
	double _searchOpenTimestamp;
	double _lastWillEnterForeground;
	BOOL _didOpenFromNotification;
	double _lastContentOffset;
	long long _exitEvent;
	BOOL _didExitFromTap;
	BOOL _animatingScroll;
	BOOL _replyingToStoryWithChat;
	BOOL _didReplyToStory;
	BOOL _viewDidScroll;
	BOOL _isObserving;
	BOOL _searchLongPressAnimate;
	AVCameraViewController*<SwipeView> _middleVC;
	UIViewController*<SCFeedPage> _leftVC;
	UIViewController*<SCStoriesPage> _rightVC;
	UIViewController*<SwipeView> _visibleVC;
	SCUserSession* _userSession;
	UIView* _containerView;
	SCHovaTabBarView* _tabBarView;
	SCHovaNavigationBar* _navigationBar;
	SCHovaStatusBarController* _hovaStatusBarController;
	UIViewController*<SwipeView> _partiallyVisibleVC;
	SCMainScrollView* _scrollView;
	NSMutableSet* _lockScrollRequestIds;
	long long _feedBadgeCountVersion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIView * containerView;                                           //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) BOOL animatingScroll;                                             //@synthesize animatingScroll=_animatingScroll - In the implementation block
@property (nonatomic,retain) SCHovaTabBarView * tabBarView;                                    //@synthesize tabBarView=_tabBarView - In the implementation block
@property (nonatomic,retain) SCHovaNavigationBar * navigationBar;                              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) SCHovaStatusBarController * hovaStatusBarController;              //@synthesize hovaStatusBarController=_hovaStatusBarController - In the implementation block
@property (nonatomic,retain) UIViewController*<SwipeView> partiallyVisibleVC;                  //@synthesize partiallyVisibleVC=_partiallyVisibleVC - In the implementation block
@property (assign,nonatomic) BOOL replyingToStoryWithChat;                                     //@synthesize replyingToStoryWithChat=_replyingToStoryWithChat - In the implementation block
@property (assign,nonatomic) BOOL didReplyToStory;                                             //@synthesize didReplyToStory=_didReplyToStory - In the implementation block
@property (nonatomic,retain) SCMainScrollView * scrollView;                                    //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) BOOL viewDidScroll;                                               //@synthesize viewDidScroll=_viewDidScroll - In the implementation block
@property (nonatomic,retain) UIViewController*<SwipeView> visibleVC;                           //@synthesize visibleVC=_visibleVC - In the implementation block
@property (assign,nonatomic) BOOL isObserving;                                                 //@synthesize isObserving=_isObserving - In the implementation block
@property (nonatomic,retain) NSMutableSet * lockScrollRequestIds;                              //@synthesize lockScrollRequestIds=_lockScrollRequestIds - In the implementation block
@property (assign) long long feedBadgeCountVersion;                                            //@synthesize feedBadgeCountVersion=_feedBadgeCountVersion - In the implementation block
@property (assign) BOOL searchLongPressAnimate;                                                //@synthesize searchLongPressAnimate=_searchLongPressAnimate - In the implementation block
@property (nonatomic,retain) AVCameraViewController*<SwipeView> middleVC;                      //@synthesize middleVC=_middleVC - In the implementation block
@property (nonatomic,retain) SCChatMainViewController * farLeftVC;                             //@synthesize farLeftVC=_farLeftVC - In the implementation block
@property (nonatomic,retain) UIViewController*<SCFeedPage> leftVC;                             //@synthesize leftVC=_leftVC - In the implementation block
@property (nonatomic,retain) UIViewController*<SCStoriesPage> rightVC;                         //@synthesize rightVC=_rightVC - In the implementation block
@property (nonatomic,readonly) SCUserSession * userSession;                                    //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer; 
@property (nonatomic,readonly) UIPinchGestureRecognizer * pinchGestureRecognizer; 
+(int)context;
-(void)unobserveAll;
-(void)lockScrollWithRequestId:(id)arg1 ;
-(void)unlockScrollWithRequestId:(id)arg1 ;
-(BOOL)canShowStatusBarOverlay;
-(void)statusBarTapped;
-(BOOL)shouldDisplayStatusBar;
-(void)contextsDidSetForRequestManager:(id)arg1 ;
-(BOOL)searchViewShouldBeginEditing:(id)arg1 ;
-(void)didFeedManagerViewModelChange:(id)arg1 ;
-(void)initScrollView;
-(unsigned long long)preferredScreenEdgesDeferringSystemGestures;
-(SCHovaTabBarView *)tabBarView;
-(void)setTabBarView:(SCHovaTabBarView *)arg1 ;
-(BOOL)hovaStatusBarControllerIsTransitioning:(id)arg1 ;
-(id)hovaStatusBarController:(id)arg1 viewControllerAtIndex:(long long)arg2 ;
-(double)hovaStatusBarController:(id)arg1 overscrollPercentVisibleForViewControllerAtIndex:(long long)arg2 ;
-(double)hovaStatusBarController:(id)arg1 alphaForViewControllerAtIndex:(long long)arg2 ;
-(double)hovaStatusBarController:(id)arg1 horizontalPercentVisibleForViewControllerAtIndex:(long long)arg2 ;
-(NSRange)hovaStatusBarControllerVisiblePageRange:(id)arg1 ;
-(id)presentedViewControllerWithSwipeTransitionCoordinator:(id)arg1 ;
-(void)setChatUsername:(id)arg1 chatPageSource:(long long)arg2 navigationAction:(long long)arg3 ;
-(void)navigateToChatView;
-(id)initWithCapturerToken:(id)arg1 userSession:(id)arg2 ;
-(id)getPageViewName;
-(void)setChatUsername:(id)arg1 deepLinkURL:(id)arg2 chatPageSource:(long long)arg3 navigationAction:(long long)arg4 ;
-(void)didSendSnaps:(id)arg1 ;
-(void)didCancelFromPreview:(id)arg1 ;
-(void)didSendToGallery;
-(void)didPostStory;
-(void)dismissPreviewIfPresented;
-(void)leftCameraBackButtonPressed;
-(void)rightCameraBackButtonPressed;
-(void)didBeginRecording;
-(void)didEndRecording:(BOOL)arg1 ;
-(void)didBeginLongPressing:(BOOL)arg1 ;
-(void)didEndLongPressing:(BOOL)arg1 ;
-(void)didLensesDetected:(BOOL)arg1 ;
-(void)toggleButtonVisibility:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)toggleButtonVisibility:(BOOL)arg1 animated:(BOOL)arg2 duration:(double)arg3 ;
-(void)toggleButtonVisibility:(BOOL)arg1 animated:(BOOL)arg2 duration:(double)arg3 showStatusBar:(BOOL)arg4 ;
-(void)toggleHovaTabBarVisibility:(BOOL)arg1 ;
-(void)setNonRecordingUIEnabled:(BOOL)arg1 ;
-(id)mainSuperview;
-(void)lagunaModuleReady;
-(void)cameraViewController:(id)arg1 didUpdateCameraType:(long long)arg2 ;
-(void)cameraViewController:(id)arg1 didPerformCameraLongPressGestureWithProfilePresented:(id)arg2 ;
-(void)cameraViewController:(id)arg1 didReceiveNewFriendRequestWithTooltipApperance:(BOOL)arg2 ;
-(BOOL)canPerformNavigation;
-(BOOL)isAtFarLeft;
-(void)presentMiddleVCAnimated:(BOOL)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)warmupGalleryForLagunaPairing;
-(void)delayBackgroundScanForLagunaPairing;
-(void)scrollToGalleryLagunaWithPairingSessionInfo:(id)arg1 ;
-(id)profileTransitionCoordinator;
-(BOOL)isFullyVisible:(id)arg1 ;
-(BOOL)isPartiallyVisible:(id)arg1 ;
-(BOOL)isAnimatingScroll;
-(double)percentVisibleForSwipeViewController:(id)arg1 ;
-(BOOL)isFrameInVisibleBounds:(id)arg1 ;
-(void)navigateToChatViewAnimated:(BOOL)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentLeftVCAnimated:(BOOL)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentRightVCAnimated:(BOOL)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)canPullDownToSearch;
-(void)presentFarLeftVCAnimated:(BOOL)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeFeedToChatTapDectionView;
-(BOOL)replyingToStoryWithChat;
-(void)didFollowThrough;
-(void)setGroupConversationById:(id)arg1 navigationAction:(long long)arg2 ;
-(void)replyWithParameter:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableSet *)lockScrollRequestIds;
-(UIViewController*<SwipeView>)visibleVC;
-(void)scrollToVC:(id)arg1 animated:(BOOL)arg2 deepLinkURL:(id)arg3 additionalInfo:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)presentOnCurrentVCAnimated:(BOOL)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)commerceOperaViewerDidDisappear:(id)arg1 unlockedLens:(id)arg2 additionalInfo:(id)arg3 wasBackgrounded:(BOOL)arg4 ;
-(void)setLockScrollRequestIds:(NSMutableSet *)arg1 ;
-(void)cancelScroll;
-(BOOL)isLeftOfViewController:(id)arg1 ;
-(BOOL)isRightOfViewController:(id)arg1 ;
-(BOOL)isVisibleViewControllerAndCapableOfPlayingSnaps;
-(void)didHideFullscreenSubview;
-(void)childScrollViewDidScroll:(id)arg1 ;
-(double)percentVisibleForSwipeViewControllerInModelLayerBounds:(id)arg1 ;
-(void)navigateToChatViewAnimated:(BOOL)arg1 ;
-(void)setGroupConversationById:(id)arg1 deeplinkURL:(id)arg2 navigationAction:(long long)arg3 ;
-(void)attachFeedToChatTapDectionViewWithCurrentTapLocation:(CGPoint)arg1 delegate:(id)arg2 ;
-(id)presentingViewControllerForSearchStoriesPresenter:(id)arg1 ;
-(void)searchStoryPresenterDidFinishDismissingStory:(id)arg1 ;
-(AVCameraViewController*<SwipeView>)middleVC;
-(UIViewController*<SCStoriesPage>)rightVC;
-(void)transitionCoordinator:(id)arg1 didUpdatePercentVisible:(double)arg2 ;
-(void)transitionCoordinator:(id)arg1 didFinishWithTransitionType:(unsigned long long)arg2 ;
-(void)transitionCoordinator:(id)arg1 didBeginWithTransitionType:(unsigned long long)arg2 ;
-(void)transitionCoordinator:(id)arg1 didCancelWithTransitionType:(unsigned long long)arg2 ;
-(BOOL)transitionCoordinator:(id)arg1 shouldPerformTransitionWithType:(unsigned long long)arg2 interactive:(BOOL)arg3 ;
-(void)dismissProfileViewController:(id)arg1 ;
-(void)didLogout:(id)arg1 ;
-(double)navigationBar:(id)arg1 percentVisibleForItemAtIndex:(long long)arg2 ;
-(double)navigationBar:(id)arg1 percentOverscrolledForItemAtIndex:(long long)arg2 ;
-(id)navigationBar:(id)arg1 searchPlaceholderForItemAtIndex:(long long)arg2 ;
-(NSRange)visibleRangeForNavigationBar:(id)arg1 ;
-(void)searchResultsViewController:(id)arg1 didOverscrollWithOffset:(double)arg2 ;
-(void)searchResultsViewController:(id)arg1 didCancelWithDismissActionType:(long long)arg2 ;
-(BOOL)animatingScroll;
-(void)didReceiveFailedStoryUploadMessage:(id)arg1 ;
-(void)navigationBar:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(void)setupNetworkManagerContextObserverIfNecessary;
-(void)setupSpringAnimationHeartbeat;
-(void)initMiddleVC;
-(void)initLeftVC;
-(void)initRightVC;
-(void)initFarLeftVC;
-(SCChatMainViewController *)farLeftVC;
-(UIViewController*<SCFeedPage>)leftVC;
-(void)addMiddleVCToView;
-(void)setVisibleVC:(UIViewController*<SwipeView>)arg1 ;
-(void)setPartiallyVisibleVC:(UIViewController*<SwipeView>)arg1 ;
-(void)setViewDidScroll:(BOOL)arg1 ;
-(void)observeAll;
-(void)setupFastPaging;
-(void)setupTabBarAndNavBarOnce;
-(NSRange)visibleViewControllerRange;
-(void)didAppStartupComplete;
-(CGRect)scrollViewBounds;
-(id)viewControllerForTabBarItemType:(long long)arg1 ;
-(void)profile:(id)arg1 ;
-(void)updateTabBarAccessoryViewsWithItems:(id)arg1 ;
-(void)resetBadgeCount;
-(void)moveCardsToRange:(NSRange)arg1 ;
-(void)_resetDiscoverFeedBadgeCount:(id)arg1 ;
-(void)resetStoryBadgeCount:(id)arg1 ;
-(double)visibilityPercentForViewFrame:(CGRect)arg1 inBounds:(CGRect)arg2 ;
-(CGRect)frameForViewWithHorizontalOffset:(long long)arg1 ;
-(NSRange)visibleHovaVCRange;
-(NSRange)visibleViewControllerRangeForContentOffset:(CGPoint)arg1 ;
-(BOOL)isViewControllerVisibleForIndex:(long long)arg1 withinBounds:(CGRect)arg2 ;
-(NSRange)visibleHovaVCRangeForContentOffset:(CGPoint)arg1 ;
-(long long)visiblePageIndex;
-(double)visibilityPercentForViewFrame:(CGRect)arg1 ;
-(CGRect)leftVCFrame;
-(CGRect)rightVCFrame;
-(long long)feedBadgeCountVersion;
-(void)setFeedBadgeCountVersion:(long long)arg1 ;
-(void)_resetFeedBadgeCountWithCount:(long long)arg1 ;
-(void)_updateDiscoverFeedIconBadge:(id)arg1 ;
-(BOOL)handleBarButtonTapIfPresentingProfile:(long long)arg1 ;
-(void)presentLeftVCAnimated:(BOOL)arg1 ;
-(void)presentRightVCAnimated:(BOOL)arg1 ;
-(CGRect)frameForChildViewController:(id)arg1 ;
-(BOOL)shouldIgnoreTabBarItemInteractionForItemType:(long long)arg1 ;
-(NSRange)visibleHovaRangeWhenReplyingToStoryWithChat;
-(CGRect)middleVCFrame;
-(CGRect)frameForItemWithType:(long long)arg1 ;
-(double)tabBarView:(id)arg1 horizontalVisibilityForItemType:(long long)arg2 ;
-(void)animateToFrame:(CGRect)arg1 withVelocity:(CGPoint)arg2 completion:(/*^block*/id)arg3 ;
-(void)_stopCameraIfVisible;
-(void)_startCameraIfVisible;
-(id)createSearchSession;
-(void)_searchViewDidTransition:(BOOL)arg1 ;
-(BOOL)isCameraViewVisible;
-(void)_markPullToSearchTooltipSeenIfNeeded;
-(BOOL)_searchCanShowToolTip:(long long)arg1 ;
-(SCHovaStatusBarController *)hovaStatusBarController;
-(void)search:(id)arg1 isFromPullToSearch:(BOOL)arg2 initialQuery:(id)arg3 ;
-(void)_dismissSearchViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_dismissSearchViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(BOOL)_canShowPullToSearchTooltip;
-(void)_showPullToSearchToolTip;
-(void)presentMiddleVCAnimated:(BOOL)arg1 ;
-(void)observeBadgeCount;
-(void)cleanUpStoryReply;
-(BOOL)_notificationHandledByCognacNotificationHandling:(id)arg1 ;
-(void)_navigateToNotification:(id)arg1 ;
-(void)addRightVCToView;
-(void)addLeftVCToView;
-(void)addBandwidthAndFrameRateLabel;
-(void)initOverscrollController;
-(void)initStatusBarController;
-(void)initPullDownTransitionControllers;
-(void)_showSearchToolTipIfPossible;
-(void)_setupFailedStoryTooltip;
-(void)_setupSnapLabelManager;
-(void)setMiddleVC:(AVCameraViewController*<SwipeView>)arg1 ;
-(void)initPullToSearchTransitionController;
-(void)initProfileSwipeTransitionCoordinator;
-(void)setLeftVC:(UIViewController*<SCFeedPage>)arg1 ;
-(void)setRightVC:(UIViewController*<SCStoriesPage>)arg1 ;
-(void)addVCToView:(id)arg1 withFrame:(CGRect)arg2 ;
-(CGRect)farLeftVCFrame;
-(void)addFarLeftVCToView;
-(void)updateGradientBackgroundViewFromRange:(NSRange)arg1 toRange:(NSRange)arg2 isTransitioning:(BOOL)arg3 ;
-(void)prepareToMoveCardsFromRange:(NSRange)arg1 toRange:(NSRange)arg2 ;
-(void)animateToFrame:(CGRect)arg1 withVelocity:(CGPoint)arg2 allowUserInteraction:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)prepareToAnimateFromRange:(NSRange)arg1 toRange:(NSRange)arg2 withFrame:(CGRect)arg3 ;
-(void)prepareToMoveVisibleViewControllerRangeFromRange:(NSRange)arg1 toRange:(NSRange)arg2 ;
-(void)updateTabBarWithBounds:(CGRect)arg1 layout:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)leftViewControllerDidMoveFromRange:(NSRange)arg1 toRange:(NSRange)arg2 withOffset:(double)arg3 ;
-(void)updateCardDimAlphaForRange:(NSRange)arg1 ;
-(void)visibleViewControllerRangeDidChangeFromRange:(NSRange)arg1 toRange:(NSRange)arg2 ;
-(BOOL)_shouldPreventScrollingToChatForScrollView:(id)arg1 ;
-(CGPoint)scrollViewContentOffset;
-(void)handleNewScrollViewContentOffset:(CGPoint)arg1 ;
-(void)viewDidFullyAppearForVisibleVC;
-(void)viewDidFullyDisappearForVisibleVC;
-(void)attemptToPanFeedCellIntoChat;
-(void)setAnimatingScroll:(BOOL)arg1 ;
-(void)handleInAppNotificationPressed:(id)arg1 ;
-(UIViewController*<SwipeView>)partiallyVisibleVC;
-(void)setTabBarItemAlphaExcludingCameraItem:(double)arg1 animated:(BOOL)arg2 ;
-(void)addVCToScrollViewIfNecessary:(id)arg1 ;
-(BOOL)viewDidScroll;
-(BOOL)modalIsPresentAndNotBeingPresented;
-(id)_visibleViewControllerExcludeDismissing;
-(void)_handleSearchDeepLinkWithInfo:(id)arg1 ;
-(void)viewWillSwipeOutForVisibleVC:(BOOL)arg1 ;
-(BOOL)searchLongPressAnimate;
-(void)setSearchLongPressAnimate:(BOOL)arg1 ;
-(void)_animateSearchTextAnimation;
-(void)stopSearchTextAnimation;
-(void)_setSearchBarAndBitmojiAlpha:(double)arg1 ;
-(void)setHovaTabBarHidden:(BOOL)arg1 ;
-(void)presentFarLeftVCAnimated:(BOOL)arg1 ;
-(void)_setChatUsername:(id)arg1 triggeredByNotification:(BOOL)arg2 chatPageSource:(long long)arg3 deepLinkURL:(id)arg4 navigationAction:(long long)arg5 ;
-(id)feedToChatTapDetectionView;
-(void)setReplyingToStoryWithChat:(BOOL)arg1 ;
-(void)setDidReplyToStory:(BOOL)arg1 ;
-(BOOL)didReplyToStory;
-(void)startRatingInAppPrompt;
-(void)_dismissPreviewIfPresentedWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isCoveredByOtherVC;
-(void)unlockAllScroll;
-(void)handleAppNotificationReceived:(id)arg1 ;
-(BOOL)isPresentingNonCameraVC;
-(void)handleOpenURLToAddFriend:(id)arg1 ;
-(void)setChatFromNotification:(id)arg1 triggeredByNotification:(BOOL)arg2 ;
-(BOOL)isVisibleVCOnMainAxis;
-(BOOL)_presentAddFriendsTab;
-(void)presentOperaForMomentStoryForNotification:(id)arg1 ;
-(void)handleInAppNotificationDismissed:(id)arg1 ;
-(BOOL)modalIsPresentAndNotBeingDismissed;
-(void)_showCheetahOnboardingStoryTooltipIfPossible;
-(void)_detectRetainCyclesWhenCameraViewDidFullyAppear:(id)arg1 ;
-(void)_hideCheetahOnboardingStoryTooltipIfExists;
-(CGRect)getNewTabBarFrame;
-(void)attachFeedToScrollView:(BOOL)arg1 ;
-(void)attachStoriesToScrollView:(BOOL)arg1 ;
-(void)attachBarsToViewController:(id)arg1 ;
-(void)attachBarsToDefaultParentViewsIfNeeded;
-(id)_buildProfileViewController;
-(void)tabBarView:(id)arg1 didTapItemWithType:(long long)arg2 ;
-(void)tabBarView:(id)arg1 didLongPressItemWithType:(long long)arg2 ;
-(NSRange)visibleRangeForTabBarView:(id)arg1 ;
-(CGRect)tabBarView:(id)arg1 frameForItemWithType:(long long)arg2 inView:(id)arg3 ;
-(double)tabBarView:(id)arg1 verticalVisibilityForItemType:(long long)arg2 ;
-(double)tabBarView:(id)arg1 visibilityForItemViewWithItemType:(long long)arg2 ;
-(double)tabBarViewVerticalClippingHeight:(id)arg1 ;
-(BOOL)tabBarView:(id)arg1 shouldVerticallyClipItemOfType:(long long)arg2 ;
-(BOOL)tabBarViewIsTransitioningToPresentedController:(id)arg1 ;
-(double)tabBarViewVisibilityPercentForPresentedController:(id)arg1 ;
-(BOOL)hovaOverOverscrollControllerOverscrollDidChange:(id)arg1 shouldOverscrollForViewController:(id)arg2 ;
-(id)navigationViewForScrollViewOverscrollController:(id)arg1 ;
-(BOOL)searchTransitionControllerCanPresentSearch:(id)arg1 ;
-(void)searchTransitionControllerWillPresentSearch:(id)arg1 ;
-(void)searchTransitionControllerWillDismissSearch:(id)arg1 ;
-(void)dismissSearchToMainCamera:(id)arg1 topViewController:(id)arg2 ;
-(id)fastPaging:(id)arg1 viewForPageAtIndex:(long long)arg2 ;
-(void)showStoriesPlaylistButton;
-(void)hideStoriesPlaylistButton;
-(void)cancelPageScrollGestures;
-(void)didBeginWatchingMedia;
-(void)didEndWatchingMedia;
-(id)mediaContainerView;
-(double)minimumTabBarOriginX;
-(double)maximumTabBarOriginX;
-(void)handleQuickAction:(id)arg1 fromBackground:(BOOL)arg2 ;
-(id)galleryVC;
-(void)goFromViewController:(id)arg1 direction:(long long)arg2 animated:(BOOL)arg3 ;
-(void)handleApplicationDidEnterBackground;
-(void)handleApplicationWillEnterForegroundFromNotification:(id)arg1 ;
-(void)handleOpenURL:(id)arg1 ;
-(void)setFarLeftVC:(SCChatMainViewController *)arg1 ;
-(void)setHovaStatusBarController:(SCHovaStatusBarController *)arg1 ;
-(void)setHovaCameraTabHidden:(BOOL)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)containerView;
-(SCHovaNavigationBar *)navigationBar;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setScrollView:(SCMainScrollView *)arg1 ;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(void)setNavigationBar:(SCHovaNavigationBar *)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewDidLoad;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(SCMainScrollView *)scrollView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(SCUserSession *)userSession;
-(void)scrollViewDidEndScrolling:(id)arg1 ;
-(BOOL)isObserving;
-(id)currentViewController;
-(void)setIsObserving:(BOOL)arg1 ;
@end

