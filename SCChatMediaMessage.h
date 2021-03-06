/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCBaseMediaMessage.h>
#import <Snapchat/ArchivedMediaMessage.h>

@class Media, NSString;

@interface SCChatMediaMessage : SCBaseMediaMessage <ArchivedMediaMessage> {

	BOOL _isZipped;
	BOOL _isCustomSticker;
	long long _type;
	Media* _contentMedia;
	Media* _thumbnailMedia;
	Media* _overlayMedia;
	NSString* _bodyType;

}

@property (assign,nonatomic) BOOL isZipped;                         //@synthesize isZipped=_isZipped - In the implementation block
@property (assign,nonatomic) BOOL isCustomSticker;                  //@synthesize isCustomSticker=_isCustomSticker - In the implementation block
@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) Media * contentMedia;                  //@synthesize contentMedia=_contentMedia - In the implementation block
@property (nonatomic,retain) Media * thumbnailMedia;                //@synthesize thumbnailMedia=_thumbnailMedia - In the implementation block
@property (nonatomic,retain) Media * overlayMedia;                  //@synthesize overlayMedia=_overlayMedia - In the implementation block
@property (nonatomic,copy) NSString * bodyType;                     //@synthesize bodyType=_bodyType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isZipped;
-(void)setIsZipped:(BOOL)arg1 ;
-(Media *)thumbnailMedia;
-(void)updateWithMessage:(id)arg1 ;
-(BOOL)isCustomSticker;
-(BOOL)containsVideo;
-(Media *)overlayMedia;
-(id)videoFilename;
-(void)overlayImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)sendJSON;
-(void)setIsCustomSticker:(BOOL)arg1 ;
-(void)setOverlayMedia:(Media *)arg1 ;
-(BOOL)isVideoWithSound;
-(void)videoProcessingDidSucceedForSnapVideoFilter:(id)arg1 data:(id)arg2 ;
-(id)initWithUsername:(id)arg1 dictionary:(id)arg2 ;
-(Media *)contentMedia;
-(id)initWithLastChatAction:(id)arg1 write:(BOOL)arg2 username:(id)arg3 recipient:(id)arg4 ;
-(void)removeMediaFromCache;
-(id)initWithSender:(id)arg1 recipient:(id)arg2 ;
-(long long)scaMessageType;
-(BOOL)isMediaUnarchived;
-(void)imageFromCache:(/*^block*/id)arg1 ;
-(id)logEventName;
-(void)imageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)imageMedia;
-(id)mediaIdForMedia:(id)arg1 ;
-(/*^block*/id)uploadSuccessBlock;
-(/*^block*/id)uploadFailureBlock;
-(BOOL)isMediaDataLoadedInCache;
-(BOOL)videoExistsOnDisk;
-(BOOL)isVideoWithNoSound;
-(BOOL)isVideoLaguna;
-(BOOL)isPsychomantis;
-(void)unarchiveMediaData:(/*^block*/id)arg1 ;
-(void)saveMediaToDisk:(id)arg1 overlayData:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)generateAndSaveVideoThumbnailWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)imageProcessingDidSucceedForMedia:(id)arg1 ;
-(id)trackingMediaTypeForMedia:(id)arg1 ;
-(void)setThumbnailMedia:(Media *)arg1 ;
-(void)setContentMedia:(Media *)arg1 ;
-(void)didUploadSuccess;
-(long long)scaMediaType;
-(void)_imageFromCacheAfterUnarchivingMediaWithCompletion:(/*^block*/id)arg1 ;
-(void)_removeMediaFromCacheAndMarkAsFailedToLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(BOOL)isVideo;
-(void)setBodyType:(NSString *)arg1 ;
-(NSString *)bodyType;
-(long long)mediaType;
-(id)videoURL;
-(void)uploadData;
-(long long)messageType;
-(BOOL)isImage;
-(void)upload;
@end

