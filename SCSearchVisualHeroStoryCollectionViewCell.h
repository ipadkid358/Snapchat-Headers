/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSearchCollectionViewCell.h>
#import <Snapchat/SCSearchActionable.h>
#import <Snapchat/SCSearchThumbnailSizeProviding.h>
#import <Snapchat/SCSearchViewportConfigurable.h>
#import <Snapchat/SCSearchEventAnnouncing.h>
#import <Snapchat/SCSearchEventListener.h>

@protocol SCSearchActionHandling, SCSearchItemDownloading;
@class SCSearchNetworkImageView, SCSearchNetworkVideoView, SCSearchVideoStreamingView, SCGradientView, UILabel, UIView, SCLazy, SCSearchActionModel, SCSearchNetworkVideo, SCSearchStreamingMediaInfo, SCSearchEventListenerAnnouncer, NSString;

@interface SCSearchVisualHeroStoryCollectionViewCell : SCSearchCollectionViewCell <SCSearchActionable, SCSearchThumbnailSizeProviding, SCSearchViewportConfigurable, SCSearchEventAnnouncing, SCSearchEventListener> {

	SCSearchNetworkImageView* _storyCoverImageView;
	SCSearchNetworkVideoView* _storyCoverVideoView;
	SCSearchVideoStreamingView* _storyCoverVideoStreamingView;
	SCGradientView* _gradientView;
	UILabel* _emojiLabel;
	UILabel* _categoryLabel;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView* _dividorLineView;
	SCLazy* _debugButton;
	SCSearchActionModel* _singleTapActionModel;
	SCSearchActionModel* _longPressActionModel;
	SCLazy* _actionButtonLazyCreator;
	SCSearchNetworkVideo* _videoThumbnail;
	SCSearchStreamingMediaInfo* _videoStreamingThumbnail;
	BOOL _enableVideoStreamingThumbnail;
	BOOL _isVideoThumbnailPlaying;
	CGPoint _lastOrigin;
	double _lastOriginCaptureTime;
	SCSearchEventListenerAnnouncer* _eventAnnouncer;
	id<SCSearchActionHandling> _actionHandler;
	id _viewModel;
	id<SCSearchItemDownloading> _imageDownloader;
	id<SCSearchItemDownloading> _videoDownloader;
	id<SCSearchItemDownloading> _streamingCompositeDownloader;
	CGRect _viewportFrame;

}

@property (nonatomic,retain) id<SCSearchItemDownloading> imageDownloader;                           //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,retain) id<SCSearchItemDownloading> videoDownloader;                           //@synthesize videoDownloader=_videoDownloader - In the implementation block
@property (nonatomic,retain) id<SCSearchItemDownloading> streamingCompositeDownloader;              //@synthesize streamingCompositeDownloader=_streamingCompositeDownloader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<SCSearchActionHandling> actionHandler;                              //@synthesize actionHandler=_actionHandler - In the implementation block
@property (assign,nonatomic) CGRect viewportFrame;                                                  //@synthesize viewportFrame=_viewportFrame - In the implementation block
+(id)announcerIdentifier;
+(CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3 ;
-(BOOL)shouldShowBackgroundView;
-(void)setImageDownloader:(id<SCSearchItemDownloading>)arg1 ;
-(void)_layoutWithViewModel;
-(void)_compareAndUpdateViewModelIfNeeded:(id)arg1 ;
-(void)_setupDebugButtonWithViewModelIfNeed:(id)arg1 ;
-(void)_updateWithViewModel:(id)arg1 ;
-(void)_handleButtonTap:(id)arg1 ;
-(void)_debugGesture:(id)arg1 ;
-(BOOL)hasOverridedTapAction;
-(void)handleTapAction;
-(BOOL)hasOverridedLongPressAction;
-(void)handleLongPressAction;
-(id<SCSearchItemDownloading>)imageDownloader;
-(id<SCSearchItemDownloading>)videoDownloader;
-(void)setVideoDownloader:(id<SCSearchItemDownloading>)arg1 ;
-(void)viewportDidUpdateViewportFrame:(CGRect)arg1 dragging:(BOOL)arg2 decelerating:(BOOL)arg3 ;
-(CGRect)viewportFrame;
-(void)setViewportFrame:(CGRect)arg1 ;
-(void)_playVideoThumbnail;
-(void)_stopVideoThumbnail;
-(void)_setupCoverVideoStreamingViewWithVideoThumbnail:(id)arg1 ;
-(void)_setupCoverVideoViewWithVideoThumbnail:(id)arg1 ;
-(id<SCSearchItemDownloading>)streamingCompositeDownloader;
-(void)setStreamingCompositeDownloader:(id<SCSearchItemDownloading>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
-(id)viewModel;
-(CGSize)thumbnailSize;
-(void)setViewModel:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)setActionHandler:(id<SCSearchActionHandling>)arg1 ;
-(id<SCSearchActionHandling>)actionHandler;
@end
