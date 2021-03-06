/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCUserSession, NSMutableDictionary, SCQueuePerformer, NSArray, NSDictionary, SCEncryptedCache;

@interface SCCheetahStoriesInteractionHistoryManager : NSObject {

	SCUserSession* _userSession;
	NSMutableDictionary* _storyIdStringThumbnailIdMap;
	SCQueuePerformer* _performer;
	NSArray* _storiesInteractionHistory;
	NSDictionary* _corpusInteractionHistory;
	SCEncryptedCache* _cache;

}

@property (retain) NSArray * storiesInteractionHistory;                  //@synthesize storiesInteractionHistory=_storiesInteractionHistory - In the implementation block
@property (retain) NSDictionary * corpusInteractionHistory;              //@synthesize corpusInteractionHistory=_corpusInteractionHistory - In the implementation block
@property (retain) SCEncryptedCache * cache;                             //@synthesize cache=_cache - In the implementation block
-(id)initWithUserSession:(id)arg1 ;
-(void)updateImpressionViewItems:(id)arg1 ;
-(void)updateLongImpression:(unsigned long long)arg1 corpus:(unsigned)arg2 impressionTime:(double)arg3 numberOfSnapsInVersion:(unsigned)arg4 version:(unsigned long long)arg5 tapStoryKey:(unsigned long long)arg6 totalDuration:(double)arg7 date:(id)arg8 thumbnailId:(id)arg9 storyType:(long long)arg10 ;
-(void)updateShortImpression:(unsigned long long)arg1 corpus:(unsigned)arg2 version:(unsigned long long)arg3 numSnapsInVersion:(unsigned)arg4 date:(id)arg5 storyType:(long long)arg6 ;
-(void)updateStoryView:(unsigned long long)arg1 corpus:(unsigned)arg2 version:(unsigned long long)arg3 numberOfSnapsViewed:(unsigned)arg4 snapCompletionPercent:(unsigned)arg5 numberOfSnapsInVersion:(unsigned)arg6 tapStoryKey:(unsigned long long)arg7 viewTime:(double)arg8 totalDuration:(double)arg9 entryEvent:(unsigned)arg10 exitEvent:(unsigned)arg11 date:(id)arg12 storyType:(long long)arg13 ;
-(void)updateHidden:(unsigned long long)arg1 corpus:(unsigned)arg2 ;
-(void)updateStoryViewState:(unsigned long long)arg1 isFullyViewed:(BOOL)arg2 version:(unsigned long long)arg3 totalSnapNum:(unsigned long long)arg4 ;
-(id)subscriptionState:(unsigned long long)arg1 ;
-(id)hiddenState:(unsigned long long)arg1 ;
-(BOOL)isFullyViewed:(id)arg1 ;
-(void)updateSubscription:(unsigned long long)arg1 subscribed:(BOOL)arg2 corpus:(unsigned)arg3 ;
-(id)getStoriesInteractionHistory;
-(id)getCorpusInteractionHistory;
-(NSArray *)storiesInteractionHistory;
-(NSDictionary *)corpusInteractionHistory;
-(id)getInteractionHistoryWithStoryId:(unsigned long long)arg1 ;
-(void)setStoriesInteractionHistory:(NSArray *)arg1 ;
-(void)_updateInteractionHistory:(id)arg1 ;
-(void)setCorpusInteractionHistory:(NSDictionary *)arg1 ;
-(id)_interactionHistoryBuilderWithStoryId:(unsigned long long)arg1 ;
-(id)getCorpusInteractionHistory:(unsigned)arg1 ;
-(void)_updateCorpusInteractionHistory:(id)arg1 ;
-(void)_purgeCachedStoriesInteractionHistoryIfNeeded;
-(id)newInteractionEvent:(id)arg1 date:(id)arg2 ;
-(id)lastInteractionEvent:(id)arg1 withUpdate:(id)arg2 ;
-(void)_updateShortView:(unsigned long long)arg1 corpus:(unsigned)arg2 date:(id)arg3 ;
-(void)_updateLongView:(unsigned long long)arg1 corpus:(unsigned)arg2 date:(id)arg3 ;
-(void)_updateViewInfo:(unsigned long long)arg1 corpus:(unsigned)arg2 version:(unsigned long long)arg3 numberOfSnapsViewed:(unsigned)arg4 snapCompletionPercent:(unsigned)arg5 numberOfSnapsInVersion:(unsigned)arg6 tapStoryKey:(unsigned long long)arg7 viewTime:(double)arg8 totalDuration:(double)arg9 entryEvent:(unsigned)arg10 exitEvent:(unsigned)arg11 date:(id)arg12 storyType:(long long)arg13 ;
-(void)_handleCachedStoriesInteractionHistory:(id)arg1 ;
-(void)_handleCachedCorpusInteractionHistory:(id)arg1 ;
-(void)updateInteractionHistory:(id)arg1 ;
-(void)updateCorpusInteractionHistory:(id)arg1 ;
-(void)updateSingleInteractionHistory:(id)arg1 ;
-(void)purgeCachedStoriesInteractionHistoryIfNeeded;
-(void)saveStoriesInteractionHistoryToDisk;
-(void)saveCorpusInteractionHistoryToDisk;
-(void)loadStoriesInteractionHistoryFromDiskWithCompletion:(/*^block*/id)arg1 ;
-(void)loadCorpusInteractionHistoryFromDiskWithCompletion:(/*^block*/id)arg1 ;
-(SCEncryptedCache *)cache;
-(void)setCache:(SCEncryptedCache *)arg1 ;
@end

