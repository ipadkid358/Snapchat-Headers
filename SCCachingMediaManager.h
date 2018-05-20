/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCUserSessionScoped.h>
#import <Snapchat/SCCacheClearing.h>
#import <Snapchat/SCManagedDatastore.h>

@protocol SCCachingMediaLogger;
@class NSURL, SCCacheSizePolicy, SCQueuePerformer, NSMutableDictionary, SCCache, SCMemoryCache, NSString, SCUserSession;

@interface SCCachingMediaManager : NSObject <SCUserSessionScoped, SCCacheClearing, SCManagedDatastore> {

	NSURL* _cacheURL;
	SCCacheSizePolicy* _diskSizeLimitConfig;
	SCQueuePerformer* _performer;
	unsigned long long _memoryCacheLimit;
	long long _backingDiskUsedSize;
	NSMutableDictionary* _requestGroups;
	NSMutableDictionary* _cachedMediaItemGroups;
	SCCache* _imageCache;
	SCMemoryCache* _memoryCache;
	NSString* _kindName;
	id<SCCachingMediaLogger> _logger;
	BOOL _useTTL;
	BOOL _onlyOriginalImages;

}

@property (nonatomic,readonly) NSURL * cacheURL; 
@property (nonatomic,readonly) unsigned long long diskCacheLimit; 
@property (nonatomic,readonly) SCQueuePerformer * performer; 
@property (nonatomic,readonly) SCUserSession * userSession; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)diskCacheLimitInMb;
-(SCQueuePerformer *)performer;
-(id)kindName;
-(void)handleEmergencyDiskConditionWithDispatchGroup:(id)arg1 ;
-(void)removeExpiredContentAsync:(id)arg1 reason:(unsigned long long)arg2 dispatchGroup:(id)arg3 ;
-(void)removeAllUserSessionDataAsync:(id)arg1 ;
-(void)updateCacheDiskSize:(long long)arg1 ;
-(long long)_totalSizeInBytes;
-(void)_cleanupDiskCacheForUUID:(id)arg1 ;
-(void)_scheduleOnDiskFileLruProtectingSourceFilesEvictionIfNeeded;
-(void)cleanUpCacheWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_shouldRemoveExpiredItem:(id)arg1 ;
-(unsigned long long)diskCacheLimit;
-(void)_evictItemsWithEntityUUIDsToTrim:(id)arg1 trimDate:(id)arg2 trimEntityIdx:(unsigned long long)arg3 entityUUIDsToDelete:(id)arg4 deletionIdx:(unsigned long long)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)_deleteItemsAtEntityDirectory:(id)arg1 withLastAccessTimeBefore:(id)arg2 shouldSkipHighestLevelSource:(BOOL)arg3 ;
-(void)_evictDiskItemsByItemGroupsWithEvictTrimDate:(id)arg1 entityUUIDs:(id)arg2 currentEntityIdx:(unsigned long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)totalSizeOfCacheFilesWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithCacheURL:(id)arg1 diskSizeLimitConfig:(id)arg2 kindName:(id)arg3 useTTL:(BOOL)arg4 onlyOriginalImages:(BOOL)arg5 logger:(id)arg6 ;
-(id)initWithSCCache:(id)arg1 kindName:(id)arg2 useTTL:(BOOL)arg3 onlyOriginalImages:(BOOL)arg4 logger:(id)arg5 ;
-(id)requestCachingMediaForEntity:(id)arg1 targetSize:(CGSize)arg2 requestOptions:(id)arg3 queue:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)invalidateCacheForEntity:(id)arg1 ;
-(void)cacheDiskUsageQuickCheck:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_cleanupDirectoryForEntityExceptSourceFile:(id)arg1 ;
-(void)_scheduleOnDiskFileLruEvictionIfNeeded;
-(id)requestMusicStickerWithTrack:(id)arg1 targetSize:(CGSize)arg2 queue:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(id)requestCachingMediaForSnap:(id)arg1 targetSize:(CGSize)arg2 orientation:(BOOL)arg3 scaleMalibu:(BOOL)arg4 mediaScenePath:(SCD_Struct_SC329)arg5 deliveryMode:(unsigned long long)arg6 queue:(id)arg7 resultHandler:(/*^block*/id)arg8 ;
-(id)initWithCacheURL:(id)arg1 userSession:(id)arg2 ;
-(id)requestCachingMediaForMediaDrawerMedia:(id)arg1 targetSize:(CGSize)arg2 deliveryMode:(unsigned long long)arg3 queue:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)invalidateCacheForMediaDrawerMeida:(id)arg1 ;
-(id)requestCachingMediaForChatMedia:(id)arg1 targetSize:(CGSize)arg2 deliveryMode:(unsigned long long)arg3 queue:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(id)requestCachingMediaForSnap:(id)arg1 snapDetail:(id)arg2 targetSize:(CGSize)arg3 orientation:(BOOL)arg4 scaleMalibu:(BOOL)arg5 mediaScenePath:(SCD_Struct_SC329)arg6 deliveryMode:(unsigned long long)arg7 queue:(id)arg8 resultHandler:(/*^block*/id)arg9 ;
-(id)requestCachingMediaForSnap:(id)arg1 snapDetail:(id)arg2 targetSize:(CGSize)arg3 orientation:(BOOL)arg4 scaleMalibu:(BOOL)arg5 mediaScenePath:(SCD_Struct_SC329)arg6 requestOptions:(id)arg7 queue:(id)arg8 resultHandler:(/*^block*/id)arg9 ;
-(id)requestArtistImageForSongInfo:(id)arg1 HD:(BOOL)arg2 targetSize:(CGSize)arg3 queue:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)dealloc;
-(void)invalidate;
-(SCUserSession *)userSession;
-(NSURL *)cacheURL;
-(void)_didReceiveMemoryWarningNotification:(id)arg1 ;
-(id)reportMetrics;
@end

