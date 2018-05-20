/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCBaseMediaMessage.h>
#import <Snapchat/SCBaseMediaMessageOperaActionMenuTitleProvider.h>

@class SCStorySnapMedia, SOJUNycShare, SCMapSnapMetadata, SCMapPoiShareMetadata, NSDate, SCContextStoryParams, NSString;

@interface SCMapSnapMessage : SCBaseMediaMessage <SCBaseMediaMessageOperaActionMenuTitleProvider> {

	SCStorySnapMedia* _storySnapMedia;
	long long _numScreenshots;
	SOJUNycShare* _nycShare;
	SCMapSnapMetadata* _mapMetadata;
	SCMapPoiShareMetadata* _poiShareMetadata;
	NSDate* _storyTimestamp;
	SCContextStoryParams* _contextStoryParams;
	long long _snapMetadataLoadState;
	long long _poiShareLoadState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) SOJUNycShare * nycShare;                               //@synthesize nycShare=_nycShare - In the implementation block
@property (nonatomic,copy,readonly) SCMapSnapMetadata * mapMetadata;                       //@synthesize mapMetadata=_mapMetadata - In the implementation block
@property (nonatomic,copy,readonly) SCMapPoiShareMetadata * poiShareMetadata;              //@synthesize poiShareMetadata=_poiShareMetadata - In the implementation block
@property (nonatomic,readonly) SCStorySnapMedia * storySnapMedia;                          //@synthesize storySnapMedia=_storySnapMedia - In the implementation block
@property (nonatomic,copy,readonly) NSDate * storyTimestamp;                               //@synthesize storyTimestamp=_storyTimestamp - In the implementation block
@property (nonatomic,retain) SCContextStoryParams * contextStoryParams;                    //@synthesize contextStoryParams=_contextStoryParams - In the implementation block
@property (nonatomic,readonly) long long snapMetadataLoadState;                            //@synthesize snapMetadataLoadState=_snapMetadataLoadState - In the implementation block
@property (nonatomic,readonly) long long poiShareLoadState;                                //@synthesize poiShareLoadState=_poiShareLoadState - In the implementation block
+(id)messageMetadataForStory:(id)arg1 ;
-(long long)_mediaType;
-(void)didDecodeObject;
-(SOJUNycShare *)nycShare;
-(id)audioStitch;
-(BOOL)containsVideo;
-(void)overlayImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)sendJSON;
-(NSDate *)storyTimestamp;
-(BOOL)isVideoWithSound;
-(id)initWithUsername:(id)arg1 dictionary:(id)arg2 ;
-(void)fetchMediaUserInitiated:(BOOL)arg1 ;
-(void)resetSessionState;
-(void)removeStorySnapMedia;
-(long long)scaMessageType;
-(void)configureWithMessageMetadata:(id)arg1 ;
-(void)imageWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isMediaDataLoadedInCache;
-(BOOL)isVideoWithNoSound;
-(BOOL)isVideoLaguna;
-(BOOL)isPsychomantis;
-(void)prefetchMedia;
-(long long)scaMediaType;
-(void)_removeStoryMedia;
-(void)incrementScreenshotCount;
-(void)markStoryAsViewed;
-(SCStorySnapMedia *)storySnapMedia;
-(SCContextStoryParams *)contextStoryParams;
-(id)mainTitleOfActionMenu;
-(id)secondaryTitleOfActionMenu;
-(SCMapSnapMetadata *)mapMetadata;
-(void)_configureFallbackBehaviorForEmptyStoryId;
-(long long)snapMetadataLoadState;
-(void)_didFetchMetadata:(id)arg1 ;
-(void)_didFailToFetchMetadata;
-(void)_updateWithStory:(id)arg1 ;
-(SCMapPoiShareMetadata *)poiShareMetadata;
-(void)setContextStoryParams:(SCContextStoryParams *)arg1 ;
-(long long)poiShareLoadState;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isVideo;
-(long long)mediaType;
-(id)videoURL;
-(long long)messageType;
@end

