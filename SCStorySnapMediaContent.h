/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCStorySnapMediaContent.h>
@class NSString, NSDate, NSNumber, NSData, SOJUAudioStitch;


@protocol SCStorySnapMediaContent <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * storySnapId; 
@property (nonatomic,copy,readonly) NSDate * storyTimestamp; 
@property (nonatomic,copy,readonly) NSDate * storyExpirationDate; 
@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,copy,readonly) NSString * mediaId; 
@property (nonatomic,copy,readonly) NSString * mediaKey; 
@property (nonatomic,copy,readonly) NSString * mediaIv; 
@property (nonatomic,copy,readonly) NSString * storyCacheMediaId; 
@property (nonatomic,copy,readonly) NSString * captionText; 
@property (nonatomic,copy,readonly) NSString * attachmentUrl; 
@property (nonatomic,copy,readonly) NSString * venueId; 
@property (nonatomic,copy,readonly) NSNumber * captionScreenPosition; 
@property (nonatomic,copy,readonly) NSNumber * captionOrientation; 
@property (nonatomic,readonly) BOOL overlayPresent; 
@property (nonatomic,readonly) BOOL operaShouldUseFraming; 
@property (nonatomic,copy,readonly) NSString * operaDisplayName; 
@property (nonatomic,copy,readonly) NSString * operaDisplaySubTitle; 
@property (nonatomic,copy,readonly) NSData * contextHint; 
@property (nonatomic,copy,readonly) SOJUAudioStitch * audioStitch; 
@property (nonatomic,readonly) long long loadState; 
@required
-(NSString *)mediaIv;
-(NSString *)venueId;
-(NSData *)contextHint;
-(SOJUAudioStitch *)audioStitch;
-(NSString *)attachmentUrl;
-(NSString *)storySnapId;
-(NSDate *)storyExpirationDate;
-(NSDate *)storyTimestamp;
-(NSString *)storyCacheMediaId;
-(NSNumber *)captionScreenPosition;
-(NSNumber *)captionOrientation;
-(BOOL)overlayPresent;
-(BOOL)operaShouldUseFraming;
-(NSString *)operaDisplayName;
-(NSString *)operaDisplaySubTitle;
-(long long)loadState;
-(long long)mediaType;
-(NSString *)mediaKey;
-(NSString *)captionText;
-(NSString *)mediaId;

@end


@class NSString, NSDate, NSNumber, NSData, SOJUAudioStitch;

@interface SCStorySnapMediaContent : NSObject <SCStorySnapMediaContent> {

	BOOL _overlayPresent;
	BOOL _operaShouldUseFraming;
	NSString* _storySnapId;
	NSDate* _storyTimestamp;
	NSDate* _storyExpirationDate;
	long long _mediaType;
	NSString* _mediaId;
	NSString* _mediaKey;
	NSString* _mediaIv;
	NSString* _storyCacheMediaId;
	NSString* _captionText;
	NSString* _attachmentUrl;
	NSString* _venueId;
	NSNumber* _captionScreenPosition;
	NSNumber* _captionOrientation;
	NSString* _operaDisplayName;
	NSString* _operaDisplaySubTitle;
	NSData* _contextHint;
	SOJUAudioStitch* _audioStitch;
	long long _loadState;

}

