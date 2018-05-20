/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCLensFaceImageProviderProtocol.h>

@protocol SCLensSubPickerImageProviderDelegate, SCLensPhotoImageManagerProtocol;
@class SCCache, CIDetector, SCQueuePerformer, NSArray, NSMutableArray, SCSentinel, NSString;

@interface SCLensPhotoFaceImageProvider : NSObject <SCLensFaceImageProviderProtocol> {

	SCCache* _imageCache;
	id<SCLensSubPickerImageProviderDelegate> _delegate;
	id<SCLensPhotoImageManagerProtocol> _photoImageManager;
	CIDetector* _faceDetector;
	SCQueuePerformer* _performer;
	long long _processedImageCount;
	long long _requestedImageCount;
	NSArray* _croppedFaceImageIds;
	NSMutableArray* _groupedCroppedFaceImageIds;
	SCSentinel* _sentinel;

}

@property (assign,nonatomic,__weak) id<SCLensSubPickerImageProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<SCLensPhotoImageManagerProtocol> photoImageManager;                 //@synthesize photoImageManager=_photoImageManager - In the implementation block
@property (nonatomic,retain) CIDetector * faceDetector;                                             //@synthesize faceDetector=_faceDetector - In the implementation block
@property (nonatomic,retain) SCQueuePerformer * performer;                                          //@synthesize performer=_performer - In the implementation block
@property (assign,nonatomic) long long processedImageCount;                                         //@synthesize processedImageCount=_processedImageCount - In the implementation block
@property (assign,nonatomic) long long requestedImageCount;                                         //@synthesize requestedImageCount=_requestedImageCount - In the implementation block
@property (nonatomic,retain) NSArray * croppedFaceImageIds;                                         //@synthesize croppedFaceImageIds=_croppedFaceImageIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * groupedCroppedFaceImageIds;                           //@synthesize groupedCroppedFaceImageIds=_groupedCroppedFaceImageIds - In the implementation block
@property (nonatomic,retain) SCSentinel * sentinel;                                                 //@synthesize sentinel=_sentinel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCQueuePerformer *)performer;
-(void)setPerformer:(SCQueuePerformer *)arg1 ;
-(id)getOriginalImageAtIndex:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelImageLoadingWithId:(id)arg1 ;
-(void)reloadAssetsIfNeeded;
-(void)handlePhotoImageManagerDidUpdateNotification:(id)arg1 ;
-(void)reloadAssetsIfNeededOnMainThread;
-(NSMutableArray *)groupedCroppedFaceImageIds;
-(id<SCLensPhotoImageManagerProtocol>)photoImageManager;
-(long long)requestedImageCount;
-(void)setRequestedImageCount:(long long)arg1 ;
-(void)processImagesRemovingAtIndexes:(id)arg1 ;
-(void)processImagesInsertingAtIndexes:(id)arg1 size:(CGSize)arg2 ;
-(void)reloadAssetsWithCompletion:(/*^block*/id)arg1 ;
-(void)setProcessedImageCount:(long long)arg1 ;
-(void)setCroppedFaceImageIds:(NSArray *)arg1 ;
-(BOOL)canProcessMoreImages;
-(long long)processedImageCount;
-(void)processMoreImagesIfPossibleWithSize:(CGSize)arg1 count:(unsigned long long)arg2 ;
-(void)reloadAssetsIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)croppedFaceImageIds;
-(id)imageIdentifierAtIndex:(unsigned long long)arg1 ;
-(void)getThumbnailImageFromCameraWithCroppedImageId:(id)arg1 targetSize:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(void)getThumbnailImageFromCacheWithCroppedImageId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)imageIdFromCroppedImageId:(id)arg1 ;
-(CGRect)normalizedRectFromCroppedImageId:(id)arg1 ;
-(void)getCroppedThumbnailsFromCameraRollAndCache:(unsigned long long)arg1 size:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(id)getCroppedImagIdsFromGroupedImageRepresentation:(id)arg1 ;
-(void)setGroupedCroppedFaceImageIds:(NSMutableArray *)arg1 ;
-(void)_processFaceDetectionAndCacheImage:(id)arg1 imageId:(id)arg2 imageIndex:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)warmupWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfImageWithIdentifier:(id)arg1 ;
-(id)getPreviewImageAtIndex:(unsigned long long)arg1 targetSize:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isPresetImageAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)rawImageCount;
-(void)setPhotoImageManager:(id<SCLensPhotoImageManagerProtocol>)arg1 ;
-(void)setFaceDetector:(CIDetector *)arg1 ;
-(void)setSentinel:(SCSentinel *)arg1 ;
-(id)init;
-(void)setDelegate:(id<SCLensSubPickerImageProviderDelegate>)arg1 ;
-(void)dealloc;
-(id<SCLensSubPickerImageProviderDelegate>)delegate;
-(unsigned long long)imageCount;
-(CIDetector *)faceDetector;
-(SCSentinel *)sentinel;
-(void)cooldown;
@end

