/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCCache, SCStories, NSMutableSet, SCQueuePerformer, NSMutableDictionary;

@interface SCStoryMediaCache : NSObject {

	SCCache* _cache;
	SCStories* _stories;
	NSMutableSet* _keysBeingWrittenToDisk;
	SCQueuePerformer* _performer;
	NSMutableDictionary* _cacheKeyToStory;

}
-(id)initWithStories:(id)arg1 ;
-(/*^block*/id)_didRemoveObjectFromDiskBlock;
-(void)prepareForLogout;
-(void)clearCachedMediaNotNeeded;
-(void)clearExpiredCachedMedia;
-(void)setObject:(id)arg1 forKey:(id)arg2 withEncryptor:(id)arg3 cacheDataSource:(id)arg4 expiration:(id)arg5 alreadyEncrypted:(BOOL)arg6 useClientEncryption:(BOOL)arg7 completion:(/*^block*/id)arg8 ;
-(void)objectForKey:(id)arg1 withEncryptor:(id)arg2 completionQueue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)clearCachedMediaExceptMyStories:(/*^block*/id)arg1 ;
-(void)initCacheKeyToStoryDict;
-(void)_setObject:(id)arg1 forKey:(id)arg2 withEncryptor:(id)arg3 expiration:(id)arg4 alreadyEncrypted:(BOOL)arg5 useClientEncryption:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(void)_addMediaCacheKeyToKeySet:(id)arg1 keySet:(id)arg2 ;
-(void)_mapCacheKeyToStoryIfNecessaryWithStory:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(BOOL)contains:(id)arg1 ;
@end

