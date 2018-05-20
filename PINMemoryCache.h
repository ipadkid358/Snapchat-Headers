/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/PINCaching.h>

@class NSString, PINOperationQueue, NSMutableDictionary;

@interface PINMemoryCache : NSObject <PINCaching> {

	BOOL _ttlCache;
	BOOL _removeAllObjectsOnMemoryWarning;
	BOOL _removeAllObjectsOnEnteringBackground;
	NSString* _name;
	double _ageLimit;
	unsigned long long _costLimit;
	unsigned long long _totalCost;
	/*^block*/id _willAddObjectBlock;
	/*^block*/id _willRemoveObjectBlock;
	/*^block*/id _willRemoveAllObjectsBlock;
	/*^block*/id _didAddObjectBlock;
	/*^block*/id _didRemoveObjectBlock;
	/*^block*/id _didRemoveAllObjectsBlock;
	/*^block*/id _didReceiveMemoryWarningBlock;
	/*^block*/id _didEnterBackgroundBlock;
	PINOperationQueue* _operationQueue;
	NSMutableDictionary* _dictionary;
	NSMutableDictionary* _dates;
	NSMutableDictionary* _costs;
	NSMutableDictionary* _metadata;
	NSMutableDictionary* _keysByKind;
	NSMutableDictionary* _costsByKind;
	NSMutableDictionary* _costsByKindSnapshot;
	opaque_pthread_mutex_t _mutex;

}

