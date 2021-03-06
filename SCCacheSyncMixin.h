/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCCacheSyncMixin <NSObject>
@required
-(id)syncGetObjectForKey:(id)arg1 dataDecoding:(/*^block*/id)arg2 resetExpiration:(id)arg3 whenLessThanDelta:(double)arg4 returnExpired:(BOOL)arg5;
-(BOOL)syncSetObject:(id)arg1 dataEncoding:(/*^block*/id)arg2 forKey:(id)arg3 expiration:(id)arg4;
-(id)syncGetObjectForKey:(id)arg1 dataDecoding:(/*^block*/id)arg2;
-(id)syncGetObjectForKey:(id)arg1 dataDecoding:(/*^block*/id)arg2 resetExpiration:(id)arg3 whenLessThanDelta:(double)arg4;

@end

