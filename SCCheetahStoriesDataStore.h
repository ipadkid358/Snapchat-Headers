/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchUpdateAnnouncing.h>

@protocol SCCheetahStoriesDataStoreDelegate;
@class SCUserSession, NSArray, NSDictionary, SCEncryptedCache, SCConcurrentQueuePerformer, SCQueuePerformer, SCSearchUpdateListenerAnnouncer, NSString;

@interface SCCheetahStoriesDataStore : NSObject <SCSearchUpdateAnnouncing> {

	SCUserSession* _userSession;
	NSArray* _stories;
	NSDictionary* _tabDataModelsByFeedType;
	NSArray* _tabs;
	NSDictionary* _pendingtabDataModelsByFeedType;
	NSDictionary* _storyIndicesByStoryFingerprint;
	NSArray* _emptyStoryIndices;
	SCEncryptedCache* _storiesCache;
	BOOL _hasUnsavedChanges;
	SCConcurrentQueuePerformer* _storiesPerformer;
	SCQueuePerformer* _diskPerformer;
	SCSearchUpdateListenerAnnouncer* _updateAnnouncer;
	id<SCCheetahStoriesDataStoreDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCCheetahStoriesDataStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stories; 
@property (nonatomic,copy,readonly) NSDictionary * tabDataModelsByFeedType;                      //@synthesize tabDataModelsByFeedType=_tabDataModelsByFeedType - In the implementation block
@property (nonatomic,copy) NSArray * tabs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(id)_tabs;
-(NSArray *)stories;
-(id)_stories;
-(NSDictionary *)tabDataModelsByFeedType;
-(id)_tabDataModelsByFeedType;
-(void)addUpdateListener:(id)arg1 ;
-(void)removeUpdateListener:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 ;
-(id)tabDataModelForTabAtIndex:(unsigned long long)arg1 ;
-(id)storyWithDedupeFp:(unsigned long long)arg1 ;
-(unsigned long long)tabIndexForFeedType:(unsigned long long)arg1 ;
-(unsigned long long)indexForStory:(id)arg1 inTabAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexForStoryDedupeFp:(unsigned long long)arg1 inTabAtIndex:(unsigned long long)arg2 ;
-(id)storyWithCompositeStoryId:(id)arg1 ;
-(id)allStoriesInTabAtIndex:(unsigned long long)arg1 ;
-(id)allStoriesForFeedType:(unsigned long long)arg1 ;
-(void)removeStories:(id)arg1 ;
-(void)updateStories:(id)arg1 ;
-(unsigned long long)indexForStory:(id)arg1 ;
-(id)storyWithUsername:(id)arg1 ;
-(void)_setTabs:(id)arg1 ;
-(unsigned long long)_indexForStory:(id)arg1 inTabAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)_indexForStoryDedupeFp:(unsigned long long)arg1 inTabAtIndex:(unsigned long long)arg2 ;
-(void)_loadCachedStoriesForFeedType:(unsigned long long)arg1 WithCompletion:(/*^block*/id)arg2 ;
-(void)_releasePendingTabAtIndex:(unsigned long long)arg1 ;
-(void)_saveStories:(id)arg1 forFeedType:(unsigned long long)arg2 streamToken:(id)arg3 fetchedDate:(id)arg4 scoringParams:(id)arg5 hasMoreStories:(BOOL)arg6 ;
-(void)_appendStories:(id)arg1 forFeedType:(unsigned long long)arg2 streamToken:(id)arg3 fetchDate:(id)arg4 scoringParams:(id)arg5 hasMoreStories:(BOOL)arg6 ;
-(void)_saveStories:(id)arg1 forFeedType:(unsigned long long)arg2 ;
-(void)_updateStories:(id)arg1 ;
-(void)_removeStories:(id)arg1 ;
-(void)_handleCachedData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_emptyStoryIndices;
-(id)_storiesForTabAtIndex:(unsigned long long)arg1 ;
-(id)_storiesForFeedType:(unsigned long long)arg1 ;
-(id)_pendingStoriesForTabAtIndex:(unsigned long long)arg1 ;
-(void)_reorderStoriesForTabAtIndex:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)_pendingtabDataModelsByFeedType;
-(void)_prepareCachedStreamAndSaveToDiskWithStories:(id)arg1 tabDataModels:(id)arg2 emptyStoryIndices:(id)arg3 tabs:(id)arg4 ;
-(void)_announceRerankingUpdateWithExtraData:(id)arg1 ;
-(BOOL)_shouldSaveStoryToDisk:(id)arg1 ;
-(void)_updateWithCachedStream:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_announceDataStoreUpdate;
-(id)_removeStoriesForTabDataModel:(id)arg1 otherTabDataModels:(id)arg2 otherPendingtabDataModelsByFeedType:(id)arg3 ;
-(void)_dispatchAnnounceDataStoreStoriesUpdate;
-(id)_addStories:(id)arg1 ;
-(void)_reloadStories:(id)arg1 forFeedType:(unsigned long long)arg2 streamToken:(id)arg3 fetchedDate:(id)arg4 scoringParams:(id)arg5 hasMoreStories:(BOOL)arg6 ;
-(void)_setPendingStories:(id)arg1 forFeedType:(unsigned long long)arg2 streamToken:(id)arg3 fetchedDate:(id)arg4 scoringParams:(id)arg5 hasMoreStories:(BOOL)arg6 ;
-(void)_releasePendingTabWithFeedType:(unsigned long long)arg1 ;
-(void)_dispatchAnnounceRerankingUpdateWithExtraData:(id)arg1 ;
-(unsigned long long)_indexForStoryInAllStories:(id)arg1 ;
-(id)tabDataModelForFeedType:(unsigned long long)arg1 ;
-(id)tabDataModels;
-(BOOL)hasPendingStoriesForTabAtIndex:(unsigned long long)arg1 ;
-(void)loadCachedStoriesForFeedType:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)releasePendingUpdateForTabAtIndex:(unsigned long long)arg1 ;
-(void)saveStories:(id)arg1 forFeedType:(unsigned long long)arg2 streamToken:(id)arg3 scoringParams:(id)arg4 hasMoreStories:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)appendStories:(id)arg1 forFeedType:(unsigned long long)arg2 streamToken:(id)arg3 fetchDate:(id)arg4 scoringParams:(id)arg5 hasMoreStories:(BOOL)arg6 ;
-(void)saveStories:(id)arg1 forFeedType:(unsigned long long)arg2 ;
-(void)loadStoriesFromDiskWithCompletion:(/*^block*/id)arg1 ;
-(id)storyWithCompositeIdString:(id)arg1 ;
-(id)allActiveStories;
-(id)allEmptyStories;
-(id)storyAtIndex:(unsigned long long)arg1 ;
-(id)pendingStoriesForTabAtIndex:(unsigned long long)arg1 ;
-(void)reorderStoriesLocallyForTabIndexIfPossible:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)saveStoriesToDiskIfNeeded;
-(void)setDelegate:(id<SCCheetahStoriesDataStoreDelegate>)arg1 ;
-(id<SCCheetahStoriesDataStoreDelegate>)delegate;
-(void)setTabs:(NSArray *)arg1 ;
-(NSArray *)tabs;
@end

