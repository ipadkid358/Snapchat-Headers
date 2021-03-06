/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCChunkItem.h>
#import <Snapchat/MediaDataSource.h>

@class NSData, Media, NSURL, NSValue, SCChunkInteractionZone, NSString;

@interface SCChunkTopSnapItem : SCChunkItem <MediaDataSource> {

	NSData* _imageDataToSave;
	NSData* _firstFrameDataToSave;
	BOOL _videoRotationEnabled;
	BOOL _overlayPresent;
	BOOL _sponsoredOverlayPresent;
	Media* _backgroundImageMedia;
	Media* _backgroundVideoFirstFrameMedia;
	unsigned long long _backgroundType;
	unsigned long long _docking;
	unsigned long long _topSnapVideoMode;
	NSURL* _backgroundVideoRemoteURL;
	NSValue* _videoSize;
	SCChunkInteractionZone* _interactionZone;
	NSString* _backgroundVideoFilename;
	NSString* _chunkHash;

}

@property (nonatomic,retain) Media * backgroundImageMedia;                                 //@synthesize backgroundImageMedia=_backgroundImageMedia - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundType;                            //@synthesize backgroundType=_backgroundType - In the implementation block
@property (assign,nonatomic) unsigned long long docking;                                   //@synthesize docking=_docking - In the implementation block
@property (nonatomic,retain) Media * backgroundVideoFirstFrameMedia;                       //@synthesize backgroundVideoFirstFrameMedia=_backgroundVideoFirstFrameMedia - In the implementation block
@property (assign,nonatomic) unsigned long long topSnapVideoMode;                          //@synthesize topSnapVideoMode=_topSnapVideoMode - In the implementation block
@property (nonatomic,copy) NSString * backgroundVideoFilename;                             //@synthesize backgroundVideoFilename=_backgroundVideoFilename - In the implementation block
@property (nonatomic,copy) NSString * chunkHash;                                           //@synthesize chunkHash=_chunkHash - In the implementation block
@property (assign,nonatomic) BOOL overlayPresent;                                          //@synthesize overlayPresent=_overlayPresent - In the implementation block
@property (assign,nonatomic) BOOL sponsoredOverlayPresent;                                 //@synthesize sponsoredOverlayPresent=_sponsoredOverlayPresent - In the implementation block
@property (nonatomic,readonly) BOOL videoRotationEnabled;                                  //@synthesize videoRotationEnabled=_videoRotationEnabled - In the implementation block
@property (nonatomic,readonly) NSURL * backgroundVideoRemoteURL;                           //@synthesize backgroundVideoRemoteURL=_backgroundVideoRemoteURL - In the implementation block
@property (nonatomic,copy) NSValue * videoSize;                                            //@synthesize videoSize=_videoSize - In the implementation block
@property (nonatomic,copy,readonly) SCChunkInteractionZone * interactionZone;              //@synthesize interactionZone=_interactionZone - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)backgroundTypeForString:(id)arg1 ;
+(unsigned long long)modeForString:(id)arg1 ;
-(void)didDecodeObject;
-(unsigned long long)docking;
-(BOOL)videoRotationEnabled;
-(SCChunkInteractionZone *)interactionZone;
-(BOOL)overlayPresent;
-(void)setOverlayPresent:(BOOL)arg1 ;
-(id)cacheMediaIds;
-(NSString *)chunkHash;
-(BOOL)needsAuthToFetch;
-(id)mediaIdForMedia:(id)arg1 ;
-(id)decryptData:(id)arg1 forMedia:(id)arg2 ;
-(id)encryptionDictionaryForMedia:(id)arg1 ;
-(void)setChunkHash:(NSString *)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 chunkDictionary:(id)arg2 ;
-(void)saveMediaToCache;
-(BOOL)imageMediaExistsInCache;
-(BOOL)sponsoredOverlayPresent;
-(void)ensureNonNilMediaObjects;
-(void)setDocking:(unsigned long long)arg1 ;
-(NSString *)backgroundVideoFilename;
-(Media *)backgroundImageMedia;
-(Media *)backgroundVideoFirstFrameMedia;
-(id)backgroundVideoLocalURL;
-(void)setBackgroundImageMedia:(Media *)arg1 ;
-(void)setBackgroundVideoFirstFrameMedia:(Media *)arg1 ;
-(unsigned long long)topSnapVideoMode;
-(void)setTopSnapVideoMode:(unsigned long long)arg1 ;
-(NSURL *)backgroundVideoRemoteURL;
-(void)setSponsoredOverlayPresent:(BOOL)arg1 ;
-(void)setBackgroundVideoFilename:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)persist;
-(unsigned long long)backgroundType;
-(void)setBackgroundType:(unsigned long long)arg1 ;
-(NSValue *)videoSize;
-(void)setVideoSize:(NSValue *)arg1 ;
-(BOOL)encrypt;
-(id)requestContexts;
@end

