/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSerengetiRegistryCache.h>
@class SGTIGetRegistryResponse, NSDate, NSString;


@protocol SCSerengetiRegistryCache <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) SGTIGetRegistryResponse * cachedResponse; 
@property (nonatomic,copy,readonly) NSDate * fetchDate; 
@property (nonatomic,copy,readonly) NSString * registryId; 
@required
-(NSString *)registryId;
-(SGTIGetRegistryResponse *)cachedResponse;
-(NSDate *)fetchDate;

@end


@class SGTIGetRegistryResponse, NSDate, NSString;

@interface SCSerengetiRegistryCache : NSObject <SCSerengetiRegistryCache> {

	SGTIGetRegistryResponse* _cachedResponse;
	NSDate* _fetchDate;
	NSString* _registryId;

}

@property (nonatomic,copy,readonly) SGTIGetRegistryResponse * cachedResponse;              //@synthesize cachedResponse=_cachedResponse - In the implementation block
@property (nonatomic,copy,readonly) NSDate * fetchDate;                                    //@synthesize fetchDate=_fetchDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * registryId;                                 //@synthesize registryId=_registryId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(NSString *)registryId;
-(id)initWithCachedResponse:(id)arg1 fetchDate:(id)arg2 registryId:(id)arg3 ;
-(SGTIGetRegistryResponse *)cachedResponse;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)fetchDate;
@end
