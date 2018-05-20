/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Snapchat/SCSearchQueryResultControllerDelegate.h>
#import <Snapchat/SCSearchScrollToEndDetectorDelegate.h>
#import <Snapchat/SCCheetahStoriesActionHandlerDelegate.h>
#import <Snapchat/SCCheetahStoriesTabActionHandler.h>
#import <Snapchat/SCSearchEventListener.h>
#import <Snapchat/SCCheetahStoriesDataStoreDelegate.h>
#import <Snapchat/SCCheetahStoriesAccessoryLoadingViewDelegate.h>
#import <Snapchat/SCCheetahDebugViewControllerDelegate.h>
#import <Snapchat/SCTimeProfilable.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Snapchat/SCShakeToReportDelegate.h>
#import <Snapchat/SCSearchUpdateListener.h>
#import <Snapchat/SwipeView.h>
#import <Snapchat/SCDeepLinkableView.h>
#import <Snapchat/SCSearchCardContainerContentViewControlling.h>
#import <Snapchat/SCSearchContentScrollViewProviding.h>
#import <Snapchat/SCStoriesContentViewControlling.h>

@protocol SCHovaOverscrollDelegate, UIScrollViewDelegate, SCStoriesContentViewControllingDelegate, NavigationDelegate, SCReplyDelegate, SCStartChatDelegate, SendSnapNavigationControllerDelegate;
@class SCCheetahStoriesView, SCUserSession, SCSearchQueryResultController, SCCheetahStoriesQueryCoordinator, SCSearchEventListenerAnnouncer, SCCheetahStoriesActionHandler, SCCheetahStoriesTabActionHandler, SCCheetahStoriesDeeplinkHandler, SCSearchFriendProvider, SCSearchScrollToEndDetector, NSArray, NSDate, SCSearchNetworkLogger, UICollectionViewTransitionLayout, SCDiscoverFeedFriendStoriesReplayManager, SCFriendStoriesPrefetcher, SCSearchCardContainerContentViewControllerContext, UIViewController, SCHovaTabBarView, NSString, UIView, UIScrollView;

@interface SCCheetahStoriesViewController : UIViewController <UICollectionViewDelegate, SCSearchQueryResultControllerDelegate, SCSearchScrollToEndDetectorDelegate, SCCheetahStoriesActionHandlerDelegate, SCCheetahStoriesTabActionHandler, SCSearchEventListener, SCCheetahStoriesDataStoreDelegate, SCCheetahStoriesAccessoryLoadingViewDelegate, SCCheetahDebugViewControllerDelegate, SCTimeProfilable, UIGestureRecognizerDelegate, SCShakeToReportDelegate, SCSearchUpdateListener, SwipeView, SCDeepLinkableView, SCSearchCardContainerContentViewControlling, SCSearchContentScrollViewProviding, SCStoriesContentViewControlling> {

