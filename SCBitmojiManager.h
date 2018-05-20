/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCBitmojiManagerProtocol.h>
#import <Snapchat/SCUserSessionScoped.h>

@protocol OS_dispatch_queue, SCBitmojiPrefetcher, SCBitmojiPerformanceDebugProtocol, SCBitmojiAvatarProvider, SCBitmojiNetworkStrategy;
@class NSObject, SCLazy, SCBitmojiMetricsCollector, SCBitmojiMetricsReporter, SCWeakTimer, SCBitmojiDownloadQueue, SCBitmojiJobCollector, NSMutableSet, SCBitmojiNetworkPolicy, SCBitmojiDratiniManager, NSString;

@interface SCBitmojiManager : NSObject <SCBitmojiManagerProtocol, SCUserSessionScoped> {

	NSObject*<OS_dispatch_queue> _workQueue;
	SCLazy* _selfBitmojiCache;
	SCLazy* _friendBitmojiCache;
	id<SCBitmojiPrefetcher> _prefetcher;
	id<SCBitmojiPerformanceDebugProtocol> _performanceController;
	SCBitmojiMetricsCollector* _metricsCollector;
	SCBitmojiMetricsReporter* _metricsReporter;
	int _outstandingDownloads;
	SCWeakTimer* _outstandingDownloadBackoff;
	SCBitmojiDownloadQueue* _downloadBacklog;
	SCBitmojiJobCollector* _jobCollector;
	NSMutableSet* _prefetchesDone;
	id<SCBitmojiAvatarProvider> _avatarProvider;
	id<SCBitmojiNetworkStrategy> _networkStrategy;
	SCBitmojiNetworkPolicy* _networkPolicy;
	BOOL _invalidated;
	SCBitmojiDratiniManager* _dratiniManager;

}

@property (assign,nonatomic,__weak) SCBitmojiDratiniManager * dratiniManager;              //@synthesize dratiniManager=_dratiniManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)confirmLinkWithBitmoji:(/*^block*/id)arg1 ;
+(void)unlinkWithCompletionBlock:(/*^block*/id)arg1 ;
+(void)requestToken:(/*^block*/id)arg1 ;
-(id)_determineNetworkStrategy:(id)arg1 ;
-(void)_willEnterBackground;
-(void)_clearDownloadBackoffTimer;
-(void)_resetPendingDownloads;
-(void)_createCheckBacklogTasks;
-(void)_lookupInCaches:(id)arg1 imageType:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(id)_cacheForBitmoji:(id)arg1 ;
-(id)_generateCacheKey:(id)arg1 imageType:(unsigned long long)arg2 ;
-(double)_determineRandomTTL;
-(id)_determineContexts:(id)arg1 ;
-(unsigned long long)_determineImageType:(long long)arg1 imageParams:(id)arg2 ;
-(void)_startFetch:(id)arg1 ;
-(BOOL)isBitmojiCached:(id)arg1 feature:(long long)arg2 ;
-(id)fetchBitmojiImageData:(id)arg1 contexts:(id)arg2 feature:(long long)arg3 transform:(/*^block*/id)arg4 completionQueue:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)prefetchBitmojiImage:(id)arg1 contexts:(id)arg2 feature:(long long)arg3 completionQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_fetchBitmojiImage:(id)arg1 ;
-(id)_determineImageParamsWithPriorAvatarVersion:(id)arg1 ;
-(void)_handleImageResponse:(id)arg1 image:(id)arg2 job:(id)arg3 isFromCache:(BOOL)arg4 ;
-(void)_handleImageFailedForJob:(id)arg1 allowRetry:(BOOL)arg2 ;
-(void)_checkCacheOnly:(id)arg1 failure:(/*^block*/id)arg2 ;
-(void)_completePrefetchQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_checkImageFetchBacklog;
-(void)_kickDownloadSlots:(id)arg1 ;
-(void)_downloadSlotRelease;
-(BOOL)_downloadSlotAllocate;
-(void)_checkCacheAndFetch:(id)arg1 ;
-(void)_checkPrefetcherJobs;
-(id)_generateCacheKey:(id)arg1 ;
-(void)_issueImageFetchForJob:(id)arg1 ;
-(void)_lookupInCaches:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_issueBatchImageFetch:(id)arg1 ;
-(void)_issueMultipleSingleImageFetches:(id)arg1 ;
-(id)fetchBitmojiImage:(id)arg1 contexts:(id)arg2 feature:(long long)arg3 completionQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)fetchCurrentOrPrior:(id)arg1 contexts:(id)arg2 feature:(long long)arg3 transform:(/*^block*/id)arg4 completionQueue:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)initSelfCache:(id)arg1 friendCache:(id)arg2 avatarProvider:(id)arg3 requestManager:(id)arg4 prefetcher:(id)arg5 performanceController:(id)arg6 ;
-(void)startPrefetching;
-(void)resetMetrics;
-(id)describeEndpointMetrics;
-(void)registerDratiniManager:(id)arg1 ;
-(SCBitmojiDratiniManager *)dratiniManager;
-(void)setDratiniManager:(SCBitmojiDratiniManager *)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)cancelJob:(id)arg1 ;
-(void)resetCache;
-(void)clearMemoryCache;
@end

