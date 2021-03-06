/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCSearchMiniProfileExtraLoggingData : NSObject <NSCopying> {

	NSString* _searchSessionId;
	NSString* _queryUUID;
	NSString* _sectionType;
	NSString* _resultRankingId;

}

@property (nonatomic,copy,readonly) NSString * searchSessionId;              //@synthesize searchSessionId=_searchSessionId - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryUUID;                    //@synthesize queryUUID=_queryUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * sectionType;                  //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * resultRankingId;              //@synthesize resultRankingId=_resultRankingId - In the implementation block
-(NSString *)searchSessionId;
-(id)initWithSearchSessionId:(id)arg1 queryUUID:(id)arg2 sectionType:(id)arg3 resultRankingId:(id)arg4 ;
-(NSString *)resultRankingId;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)sectionType;
-(NSString *)queryUUID;
@end

