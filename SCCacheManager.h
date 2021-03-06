/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCServerConfigListener.h>

@protocol SCPerforming;
@class SCManagedDatastoreCollector, NSDictionary, NSString, PINMemoryCache;

@interface SCCacheManager : NSObject <SCServerConfigListener> {

	SCManagedDatastoreCollector* _datastoreCollector;
	NSDictionary* _ownedDatastoreMetrics;
	NSString* _jsonifiedSetOfDirectories;
	BOOL _isUserAvailable;
	/*^block*/id _unavailableWarningCallback;
	id<SCPerforming> _performer;
	PINMemoryCache* _sharedMemoryCache;

}

@property (nonatomic,retain) id<SCPerforming> performer;                      //@synthesize performer=_performer - In the implementation block
@property (nonatomic,retain) PINMemoryCache * sharedMemoryCache;              //@synthesize sharedMemoryCache=_sharedMemoryCache - In the implementation block
@property (assign,nonatomic) BOOL isUserAvailable;                            //@synthesize isUserAvailable=_isUserAvailable - In the implementation block
@property (nonatomic,copy) id unavailableWarningCallback;                     //@synthesize unavailableWarningCallback=_unavailableWarningCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shared;
-(id<SCPerforming>)performer;
-(id)initWithQueuePerformer:(id)arg1 ;
-(void)setPerformer:(id<SCPerforming>)arg1 ;
-(void)serverConfigDidChange:(id)arg1 ;
-(BOOL)isUserAvailable;
-(id)unavailableWarningCallback;
-(void)_updateWithServerConfig:(id)arg1 ;
-(id)_determineMetricsForDatastores:(id)arg1 ;
-(id)_prepareScrubbersForReportDirectories;
-(id)_prepareOwnedDatastores;
-(void)_cleanupDeadUnmanagedDirectories;
-(void)_cleanupDeadCacheDirectories;
-(void)_markOversizedDatastore;
-(id)_determineActiveUnmanagedDirectories:(id)arg1 ;
-(BOOL)_isReadyForCacheCleanup:(id)arg1 ;
-(void)_removeDeadCacheDirectories:(id)arg1 ;
-(void)_initializeDeadCacheDetection:(id)arg1 ;
-(id)_determineActiveCacheDirectories;
-(void)getDiskCacheSizeForKind:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)determineAllMetrics:(/*^block*/id)arg1 ;
-(void)clearOutExpiredCache:(id)arg1 ;
-(void)clearAllSessionScopedCache;
-(void)handleEmergencyDiskConditionForDatastores:(id)arg1 ;
-(void)setIsUserAvailable:(BOOL)arg1 ;
-(void)setUnavailableWarningCallback:(id)arg1 ;
-(PINMemoryCache *)sharedMemoryCache;
-(void)setSharedMemoryCache:(PINMemoryCache *)arg1 ;
-(void)dealloc;
@end

