/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSCache.h>
#import <libobjc.A.dylib/NSCacheDelegate.h>

@protocol SCPerforming;
@class NSMutableDictionary, NSMutableSet, NSString;

@interface SCMediaCache : NSCache <NSCacheDelegate> {

	NSMutableDictionary* _objectsToKeys;
	NSMutableDictionary* _attributes;
	NSMutableSet* _keysBeingWrittenToDisk;
	NSMutableDictionary* _writtenToDiskCallbacks;
	id<SCPerforming> _resetMediaStatePerformer;

}

@property (nonatomic,retain) NSMutableDictionary * objectsToKeys;                       //@synthesize objectsToKeys=_objectsToKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * attributes;                          //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSMutableSet * keysBeingWrittenToDisk;                     //@synthesize keysBeingWrittenToDisk=_keysBeingWrittenToDisk - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * writtenToDiskCallbacks;              //@synthesize writtenToDiskCallbacks=_writtenToDiskCallbacks - In the implementation block
@property (nonatomic,retain) id<SCPerforming> resetMediaStatePerformer;                 //@synthesize resetMediaStatePerformer=_resetMediaStatePerformer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCache_DEPRECATED;
+(id)anyCachePerformer;
+(id)anyWriteFilePerformer;
-(void)removeExpiredMedia;
-(void)processObjectForKey:(id)arg1 dictionary:(id)arg2 completionQueue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)setObject:(id)arg1 encryptedObject:(id)arg2 forKey:(id)arg3 persist:(BOOL)arg4 encrypt:(BOOL)arg5 dictionary:(id)arg6 ;
-(BOOL)contains:(id)arg1 cacheOnly:(BOOL)arg2 quickCheck:(BOOL)arg3 ;
-(void)setObjectsToKeys:(NSMutableDictionary *)arg1 ;
-(void)setKeysBeingWrittenToDisk:(NSMutableSet *)arg1 ;
-(void)setWrittenToDiskCallbacks:(NSMutableDictionary *)arg1 ;
-(void)loadPersistentMedia;
-(void)writePersistentKeysToDisk;
-(NSMutableSet *)keysBeingWrittenToDisk;
-(BOOL)validCacheObjectExistsOnDiskForKey:(id)arg1 selfEncrypted:(BOOL)arg2 ;
-(id)attributesItemForKey:(id)arg1 ;
-(id)cachePathForKey:(id)arg1 ;
-(NSMutableDictionary *)writtenToDiskCallbacks;
-(void)runAsynchronouslyOnACacheQueue:(/*^block*/id)arg1 ;
-(void)runAsynchronouslyOnAFileWriteQueue:(/*^block*/id)arg1 ;
-(BOOL)contains:(id)arg1 cacheOnly:(BOOL)arg2 ;
-(BOOL)objectExistsOnDiskForKey:(id)arg1 ;
-(id)dataFromDiskForKey:(id)arg1 dictionary:(id)arg2 ;
-(void)setObject:(id)arg1 encryptedObject:(id)arg2 forKey:(id)arg3 dictionary:(id)arg4 ;
-(id)objectForKey:(id)arg1 dictionary:(id)arg2 ;
-(void)addCallback:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)writeToFile:(id)arg1 alreadyEncrypted:(BOOL)arg2 key:(id)arg3 dictionary:(id)arg4 ;
-(NSMutableDictionary *)objectsToKeys;
-(void)setStateNotLoadedForItemRemovedFromCacheWithKey:(id)arg1 ;
-(/*^block*/id)evictOnFailureCallbackForKey:(id)arg1 ;
-(void)evictedSnap:(id)arg1 ;
-(void)evictedStoryMedia:(id)arg1 ;
-(void)evictedStoryThumbnail:(id)arg1 ;
-(void)setStateNotLoadedForMediaMessageWithKey:(id)arg1 ;
-(void)evictedChatMedia:(id)arg1 ;
-(void)evictedStorySnapMessageMedia:(id)arg1 ;
-(void)evictedMediaMessageMedia:(id)arg1 ;
-(BOOL)keyShouldBeEncrypted:(id)arg1 ;
-(void)prefetchObjectForKey:(id)arg1 dictionary:(id)arg2 ;
-(id)mediaEncryptionKey;
-(id)mediaInitializationVectorKey;
-(id<SCPerforming>)resetMediaStatePerformer;
-(void)setResetMediaStatePerformer:(id<SCPerforming>)arg1 ;
-(id)init;
-(void)dealloc;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)attributes;
-(void)setAttributes:(NSMutableDictionary *)arg1 ;
-(void)clear;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(BOOL)contains:(id)arg1 ;
@end

