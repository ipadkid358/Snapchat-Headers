/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:52 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCStreamingURLProviding.h>
#import <Snapchat/SCTimeProfilable.h>
#import <Snapchat/SCStoryMediaStateListener.h>
#import <Snapchat/SCStorySaveCompleteListener.h>
#import <Snapchat/SCOperaPlaylistItemMediaPreparationController.h>
#import <Snapchat/SCOperaPlaylistItemGroupResolver.h>

@protocol SCStreamingURLProviding, SCOperaViewProvider, SCOperaLabelTextProvider, SCSingleFriendStoriesOperaDataSourceDelegate, SCOperaPlaylistItemController;
@class FBKVOController, SCStoryLoader, NSMutableDictionary, Story, NSMutableArray, NSMutableSet, SCOperaPerformanceTrackingPlugin, SCStoriesOperaIconProvider, SCUserSession, SCContextSession, SCOperaViewModel, FriendStories, SCSearchFriendProvider, SCStoriesOperaMediaManager, NSString;

@interface SCSingleFriendStoriesOperaDataSource : NSObject <SCStreamingURLProviding, SCTimeProfilable, SCStoryMediaStateListener, SCStorySaveCompleteListener, SCOperaPlaylistItemMediaPreparationController, SCOperaPlaylistItemGroupResolver> {

	FBKVOController* _kvoController;
	SCStoryLoader* _storyLoader;
	NSMutableDictionary* _storyClientIDToViewModelMap;
	long long _viewingType;
	BOOL _isInStoryPlaylistMode;
	BOOL _showViewersTable;
	BOOL _hasPlayedStory;
	long long _viewLocation;
	Story* _firstStoryForcedToDisplay;
	NSMutableArray* _storiesViewedBeforeCurrentAutoAdvanceSession;
	NSMutableArray* _storiesViewedInCurrentAutoAdvanceSession;
	NSMutableArray* _storiesNotViewed;
	NSMutableArray* _storiesInDisplayOrder;
	NSMutableDictionary* _storyClientIdToInjectedStory;
	Story* _firstStoryToDisplay;
	Story* _currentViewingStory;
	Story* _lastStoryUserViewedInCurrentSession;
	BOOL _needToReloadStoriesDisplayOrderWhenPassCurrentStory;
	unsigned long long _indexOfInitialStory;
	NSMutableDictionary* _playlistItemIDToStoryMap;
	BOOL _isInOperaPlaylistMode;
	NSMutableDictionary* _cachedPageProperties;
	NSMutableSet* _storiesViewedBeforeCurrentSession;
	SCOperaPerformanceTrackingPlugin* _performanceTrackingPlugin;
	SCStoriesOperaIconProvider* _viewersListIconProvider;
	SCUserSession* _userSession;
	SCContextSession* _contextSession;
	id<SCStreamingURLProviding> _streamingURLProvider;
	/*^block*/id _firstStoryPreparationCompletion;
	id<SCOperaViewProvider> _chromeAvatarProvider;
	id<SCOperaLabelTextProvider> _groupChatTitleProvider;
	SCOperaViewModel* _lastViewModel;
	NSMutableArray* _generatedViewModels;
	id<SCSingleFriendStoriesOperaDataSourceDelegate> _delegate;
	FriendStories* _friendStories;
	SCSearchFriendProvider* _friendProvider;
	Story* _story;
	SCStoriesOperaMediaManager* _storiesMediaManager;
	id<SCOperaPlaylistItemController> _playlistItemController;

}

