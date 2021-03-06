/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCCraftResourceManagerConfiguration : NSObject <NSCopying> {

	BOOL _shouldAlwaysDownloadNewStyles;
	BOOL _isGCSResourceFetcherDevMode;
	NSString* _projectName;
	NSString* _styleListJsonFileName;
	long long _styleListRefreshInterval;

}

@property (nonatomic,copy,readonly) NSString * projectName;                        //@synthesize projectName=_projectName - In the implementation block
@property (nonatomic,copy,readonly) NSString * styleListJsonFileName;              //@synthesize styleListJsonFileName=_styleListJsonFileName - In the implementation block
@property (nonatomic,readonly) long long styleListRefreshInterval;                 //@synthesize styleListRefreshInterval=_styleListRefreshInterval - In the implementation block
@property (nonatomic,readonly) BOOL shouldAlwaysDownloadNewStyles;                 //@synthesize shouldAlwaysDownloadNewStyles=_shouldAlwaysDownloadNewStyles - In the implementation block
@property (nonatomic,readonly) BOOL isGCSResourceFetcherDevMode;                   //@synthesize isGCSResourceFetcherDevMode=_isGCSResourceFetcherDevMode - In the implementation block
-(id)initWithProjectName:(id)arg1 styleListJsonFileName:(id)arg2 styleListRefreshInterval:(long long)arg3 shouldAlwaysDownloadNewStyles:(BOOL)arg4 isGCSResourceFetcherDevMode:(BOOL)arg5 ;
-(NSString *)projectName;
-(id)resourceManagerQueueName;
-(BOOL)isGCSResourceFetcherDevMode;
-(BOOL)shouldAlwaysDownloadNewStyles;
-(id)styleListUpdateTimeKey;
-(NSString *)styleListJsonFileName;
-(long long)styleListRefreshInterval;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