	SCCheetahStoriesView* _cheetahStoriesView;
	SCUserSession* _userSession;
	SCSearchQueryResultController* _queryResultController;
	SCCheetahStoriesQueryCoordinator* _queryCoordinator;
	SCSearchEventListenerAnnouncer* _eventAnnouncer;
	SCCheetahStoriesActionHandler* _actionHandler;
	SCCheetahStoriesTabActionHandler* _tabActionHandler;
	SCCheetahStoriesDeeplinkHandler* _deeplinkHandler;
	SCSearchFriendProvider* _friendProvider;
	SCSearchScrollToEndDetector* _scrollToBottomDetector;
	BOOL _shouldReloadFreshData;
	BOOL _userInteractionInitiatedReloadInProgress;
	BOOL _isVisible;
	BOOL _isPresenting;
	NSArray* _displayedTabs;
	NSDate* _showedMoreViewTimestamp;
	/*^block*/id _triggerReorderAfterThreshold;
	/*^block*/id _blockUpdateAfterDataFetchThreshold;
	SCSearchNetworkLogger* _networkLogger;
	double _yOffsetBeforeScrolling;
	CGPoint _lastScrollOffset;
	double _lastScrollOffsetCapturedTime;
	UICollectionViewTransitionLayout* _transitionLayout;
	double _fromSelectedIndex;
	BOOL _isUpdatingLayout;
	long long _transitionDirection;
	long long _pendingLayoutUpdateState;
	unsigned long long _pendingFromTabIndexForTransition;
	unsigned long long _pendingToTabIndexForTransition;
	NSArray* _layoutForTabs;
	BOOL _isSubscribedStateDirty;
	BOOL _isFirstViewDidFullyAppear;
	SCDiscoverFeedFriendStoriesReplayManager* _friendStoriesReplayManager;
	SCFriendStoriesPrefetcher* _friendStoriesPrefetcher;
	BOOL _shouldSendQueryForNotification;
	SCSearchCardContainerContentViewControllerContext* _cardContainerContext;
	id<SCHovaOverscrollDelegate> _hovaOverscrollDelegate;
	id<UIScrollViewDelegate> _scrollingDelegate;
	id<SCStoriesContentViewControllingDelegate> _storiesContentViewControllerDelegate;
	id<NavigationDelegate> _navigationDelegate;
	id<SCReplyDelegate> _replyDelegate;
	id<SCStartChatDelegate> _startChatDelegate;
	id<SendSnapNavigationControllerDelegate> _sendSnapNavigationControllerDelegate;
	UIViewController* _parentController;

}

