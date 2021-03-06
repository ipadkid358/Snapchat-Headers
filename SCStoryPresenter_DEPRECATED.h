/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCContextOperaViewControllerDelegate.h>
#import <Snapchat/SCOperaEventListener.h>
#import <Snapchat/SCTimeProfilable.h>
#import <Snapchat/SCStoriesOperaDataSourceDelegate.h>
#import <Snapchat/SCStoriesViewingHandler.h>

@protocol SCReplyDelegate, NavigationDelegate, SCStoryPresenterDelegate, SCContextSessionConfigurationDelegate;
@class UIViewController, SCUserSession, Manager, SCOperaEventListenerAnnouncer, SCStoriesViewingSession, SCOperaConfiguration, NSString, SCOperaViewController, SCStoriesOperaDataSource, FriendStories, SCOperaPerformanceTrackingPlugin, SCDeepLinkURL, SCStoriesOperaIconProvider, SCViewControllerTransitionAnimator, UIView, NSDictionary, SCContextSession;

@interface SCStoryPresenter_DEPRECATED : NSObject <SCContextOperaViewControllerDelegate, SCOperaEventListener, SCTimeProfilable, SCStoriesOperaDataSourceDelegate, SCStoriesViewingHandler> {

	UIViewController* _presentingViewController;
	id<SCReplyDelegate> _replyDelegate;
	SCUserSession* _userSession;
	Manager* _manager;
	SCOperaEventListenerAnnouncer* _eventAnnouncer;
	SCStoriesViewingSession* _storiesViewingSession;
	unsigned long long _viewLocationPosition;
	SCOperaConfiguration* _configuration;
	NSString* _collectionId;
	long long _collectionPos;
	long long _collectionType;
	BOOL _isCircleTransition;
	SCOperaViewController* _operaVC;
	SCStoriesOperaDataSource* _storiesDataSource;
	FriendStories* _friendStories;
	FriendStories* _previousFriendStories;
	unsigned long long _viewingActionContext;
	SCOperaPerformanceTrackingPlugin* _performanceTrackingPlugin;
	BOOL _unarchiveBeforePresenting;
	BOOL _fallBackOnLoadingView;
	NSString* _sharedIdToDisplay;
	SCDeepLinkURL* _deepLinkURL;
	/*^block*/id _validationSuccessBlock;
	BOOL _validatingLiveStoriesToPresent;
	id<NavigationDelegate> _navigationDelegate;
	BOOL _isViewingLongform;
	SCStoriesOperaIconProvider* _viewersListIconProvider;
	BOOL _isInStoryPlaylistMode;
	BOOL _didLeaveAppFromPlayer;
	id<SCStoryPresenterDelegate> _delegate;
	SCViewControllerTransitionAnimator* _tileTransitionAnimator;
	UIView* _transitionBaseView;
	long long _playSource;
	long long _viewLocation;
	NSDictionary* _deeplinkManagerConfig;
	id<SCContextSessionConfigurationDelegate> _sessionConfigurationDelegate;

}

