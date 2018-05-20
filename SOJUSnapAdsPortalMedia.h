/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:56 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUSnapAdsPortalMedia.h>
@class NSString;


@protocol SOJUSnapAdsPortalMedia <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * idValue; 
@property (nonatomic,copy,readonly) NSString * adAccountId; 
@property (nonatomic,copy,readonly) NSString * contentType; 
@property (nonatomic,copy,readonly) NSString * filename; 
@property (nonatomic,copy,readonly) NSString * downloadUrl; 
@property (nonatomic,copy,readonly) NSString * mediaStatus; 
@property (nonatomic,copy,readonly) NSString * publishStatus; 
@required
-(NSString *)idValue;
-(NSString *)adAccountId;
-(NSString *)downloadUrl;
-(NSString *)mediaStatus;
-(NSString *)publishStatus;
-(NSString *)filename;
-(NSString *)contentType;

@end


@class NSString;

@interface SOJUSnapAdsPortalMedia : NSObject <SOJUSnapAdsPortalMedia> {

	NSString* _idValue;
	NSString* _adAccountId;
	NSString* _contentType;
	NSString* _filename;
	NSString* _downloadUrl;
	NSString* _mediaStatus;
	NSString* _publishStatus;

}

@property (nonatomic,copy,readonly) NSString * idValue;                    //@synthesize idValue=_idValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * adAccountId;                //@synthesize adAccountId=_adAccountId - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentType;                //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy,readonly) NSString * filename;                   //@synthesize filename=_filename - In the implementation block
@property (nonatomic,copy,readonly) NSString * downloadUrl;                //@synthesize downloadUrl=_downloadUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaStatus;                //@synthesize mediaStatus=_mediaStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * publishStatus;              //@synthesize publishStatus=_publishStatus - In the implementation block
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
-(NSString *)idValue;
-(NSString *)adAccountId;
-(long long)mediaStatusEnum;
-(long long)publishStatusEnum;
-(NSString *)downloadUrl;
-(NSString *)mediaStatus;
-(NSString *)publishStatus;
-(id)initWithIdValue:(id)arg1 adAccountId:(id)arg2 contentType:(id)arg3 filename:(id)arg4 downloadUrl:(id)arg5 mediaStatus:(id)arg6 publishStatus:(id)arg7 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)filename;
-(id)toDictionary;
-(NSString *)contentType;
@end

