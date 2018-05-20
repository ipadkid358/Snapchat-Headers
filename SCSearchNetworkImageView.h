/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <Snapchat/SCSearchEventAnnouncing.h>
#import <Snapchat/SCSearchEventListener.h>

@protocol SCSearchItemDownloading, SCSearchItemDownloaderHandling;
@class SCSearchNetworkImage, UIImageView, SCSearchEventListenerAnnouncer, SCQueuePerformer, UIImage, SCNetworkImageViewSynchronizer, NSString;

@interface SCSearchNetworkImageView : UIView <SCSearchEventAnnouncing, SCSearchEventListener> {

	id<SCSearchItemDownloading> _imageDownloader;
	id<SCSearchItemDownloaderHandling> _imageLoaderHandler;
	SCSearchNetworkImage* _displayedNetworkImage;
	UIImageView* _imageView;
	SCSearchEventListenerAnnouncer* _eventAnnouncer;
	/*^block*/id _pendingImageBlock;
	SCQueuePerformer* _imageViewPerformer;
	UIImage* _loadingImage;
	SCSearchNetworkImage* _networkImage;
	SCNetworkImageViewSynchronizer* _imageSynchronizer;

}

@property (assign,nonatomic) long long contentMode; 
@property (nonatomic,retain) UIImage * loadingImage;                                          //@synthesize loadingImage=_loadingImage - In the implementation block
@property (nonatomic,retain) id<SCSearchItemDownloading> imageDownloader;                     //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,retain) SCSearchNetworkImage * networkImage;                             //@synthesize networkImage=_networkImage - In the implementation block
@property (nonatomic,retain) SCNetworkImageViewSynchronizer * imageSynchronizer;              //@synthesize imageSynchronizer=_imageSynchronizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3 ;
-(void)setLoadingImage:(UIImage *)arg1 ;
-(void)setImageDownloader:(id<SCSearchItemDownloading>)arg1 ;
-(void)setNetworkImage:(SCSearchNetworkImage *)arg1 ;
-(id<SCSearchItemDownloading>)imageDownloader;
-(void)setNetworkImage:(id)arg1 imageProcessingBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setLoadingImage;
-(void)_syncDisplayedImageIfNecessary;
-(void)_setPendingImageIfPossibleWithPendingImageBlock:(/*^block*/id)arg1 ;
-(void)_setSuccessImageWithNetworkImage:(id)arg1 image:(id)arg2 ;
-(void)_loadNetworkImage:(id)arg1 imageProcessingBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleImageLoaderCompletionHandlerWithRequestedImage:(id)arg1 resultImage:(id)arg2 downloadStartTime:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleImageLoaderFailureHandlerWithRequestedImage:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateSuccessWithNetworkImage:(id)arg1 image:(id)arg2 animated:(BOOL)arg3 ;
-(void)_announceDownloadEvent:(id)arg1 extraData:(id)arg2 ;
-(void)_updateFailureWithNetworkImage:(id)arg1 ;
-(id)displayedImage;
-(void)setImageSynchronizer:(SCNetworkImageViewSynchronizer *)arg1 ;
-(UIImage *)loadingImage;
-(SCSearchNetworkImage *)networkImage;
-(SCNetworkImageViewSynchronizer *)imageSynchronizer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentMode:(long long)arg1 ;
-(long long)contentMode;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

