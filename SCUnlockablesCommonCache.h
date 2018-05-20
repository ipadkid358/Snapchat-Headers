/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCUnlockableCommonCacheDelegate, SCPerforming;
@class SCUnlockablesStickyCache, NSDictionary, NSMutableDictionary;

@interface SCUnlockablesCommonCache : NSObject {

	SCUnlockablesStickyCache* _stickyCache;
	unsigned _logContext;
	id<SCUnlockableCommonCacheDelegate> delegate;
	long long _cacheType;
	unsigned long long _capacity;
	id<SCPerforming> _performer;
	NSDictionary* _activeUnlockables;
	NSMutableDictionary* _cache;
	/*^block*/id _parser;

}

@property (nonatomic,retain) id<SCPerforming> performer;                                       //@synthesize performer=_performer - In the implementation block
@property (nonatomic,retain) NSDictionary * activeUnlockables;                                 //@synthesize activeUnlockables=_activeUnlockables - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cache;                                      //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) id parser;                                                      //@synthesize parser=_parser - In the implementation block
@property (assign,nonatomic,__weak) id<SCUnlockableCommonCacheDelegate> delegate; 
@property (nonatomic,readonly) long long cacheType;                                            //@synthesize cacheType=_cacheType - In the implementation block
@property (nonatomic,readonly) unsigned long long capacity;                                    //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) unsigned logContext;                                            //@synthesize logContext=_logContext - In the implementation block
-(id<SCPerforming>)performer;
-(void)setPerformer:(id<SCPerforming>)arg1 ;
-(void)_syncCache:(id)arg1 atLocation:(id)arg2 fromSources:(id)arg3 ;
-(void)_removeExpiredItemsFromCache;
-(void)_pruneCacheIfNecessary;
-(id)_activeUnlockablesAtLocation:(id)arg1 ;
-(void)_updateActiveUnlockables:(id)arg1 atLocation:(id)arg2 ;
-(NSDictionary *)activeUnlockables;
-(void)setActiveUnlockables:(NSDictionary *)arg1 ;
-(id)initWithUnlockables:(id)arg1 cacheType:(long long)arg2 cacheDelegate:(id)arg3 ;
-(void)removeUnlockablesWithKeys:(id)arg1 ;
-(void)insertUnlockables:(id)arg1 forLocation:(id)arg2 fromSources:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)preFetch:(id)arg1 ;
-(unsigned)logContext;
-(void)setDelegate:(id<SCUnlockableCommonCacheDelegate>)arg1 ;
-(id<SCUnlockableCommonCacheDelegate>)delegate;
-(id)allValues;
-(void)clear;
-(NSMutableDictionary *)cache;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(unsigned long long)capacity;
-(long long)cacheType;
-(id)parser;
-(void)updateLocation:(id)arg1 ;
@end
