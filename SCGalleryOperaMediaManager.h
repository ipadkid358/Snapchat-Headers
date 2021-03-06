/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCOperaMediaManager.h>
#import <Snapchat/SCOperaGLCommandsProvider.h>

@class SCUserSession, NSMutableDictionary, SCGalleryGeolocationIndexer, NSString;

@interface SCGalleryOperaMediaManager : NSObject <SCOperaMediaManager, SCOperaGLCommandsProvider> {

	SCUserSession* _userSession;
	NSMutableDictionary* _snapIdToDownloadRequest;
	NSMutableDictionary* _snapIdToCachingMediaRequest;
	NSMutableDictionary* _mediaIdToImageCallbackNumMap;
	NSMutableDictionary* _loadedImages;
	NSMutableDictionary* _loadedVideoAssets;
	NSMutableDictionary* _loadedGLCommands;
	NSMutableDictionary* _loadedAudioProcessorMix;
	NSMutableDictionary* _loadedReverseAudioData;
	SCGalleryGeolocationIndexer* _geoLocationIndexer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 ;
-(void)imageForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)videoAssetForKey:(id)arg1 ;
-(id)glAudioProcessorMixForKey:(id)arg1 ;
-(id)glReverseAudioDataForKey:(id)arg1 ;
-(id)glCommandsForKey:(id)arg1 ;
-(void)_cancelAllPendingGallerySnapRequests;
-(void)_loadGallerySnapLoadingBackgroundFrame:(id)arg1 snapDetail:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_loadGallerySnapFirstFrame:(id)arg1 snapDetail:(id)arg2 mediaScenePath:(SCD_Struct_SC329)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_isAvailableLocallyForGallerySnap:(id)arg1 ;
-(void)_loadGallerySnap:(id)arg1 snapDetail:(id)arg2 mediaScenePath:(SCD_Struct_SC329)arg3 completion:(/*^block*/id)arg4 ;
-(void)_fetchStreamingPackageForSnap:(id)arg1 snapDetail:(id)arg2 mediaScenePath:(SCD_Struct_SC329)arg3 completion:(/*^block*/id)arg4 ;
-(void)_downloadLagunaGallerySnap:(id)arg1 snapDetail:(id)arg2 mediaScenePath:(SCD_Struct_SC329)arg3 completion:(/*^block*/id)arg4 ;
-(void)_downloadNormalVideoGallerySnap:(id)arg1 snapDetail:(id)arg2 mediaScenePath:(SCD_Struct_SC329)arg3 completion:(/*^block*/id)arg4 ;
-(void)_cancelPendingGallerySnapRequestsIfNecessary:(id)arg1 ;
-(void)_removeExistingLoadedGallerySnapMedias:(id)arg1 ;
-(void)_loadVideoFastStartStatusForGallerySnap:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadGallerySnapAddress:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadGallerySnapContext:(id)arg1 detail:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_loadGallerySnapStreamingVideo:(id)arg1 streamingPackage:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_cacheOverlayAndGeneratePagePropertiesForSnap:(id)arg1 screenOverlayImage:(id)arg2 mediaOverlayImage:(id)arg3 ;
-(id)_refetchVideoSnapDetailIfNeeded:(id)arg1 ;
-(void)_loadGalleryAnimatedImageSnap:(id)arg1 snapDetail:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_loadGalleryImageSnap:(id)arg1 snapDetail:(id)arg2 mediaScenePath:(SCD_Struct_SC329)arg3 completion:(/*^block*/id)arg4 ;
-(void)_loadGalleryVideoSnap:(id)arg1 snapDetail:(id)arg2 missingVideoTrackRetryCount:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_loadGalleryLagunaSnap:(id)arg1 snapDetail:(id)arg2 missingVideoTrackRetryCount:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_shouldRotateLandscapeSnap:(id)arg1 snapDetail:(id)arg2 ;
-(id)_loadedPropertyForImageSnap:(id)arg1 image:(id)arg2 screenOverlay:(id)arg3 ;
-(void)_logDidLoadImageForSnap:(id)arg1 sourceLevel:(long long)arg2 ;
-(BOOL)_checkMediaIsUnencrypted:(id)arg1 ;
-(id)_generateAudioProcessorMixFromAsset:(id)arg1 audioFilterStyleId:(id)arg2 ;
-(void)_logFailedToRequestPlaybackVideForSnap:(id)arg1 playableRawContent:(BOOL)arg2 assetGenerated:(BOOL)arg3 error:(id)arg4 ;
-(unsigned long long)_rotateDirectionForVideoSnap:(id)arg1 ;
-(id)_cacheGLCommandsAndGeneratePagePropertiesForSnap:(id)arg1 intermediateGLCommands:(id)arg2 outputGLCommands:(id)arg3 ;
-(id)_cacheAudioMixAndGeneratePagePropertiesForSnap:(id)arg1 audioProcessorMix:(id)arg2 reverseAudioData:(id)arg3 ;
-(id)_generateGLVideoPagePropertiesFromSnapOverlay:(id)arg1 gallerySnapSize:(CGSize)arg2 ;
-(BOOL)_galleryCroppingIsIdentity:(id)arg1 ;
-(void)_loadAddressForCameraRollAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startToLoadThumbnailForSnap:(id)arg1 snapDetail:(id)arg2 mediaScenePath:(SCD_Struct_SC329)arg3 completion:(/*^block*/id)arg4 ;
-(void)startToLoadGallerySnap:(id)arg1 snapDetail:(id)arg2 mediaScenePath:(SCD_Struct_SC329)arg3 completion:(/*^block*/id)arg4 ;
-(void)startToFetchHDForSnap:(id)arg1 mediaScenePath:(SCD_Struct_SC329)arg2 completion:(/*^block*/id)arg3 ;
-(void)unloadGallerySnap:(id)arg1 ;
-(BOOL)mediaExistLocallyForGallerySnap:(id)arg1 ;
-(void)attachPresentationTransitionFrame:(id)arg1 snap:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startToLoadCameraRollAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unloadCameraRollAsset:(id)arg1 ;
-(void)dealloc;
@end