@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) PINOperationQueue * operationQueue;                     //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) opaque_pthread_mutex_t mutex;                           //@synthesize mutex=_mutex - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dictionary;                       //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dates;                            //@synthesize dates=_dates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * costs;                            //@synthesize costs=_costs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * metadata;                         //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * keysByKind;                       //@synthesize keysByKind=_keysByKind - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * costsByKind;                      //@synthesize costsByKind=_costsByKind - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * costsByKindSnapshot;              //@synthesize costsByKindSnapshot=_costsByKindSnapshot - In the implementation block
@property (readonly) unsigned long long totalCost;                                   //@synthesize totalCost=_totalCost - In the implementation block
@property (assign) unsigned long long costLimit;                                     //@synthesize costLimit=_costLimit - In the implementation block
@property (assign) double ageLimit;                                                  //@synthesize ageLimit=_ageLimit - In the implementation block
@property (assign,getter=isTTLCache,nonatomic) BOOL ttlCache;                        //@synthesize ttlCache=_ttlCache - In the implementation block
@property (assign) BOOL removeAllObjectsOnMemoryWarning;                             //@synthesize removeAllObjectsOnMemoryWarning=_removeAllObjectsOnMemoryWarning - In the implementation block
@property (assign) BOOL removeAllObjectsOnEnteringBackground;                        //@synthesize removeAllObjectsOnEnteringBackground=_removeAllObjectsOnEnteringBackground - In the implementation block
@property (copy) id willAddObjectBlock;                                              //@synthesize willAddObjectBlock=_willAddObjectBlock - In the implementation block
@property (copy) id willRemoveObjectBlock;                                           //@synthesize willRemoveObjectBlock=_willRemoveObjectBlock - In the implementation block
@property (copy) id willRemoveAllObjectsBlock;                                       //@synthesize willRemoveAllObjectsBlock=_willRemoveAllObjectsBlock - In the implementation block
@property (copy) id didAddObjectBlock;                                               //@synthesize didAddObjectBlock=_didAddObjectBlock - In the implementation block
@property (copy) id didRemoveObjectBlock;                                            //@synthesize didRemoveObjectBlock=_didRemoveObjectBlock - In the implementation block
@property (copy) id didRemoveAllObjectsBlock;                                        //@synthesize didRemoveAllObjectsBlock=_didRemoveAllObjectsBlock - In the implementation block
@property (copy) id didReceiveMemoryWarningBlock;                                    //@synthesize didReceiveMemoryWarningBlock=_didReceiveMemoryWarningBlock - In the implementation block
@property (copy) id didEnterBackgroundBlock;                                         //@synthesize didEnterBackgroundBlock=_didEnterBackgroundBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCache;
-(unsigned long long)totalCost;
-(void)setObjectAsync:(id)arg1 forKey:(id)arg2 metadata:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)objectForKeyAsync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateMetadataAsync:(id)arg1 forKey:(id)arg2 ;
-(void)setObjectAsync:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 metadata:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 metadata:(id)arg4 ;
-(BOOL)setObject:(id)arg1 forKey:(id)arg2 metadata:(id)arg3 ;
-(void)trimToDate:(id)arg1 ;
-(void)containsObjectForKeyAsync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeObjectForKeyAsync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeObjectsForKeysAsync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)trimToDateAsync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAllObjectsAsync:(/*^block*/id)arg1 ;
-(void)trimToAgeLimitRecursively;
-(id)metadataForKey:(id)arg1 ;
-(void)enumerateObjectsWithBlockAsync:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)willAddObjectBlock;
-(void)setWillAddObjectBlock:(id)arg1 ;
-(id)willRemoveObjectBlock;
-(void)setWillRemoveObjectBlock:(id)arg1 ;
-(id)willRemoveAllObjectsBlock;
-(void)setWillRemoveAllObjectsBlock:(id)arg1 ;
-(id)didAddObjectBlock;
-(void)setDidAddObjectBlock:(id)arg1 ;
-(id)didRemoveObjectBlock;
-(void)setDidRemoveObjectBlock:(id)arg1 ;
-(id)didRemoveAllObjectsBlock;
-(void)setDidRemoveAllObjectsBlock:(id)arg1 ;
-(double)ageLimit;
-(void)setAgeLimit:(double)arg1 ;
-(BOOL)isTTLCache;
-(void)setTtlCache:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 operationQueue:(id)arg2 ;
-(void)didReceiveEnterBackgroundNotification:(id)arg1 ;
-(void)didReceiveMemoryWarningNotification:(id)arg1 ;
-(BOOL)removeAllObjectsOnMemoryWarning;
-(BOOL)removeAllObjectsOnEnteringBackground;
-(void)removeObjectAndExecuteBlocksForKey:(id)arg1 ;
-(void)trimMemoryToDate:(id)arg1 ;
-(void)trimToCost:(unsigned long long)arg1 ;
-(void)trimToCostByDate:(unsigned long long)arg1 ;
-(void)removeAllObjectsByKind:(id)arg1 ;
-(void)enumerateObjectsForKind:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_locked_adjustKindCost:(id)arg1 byValue:(long long)arg2 ;
-(unsigned long long)_locked_computeTotalCostsFromKinds;
-(void)trimToCostLimit:(unsigned long long)arg1 ;
-(void)trimToCostLimitByDate:(unsigned long long)arg1 ;
-(void)trimToCostAsync:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)trimToCostByDateAsync:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAllObjectsAsyncForKind:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enumerateObjectsAsyncForKind:(id)arg1 block:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)didReceiveMemoryWarningBlock;
-(void)setDidReceiveMemoryWarningBlock:(id)arg1 ;
-(id)didEnterBackgroundBlock;
-(void)setDidEnterBackgroundBlock:(id)arg1 ;
-(unsigned long long)costLimit;
-(void)setCostLimit:(unsigned long long)arg1 ;
-(unsigned long long)lastKnownCostByKind:(id)arg1 ;
-(void)setRemoveAllObjectsOnMemoryWarning:(BOOL)arg1 ;
-(void)setRemoveAllObjectsOnEnteringBackground:(BOOL)arg1 ;
-(opaque_pthread_mutex_t)mutex;
-(void)setMutex:(opaque_pthread_mutex_t)arg1 ;
-(NSMutableDictionary *)costs;
-(void)setCosts:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)keysByKind;
-(void)setKeysByKind:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)costsByKind;
-(void)setCostsByKind:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)costsByKindSnapshot;
-(void)setCostsByKindSnapshot:(NSMutableDictionary *)arg1 ;
-(void)enumerateObjectsWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeAllObjects;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)objectForKey:(id)arg1 ;
-(NSMutableDictionary *)dictionary;
-(void)removeObjectForKey:(id)arg1 ;
-(void)lock;
-(void)unlock;
-(void)setOperationQueue:(PINOperationQueue *)arg1 ;
-(PINOperationQueue *)operationQueue;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)metadata;
-(void)setMetadata:(NSMutableDictionary *)arg1 ;
-(void)setDates:(NSMutableDictionary *)arg1 ;
-(id)initWithOperationQueue:(id)arg1 ;
-(NSMutableDictionary *)dates;
-(id)objectForKey:(id)arg1 metadata:(out id*)arg2 ;
-(BOOL)containsObjectForKey:(id)arg1 ;
@end