@property (nonatomic,readonly) SCOperaViewModel * rootViewModel; 
@property (nonatomic,readonly) SCOperaViewModel * lastViewModel;                                            //@synthesize lastViewModel=_lastViewModel - In the implementation block
@property (nonatomic,retain) NSMutableArray * generatedViewModels;                                          //@synthesize generatedViewModels=_generatedViewModels - In the implementation block
@property (assign,nonatomic,__weak) id<SCSingleFriendStoriesOperaDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FriendStories * friendStories;                                                 //@synthesize friendStories=_friendStories - In the implementation block
@property (assign,nonatomic,__weak) SCSearchFriendProvider * friendProvider;                                //@synthesize friendProvider=_friendProvider - In the implementation block
@property (nonatomic,retain) Story * story;                                                                 //@synthesize story=_story - In the implementation block
@property (nonatomic,retain) SCStoriesOperaMediaManager * storiesMediaManager;                              //@synthesize storiesMediaManager=_storiesMediaManager - In the implementation block
@property (assign,nonatomic,__weak) id<SCOperaPlaylistItemController> playlistItemController;               //@synthesize playlistItemController=_playlistItemController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
+(int)context;
-(Story *)story;
-(void)setStory:(Story *)arg1 ;
-(FriendStories *)friendStories;
-(id)streamingURLForRequestInfo:(id)arg1 ;
-(void)prepareMediaForItem:(id)arg1 waitForDownloading:(BOOL)arg2 startWaitingForDownloadCallback:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeMediaForItem:(id)arg1 ;
-(void)pagesPropertiesForDataModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolvePlaylistItemGroup:(id)arg1 ;
-(void)unresolvePlaylistItemGroup:(id)arg1 ;
-(void)loadMediaForPlaylistItemGroup:(id)arg1 ;
-(void)setPlaylistItemController:(id<SCOperaPlaylistItemController>)arg1 ;
-(id<SCOperaPlaylistItemController>)playlistItemController;
-(void)story:(id)arg1 didChangeMediaState:(long long)arg2 ;
-(void)story:(id)arg1 didChangeThumbnailMediaState:(long long)arg2 ;
-(void)setFriendProvider:(SCSearchFriendProvider *)arg1 ;
-(void)injectStory:(id)arg1 afterStory:(id)arg2 ;
-(unsigned long long)indexOfStoryRelativeToInitialStory:(id)arg1 ;
-(SCOperaViewModel *)lastViewModel;
-(SCOperaViewModel *)rootViewModel;
-(SCSearchFriendProvider *)friendProvider;
-(id)viewModelForStory:(id)arg1 ;
-(void)buildViewModels;
-(void)setFriendStories:(FriendStories *)arg1 ;
-(void)story:(id)arg1 saveSucceed:(BOOL)arg2 ;
-(id)initWithFriendStories:(id)arg1 viewingType:(long long)arg2 firstStoryToDisplay:(id)arg3 isInStoryPlaylistMode:(BOOL)arg4 kvoController:(id)arg5 performanceTrackingPlugin:(id)arg6 storyLoader:(id)arg7 isInOperaPlaylistMode:(BOOL)arg8 viewersListIconProvider:(id)arg9 userSession:(id)arg10 viewLocation:(long long)arg11 chromeAvatarProvider:(id)arg12 groupChatTitleProvider:(id)arg13 contextSession:(id)arg14 ;
-(id)initWithStory:(id)arg1 showViewersTable:(BOOL)arg2 viewingType:(long long)arg3 kvoController:(id)arg4 performanceTrackingPlugin:(id)arg5 storyLoader:(id)arg6 isInOperaPlaylistMode:(BOOL)arg7 viewersListIconProvider:(id)arg8 userSession:(id)arg9 viewLocation:(long long)arg10 chromeAvatarProvider:(id)arg11 groupChatTitleProvider:(id)arg12 ;
-(id)initWithKvoController:(id)arg1 chromeAvatarProvider:(id)arg2 groupChatTitleProvider:(id)arg3 ;
-(void)_friendStoriesArrayDidChange:(id)arg1 friendStories:(id)arg2 ;
-(void)_fetchRemainingStoriesForFriendStoriesIfNeeded:(id)arg1 ;
-(void)_updateStoriesViewingOrderBasedOnFriendStories;
-(id)storyForViewModel:(id)arg1 ;
-(id)pageForStory:(id)arg1 ;
-(void)_addNewPageProperty:(id)arg1 toPage:(id)arg2 ;
-(void)updateErrorPage:(id)arg1 error:(id)arg2 story:(id)arg3 ;
-(void)skipStory:(id)arg1 synchronously:(BOOL)arg2 ;
-(void)_removeStoryFromStoriesViewingOrder:(id)arg1 ;
-(id)_playlistItemIdForStory:(id)arg1 ;
-(void)_updateStoriesViewingOrderWithViewedStory:(id)arg1 ;
-(BOOL)_updateStoriesDisplayOrderIfNecessary;
-(void)_updateViewModelsBasedOnCurrentDisplayOrderWithViewModelConnectionUpdate:(BOOL)arg1 ;
-(void)_updateStoriesAndViewModels;
-(void)_removeViewModelForStory:(id)arg1 ;
-(void)_useStoriesDisplayOrderToInsertStory:(id)arg1 intoStoriesArray:(id)arg2 ;
-(void)_updateFirstStoryToDisplay;
-(id)_buildViewModelForStory:(id)arg1 ;
-(id)_pagesPropertiesForStory:(id)arg1 ;
-(id)viewModelWithNextViewModel:(id)arg1 ;
-(void)_setFirstStoryToDisplayToDefaultValue;
-(void)_announcePlaylistItemMediaStateChangeForStory:(id)arg1 ;
-(void)_updatePageForStory:(id)arg1 ;
-(void)_prepareMediaForStory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchFriendStoriesIfNecessary;
-(id)_firstStoryToDisplayForOperaPlaylist;
-(id)_storyToInsertAfterStoryWithClientId:(id)arg1 ;
-(void)_invokeFirstStoryPreparationCompleteIfNecessary:(id)arg1 ;
-(id)_nextStoryAfterStory:(id)arg1 ;
-(id)storyForItem:(id)arg1 ;
-(id)initWithFriendStories:(id)arg1 viewingType:(long long)arg2 firstStoryToDisplay:(id)arg3 isInStoryPlaylistMode:(BOOL)arg4 performanceTrackingPlugin:(id)arg5 storyLoader:(id)arg6 isInOperaPlaylistMode:(BOOL)arg7 viewersListIconProvider:(id)arg8 userSession:(id)arg9 viewLocation:(long long)arg10 chromeAvatarProvider:(id)arg11 groupChatTitleProvider:(id)arg12 contextSession:(id)arg13 ;
-(id)initWithStory:(id)arg1 showViewersTable:(BOOL)arg2 viewingType:(long long)arg3 performanceTrackingPlugin:(id)arg4 storyLoader:(id)arg5 isInOperaPlaylistMode:(BOOL)arg6 viewersListIconProvider:(id)arg7 userSession:(id)arg8 viewLocation:(long long)arg9 chromeAvatarProvider:(id)arg10 groupChatTitleProvider:(id)arg11 contextSession:(id)arg12 ;
-(void)startToPlayStory:(id)arg1 ;
-(void)bindRootViewModelToViewModel:(id)arg1 ;
-(void)didLoadStory:(id)arg1 isOperaPresented:(BOOL)arg2 loadedStoryProperties:(id)arg3 mediaNotLoaded:(BOOL)arg4 error:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)startToViewStory:(id)arg1 ;
-(void)endViewingFriendStoriesWithLastInteraction:(id)arg1 ;
-(void)teardownStoryForItem:(id)arg1 ;
-(void)extraPropertiesForDataModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isAdStories;
-(NSMutableArray *)generatedViewModels;
-(void)setGeneratedViewModels:(NSMutableArray *)arg1 ;
-(SCStoriesOperaMediaManager *)storiesMediaManager;
-(void)setStoriesMediaManager:(SCStoriesOperaMediaManager *)arg1 ;
-(void)setDelegate:(id<SCSingleFriendStoriesOperaDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(id<SCSingleFriendStoriesOperaDataSourceDelegate>)delegate;
@end