@property (nonatomic,retain) SCContextSession * contextSession; 
@property (assign,nonatomic,__weak) id<SCContextSessionConfigurationDelegate> sessionConfigurationDelegate;              //@synthesize sessionConfigurationDelegate=_sessionConfigurationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCStoryPresenterDelegate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SCViewControllerTransitionAnimator * tileTransitionAnimator;                              //@synthesize tileTransitionAnimator=_tileTransitionAnimator - In the implementation block
@property (nonatomic,retain) UIView * transitionBaseView;                                                                //@synthesize transitionBaseView=_transitionBaseView - In the implementation block
@property (nonatomic,readonly) BOOL isInStoryPlaylistMode;                                                               //@synthesize isInStoryPlaylistMode=_isInStoryPlaylistMode - In the implementation block
@property (nonatomic,readonly) long long playSource;                                                                     //@synthesize playSource=_playSource - In the implementation block
@property (nonatomic,readonly) long long viewLocation;                                                                   //@synthesize viewLocation=_viewLocation - In the implementation block
@property (nonatomic,readonly) BOOL didLeaveAppFromPlayer;                                                               //@synthesize didLeaveAppFromPlayer=_didLeaveAppFromPlayer - In the implementation block
@property (nonatomic,retain) NSDictionary * deeplinkManagerConfig;                                                       //@synthesize deeplinkManagerConfig=_deeplinkManagerConfig - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)context;
-(long long)viewLocation;
-(long long)playSource;
-(void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3 ;
-(id)registeredEventsForOperaSession;
-(id)lastInteraction;
-(BOOL)isViewingLongform;
-(BOOL)isPresentingStory;
-(void)viewWillEnterForeground:(id)arg1 ;
-(void)contextViewControllerDidPressSend:(id)arg1 ;
-(void)contextViewControllerWillLeaveApp:(id)arg1 ;
-(void)contextViewController:(id)arg1 didLeaveApp:(BOOL)arg2 ;
-(void)contextViewControllerBeganMediaPresentation:(id)arg1 ;
-(void)contextViewControllerFinishedMediaPresentation:(id)arg1 ;
-(void)contextViewControllerWillDismiss:(id)arg1 ;
-(void)contextViewControllerDidDismiss:(id)arg1 ;
-(void)contextViewControllerWillPresent:(id)arg1 ;
-(void)contextViewControllerDidPresent:(id)arg1 ;
-(void)contextViewControllerWillEnterFullScreenChat:(id)arg1 ;
-(void)contextViewController:(id)arg1 isMovingFullScreenChatControls:(double)arg2 ;
-(void)cardWasTapped;
-(void)contextViewControllerPrepareForPresentation:(id)arg1 ;
-(void)contextViewControllerWillResignActive:(id)arg1 ;
-(void)contextViewControllerDidBecomeActive:(id)arg1 ;
-(void)contextViewController:(id)arg1 didUpdateVisiblePercent:(double)arg2 ;
-(BOOL)didLeaveAppFromPlayer;
-(void)setSessionConfigurationDelegate:(id<SCContextSessionConfigurationDelegate>)arg1 ;
-(id)initWithPresentingViewController:(id)arg1 userSession:(id)arg2 replyDelegate:(id)arg3 navigationDelegate:(id)arg4 ;
-(void)presentFriendStories:(id)arg1 viewingType:(long long)arg2 firstStoryToDisplay:(id)arg3 unarchiveBeforePresenting:(BOOL)arg4 fallBackOnLoadingView:(BOOL)arg5 viewingActionContext:(unsigned long long)arg6 viewLocation:(long long)arg7 viewLocationPosition:(unsigned long long)arg8 collectionId:(id)arg9 collectionPos:(long long)arg10 collectionType:(long long)arg11 isCircleTransition:(BOOL)arg12 transitionBaseView:(id)arg13 performanceTrackingPlugin:(id)arg14 ;
-(void)addOperaEventListener:(id)arg1 events:(id)arg2 ;
-(void)stopStory;
-(void)presentStory:(id)arg1 viewingActionContext:(unsigned long long)arg2 viewLocation:(long long)arg3 viewLocationPosition:(unsigned long long)arg4 isCircleTransition:(BOOL)arg5 transitionBaseView:(id)arg6 showViewersTable:(BOOL)arg7 performanceTrackingPlugin:(id)arg8 ;
-(SCContextSession *)contextSession;
-(void)setContextSession:(SCContextSession *)arg1 ;
-(id<SCContextSessionConfigurationDelegate>)sessionConfigurationDelegate;
-(void)presentInitialFriendName:(id)arg1 friendNameList:(id)arg2 unarchiveBeforePresenting:(BOOL)arg3 fallBackOnLoadingView:(BOOL)arg4 viewingType:(long long)arg5 viewingActionContext:(unsigned long long)arg6 viewLocation:(long long)arg7 viewLocationPosition:(unsigned long long)arg8 isCircleTransition:(BOOL)arg9 transitionBaseView:(id)arg10 isInStoryPlaylistMode:(BOOL)arg11 friendNamesInRecentUpdate:(id)arg12 experimentManager:(id)arg13 performanceTrackingPlugin:(id)arg14 playSource:(long long)arg15 ;
-(void)dismissStory;
-(void)updateAnimationBaseView:(id)arg1 ;
-(BOOL)isInStoryPlaylistMode;
-(unsigned long long)totalViewedSnapsCount;
-(unsigned long long)totalViewedStoriesCount;
-(BOOL)isStoryOnscreen;
-(UIView *)transitionBaseView;
-(void)pauseStory;
-(void)resumeStory;
-(id)currentFriendStories;
-(void)setDeeplinkManagerConfig:(NSDictionary *)arg1 ;
-(id)initWithPresentingViewController:(id)arg1 userSession:(id)arg2 replyDelegate:(id)arg3 manager:(id)arg4 navigationDelegate:(id)arg5 ;
-(void)_bindToDummyViewModelWithFriendStory:(id)arg1 ;
-(void)_presentOperaVCAfterLoadFirstStoryMediaIfNecessary:(long long)arg1 isReplayMode:(BOOL)arg2 friendNamesInRecentUpdate:(id)arg3 ;
-(void)_cleanupOperaVC:(long long)arg1 ;
-(void)_presentOperaViewController:(long long)arg1 isReplayMode:(BOOL)arg2 friendNamesInRecentUpdate:(id)arg3 ;
-(void)validateLinkedLiveStoriesForDeepLinkURL:(id)arg1 baseView:(id)arg2 viewLocation:(long long)arg3 successBlock:(/*^block*/id)arg4 ;
-(void)fetchLiveStoryMetadata:(id)arg1 successBlock:(/*^block*/id)arg2 ;
-(void)didFetchLiveStoryMetadataWithSuccess:(BOOL)arg1 response:(id)arg2 username:(id)arg3 successBlock:(/*^block*/id)arg4 ;
-(void)_presentDummyLoadingOperaViewController;
-(id)extraPropertiesForStory:(id)arg1 ;
-(void)didStartPlayingFirstStoryInFriendStories:(id)arg1 ;
-(void)didFinishPlayingFriendStories:(id)arg1 firstStoryDisplayed:(id)arg2 ;
-(void)updatedFriendsList:(id)arg1 ;
-(id)currentPresentingStory;
-(SCViewControllerTransitionAnimator *)tileTransitionAnimator;
-(void)setTransitionBaseView:(UIView *)arg1 ;
-(NSDictionary *)deeplinkManagerConfig;
-(void)setDelegate:(id<SCStoryPresenterDelegate>)arg1 ;
-(void)dealloc;
-(id<SCStoryPresenterDelegate>)delegate;
@end

