/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCChatMediaContent.h>
@class NSString, NSNumber, NSArray, SOJUSnapMetadata;


@protocol SCChatMediaContent <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * mediaId; 
@property (nonatomic,copy,readonly) NSString * key; 
@property (nonatomic,copy,readonly) NSString * iv; 
@property (nonatomic,copy,readonly) NSString * mediaUrl; 
@property (nonatomic,copy,readonly) NSString * broadcastMediaUrl; 
@property (nonatomic,copy,readonly) NSString * broadcastActionText; 
@property (nonatomic,copy,readonly) NSString * broadcastSecondaryText; 
@property (nonatomic,copy,readonly) NSString * broadcastUrl; 
@property (nonatomic,readonly) BOOL isBroadcast; 
@property (nonatomic,readonly) BOOL hidesBroadcastTimer; 
@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,readonly) long long mediaLoadState; 
@property (nonatomic,copy,readonly) NSNumber * width; 
@property (nonatomic,copy,readonly) NSNumber * height; 
@property (nonatomic,readonly) BOOL isZipped; 
@property (nonatomic,readonly) BOOL isCustomSticker; 
@property (nonatomic,copy,readonly) NSNumber * duration; 
@property (nonatomic,readonly) BOOL isInfiniteDuration; 
@property (nonatomic,copy,readonly) NSArray * snapAttachments; 
@property (nonatomic,copy,readonly) NSString * venueId; 
@property (nonatomic,copy,readonly) NSString * sourceId; 
@property (nonatomic,copy,readonly) SOJUSnapMetadata * snapMetadata; 
@property (nonatomic,readonly) long long mediaUploadState; 
@required
-(NSString *)mediaUrl;
-(NSArray *)snapAttachments;
-(SOJUSnapMetadata *)snapMetadata;
-(NSString *)broadcastMediaUrl;
-(NSString *)broadcastUrl;
-(NSString *)broadcastActionText;
-(NSString *)broadcastSecondaryText;
-(BOOL)isZipped;
-(NSString *)iv;
-(NSString *)venueId;
-(long long)mediaLoadState;
-(BOOL)isCustomSticker;
-(BOOL)isBroadcast;
-(BOOL)hidesBroadcastTimer;
-(long long)mediaUploadState;
-(NSNumber *)duration;
-(NSString *)key;
-(NSNumber *)width;
-(NSNumber *)height;
-(NSString *)sourceId;
-(BOOL)isInfiniteDuration;
-(long long)mediaType;
-(NSString *)mediaId;

@end


@class NSString, NSNumber, NSArray, SOJUSnapMetadata;

@interface SCChatMediaContent : NSObject <SCChatMediaContent> {

	BOOL _isBroadcast;
	BOOL _hidesBroadcastTimer;
	BOOL _isZipped;
	BOOL _isCustomSticker;
	BOOL _isInfiniteDuration;
	NSString* _mediaId;
	NSString* _key;
	NSString* _iv;
	NSString* _mediaUrl;
	NSString* _broadcastMediaUrl;
	NSString* _broadcastActionText;
	NSString* _broadcastSecondaryText;
	NSString* _broadcastUrl;
	long long _mediaType;
	long long _mediaLoadState;
	NSNumber* _width;
	NSNumber* _height;
	NSNumber* _duration;
	NSArray* _snapAttachments;
	NSString* _venueId;
	NSString* _sourceId;
	SOJUSnapMetadata* _snapMetadata;
	long long _mediaUploadState;

}

