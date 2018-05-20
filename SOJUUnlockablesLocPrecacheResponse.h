/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:57 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUUnlockablesLocPrecacheResponse.h>
@class NSString, SOJUUnlockablesFencedUnlockablesCache, SOJUUnlockablesPersonalUnlockablesCache, SOJUUnlockablesCountryUnlockablesCache, SOJUUnlockablesPrecacheConfiguration, SOJUUnlockablesPrecacheRegions, SOJULocationResponse;


@protocol SOJUUnlockablesLocPrecacheResponse <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * precacheStatus; 
@property (nonatomic,copy,readonly) SOJUUnlockablesFencedUnlockablesCache * fencedUnlockablesCache; 
@property (nonatomic,copy,readonly) SOJUUnlockablesPersonalUnlockablesCache * personalUnlockablesCache; 
@property (nonatomic,copy,readonly) SOJUUnlockablesCountryUnlockablesCache * countryUnlockablesCache; 
@property (nonatomic,copy,readonly) SOJUUnlockablesPrecacheConfiguration * precacheConfiguration; 
@property (nonatomic,copy,readonly) SOJUUnlockablesPrecacheRegions * precacheRegions; 
@property (nonatomic,copy,readonly) SOJULocationResponse * liveLocData; 
@required
-(NSString *)precacheStatus;
-(SOJUUnlockablesFencedUnlockablesCache *)fencedUnlockablesCache;
-(SOJUUnlockablesPersonalUnlockablesCache *)personalUnlockablesCache;
-(SOJUUnlockablesCountryUnlockablesCache *)countryUnlockablesCache;
-(SOJUUnlockablesPrecacheConfiguration *)precacheConfiguration;
-(SOJUUnlockablesPrecacheRegions *)precacheRegions;
-(SOJULocationResponse *)liveLocData;

@end


@class NSString, SOJUUnlockablesFencedUnlockablesCache, SOJUUnlockablesPersonalUnlockablesCache, SOJUUnlockablesCountryUnlockablesCache, SOJUUnlockablesPrecacheConfiguration, SOJUUnlockablesPrecacheRegions, SOJULocationResponse;

@interface SOJUUnlockablesLocPrecacheResponse : NSObject <SOJUUnlockablesLocPrecacheResponse> {

	NSString* _precacheStatus;
	SOJUUnlockablesFencedUnlockablesCache* _fencedUnlockablesCache;
	SOJUUnlockablesPersonalUnlockablesCache* _personalUnlockablesCache;
	SOJUUnlockablesCountryUnlockablesCache* _countryUnlockablesCache;
	SOJUUnlockablesPrecacheConfiguration* _precacheConfiguration;
	SOJUUnlockablesPrecacheRegions* _precacheRegions;
	SOJULocationResponse* _liveLocData;

}

@property (nonatomic,copy,readonly) NSString * precacheStatus;                                                       //@synthesize precacheStatus=_precacheStatus - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesFencedUnlockablesCache * fencedUnlockablesCache;                  //@synthesize fencedUnlockablesCache=_fencedUnlockablesCache - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesPersonalUnlockablesCache * personalUnlockablesCache;              //@synthesize personalUnlockablesCache=_personalUnlockablesCache - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesCountryUnlockablesCache * countryUnlockablesCache;                //@synthesize countryUnlockablesCache=_countryUnlockablesCache - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesPrecacheConfiguration * precacheConfiguration;                    //@synthesize precacheConfiguration=_precacheConfiguration - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesPrecacheRegions * precacheRegions;                                //@synthesize precacheRegions=_precacheRegions - In the implementation block
@property (nonatomic,copy,readonly) SOJULocationResponse * liveLocData;                                              //@synthesize liveLocData=_liveLocData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)toJson;
-(long long)precacheStatusEnum;
-(NSString *)precacheStatus;
-(SOJUUnlockablesFencedUnlockablesCache *)fencedUnlockablesCache;
-(SOJUUnlockablesPersonalUnlockablesCache *)personalUnlockablesCache;
-(SOJUUnlockablesCountryUnlockablesCache *)countryUnlockablesCache;
-(SOJUUnlockablesPrecacheConfiguration *)precacheConfiguration;
-(SOJUUnlockablesPrecacheRegions *)precacheRegions;
-(SOJULocationResponse *)liveLocData;
-(id)initWithPrecacheStatus:(id)arg1 fencedUnlockablesCache:(id)arg2 personalUnlockablesCache:(id)arg3 countryUnlockablesCache:(id)arg4 precacheConfiguration:(id)arg5 precacheRegions:(id)arg6 liveLocData:(id)arg7 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
@end

