/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SCSpectaclesCache : NSObject {

	NSString* _userId;

}

@property (nonatomic,copy) NSString * userId;              //@synthesize userId=_userId - In the implementation block
+(id)_directoryForUserId:(id)arg1 ;
+(id)lagunaDirectory;
+(void)clearCacheExceptUserId:(id)arg1 ;
+(id)cachedUUID;
+(id)idleAnalyticsDirectory;
+(id)logDirectory;
-(id)initWithUserId:(id)arg1 ;
-(void)_createCacheIfNecessary;
-(id)userDirectory;
-(id)URLForCacheFileWithSuffix:(id)arg1 ;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
@end

