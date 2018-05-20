/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUGalleryServletGetUploadUrlsResponse.h>
@class NSNumber, NSString, SOJUGalleryServletQuota, NSArray;


@protocol SOJUGalleryServletGetUploadUrlsResponse <NSObject,NSCoding,NSCopying,SOJUGalleryServletBaseResponse>
@property (nonatomic,copy,readonly) NSNumber * serviceStatusCode; 
@property (nonatomic,copy,readonly) NSString * userString; 
@property (nonatomic,copy,readonly) NSNumber * backoffTime; 
@property (nonatomic,copy,readonly) NSString * debugInfo; 
@property (nonatomic,copy,readonly) SOJUGalleryServletQuota * quota; 
@property (nonatomic,copy,readonly) NSNumber * totalEntryCount; 
@property (nonatomic,copy,readonly) NSArray * urls; 
@property (nonatomic,copy,readonly) NSString * storageType; 
@required
-(NSNumber *)backoffTime;
-(NSNumber *)serviceStatusCode;
-(NSNumber *)totalEntryCount;
-(SOJUGalleryServletQuota *)quota;
-(NSArray *)urls;
-(NSString *)userString;
-(NSString *)storageType;
-(NSString *)debugInfo;

@end


@class NSNumber, NSString, SOJUGalleryServletQuota, NSArray;

@interface SOJUGalleryServletGetUploadUrlsResponse : NSObject <SOJUGalleryServletGetUploadUrlsResponse> {

	NSNumber* _serviceStatusCode;
	NSString* _userString;
	NSNumber* _backoffTime;
	NSString* _debugInfo;
	SOJUGalleryServletQuota* _quota;
	NSNumber* _totalEntryCount;
	NSArray* _urls;
	NSString* _storageType;

}

@property (nonatomic,copy,readonly) NSNumber * serviceStatusCode;                 //@synthesize serviceStatusCode=_serviceStatusCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * userString;                        //@synthesize userString=_userString - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * backoffTime;                       //@synthesize backoffTime=_backoffTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * debugInfo;                         //@synthesize debugInfo=_debugInfo - In the implementation block
@property (nonatomic,copy,readonly) SOJUGalleryServletQuota * quota;              //@synthesize quota=_quota - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * totalEntryCount;                   //@synthesize totalEntryCount=_totalEntryCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * urls;                               //@synthesize urls=_urls - In the implementation block
@property (nonatomic,copy,readonly) NSString * storageType;                       //@synthesize storageType=_storageType - In the implementation block
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
-(long long)storageTypeEnum;
-(int)serviceStatusCodeValue;
-(long long)serviceStatusCodeEnum;
-(int)totalEntryCountValue;
-(NSNumber *)serviceStatusCode;
-(NSNumber *)totalEntryCount;
-(id)initWithServiceStatusCode:(id)arg1 userString:(id)arg2 backoffTime:(id)arg3 debugInfo:(id)arg4 quota:(id)arg5 totalEntryCount:(id)arg6 urls:(id)arg7 storageType:(id)arg8 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(SOJUGalleryServletQuota *)quota;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)urls;
-(NSString *)userString;
-(id)toDictionary;
-(NSString *)storageType;
-(NSString *)debugInfo;
@end

