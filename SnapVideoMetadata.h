/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:14 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@interface SnapVideoMetadata : NSObject
+(CGSize)videoSizeForURL:(id)arg1 waitWhileLoadingTracksIfNeeded:(BOOL)arg2 ;
+(double)outputBitrateMultiplierWithVideoContentComplexity:(long long)arg1 ;
+(BOOL)deviceMeetsMinimumRequirementsForHighQualityVideo;
+(double)transcodingBitrateMultiplierWithSourceType:(long long)arg1 ;
+(CGSize)_lagunaVideoTargetSizeWithVideoSourceSize:(CGSize)arg1 hasOverlayToBlend:(BOOL)arg2 isExport:(BOOL)arg3 ;
+(CGSize)adjustVideoTargetSizeWithTargetAspectRatio:(double)arg1 ;
+(double)videoDurationForAsset:(id)arg1 ;
+(CGSize)videoSizeForAsset:(id)arg1 waitWhileLoadingTracksIfNeeded:(BOOL)arg2 ;
+(BOOL)synchronouslyLoadAttributes:(id)arg1 forAssetTrack:(id)arg2 timeout:(double)arg3 error:(id*)arg4 ;
+(long long)averageTranscodingBitRate:(CGSize)arg1 isRecording:(BOOL)arg2 highQuality:(BOOL)arg3 duration:(double)arg4 iFrameOnly:(BOOL)arg5 originalVideoBitRate:(double)arg6 overlayImageFileSizeBits:(long long)arg7 videoPlaybackRate:(double)arg8 isLagunaVideo:(BOOL)arg9 hasOverlayToBlend:(BOOL)arg10 sourceType:(long long)arg11 ;
+(CGSize)videoTargetSizeWithVideoSourceSize:(CGSize)arg1 videoTargetAspectRatio:(double)arg2 highQuality:(BOOL)arg3 isLagunaVideo:(BOOL)arg4 hasOverlayToBlend:(BOOL)arg5 isExport:(BOOL)arg6 ;
+(BOOL)deviceMeetsRequirementsForContentAdaptiveVideoEncoding;
+(double)videoDurationForURL:(id)arg1 ;
+(CGSize)videoSizeForAsset:(id)arg1 ;
+(CGSize)videoSizeForURL:(id)arg1 ;
+(void)logVideoEvent:(id)arg1 videoSettings:(id)arg2 isSave:(BOOL)arg3 ;
+(BOOL)isVideoValidForURL:(id)arg1 ;
+(BOOL)synchronouslyLoadAttributes:(id)arg1 forVideo:(id)arg2 error:(id*)arg3 ;
@end