@property (nonatomic,copy,readonly) NSString * storySnapId;                        //@synthesize storySnapId=_storySnapId - In the implementation block
@property (nonatomic,copy,readonly) NSDate * storyTimestamp;                       //@synthesize storyTimestamp=_storyTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSDate * storyExpirationDate;                  //@synthesize storyExpirationDate=_storyExpirationDate - In the implementation block
@property (nonatomic,readonly) long long mediaType;                                //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaId;                            //@synthesize mediaId=_mediaId - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaKey;                           //@synthesize mediaKey=_mediaKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaIv;                            //@synthesize mediaIv=_mediaIv - In the implementation block
@property (nonatomic,copy,readonly) NSString * storyCacheMediaId;                  //@synthesize storyCacheMediaId=_storyCacheMediaId - In the implementation block
@property (nonatomic,copy,readonly) NSString * captionText;                        //@synthesize captionText=_captionText - In the implementation block
@property (nonatomic,copy,readonly) NSString * attachmentUrl;                      //@synthesize attachmentUrl=_attachmentUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * venueId;                            //@synthesize venueId=_venueId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * captionScreenPosition;              //@synthesize captionScreenPosition=_captionScreenPosition - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * captionOrientation;                 //@synthesize captionOrientation=_captionOrientation - In the implementation block
@property (nonatomic,readonly) BOOL overlayPresent;                                //@synthesize overlayPresent=_overlayPresent - In the implementation block
@property (nonatomic,readonly) BOOL operaShouldUseFraming;                         //@synthesize operaShouldUseFraming=_operaShouldUseFraming - In the implementation block
@property (nonatomic,copy,readonly) NSString * operaDisplayName;                   //@synthesize operaDisplayName=_operaDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * operaDisplaySubTitle;               //@synthesize operaDisplaySubTitle=_operaDisplaySubTitle - In the implementation block
@property (nonatomic,copy,readonly) NSData * contextHint;                          //@synthesize contextHint=_contextHint - In the implementation block
@property (nonatomic,copy,readonly) SOJUAudioStitch * audioStitch;                 //@synthesize audioStitch=_audioStitch - In the implementation block
@property (nonatomic,readonly) long long loadState;                                //@synthesize loadState=_loadState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(id)mediaIdForCacheId:(id)arg1 ;
+(id)createWithSearchDynamicStorySnap:(id)arg1 ;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setBool:(BOOL)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(NSString *)mediaIv;
-(NSString *)venueId;
-(NSData *)contextHint;
-(SOJUAudioStitch *)audioStitch;
-(NSString *)attachmentUrl;
-(NSString *)storySnapId;
-(BOOL)containsVideo;
-(void)saveDataToCache:(id)arg1 mediaCategory:(long long)arg2 alreadyEncrypted:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)allCacheIds;
-(void)deleteVideoFileIfNecessary;
-(NSDate *)storyExpirationDate;
-(BOOL)isMediaLoadedInCache;
-(void)deleteMediaFromCache;
-(BOOL)_isMediaInCacheForType:(long long)arg1 ;
-(BOOL)_videoExistsOnDisk;
-(id)cacheIdForCacheItemType:(long long)arg1 ;
-(id)videoFilename;
-(void)_generateAndSaveVideoThumbnailWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_dataToImage:(id)arg1 ;
-(BOOL)isMediaReadyToDisplay;
-(long long)_thumbnailCacheItemType;
-(void)unarchiveBundleWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)containsSpectacles;
-(void)overlayImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)thumbnailImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSDate *)storyTimestamp;
-(NSString *)storyCacheMediaId;
-(NSNumber *)captionScreenPosition;
-(NSNumber *)captionOrientation;
-(BOOL)overlayPresent;
-(BOOL)operaShouldUseFraming;
-(NSString *)operaDisplayName;
-(NSString *)operaDisplaySubTitle;
-(id)initWithStorySnapId:(id)arg1 storyTimestamp:(id)arg2 storyExpirationDate:(id)arg3 mediaType:(long long)arg4 mediaId:(id)arg5 mediaKey:(id)arg6 mediaIv:(id)arg7 storyCacheMediaId:(id)arg8 captionText:(id)arg9 attachmentUrl:(id)arg10 venueId:(id)arg11 captionScreenPosition:(id)arg12 captionOrientation:(id)arg13 overlayPresent:(BOOL)arg14 operaShouldUseFraming:(BOOL)arg15 operaDisplayName:(id)arg16 operaDisplaySubTitle:(id)arg17 contextHint:(id)arg18 audioStitch:(id)arg19 loadState:(long long)arg20 ;
-(void)saveDataWithCacheItemType:(id)arg1 mediaCategory:(long long)arg2 ;
-(void)fetchImageFromCacheWithMediaCategory:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_fetchDataFromCacheWithMediaCategory:(long long)arg1 completionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_saveUnzippedDataToDisk:(id)arg1 overlayData:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_unzipMediaDataWithCompletion:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)loadState;
-(long long)mediaType;
-(id)videoURL;
-(id)fileManager;
-(NSString *)mediaKey;
-(NSString *)captionText;
-(NSString *)mediaId;
@end

