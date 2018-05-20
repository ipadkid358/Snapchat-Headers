/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:52 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSingleFriendStoriesOperaDataSourceDelegate.h>
#import <Snapchat/SCStoriesAutoAdvanceDataSource.h>
#import <Snapchat/SCTimeProfilable.h>
#import <Snapchat/SCOperaSession.h>
#import <Snapchat/SCStoriesOperaPageProvider.h>
#import <Snapchat/SCOperaPlaylistDataSource.h>
#import <Snapchat/SCOperaPlaylistItemExtraPropertiesProvider.h>

@protocol SCOperaViewProvider, SCOperaLabelTextProvider, SCStoriesOperaDataSourceDelegate, SCOperaViewModelConnectionsCallbackController, SCOperaPlaylistItemController;
@class SCStoryUserProperties, NSString, Story, NSMutableDictionary, NSMutableOrderedSet, SCStoriesAutoAdvanceLoader, SCStoryLoader, NSMutableArray, SCOperaViewModel, SCOperaPerformanceTrackingPlugin, SCStoriesOperaIconProvider, SCUserSession, SCContextSession, SCStoriesOperaMediaManager, NSArray, SCSearchFriendProvider, SCOperaEventListenerAnnouncer;

@interface SCStoriesOperaDataSource : NSObject <SCSingleFriendStoriesOperaDataSourceDelegate, SCStoriesAutoAdvanceDataSource, SCTimeProfilable, SCOperaSession, SCStoriesOperaPageProvider, SCOperaPlaylistDataSource, SCOperaPlaylistItemExtraPropertiesProvider> {

	SCStoryUserProperties* _storyUserProperties;
	BOOL _isInStoryPlaylistMode;
	long long _viewLocation;
	NSString* _currentFriendName;
	Story* _currentStory;
	NSMutableDictionary* _userNameToFriendStories;
	NSMutableDictionary* _friendNameToDataSource;
	NSMutableOrderedSet* _viewedFriendNames;
	NSMutableDictionary* _injectedFriendNameToFriendStories;
	SCStoriesAutoAdvanceLoader* _autoAdvanceLoader;
	SCStoryLoader* _storyLoader;
	BOOL _shouldUpdateDataSourceWhenMediaStartsToPlay;
	BOOL _shouldLoadStoriesWhenMediaStartsToPlay;
	NSMutableArray* _fetchedLoadingBackgroundImageStories;
	NSString* _leftMostViewedFriendStoriesName;
	NSMutableDictionary* _usernameToDataSource;
	SCOperaViewModel* _dummyViewModel;
	Story* _singleMyStorySnap;
	SCOperaPerformanceTrackingPlugin* _performanceTrackingPlugin;
	BOOL _disableInfiniteSwipeBack;
	SCStoriesOperaIconProvider* _viewersListIconProvider;
	Story* _firstStoryToDisplay;
	long long _playMode;
	SCUserSession* _userSession;
	NSMutableDictionary* _friendStoriesSectionMap;
	id<SCOperaViewProvider> _chromeAvatarProvider;
	id<SCOperaLabelTextProvider> _groupChatTitleProvider;
	SCContextSession* _contextSession;
	BOOL _isInSingleStoryMode;
	BOOL _enableCriticalModeWhenLoading;
	BOOL _showViewersTable;
	id<SCStoriesOperaDataSourceDelegate> _delegate;
	SCStoriesOperaMediaManager* _storiesMediaManager;
	NSArray* _friendNameList;
	id<SCOperaViewModelConnectionsCallbackController> _viewModelConnectionsCallbackController;
	SCSearchFriendProvider* _friendProvider;
	id<SCOperaPlaylistItemController> _playlistItemController;
	long long _viewingType;
	SCOperaEventListenerAnnouncer* _eventAnnouncer;

}

