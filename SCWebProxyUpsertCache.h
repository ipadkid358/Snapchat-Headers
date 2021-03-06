/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCCache, SCPerforming;
@class NSMutableDictionary;

@interface SCWebProxyUpsertCache : NSObject {

	id<SCCache> _cache;
	id<SCPerforming> _performer;
	NSMutableDictionary* _performersByKey;
	NSMutableDictionary* _performerReferenceCountsByKey;

}
-(void)objectForKey:(id)arg1 dataDecoding:(/*^block*/id)arg2 block:(/*^block*/id)arg3 ;
-(void)setObject:(id)arg1 dataEncoding:(/*^block*/id)arg2 forKey:(id)arg3 expiration:(id)arg4 block:(/*^block*/id)arg5 ;
-(void)upsertObjectForKey:(id)arg1 dataDecoding:(/*^block*/id)arg2 dataEncoding:(/*^block*/id)arg3 dataUpdating:(/*^block*/id)arg4 expiration:(id)arg5 completionQueue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_objectForKey:(id)arg1 dataDecoding:(/*^block*/id)arg2 block:(/*^block*/id)arg3 ;
-(void)_setObject:(id)arg1 dataEncoding:(/*^block*/id)arg2 forKey:(id)arg3 expiration:(id)arg4 block:(/*^block*/id)arg5 ;
-(void)_upsertObjectForKey:(id)arg1 dataDecoding:(/*^block*/id)arg2 dataEncoding:(/*^block*/id)arg3 dataUpdating:(/*^block*/id)arg4 expiration:(id)arg5 completionQueue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id)_acquirePerformerForKey:(id)arg1 ;
-(void)_releasePerformerForKey:(id)arg1 ;
-(id)initWithCache:(id)arg1 ;
@end