@property (nonatomic,copy,readonly) NSString * mediaId;                             //@synthesize mediaId=_mediaId - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                                 //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSString * iv;                                  //@synthesize iv=_iv - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaUrl;                            //@synthesize mediaUrl=_mediaUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * broadcastMediaUrl;                   //@synthesize broadcastMediaUrl=_broadcastMediaUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * broadcastActionText;                 //@synthesize broadcastActionText=_broadcastActionText - In the implementation block
@property (nonatomic,copy,readonly) NSString * broadcastSecondaryText;              //@synthesize broadcastSecondaryText=_broadcastSecondaryText - In the implementation block
@property (nonatomic,copy,readonly) NSString * broadcastUrl;                        //@synthesize broadcastUrl=_broadcastUrl - In the implementation block
@property (nonatomic,readonly) BOOL isBroadcast;                                    //@synthesize isBroadcast=_isBroadcast - In the implementation block
@property (nonatomic,readonly) BOOL hidesBroadcastTimer;                            //@synthesize hidesBroadcastTimer=_hidesBroadcastTimer - In the implementation block
@property (nonatomic,readonly) long long mediaType;                                 //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) long long mediaLoadState;                            //@synthesize mediaLoadState=_mediaLoadState - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * width;                               //@synthesize width=_width - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * height;                              //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) BOOL isZipped;                                       //@synthesize isZipped=_isZipped - In the implementation block
@property (nonatomic,readonly) BOOL isCustomSticker;                                //@synthesize isCustomSticker=_isCustomSticker - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * duration;                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL isInfiniteDuration;                             //@synthesize isInfiniteDuration=_isInfiniteDuration - In the implementation block
@property (nonatomic,copy,readonly) NSArray * snapAttachments;                      //@synthesize snapAttachments=_snapAttachments - In the implementation block
@property (nonatomic,copy,readonly) NSString * venueId;                             //@synthesize venueId=_venueId - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceId;                            //@synthesize sourceId=_sourceId - In the implementation block
@property (nonatomic,copy,readonly) SOJUSnapMetadata * snapMetadata;                //@synthesize snapMetadata=_snapMetadata - In the implementation block
@property (nonatomic,readonly) long long mediaUploadState;                          //@synthesize mediaUploadState=_mediaUploadState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(id)mediaIdForCacheId:(id)arg1 ;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setBool:(BOOL)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)trackingId;
-(NSString *)mediaUrl;
-(NSArray *)snapAttachments;
-(SOJUSnapMetadata *)snapMetadata;
-(NSString *)broadcastMediaUrl;
-(NSString *)broadcastUrl;
-(NSString *)broadcastActionText;
-(NSString *)broadcastSecondaryText;
-(BOOL)isZipped;
-(NSString *)iv;
-(NSString *)venueId;
-(long long)mediaLoadState;
-(BOOL)isCustomSticker;
-(BOOL)containsVideo;
-(void)saveDataToCache:(id)arg1 mediaCategory:(long long)arg2 alreadyEncrypted:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)allCacheIds;
-(void)deleteVideoFileIfNecessary;
-(BOOL)isMediaLoadedInCache;
-(void)deleteMediaFromCache;
-(BOOL)_isMediaInCacheForType:(long long)arg1 ;
-(BOOL)_isMediaReadyToDisplayThumbnailOptional:(BOOL)arg1 ;
-(BOOL)_videoExistsOnDisk;
-(id)cacheIdForCacheItemType:(long long)arg1 ;
-(void)saveMetadataDict:(id)arg1 ;
-(id)videoFilename;
-(void)_generateAndSaveVideoThumbnailWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_overlayImageWithCompletionQueue:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_dataToImage:(id)arg1 ;
-(void)fetchDataFromCacheWithMediaCategory:(long long)arg1 completionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchImageFromCacheWithMediaCategory:(long long)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_handleFetchMediaBundleFromCacheWithData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_saveUnzippedDataToDisk:(id)arg1 overlayData:(id)arg2 metadataDict:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)unzipMediaDataWithCompletion:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)isMediaReadyToDisplay;
-(long long)_thumbnailCacheItemType;
-(void)unarchiveBundleWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isMediaReadyToDisplayThumbnailOptional;
-(BOOL)isMediaOverlayLoadedInCache;
-(BOOL)containsSpectacles;
-(void)overlayImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)gifWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)thumbnailImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)checkAndCorrectMediaStateWithCache:(id)arg1 ;
-(BOOL)isBroadcast;
-(BOOL)hidesBroadcastTimer;
-(long long)mediaUploadState;
-(id)initWithMediaId:(id)arg1 key:(id)arg2 iv:(id)arg3 mediaUrl:(id)arg4 broadcastMediaUrl:(id)arg5 broadcastActionText:(id)arg6 broadcastSecondaryText:(id)arg7 broadcastUrl:(id)arg8 isBroadcast:(BOOL)arg9 hidesBroadcastTimer:(BOOL)arg10 mediaType:(long long)arg11 mediaLoadState:(long long)arg12 width:(id)arg13 height:(id)arg14 isZipped:(BOOL)arg15 isCustomSticker:(BOOL)arg16 duration:(id)arg17 isInfiniteDuration:(BOOL)arg18 snapAttachments:(id)arg19 venueId:(id)arg20 sourceId:(id)arg21 snapMetadata:(id)arg22 mediaUploadState:(long long)arg23 ;
-(BOOL)isGif;
-(BOOL)isVideoWithSound;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSNumber *)duration;
-(NSString *)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)width;
-(NSNumber *)height;
-(BOOL)isVideo;
-(NSString *)sourceId;
-(BOOL)isInfiniteDuration;
-(long long)mediaType;
-(id)videoURL;
-(id)fileManager;
-(BOOL)isImage;
-(NSString *)mediaId;
@end
