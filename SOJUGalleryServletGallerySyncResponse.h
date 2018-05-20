/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUGalleryServletGallerySyncResponse.h>
@class NSNumber, NSString, SOJUGalleryServletQuota, NSArray, SOJUGalleryServletGalleryUserSetting;


@protocol SOJUGalleryServletGallerySyncResponse <NSObject,NSCoding,NSCopying,SOJUGalleryServletBaseResponse>
@property (nonatomic,copy,readonly) NSNumber * serviceStatusCode; 
@property (nonatomic,copy,readonly) NSString * userString; 
@property (nonatomic,copy,readonly) NSNumber * backoffTime; 
@property (nonatomic,copy,readonly) NSString * debugInfo; 
@property (nonatomic,copy,readonly) SOJUGalleryServletQuota * quota; 
@property (nonatomic,copy,readonly) NSNumber * totalEntryCount; 
@property (nonatomic,copy,readonly) NSNumber * lastSeqnum; 
@property (nonatomic,copy,readonly) NSNumber * highestSeqnum; 
@property (nonatomic,copy,readonly) NSArray * entries; 
@property (nonatomic,copy,readonly) NSNumber * hasMore; 
@property (nonatomic,copy,readonly) SOJUGalleryServletGalleryUserSetting * userSettings; 
@property (nonatomic,copy,readonly) NSArray * defunctMedias; 
@property (nonatomic,copy,readonly) NSNumber * batchLowSeqnum; 
@property (nonatomic,copy,readonly) NSNumber * batchHighSeqnum; 
@property (nonatomic,copy,readonly) NSNumber * lowestSeqnum; 
@property (nonatomic,copy,readonly) NSString * syncToken; 
@required
-(NSNumber *)backoffTime;
-(NSNumber *)hasMore;
-(NSNumber *)serviceStatusCode;
-(NSNumber *)totalEntryCount;
-(NSNumber *)lastSeqnum;
-(NSNumber *)highestSeqnum;
-(NSArray *)defunctMedias;
-(NSNumber *)batchLowSeqnum;
-(NSNumber *)batchHighSeqnum;
-(NSNumber *)lowestSeqnum;
-(SOJUGalleryServletQuota *)quota;
-(NSArray *)entries;
-(NSString *)userString;
-(NSString *)syncToken;
-(SOJUGalleryServletGalleryUserSetting *)userSettings;
-(NSString *)debugInfo;

@end


@class NSNumber, NSString, SOJUGalleryServletQuota, NSArray, SOJUGalleryServletGalleryUserSetting;

@interface SOJUGalleryServletGallerySyncResponse : NSObject <SOJUGalleryServletGallerySyncResponse> {

	NSNumber* _serviceStatusCode;
	NSString* _userString;
	NSNumber* _backoffTime;
	NSString* _debugInfo;
	SOJUGalleryServletQuota* _quota;
	NSNumber* _totalEntryCount;
	NSNumber* _lastSeqnum;
	NSNumber* _highestSeqnum;
	NSArray* _entries;
	NSNumber* _hasMore;
	SOJUGalleryServletGalleryUserSetting* _userSettings;
	NSArray* _defunctMedias;
	NSNumber* _batchLowSeqnum;
	NSNumber* _batchHighSeqnum;
	NSNumber* _lowestSeqnum;
	NSString* _syncToken;

}

@property (nonatomic,copy,readonly) NSNumber * serviceStatusCode;                                     //@synthesize serviceStatusCode=_serviceStatusCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * userString;                                            //@synthesize userString=_userString - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * backoffTime;                                           //@synthesize backoffTime=_backoffTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * debugInfo;                                             //@synthesize debugInfo=_debugInfo - In the implementation block
@property (nonatomic,copy,readonly) SOJUGalleryServletQuota * quota;                                  //@synthesize quota=_quota - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * totalEntryCount;                                       //@synthesize totalEntryCount=_totalEntryCount - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * lastSeqnum;                                            //@synthesize lastSeqnum=_lastSeqnum - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * highestSeqnum;                                         //@synthesize highestSeqnum=_highestSeqnum - In the implementation block
@property (nonatomic,copy,readonly) NSArray * entries;                                                //@synthesize entries=_entries - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * hasMore;                                               //@synthesize hasMore=_hasMore - In the implementation block
@property (nonatomic,copy,readonly) SOJUGalleryServletGalleryUserSetting * userSettings;              //@synthesize userSettings=_userSettings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * defunctMedias;                                          //@synthesize defunctMedias=_defunctMedias - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * batchLowSeqnum;                                        //@synthesize batchLowSeqnum=_batchLowSeqnum - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * batchHighSeqnum;                                       //@synthesize batchHighSeqnum=_batchHighSeqnum - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * lowestSeqnum;                                          //@synthesize lowestSeqnum=_lowestSeqnum - In the implementation block
@property (nonatomic,copy,readonly) NSString * syncToken;                                             //@synthesize syncToken=_syncToken - In the implementation block
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
-(long long)backoffTimeValue;
-(NSNumber *)backoffTime;
-(BOOL)hasMoreValue;
-(NSNumber *)hasMore;
-(int)serviceStatusCodeValue;
-(long long)serviceStatusCodeEnum;
-(int)totalEntryCountValue;
-(NSNumber *)serviceStatusCode;
-(NSNumber *)totalEntryCount;
-(long long)lastSeqnumValue;
-(NSNumber *)lastSeqnum;
-(long long)highestSeqnumValue;
-(long long)batchLowSeqnumValue;
-(long long)batchHighSeqnumValue;
-(long long)lowestSeqnumValue;
-(NSNumber *)highestSeqnum;
-(NSArray *)defunctMedias;
-(NSNumber *)batchLowSeqnum;
-(NSNumber *)batchHighSeqnum;
-(NSNumber *)lowestSeqnum;
-(id)initWithServiceStatusCode:(id)arg1 userString:(id)arg2 backoffTime:(id)arg3 debugInfo:(id)arg4 quota:(id)arg5 totalEntryCount:(id)arg6 lastSeqnum:(id)arg7 highestSeqnum:(id)arg8 entries:(id)arg9 hasMore:(id)arg10 userSettings:(id)arg11 defunctMedias:(id)arg12 batchLowSeqnum:(id)arg13 batchHighSeqnum:(id)arg14 lowestSeqnum:(id)arg15 syncToken:(id)arg16 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(SOJUGalleryServletQuota *)quota;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)entries;
-(NSString *)userString;
-(id)toDictionary;
-(NSString *)syncToken;
-(SOJUGalleryServletGalleryUserSetting *)userSettings;
-(NSString *)debugInfo;
@end

