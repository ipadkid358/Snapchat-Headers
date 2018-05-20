/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUGalleryServletGetSnapsRequest.h>
@class NSArray, NSNumber;


@protocol SOJUGalleryServletGetSnapsRequest <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSArray * snapIds; 
@property (nonatomic,copy,readonly) NSNumber * overlayData; 
@property (nonatomic,copy,readonly) NSNumber * mediaUrl; 
@property (nonatomic,copy,readonly) NSNumber * thumbnailUrl; 
@property (nonatomic,copy,readonly) NSNumber * overlayImageUrl; 
@property (nonatomic,copy,readonly) NSNumber * snapTags; 
@property (nonatomic,copy,readonly) NSNumber * snapLocation; 
@property (nonatomic,copy,readonly) NSNumber * encryption; 
@property (nonatomic,copy,readonly) NSNumber * miniThumbnailBytes; 
@property (nonatomic,copy,readonly) NSNumber * gzippedOverlayData; 
@property (nonatomic,copy,readonly) NSNumber * mediaFormat; 
@required
-(NSNumber *)thumbnailUrl;
-(NSArray *)snapIds;
-(NSNumber *)miniThumbnailBytes;
-(NSNumber *)mediaFormat;
-(NSNumber *)mediaUrl;
-(NSNumber *)overlayImageUrl;
-(NSNumber *)snapTags;
-(NSNumber *)overlayData;
-(NSNumber *)snapLocation;
-(NSNumber *)gzippedOverlayData;
-(NSNumber *)encryption;

@end


@class NSArray, NSNumber, NSString;

@interface SOJUGalleryServletGetSnapsRequest : NSObject <SOJUGalleryServletGetSnapsRequest> {

	NSArray* _snapIds;
	NSNumber* _overlayData;
	NSNumber* _mediaUrl;
	NSNumber* _thumbnailUrl;
	NSNumber* _overlayImageUrl;
	NSNumber* _snapTags;
	NSNumber* _snapLocation;
	NSNumber* _encryption;
	NSNumber* _miniThumbnailBytes;
	NSNumber* _gzippedOverlayData;
	NSNumber* _mediaFormat;

}

@property (nonatomic,copy,readonly) NSArray * snapIds;                          //@synthesize snapIds=_snapIds - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * overlayData;                     //@synthesize overlayData=_overlayData - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * mediaUrl;                        //@synthesize mediaUrl=_mediaUrl - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * thumbnailUrl;                    //@synthesize thumbnailUrl=_thumbnailUrl - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * overlayImageUrl;                 //@synthesize overlayImageUrl=_overlayImageUrl - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * snapTags;                        //@synthesize snapTags=_snapTags - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * snapLocation;                    //@synthesize snapLocation=_snapLocation - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * encryption;                      //@synthesize encryption=_encryption - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * miniThumbnailBytes;              //@synthesize miniThumbnailBytes=_miniThumbnailBytes - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * gzippedOverlayData;              //@synthesize gzippedOverlayData=_gzippedOverlayData - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * mediaFormat;                     //@synthesize mediaFormat=_mediaFormat - In the implementation block
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
-(NSNumber *)thumbnailUrl;
-(NSArray *)snapIds;
-(NSNumber *)miniThumbnailBytes;
-(NSNumber *)mediaFormat;
-(BOOL)mediaUrlValue;
-(BOOL)thumbnailUrlValue;
-(BOOL)overlayImageUrlValue;
-(BOOL)miniThumbnailBytesValue;
-(BOOL)snapTagsValue;
-(BOOL)mediaFormatValue;
-(NSNumber *)mediaUrl;
-(NSNumber *)overlayImageUrl;
-(NSNumber *)snapTags;
-(BOOL)overlayDataValue;
-(BOOL)snapLocationValue;
-(BOOL)encryptionValue;
-(BOOL)gzippedOverlayDataValue;
-(NSNumber *)overlayData;
-(NSNumber *)snapLocation;
-(NSNumber *)gzippedOverlayData;
-(id)initWithSnapIds:(id)arg1 overlayData:(id)arg2 mediaUrl:(id)arg3 thumbnailUrl:(id)arg4 overlayImageUrl:(id)arg5 snapTags:(id)arg6 snapLocation:(id)arg7 encryption:(id)arg8 miniThumbnailBytes:(id)arg9 gzippedOverlayData:(id)arg10 mediaFormat:(id)arg11 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
-(NSNumber *)encryption;
@end

