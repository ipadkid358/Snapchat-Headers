/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:26 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCChatMediaDrawerBaseMedia.h>

@protocol SCCachingMediaRequest;
@class NSURL, NSString;

@interface SCChatMediaDrawerVideo : SCChatMediaDrawerBaseMedia {

	id<SCCachingMediaRequest> _cachingMediaRequest;
	NSURL* _segmentVideoUrl;
	NSString* _mediaId;
	double _duration;
	double _fileSize;

}

@property (nonatomic,copy,readonly) NSString * mediaId;              //@synthesize mediaId=_mediaId - In the implementation block
@property (nonatomic,readonly) double duration;                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double fileSize;                      //@synthesize fileSize=_fileSize - In the implementation block
-(BOOL)isZipped;
-(void)prepareDataToUploadForMediaId:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)mediaContentType;
-(id)tempFileURL;
-(id)getAVAssetSynchronously;
-(void)fetchImageWithSize:(CGSize)arg1 thumbnailType:(long long)arg2 allowLowQuality:(BOOL)arg3 userSession:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)cancelThumbnailFetchRequest;
-(void)prepareUploadDataForMessage:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)prepareUploadDataForMedia:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getVideoSizeIfNecessary:(/*^block*/id)arg1 ;
-(void)getAVAssetAsynchronously:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchOriginalVideoWithCompletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareUploadDataForVideo:(id)arg1 videoFilter:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchVideoWithSize:(CGSize)arg1 aspectRatio:(double)arg2 allowLowQuality:(BOOL)arg3 videoFilter:(id)arg4 completion:(/*^block*/id)arg5 ;
-(CGSize)getTargetSizeWithSourceSize:(CGSize)arg1 videoTargetAspectRatio:(double)arg2 ;
-(void)fetchVideoURLWithCompletion:(/*^block*/id)arg1 ;
-(double)_videoSizeWithAvasset:(id)arg1 ;
-(id)initWithPHAsset:(id)arg1 segmentVideoUrl:(id)arg2 ;
-(void)invalidateCache:(id)arg1 ;
-(double)duration;
-(double)width;
-(double)height;
-(double)fileSize;
-(id)initWithPHAsset:(id)arg1 ;
-(NSString *)mediaId;
@end

