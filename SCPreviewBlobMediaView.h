/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Snapchat/SCSendPreviewMediaView.h>

@class SCPreviewBlob, SCUserSession, UIImageView, SCImageProcessVideoPlaybackSession, AVPlayer, SCCAEAGLView, SCStickerContainer, NSMutableArray, UIView, NSString;

@interface SCPreviewBlobMediaView : UIView <SCSendPreviewMediaView> {

	SCPreviewBlob* _previewBlob;
	BOOL _isLaguna;
	SCUserSession* _userSession;
	UIImageView* _imageView;
	SCImageProcessVideoPlaybackSession* _videoPlaybackSession;
	AVPlayer* _player;
	SCCAEAGLView* _glView;
	SCStickerContainer* _trackingStickerContainer;
	NSMutableArray* _trackingCaptionViews;
	UIView* _trackingObjectContainerView;
	UIView* _nontrackingObjectContainerview;
	UIView* _overlayContainerView;
	UIImageView* _maskView;
	BOOL _didSetup;
	BOOL _wantsPlay;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)SCAMediaTypes;
-(id)initWithPreviewBlob:(id)arg1 isLaguna:(BOOL)arg2 userSession:(id)arg3 ;
-(void)_setupViewIfNeeded;
-(void)layoutSubviews;
-(void)dealloc;
-(void)play;
-(void)pause;
@end

