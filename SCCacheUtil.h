/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCCacheUtil : NSObject
+(id)prepareScopedDiskCacheInstance:(id)arg1 baseDirectory:(id)arg2 evictPolicy:(/*^block*/id)arg3 ;
+(id)prepareDiskCacheInstance:(id)arg1 evictPolicy:(/*^block*/id)arg2 ;
+(void)forceUserSessionDataRemoval:(id)arg1 ;
+(id)rootSCCachePath;
+(id)cacheURLForName:(id)arg1 ;
+(/*^block*/id)diskCacheSerializer;
+(/*^block*/id)diskCacheDeserializer;
+(id)_scopedCacheURLForName:(id)arg1 baseDirectory:(id)arg2 ;
+(BOOL)_migrateDiskCache:(id)arg1 to:(id)arg2 ;
+(void)migrateUserScoped:(id)arg1 userScopedBaseDirectory:(id)arg2 toGlobalScoped:(id)arg3 ;
@end

