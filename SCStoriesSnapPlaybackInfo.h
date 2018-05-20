/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:02 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SCStoriesSnapIdentifiers, SCStoriesSnapViewStatus, SCStoriesSnapTimeInfo, SCStoriesSnapMedia, SCStoriesThumbnailMedia, SCStoriesSnapCaptureInfo, SCStoriesSnapRenderInfo, SCStoriesSnapAttributes, SCStoriesSnapAdInfo, SCStoriesSnapContextHintInfo, SCStoriesSnapLensInfo, SCStoriesSnapUnlockablesInfo, SCStoriesSnapAudioStitchInfo;

@interface SCStoriesSnapPlaybackInfo : NSObject <NSCopying> {

	NSString* _serverId;
	NSString* _clientId;
	NSString* _publicationId;
	SCStoriesSnapIdentifiers* _auxIds;
	NSString* _creatorUserId;
	NSString* _creatorUsername;
	SCStoriesSnapViewStatus* _viewStatus;
	SCStoriesSnapTimeInfo* _timeInfo;
	SCStoriesSnapMedia* _media;
	SCStoriesThumbnailMedia* _thumbnail;
	SCStoriesSnapCaptureInfo* _captureInfo;
	SCStoriesSnapRenderInfo* _renderInfo;
	SCStoriesSnapAttributes* _attributes;
	SCStoriesSnapAdInfo* _adInfo;
	SCStoriesSnapContextHintInfo* _contextHintInfo;
	SCStoriesSnapLensInfo* _lensInfo;
	SCStoriesSnapUnlockablesInfo* _unlockablesInfo;
	SCStoriesSnapAudioStitchInfo* _audioStitchInfo;

}

@property (nonatomic,copy,readonly) NSString * serverId;                                         //@synthesize serverId=_serverId - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientId;                                         //@synthesize clientId=_clientId - In the implementation block
@property (nonatomic,copy,readonly) NSString * publicationId;                                    //@synthesize publicationId=_publicationId - In the implementation block
@property (nonatomic,copy,readonly) SCStoriesSnapIdentifiers * auxIds;                           //@synthesize auxIds=_auxIds - In the implementation block
@property (nonatomic,copy,readonly) NSString * creatorUserId;                                    //@synthesize creatorUserId=_creatorUserId - In the implementation block
@property (nonatomic,copy,readonly) NSString * creatorUsername;                                  //@synthesize creatorUsername=_creatorUsername - In the implementation block
@property (nonatomic,copy,readonly) SCStoriesSnapViewStatus * viewStatus;                        //@synthesize viewStatus=_viewStatus - In the implementation block
@property (nonatomic,copy,readonly) SCStoriesSnapTimeInfo * timeInfo;                            //@synthesize timeInfo=_timeInfo - In the implementation block
@property (nonatomic,copy,readonly) SCStoriesSnapMedia * media;                                  //@synthesize media=_media - In the implementation block
@property (nonatomic,copy,readonly) SCStoriesThumbnailMedia * thumbnail;                         //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,copy,readonly) SCStoriesSnapCaptureInfo * captureInfo;                      //@synthesize captureInfo=_captureInfo - In the implementation block
@property (nonatomic,copy,readonly) SCStoriesSnapRenderInfo * renderInfo;                        //@synthesize renderInfo=_renderInfo - In the implementation block
@property (nonatomic,copy,readonly) SCStoriesSnapAttributes * attributes;                        //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy,readonly) SCStoriesSnapAdInfo * adInfo;                                //@synthesize adInfo=_adInfo - In the implementation block
@property (nonatomic,copy,readonly) SCStoriesSnapContextHintInfo * contextHintInfo;              //@synthesize contextHintInfo=_contextHintInfo - In the implementation block
@property (nonatomic,copy,readonly) SCStoriesSnapLensInfo * lensInfo;                            //@synthesize lensInfo=_lensInfo - In the implementation block
@property (nonatomic,copy,readonly) SCStoriesSnapUnlockablesInfo * unlockablesInfo;              //@synthesize unlockablesInfo=_unlockablesInfo - In the implementation block
@property (nonatomic,copy,readonly) SCStoriesSnapAudioStitchInfo * audioStitchInfo;              //@synthesize audioStitchInfo=_audioStitchInfo - In the implementation block
-(NSString *)publicationId;
-(NSString *)creatorUsername;
-(NSString *)creatorUserId;
-(id)initWithServerId:(id)arg1 clientId:(id)arg2 publicationId:(id)arg3 auxIds:(id)arg4 creatorUserId:(id)arg5 creatorUsername:(id)arg6 viewStatus:(id)arg7 timeInfo:(id)arg8 media:(id)arg9 thumbnail:(id)arg10 captureInfo:(id)arg11 renderInfo:(id)arg12 attributes:(id)arg13 adInfo:(id)arg14 contextHintInfo:(id)arg15 lensInfo:(id)arg16 unlockablesInfo:(id)arg17 audioStitchInfo:(id)arg18 ;
-(SCStoriesSnapIdentifiers *)auxIds;
-(SCStoriesSnapViewStatus *)viewStatus;
-(SCStoriesSnapTimeInfo *)timeInfo;
-(SCStoriesSnapCaptureInfo *)captureInfo;
-(SCStoriesSnapRenderInfo *)renderInfo;
-(SCStoriesSnapContextHintInfo *)contextHintInfo;
-(SCStoriesSnapLensInfo *)lensInfo;
-(SCStoriesSnapUnlockablesInfo *)unlockablesInfo;
-(SCStoriesSnapAudioStitchInfo *)audioStitchInfo;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCStoriesSnapAttributes *)attributes;
-(SCStoriesThumbnailMedia *)thumbnail;
-(NSString *)serverId;
-(NSString *)clientId;
-(SCStoriesSnapAdInfo *)adInfo;
-(SCStoriesSnapMedia *)media;
@end