@property (assign,nonatomic,__weak) id<SCStoriesOperaDataSourceDelegate> delegate;                                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SCStoriesOperaMediaManager * storiesMediaManager;                                                           //@synthesize storiesMediaManager=_storiesMediaManager - In the implementation block
@property (nonatomic,copy,readonly) NSArray * friendNameList;                                                                              //@synthesize friendNameList=_friendNameList - In the implementation block
@property (nonatomic,readonly) BOOL isInSingleStoryMode;                                                                                   //@synthesize isInSingleStoryMode=_isInSingleStoryMode - In the implementation block
@property (assign,nonatomic,__weak) id<SCOperaViewModelConnectionsCallbackController> viewModelConnectionsCallbackController;              //@synthesize viewModelConnectionsCallbackController=_viewModelConnectionsCallbackController - In the implementation block
@property (nonatomic,readonly) BOOL enableCriticalModeWhenLoading;                                                                         //@synthesize enableCriticalModeWhenLoading=_enableCriticalModeWhenLoading - In the implementation block
@property (nonatomic,retain) SCSearchFriendProvider * friendProvider;                                                                      //@synthesize friendProvider=_friendProvider - In the implementation block
@property (assign,nonatomic,__weak) id<SCOperaPlaylistItemController> playlistItemController;                                              //@synthesize playlistItemController=_playlistItemController - In the implementation block
@property (assign,nonatomic) BOOL showViewersTable;                                                                                        //@synthesize showViewersTable=_showViewersTable - In the implementation block
@property (assign,nonatomic) long long viewingType;                                                                                        //@synthesize viewingType=_viewingType - In the implementation block
@property (nonatomic,retain) SCOperaEventListenerAnnouncer * eventAnnouncer;                                                               //@synthesize eventAnnouncer=_eventAnnouncer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)context;
-(SCOperaEventListenerAnnouncer *)eventAnnouncer;
-(id)initWithUserSession:(id)arg1 ;
-(id)mediaManager;
-(void)setEventAnnouncer:(SCOperaEventListenerAnnouncer *)arg1 ;
-(void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3 ;
-(void)prepareMediaForItem:(id)arg1 waitForDownloading:(BOOL)arg2 startWaitingForDownloadCallback:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeMediaForItem:(id)arg1 ;
-(id)dataModelForItem:(id)arg1 ;
-(void)extraPropertiesForDataModel:(id)arg1 item:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)pagesPropertiesForDataModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)teardownDataModelForItem:(id)arg1 ;
-(void)resolvePlaylistItemGroup:(id)arg1 ;
-(void)unresolvePlaylistItemGroup:(id)arg1 ;
-(void)loadMediaForPlaylistItemGroup:(id)arg1 ;
-(id)dataModelForGroup:(id)arg1 ;
-(BOOL)canResolvePlaylistItemGroupDataModel:(id)arg1 ;
-(id)playlistItemGroupForDataModel:(id)arg1 ;
-(id)registeredEventsForOperaSession;
-(BOOL)needToPrepareMediaBeforeDisplay;
-(void)setPlaylistItemController:(id<SCOperaPlaylistItemController>)arg1 ;
-(void)requestCallbackWhenViewModelConnectionIsStable:(/*^block*/id)arg1 ;
-(id<SCOperaPlaylistItemController>)playlistItemController;
-(id)_friendStoriesForUsername:(id)arg1 ;
-(id)initWithViewersListIconProvider:(id)arg1 viewingType:(long long)arg2 showViewersTable:(BOOL)arg3 storyPlayMode:(long long)arg4 firstStoryToDisplay:(id)arg5 userSession:(id)arg6 viewLocation:(long long)arg7 friendStoriesSectionMap:(id)arg8 enableCriticalModeWhenLoading:(BOOL)arg9 contextSession:(id)arg10 ;
-(void)setFriendProvider:(SCSearchFriendProvider *)arg1 ;
-(BOOL)isInSingleStoryMode;
-(BOOL)enableCriticalModeWhenLoading;
-(void)updateFriendsList:(id)arg1 ;
-(unsigned long long)friendsPlayListCount;
-(long long)viewingType;
-(void)injectStory:(id)arg1 afterStory:(id)arg2 ;
-(void)injectFriendStories:(id)arg1 ;
-(void)removeInjectedFriendStories:(id)arg1 ;
-(unsigned long long)indexOfFriendStoriesInPlaylist:(id)arg1 ;
-(void)updatePageForStory:(id)arg1 ;
-(id)firstStoryToDisplay;
-(unsigned long long)indexOfStoryRelativeToInitialStory:(id)arg1 ;
-(void)didStartToPlayStory:(id)arg1 ;
-(void)skipStory:(id)arg1 ;
-(BOOL)isLastStoryInFriendStories:(id)arg1 ;
-(BOOL)isLastFriendStoriesToDisplay:(id)arg1 ;
-(id)friendStoriesAtIndexInPlaylist:(unsigned long long)arg1 ;
-(unsigned long long)unviewedStoryCount;
-(id)rootViewModel;
-(SCSearchFriendProvider *)friendProvider;
-(id)viewModelForStory:(id)arg1 ;
-(id<SCOperaViewModelConnectionsCallbackController>)viewModelConnectionsCallbackController;
-(void)setViewModelConnectionsCallbackController:(id<SCOperaViewModelConnectionsCallbackController>)arg1 ;
-(void)setViewingType:(long long)arg1 ;
-(BOOL)isDisplayingDummyViewModel;
-(id)initWithInitialFriendName:(id)arg1 friendNameList:(id)arg2 isReplayMode:(BOOL)arg3 firstStoryToDisplay:(id)arg4 viewingType:(long long)arg5 storyUserProperties:(id)arg6 experimentManager:(id)arg7 isInStoryPlaylistMode:(BOOL)arg8 enableCriticalModeWhenLoading:(BOOL)arg9 storyLoader:(id)arg10 performanceTrackingPlugin:(id)arg11 userSession:(id)arg12 viewLocation:(long long)arg13 contextSession:(id)arg14 ;
-(id)initWithFriendStories:(id)arg1 viewingType:(long long)arg2 firstStoryToDisplay:(id)arg3 user:(id)arg4 isInStoryPlaylistMode:(BOOL)arg5 storyLoader:(id)arg6 performanceTrackingPlugin:(id)arg7 viewersListIconProvider:(id)arg8 userSession:(id)arg9 viewLocation:(long long)arg10 contextSession:(id)arg11 ;
-(id)initWithStory:(id)arg1 showViewersTable:(BOOL)arg2 storyUserProperties:(id)arg3 isInStoryPlaylistMode:(BOOL)arg4 storyLoader:(id)arg5 performanceTrackingPlugin:(id)arg6 viewersListIconProvider:(id)arg7 userSession:(id)arg8 viewLocation:(long long)arg9 ;
-(void)prepareToViewStory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)bindDummyViewModelToFriendStories:(id)arg1 ;
-(void)didStartToViewStory:(id)arg1 lastInteraction:(id)arg2 ;
-(void)prepareToViewStoryWhileOperaPresented:(id)arg1 ;
-(void)cleanupMediaForStory:(id)arg1 context:(id)arg2 ;
-(void)setDummyLoadingViewModelLoading;
-(void)setDummyLoadingViewModelRetriableError;
-(void)skipStory:(id)arg1 synchronously:(BOOL)arg2 ;
-(void)didUpdateFriendStoriesDataSource;
-(void)removeSingleFriendStoriesDataSource:(id)arg1 ;
-(void)prepareToViewStory:(id)arg1 ;
-(SCStoriesOperaMediaManager *)storiesMediaManager;
-(id)initWithFriendStories:(id)arg1 viewingType:(long long)arg2 firstStoryToDisplay:(id)arg3 mediaManager:(id)arg4 user:(id)arg5 isInStoryPlaylistMode:(BOOL)arg6 enableCriticalModeWhenLoading:(BOOL)arg7 storyLoader:(id)arg8 performanceTrackingPlugin:(id)arg9 viewersListIconProvider:(id)arg10 userSession:(id)arg11 viewLocation:(long long)arg12 ;
-(id)initWithMediaManager:(id)arg1 viewingType:(long long)arg2 storyUserProperties:(id)arg3 isInStoryPlaylistMode:(BOOL)arg4 enableCriticalModeWhenLoading:(BOOL)arg5 storyLoader:(id)arg6 performanceTrackingPlugin:(id)arg7 viewersListIconProvider:(id)arg8 userSession:(id)arg9 viewLocation:(long long)arg10 ;
-(id)_friendStoriesDataSourceForFriendStories:(id)arg1 story:(id)arg2 showViewersTable:(BOOL)arg3 ;
-(id)initWithStory:(id)arg1 showViewersTable:(BOOL)arg2 viewingType:(long long)arg3 mediaManager:(id)arg4 storyUserProperties:(id)arg5 isInStoryPlaylistMode:(BOOL)arg6 storyLoader:(id)arg7 performanceTrackingPlugin:(id)arg8 viewersListIconProvider:(id)arg9 userSession:(id)arg10 viewLocation:(long long)arg11 ;
-(id)initWithInitialFriendName:(id)arg1 friendNameList:(id)arg2 isReplayMode:(BOOL)arg3 firstStoryToDisplay:(id)arg4 viewingType:(long long)arg5 mediaManager:(id)arg6 storyUserProperties:(id)arg7 experimentManager:(id)arg8 isInStoryPlaylistMode:(BOOL)arg9 enableCriticalModeWhenLoading:(BOOL)arg10 storyLoader:(id)arg11 performanceTrackingPlugin:(id)arg12 viewersListIconProvider:(id)arg13 userSession:(id)arg14 viewLocation:(long long)arg15 ;
-(void)_setFriendsPlayList:(id)arg1 currentFriendName:(id)arg2 ;
-(void)_updateSingleFriendStoriesDataSources;
-(void)_updateFriendsListWhenOperaPlaylistEnabled:(id)arg1 ;
-(long long)_leftMostFriendStoriesToBuild;
-(long long)_rightMostFriendStoriesToBuild;
-(id)dataSourceForFriendStoriesAtIndex:(unsigned long long)arg1 ;
-(void)_updateConnectionsForPreviousFriendDataSource:(id)arg1 currentFriendDataSource:(id)arg2 ;
-(long long)_normalizeIndexInFriendNameList:(long long)arg1 ;
-(id)_friendStoriesDataSourceForFriendName:(id)arg1 ;
-(BOOL)_shouldKeepFriendStories:(id)arg1 forViewingType:(long long)arg2 ;
-(id)friendStoryForUserName:(id)arg1 viewingType:(long long)arg2 ;
-(long long)_currentViewLocationForUsername:(id)arg1 ;
-(id)_pageForStory:(id)arg1 ;
-(void)_removeLoadingLayerBackgroundImageForStory:(id)arg1 page:(id)arg2 ;
-(id)_friendNameForStory:(id)arg1 ;
-(void)_updateLoadingLayerImageWithCurrentStory:(id)arg1 nextViewModel:(id)arg2 loadedStoryProperties:(id)arg3 ;
-(id)_friendStoriesDataSourceForStory:(id)arg1 ;
-(void)_removeStoryLoadingLayerImageForFriendName:(id)arg1 ;
-(void)_loadStoriesIfNecessaryWhenStartToViewStory:(id)arg1 ;
-(void)_loadStoriesIfNecessaryWhenStartToPlayStory:(id)arg1 ;
-(void)setShowViewersTable:(BOOL)arg1 ;
-(id)_resolvePlaylistItemGroupDataModel:(id)arg1 ;
-(id)_playlistGroupContextForViewLocation:(long long)arg1 ;
-(id)_friendStoriesForDataModelUsername:(id)arg1 ;
-(id)_friendStoriesDataSourceForUsername:(id)arg1 ;
-(id)_storyForItem:(id)arg1 ;
-(void)_loadStoriesWithCurrentStory:(id)arg1 ;
-(void)_inLineLoadFriendStories:(id)arg1 startIndex:(unsigned long long)arg2 viewingType:(long long)arg3 viewLocation:(long long)arg4 ;
-(void)_loadFriendStoriesBasedOnPlaylist;
-(void)_loadSingleStoryForViewModel:(id)arg1 ;
-(id)_nameListFromOperaPlaylist;
-(id)storyBeingViewed;
-(NSArray *)friendNameList;
-(BOOL)showViewersTable;
-(void)setDelegate:(id<SCStoriesOperaDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(id<SCStoriesOperaDataSourceDelegate>)delegate;
@end
