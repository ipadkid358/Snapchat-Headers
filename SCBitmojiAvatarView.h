/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <Snapchat/SCBitmojiAvatarVisibleDelegate.h>

@protocol SCSearchItemDownloading;
@class SCLazy, SCNetworkImageViewSynchronizer, SCBitmojiAvatarViewModel;

@interface SCBitmojiAvatarView : UIView <SCBitmojiAvatarVisibleDelegate> {

	SCLazy* _emojiLabel;
	SCLazy* _bitmojiNetworkImageView;
	SCNetworkImageViewSynchronizer* _imageSynchronizer;
	SCBitmojiAvatarViewModel* _viewModel;
	id<SCSearchItemDownloading> _imageDownloader;

}

@property (nonatomic,retain) SCBitmojiAvatarViewModel * viewModel;                     //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) id<SCSearchItemDownloading> imageDownloader;              //@synthesize imageDownloader=_imageDownloader - In the implementation block
-(void)setImageDownloader:(id<SCSearchItemDownloading>)arg1 ;
-(id<SCSearchItemDownloading>)imageDownloader;
-(void)setViewModel:(id)arg1 withImageSynchronizer:(id)arg2 ;
-(void)_showBitmojiNetworkImageViewWithNetworkImage:(id)arg1 loadingImage:(id)arg2 fallbackImage:(id)arg3 viewModel:(id)arg4 ;
-(void)_showEmojiLabelWithAttributedText:(id)arg1 ;
-(void)_updateBitmojiNetworkImageWithFallBackImage:(id)arg1 viewModel:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isVisible;
-(SCBitmojiAvatarViewModel *)viewModel;
-(void)setViewModel:(SCBitmojiAvatarViewModel *)arg1 ;
@end
