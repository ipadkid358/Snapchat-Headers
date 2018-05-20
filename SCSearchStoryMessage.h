/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCBaseMediaMessage.h>
#import <Snapchat/SCBaseMediaMessageOperaActionMenuTitleProvider.h>

@class SCStorySnapMedia, SCSearchStoryMetadata, NSDate, SCContextStoryParams, SOJUSearchShareStorySnap, NSString;

@interface SCSearchStoryMessage : SCBaseMediaMessage <SCBaseMediaMessageOperaActionMenuTitleProvider> {

	SCStorySnapMedia* _storySnapMedia;
	long long _numScreenshots;
	SCSearchStoryMetadata* _searchStoryMetadata;
	NSDate* _storyTimestamp;
	SCContextStoryParams* _contextStoryParams;
	long long _metadataLoadState;
	SOJUSearchShareStorySnap* _searchSnapShare;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) SOJUSearchShareStorySnap * searchSnapShare;                 //@synthesize searchSnapShare=_searchSnapShare - In the implementation block
@property (nonatomic,copy) SCSearchStoryMetadata * searchStoryMetadata;                //@synthesize searchStoryMetadata=_searchStoryMetadata - In the implementation block
@property (nonatomic,readonly) SCStorySnapMedia * storySnapMedia;                      //@synthesize storySnapMedia=_storySnapMedia - In the implementation block
@property (nonatomic,copy,readonly) NSDate * storyTimestamp;                           //@synthesize storyTimestamp=_storyTimestamp - In the implementation block
@property (nonatomic,readonly) SCContextStoryParams * contextStoryParams;              //@synthesize contextStoryParams=_contextStoryParams - In the implementation block
@property (nonatomic,readonly) long long metadataLoadState;                            //@synthesize metadataLoadState=_metadataLoadState - In the implementation block
+(id)messageMetadataForStory:(id)arg1 ;
-(long long)_mediaType;
-(void)didDecodeObject;
-(id)snapId;
-(id)searchShareStorySnap;
-(id)dynamicStoryId;
-(id)audioStitch;
-(SOJUSearchShareStorySnap *)searchSnapShare;
-(BOOL)containsVideo;
-(long long)metadataLoadState;
-(SCSearchStoryMetadata *)searchStoryMetadata;
-(void)overlayImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setSearchSnapShare:(SOJUSearchShareStorySnap *)arg1 ;
-(id)sendJSON;
-(void)setSearchStoryMetadata:(SCSearchStoryMetadata *)arg1 ;
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
-(void)_configureFallbackBehaviorForEmptyStoryId;
-(void)_didFetchMetadata:(id)arg1 ;
-(void)_didFailToFetchMetadata;
-(void)_updateWithStory:(id)arg1 ;
-(void)_setDynamicStoryId:(id)arg1 snapId:(id)arg2 mediaType:(id)arg3 ;
-(BOOL)_isExpired;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isVideo;
-(long long)mediaType;
-(id)videoURL;
-(long long)messageType;
@end