@property (nonatomic,readonly) SCHovaTabBarView * hovaTabBarView; 
@property (assign,nonatomic) BOOL shouldSendQueryForNotification;                                                                  //@synthesize shouldSendQueryForNotification=_shouldSendQueryForNotification - In the implementation block
@property (assign,nonatomic,__weak) id<NavigationDelegate> navigationDelegate;                                                     //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCReplyDelegate> replyDelegate;                                                             //@synthesize replyDelegate=_replyDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCHovaOverscrollDelegate> hovaOverscrollDelegate;                                           //@synthesize hovaOverscrollDelegate=_hovaOverscrollDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCStartChatDelegate> startChatDelegate;                                                     //@synthesize startChatDelegate=_startChatDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SendSnapNavigationControllerDelegate> sendSnapNavigationControllerDelegate;                 //@synthesize sendSnapNavigationControllerDelegate=_sendSnapNavigationControllerDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parentController;                                                           //@synthesize parentController=_parentController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * hovaAccessoryView; 
@property (nonatomic,retain) SCSearchCardContainerContentViewControllerContext * cardContainerContext;                             //@synthesize cardContainerContext=_cardContainerContext - In the implementation block
@property (nonatomic,readonly) UIScrollView * contentScrollView; 
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> scrollingDelegate;                                                    //@synthesize scrollingDelegate=_scrollingDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCStoriesContentViewControllingDelegate> storiesContentViewControllerDelegate;              //@synthesize storiesContentViewControllerDelegate=_storiesContentViewControllerDelegate - In the implementation block
@property (nonatomic,readonly) float tabBarPercentDarkMode; 
@property (nonatomic,readonly) BOOL isViewingStory; 
+(id)announcerIdentifier;
+(int)context;
-(void)statusBarTapped;
-(void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3 ;
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(void)scrollToEndDetector:(id)arg1 scrollViewWillReachEnd:(id)arg2 ;
-(unsigned long long)preferredScreenEdgesDeferringSystemGestures;
-(void)searchQueryResultController:(id)arg1 willUpdateResultForQuery:(id)arg2 fromQuery:(id)arg3 ;
-(void)searchQueryResultControllerDidUpdateQueryResult:(id)arg1 ;
-(id)presentingViewControllerForSearchQueryResultController:(id)arg1 ;
-(BOOL)searchQueryResultControllerShouldReloadFreshResult:(id)arg1 ;
-(void)searchQueryResultControllerDidSkipUpdateQueryResult:(id)arg1 ;
-(void)viewDidFullyAppear;
-(void)viewDidPartiallyDisappear;
-(void)viewDidFullyDisappear;
-(void)resumePlayback;
-(BOOL)shouldPopToRootViewController;
-(void)didTap:(id)arg1 ;
-(void)setSendSnapNavigationControllerDelegate:(id<SendSnapNavigationControllerDelegate>)arg1 ;
-(void)setStartChatDelegate:(id<SCStartChatDelegate>)arg1 ;
-(id<SCStartChatDelegate>)startChatDelegate;
-(id<SendSnapNavigationControllerDelegate>)sendSnapNavigationControllerDelegate;
-(void)viewDidSwipeIn;
-(void)viewDidSwipeOut;
-(void)tabBarTriggeredWithAction:(long long)arg1 ;
-(id<SCHovaOverscrollDelegate>)hovaOverscrollDelegate;
-(void)setHovaOverscrollDelegate:(id<SCHovaOverscrollDelegate>)arg1 ;
-(double)timeBeforeReturningToCamera;
-(id<SCReplyDelegate>)replyDelegate;
-(void)setReplyDelegate:(id<SCReplyDelegate>)arg1 ;
-(id<UIScrollViewDelegate>)scrollingDelegate;
-(void)setScrollingDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(void)_setUpdatingLayout:(BOOL)arg1 ;
-(SCSearchCardContainerContentViewControllerContext *)cardContainerContext;
-(void)setCardContainerContext:(SCSearchCardContainerContentViewControllerContext *)arg1 ;
-(void)refreshByPullToRefresh;
-(void)cardContainerTabWillStartInteractiveChangeFromSelectedIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)cardContainerTabDidFinishInteractiveChange;
-(void)cardContainerTabDidCancelInteractiveChange;
-(void)cardContainerTabDidUpdateInteractiveChangeProgress:(double)arg1 ;
-(void)cardContainerTabDidSwitchFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 gesture:(long long)arg3 ;
-(BOOL)shouldEnableTabSwitchGesture;
-(long long)tabBarInterfaceStyle;
-(id)tabBarTintColor;
-(id)_tabViewModelForIndex:(unsigned long long)arg1 ;
-(unsigned long long)currentActiveTabForCheetahStoriesActionHandler:(id)arg1 ;
-(void)cheetahStoriesActionHandler:(id)arg1 didBeginToDismissStoryWithIndexPath:(id)arg2 ;
-(void)cheetahStoriesActionHandlerDidDismissStory:(id)arg1 ;
-(void)cheetahStoriesActionHandlerrDidTearDownStory:(id)arg1 ;
-(void)cheetahStoriesActionHandler:(id)arg1 didStartToDisplayStoryWithIndexPath:(id)arg2 ;
-(void)cheetahStoriesActionHandler:(id)arg1 willHideStory:(id)arg2 ;
-(void)cheetahStoriesActionHandler:(id)arg1 didChangeSubscribeState:(BOOL)arg2 forStory:(id)arg3 ;
-(void)cheetahDebugViewControllerNeedsToDismiss:(id)arg1 animated:(BOOL)arg2 ;
-(void)cheetahStoriesTabActionHandler:(id)arg1 switchToTabIfPossible:(unsigned long long)arg2 ;
-(BOOL)cheetahStoriesDataStoreShouldSetFreshStories:(id)arg1 forFeedType:(unsigned long long)arg2 ;
-(id<SCStoriesContentViewControllingDelegate>)storiesContentViewControllerDelegate;
-(void)setStoriesContentViewControllerDelegate:(id<SCStoriesContentViewControllingDelegate>)arg1 ;
-(float)tabBarPercentDarkMode;
-(BOOL)isViewingStory;
-(id)navigationBarButtonItems;
-(void)viewDidAppearWithURL:(id)arg1 additionalInfo:(id)arg2 ;
-(void)handleNotificationPressed:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 replyDelegate:(id)arg3 startChatDelegate:(id)arg4 sendSnapNavigationControllerDelegate:(id)arg5 ;
-(void)didSwipeUpOnLoadingView:(id)arg1 gestureRecognizer:(id)arg2 ;
-(void)didSelectLoadingView:(id)arg1 ;
-(id)_eventsConfiguration;
-(void)_fetchStoriesOnNotification;
-(void)_fetchFreshStoriesIfNeeded;
-(void)_clearHovaStoryBadge;
-(void)_resumeAllVideoPlaybackIfNeccesary;
-(void)_updateImpressionItems;
-(void)_prefetchFirstSnapMediaForVisibleCheetahStoriesIfNeccesary;
-(void)_resetCarouselSectionsOffset;
-(void)_resetMoreStoriesWithAnimation:(BOOL)arg1 ;
-(void)_setNoReOrderThresholdTimer;
-(void)_pauseAllVideoPlaybackIfNeccesary;
-(void)_updateTabsIfNeeded;
-(void)_updateLayouts;
-(void)_fetchStoriesForAllTabsWithQuerySource:(id)arg1 ;
-(void)_clearDataFetchThresholdTimer;
-(void)_updatePendingLayoutIfPossible;
-(void)_refreshTabByForceRefresh;
-(void)_releasePendingStories;
-(void)_fetchHeadStories;
-(void)_enableLoadFreshContentIfNeeded;
-(void)_didTapStoriesRankingDebugButton;
-(void)_twerk:(id)arg1 ;
-(void)_handleScrollViewDidScrollWithScrollView:(id)arg1 ;
-(void)_disableLoadFreshContentIfNeeded;
-(void)_hideMoreStoriesButtonIfNeededWithAnimation:(BOOL)arg1 ;
-(void)_showMoreStoriesButtonIfScrolledToTop:(id)arg1 animated:(BOOL)arg2 ;
-(void)_scrollToTopWithAnimation:(BOOL)arg1 ;
-(void)_fetchTailStories;
-(void)_stopPullToRefresh;
-(void)_didFinishLoading;
-(void)_scrollToTopWithAnimationIfNeededWithQuerySource:(id)arg1 ;
-(void)_showMoreStoriesButtonWithAnimation:(BOOL)arg1 ;
-(void)_updateCheetahStoriesCollection;
-(void)_announceEvent:(id)arg1 extraData:(id)arg2 ;
-(void)_fetchHorizontalSubscriptionTailStories;
-(void)_updateForMoreStoriesScreentimeMax;
-(void)_setDataFetchThresholdTimer;
-(SCHovaTabBarView *)hovaTabBarView;
-(void)_performUpdatesForNoReOrderThresholdTimer;
-(void)_handleDidStartToDisplayStoryWithIndexPath:(id)arg1 ;
-(void)_handleBeginToDismissStoryWithIndexPath:(id)arg1 actionHandler:(id)arg2 ;
-(void)_scrollToItemAtIndexPath:(id)arg1 ;
-(void)_UNHACKME_handleBeginToDismissStoryWithIndexPath:(id)arg1 actionHandler:(id)arg2 ;
-(void)_startPageView;
-(void)_updatePreferredScreenEdgesDeferringSystemGestures;
-(id)_sectionTypeForIndexPath:(id)arg1 ;
-(id)_impressionViewItemForViewModel:(id)arg1 frame:(CGRect)arg2 date:(id)arg3 itemPos:(long long)arg4 hasVideoThumbnail:(BOOL)arg5 tileAutoPlayed:(BOOL)arg6 sectionType:(id)arg7 ;
-(BOOL)_viewModelHasReplayOverlay:(id)arg1 ;
-(void)_updatePendingLayoutIfNeeded;
-(void)_scrollToStory:(id)arg1 ;
-(void)_UNHACKME_BARRACUDA_scrollToItemAtIndexPath:(id)arg1 ;
-(void)refreshStateDidChange:(long long)arg1 ;
-(BOOL)shouldSendQueryForNotification;
-(void)setShouldSendQueryForNotification:(BOOL)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(UIScrollView *)contentScrollView;
-(void)viewDidLoad;
-(BOOL)isLoading;
-(void)pausePlayback;
-(id<NavigationDelegate>)navigationDelegate;
-(void)setParentController:(UIViewController *)arg1 ;
-(UIViewController *)parentController;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)setNavigationDelegate:(id<NavigationDelegate>)arg1 ;
@end

