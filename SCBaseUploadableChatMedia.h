/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:41 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCUploadableMedia.h>
#import <Snapchat/SCRenderableMedia.h>
#import <Snapchat/SCChatMediaContentProvider.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSData, NSMutableArray, NSString, NSURL;

@interface SCBaseUploadableChatMedia : NSObject <SCUploadableMedia, SCRenderableMedia, SCChatMediaContentProvider, NSCoding> {

	NSData* _encryptedMediaData;
	NSMutableArray* _processingCompletionBlocks;
	NSMutableArray* _uploadCompletionBlocks;
	BOOL _mediaInfiniteDuration;
	BOOL _shouldUseChatV3Cache;
	BOOL _shouldUseMediaCache;
	BOOL _smartShareable;
	NSString* _mediaID;
	NSString* _key;
	NSString* _iv;
	double _mediaDuration;
	long long _mediaWidth;
	long long _mediaHeight;
	NSURL* _attachedURL;
	NSString* _snapAttachmentUrl;
	NSString* _venueId;
	unsigned long long _uploadMediaType;
	long long _uploadState;

}

@property (assign) long long uploadState;                            //@synthesize uploadState=_uploadState - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaID;              //@synthesize mediaID=_mediaID - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                  //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSString * iv;                   //@synthesize iv=_iv - In the implementation block
@property (assign) double mediaDuration;                             //@synthesize mediaDuration=_mediaDuration - In the implementation block
@property (assign) BOOL mediaInfiniteDuration;                       //@synthesize mediaInfiniteDuration=_mediaInfiniteDuration - In the implementation block
@property (assign) long long mediaWidth;                             //@synthesize mediaWidth=_mediaWidth - In the implementation block
@property (assign) long long mediaHeight;                            //@synthesize mediaHeight=_mediaHeight - In the implementation block
@property (retain) NSURL * attachedURL;                              //@synthesize attachedURL=_attachedURL - In the implementation block
@property (retain) NSString * snapAttachmentUrl;                     //@synthesize snapAttachmentUrl=_snapAttachmentUrl - In the implementation block
@property (retain) NSString * venueId;                               //@synthesize venueId=_venueId - In the implementation block
@property (assign) unsigned long long uploadMediaType;               //@synthesize uploadMediaType=_uploadMediaType - In the implementation block
@property (assign,nonatomic) BOOL shouldUseChatV3Cache;              //@synthesize shouldUseChatV3Cache=_shouldUseChatV3Cache - In the implementation block
@property (assign,nonatomic) BOOL shouldUseMediaCache;               //@synthesize shouldUseMediaCache=_shouldUseMediaCache - In the implementation block
@property (nonatomic,readonly) BOOL smartShareable;                  //@synthesize smartShareable=_smartShareable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)mediaWidth;
-(long long)mediaHeight;
-(BOOL)isZipped;
-(NSString *)iv;
-(NSString *)venueId;
-(void)setVenueId:(NSString *)arg1 ;
-(NSString *)snapAttachmentUrl;
-(void)prepareDataToUploadForMediaId:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)needsToBeUploaded;
-(void)uploadWithCompletion:(/*^block*/id)arg1 ;
-(long long)uploadState;
-(void)setUploadState:(long long)arg1 ;
-(long long)mediaContentType;
-(id)chatMediaID;
-(id)chatKey;
-(id)chatIV;
-(NSURL *)attachedURL;
-(void)setShouldUseChatV3Cache:(BOOL)arg1 ;
-(void)setShouldUseMediaCache:(BOOL)arg1 ;
-(void)setAttachedURL:(NSURL *)arg1 ;
-(id)_persistentStorageKey;
-(NSString *)mediaID;
-(void)upload:(/*^block*/id)arg1 ;
-(unsigned long long)uploadMediaType;
-(void)setUploadMediaType:(unsigned long long)arg1 ;
-(void)setDataToUpload:(id)arg1 ;
-(void)mediaData:(/*^block*/id)arg1 ;
-(void)thumbnailMediaData:(/*^block*/id)arg1 ;
-(id)sendParameters;
-(void)setMediaHeight:(long long)arg1 ;
-(void)setMediaWidth:(long long)arg1 ;
-(BOOL)_isVideoLaguna;
-(void)setSnapAttachmentUrl:(NSString *)arg1 ;
-(id)initWithID:(id)arg1 key:(id)arg2 iv:(id)arg3 ;
-(void)setMediaInfiniteDuration:(BOOL)arg1 ;
-(BOOL)smartShareable;
-(void)transitionToUploadedState;
-(id)uploadableChatMediaDatastore;
-(void)_setEncryptedData:(id)arg1 ;
-(BOOL)mediaInfiniteDuration;
-(void)_handleMediaDataLost;
-(void)_saveDataToMediaCache:(id)arg1 encryptedData:(id)arg2 ;
-(void)prepareMedia:(/*^block*/id)arg1 ;
-(BOOL)_isPsychomantis;
-(void)didUploadChatMedia;
-(void)_bqUploadWithSuccess:(/*^block*/id)arg1 withFailure:(/*^block*/id)arg2 ;
-(BOOL)shouldUseChatV3Cache;
-(BOOL)shouldUseMediaCache;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)duration;
-(NSString *)key;
-(double)width;
-(double)height;
-(id)bodyType;
-(BOOL)isInfiniteDuration;
-(long long)mediaType;
-(void)_transitionToState:(long long)arg1 ;
-(void)_upload;
-(void)setMediaDuration:(double)arg1 ;
-(double)mediaDuration;
-(id)initWithID:(id)arg1 ;
@end

