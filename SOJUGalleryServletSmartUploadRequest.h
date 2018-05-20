/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUGalleryServletSmartUploadRequest.h>
@class NSString, NSNumber;


@protocol SOJUGalleryServletSmartUploadRequest <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * mediaId; 
@property (nonatomic,copy,readonly) NSString * mediaUrlDeprecated; 
@property (nonatomic,copy,readonly) NSNumber * mediaType; 
@property (nonatomic,copy,readonly) NSString * mediaKey; 
@property (nonatomic,copy,readonly) NSString * mediaIv; 
@property (nonatomic,copy,readonly) NSString * usernameDeprecated; 
@property (nonatomic,copy,readonly) NSString * snapId; 
@required
-(NSString *)snapId;
-(NSString *)mediaIv;
-(NSString *)mediaUrlDeprecated;
-(NSString *)usernameDeprecated;
-(NSNumber *)mediaType;
-(NSString *)mediaKey;
-(NSString *)mediaId;

@end


@class NSString, NSNumber;

@interface SOJUGalleryServletSmartUploadRequest : NSObject <SOJUGalleryServletSmartUploadRequest> {

	NSString* _mediaId;
	NSString* _mediaUrlDeprecated;
	NSNumber* _mediaType;
	NSString* _mediaKey;
	NSString* _mediaIv;
	NSString* _usernameDeprecated;
	NSString* _snapId;

}

@property (nonatomic,copy,readonly) NSString * mediaId;                         //@synthesize mediaId=_mediaId - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaUrlDeprecated;              //@synthesize mediaUrlDeprecated=_mediaUrlDeprecated - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * mediaType;                       //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaKey;                        //@synthesize mediaKey=_mediaKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaIv;                         //@synthesize mediaIv=_mediaIv - In the implementation block
@property (nonatomic,copy,readonly) NSString * usernameDeprecated;              //@synthesize usernameDeprecated=_usernameDeprecated - In the implementation block
@property (nonatomic,copy,readonly) NSString * snapId;                          //@synthesize snapId=_snapId - In the implementation block
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
-(NSString *)snapId;
-(int)mediaTypeValue;
-(NSString *)mediaIv;
-(NSString *)mediaUrlDeprecated;
-(NSString *)usernameDeprecated;
-(id)initWithMediaId:(id)arg1 mediaUrlDeprecated:(id)arg2 mediaType:(id)arg3 mediaKey:(id)arg4 mediaIv:(id)arg5 usernameDeprecated:(id)arg6 snapId:(id)arg7 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
-(NSNumber *)mediaType;
-(NSString *)mediaKey;
-(NSString *)mediaId;
@end

