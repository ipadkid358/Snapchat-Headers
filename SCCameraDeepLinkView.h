/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCTransparentParentView.h>

@class SCCameraDeepLinkMetadata, SCCameraToolBarView, SCCameraDeepLinkStickerPreviewView;

@interface SCCameraDeepLinkView : SCTransparentParentView {

	SCCameraDeepLinkMetadata* _metadata;
	SCCameraToolBarView* _toolbarView;
	SCCameraDeepLinkStickerPreviewView* _stickerPreviewView;

}

@property (nonatomic,retain) SCCameraToolBarView * toolbarView;                                    //@synthesize toolbarView=_toolbarView - In the implementation block
@property (nonatomic,retain) SCCameraDeepLinkStickerPreviewView * stickerPreviewView;              //@synthesize stickerPreviewView=_stickerPreviewView - In the implementation block
@property (nonatomic,retain) SCCameraDeepLinkMetadata * metadata;                                  //@synthesize metadata=_metadata - In the implementation block
-(void)_resetToolbarView;
-(void)_resetStickerPreviewFrame;
-(SCCameraDeepLinkStickerPreviewView *)stickerPreviewView;
-(void)_resetToolbarFrame;
-(id)initWithFrame:(CGRect)arg1 controller:(id)arg2 metadata:(id)arg3 ;
-(void)setStickerPreviewView:(SCCameraDeepLinkStickerPreviewView *)arg1 ;
-(SCCameraDeepLinkMetadata *)metadata;
-(void)setMetadata:(SCCameraDeepLinkMetadata *)arg1 ;
-(SCCameraToolBarView *)toolbarView;
-(void)setToolbarView:(SCCameraToolBarView *)arg1 ;
@end

