/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCPreviewViewControllerSnapchatGalleryDelegate <NSObject>
@required
-(void)didSaveAndDismissIfNeeded:(BOOL)arg1;
-(void)previewViewController:(id)arg1 didEditAsset:(id)arg2 newAsset:(id)arg3;
-(void)previewViewController:(id)arg1 didCopyAsset:(id)arg2 newAsset:(id)arg3;
-(void)previewViewControllerDidSendOrPostPhoto:(id)arg1 hasUnsavedChange:(BOOL)arg2 previewThumbnailFuture:(id)arg3 thumbnailAspectRatio:(double)arg4;
-(void)previewViewControllerDidSendOrPostVideo:(id)arg1 hasUnsavedChange:(BOOL)arg2 previewBlob:(id)arg3 thumbnailAspectRatio:(double)arg4;

@end

