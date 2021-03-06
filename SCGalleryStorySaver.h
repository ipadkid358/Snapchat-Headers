/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:52 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCCache;
@class SCUserSession, SCQueuePerformer;

@interface SCGalleryStorySaver : NSObject {

	SCUserSession* _userSession;
	id<SCCache> _storySnapCache;
	SCQueuePerformer* _savePerformer;

}
-(id)initWithUserSession:(id)arg1 ;
-(void)storeStoryWithClientID:(id)arg1 originalPhoto:(id)arg2 overlayFormat:(id)arg3 sojuOverlay:(id)arg4 sojuMediaType:(int)arg5 servletMediaFormat:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)storeStoryWithClientID:(id)arg1 originalVideo:(id)arg2 overlayFormat:(id)arg3 sojuOverlay:(id)arg4 sojuMediaType:(int)arg5 servletMediaFormat:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id)_creationDateForSavedCopyOfStory:(id)arg1 ;
-(unsigned long long)_snapSourceForSavedCopyOfStory:(id)arg1 ;
-(void)_flattenVideoFromMedia:(id)arg1 isSpectaclesVideo:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_galleryTempURLForStory:(id)arg1 type:(int)arg2 ;
-(id)_galleryTempOverlayURLForStory:(id)arg1 ;
-(void)saveStoryPhotoToGallery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveStoryVideoToGallery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateStorySnap:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cleanupStorySnap:(id)arg1 ;
@end

