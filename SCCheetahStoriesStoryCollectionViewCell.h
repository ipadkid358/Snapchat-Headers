/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Snapchat/SCSearchEventAnnouncing.h>
#import <Snapchat/SCSearchEventListener.h>
#import <Snapchat/SCSearchRoundedCornerConfigurable.h>
#import <Snapchat/SCSearchViewModelConfigurable.h>
#import <Snapchat/SCSearchActionable.h>
#import <Snapchat/SCSearchViewportConfigurable.h>

@protocol SCSearchActionHandling, SCSearchItemDownloading;
@class UIView, CAShapeLayer, SCSearchNetworkImageView, SCSearchNetworkVideoView, SCGradientView, SCDiscoverFeedTileOverlayView, SCLazy, SCDiscoverFeedLabelOverlayView, SCDiscoverFeedDebugView, SCSearchActionModel, SCSearchNetworkVideo, SCSearchEventListenerAnnouncer, SCCornerRadii, SCBitmojiDratiniManager, NSString;

@interface SCCheetahStoriesStoryCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate, SCSearchEventAnnouncing, SCSearchEventListener, SCSearchRoundedCornerConfigurable, SCSearchViewModelConfigurable, SCSearchActionable, SCSearchViewportConfigurable> {

	UIView* _backgroundView;
	CAShapeLayer* _borderLayer;
	SCSearchNetworkImageView* _storyCoverImageView;
	SCSearchNetworkVideoView* _storyCoverVideoView;
	SCGradientView* _logoBackgroundGradientView;
	SCSearchNetworkImageView* _logoImageView;
	SCDiscoverFeedTileOverlayView* _tileOverlayView;
	SCLazy* _dynamicReplayOverlayViewLazy;
	SCDiscoverFeedLabelOverlayView* _labelOverlayView;
	SCLazy* _friendStoryOverlayViewLazy;
	SCLazy* _friendStoryDynamicReplayOverlayViewLazy;
	SCDiscoverFeedDebugView* _debugView;
	SCSearchActionModel* _primaryTapActionModel;
	SCSearchActionModel* _secondaryTapActionModel;
	SCSearchActionModel* _longPressActionModel;
	SCSearchActionModel* _scrollOutOfScreenActionModel;
	SCSearchNetworkVideo* _videoThumbnail;
	BOOL _isVideoThumbnailPlaying;
	BOOL _hasFirstFrameImage;
	CGPoint _lastOrigin;
	double _lastOriginCaptureTime;
	SCSearchEventListenerAnnouncer* _eventAnnouncer;
	SCCornerRadii* _defaultCornerRadii;
	BOOL _hasVideoThumbnail;
	unsigned long long _roundedCorners;
	id<SCSearchActionHandling> _actionHandler;
	id _viewModel;
	id<SCSearchItemDownloading> _imageDownloader;
	id<SCSearchItemDownloading> _videoDownloader;
	SCBitmojiDratiniManager* _bitmojiDratiniManager;
	CGRect _viewportFrame;

}

@property (nonatomic,retain) id<SCSearchItemDownloading> imageDownloader;                  //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,retain) id<SCSearchItemDownloading> videoDownloader;                  //@synthesize videoDownloader=_videoDownloader - In the implementation block
@property (nonatomic,retain) SCBitmojiDratiniManager * bitmojiDratiniManager;              //@synthesize bitmojiDratiniManager=_bitmojiDratiniManager - In the implementation block
@property (nonatomic,readonly) BOOL hasVideoThumbnail;                                     //@synthesize hasVideoThumbnail=_hasVideoThumbnail - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long roundedCorners;                            //@synthesize roundedCorners=_roundedCorners - In the implementation block
@property (nonatomic,retain) id viewModel;                                                 //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) id<SCSearchActionHandling> actionHandler;                     //@synthesize actionHandler=_actionHandler - In the implementation block
@property (assign,nonatomic) CGRect viewportFrame;                                         //@synthesize viewportFrame=_viewportFrame - In the implementation block
+(id)announcerIdentifier;
+(CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3 ;
-(BOOL)hasVideoThumbnail;
-(void)_announceDidBeginInteraction;
-(void)setImageDownloader:(id<SCSearchItemDownloading>)arg1 ;
-(void)_layoutWithViewModel;
-(void)_compareAndUpdateViewModelIfNeeded:(id)arg1 ;
-(void)_updateWithViewModel:(id)arg1 ;
-(void)_debugGesture:(id)arg1 ;
-(id<SCSearchItemDownloading>)imageDownloader;
-(id<SCSearchItemDownloading>)videoDownloader;
-(void)setVideoDownloader:(id<SCSearchItemDownloading>)arg1 ;
-(void)viewportDidUpdateViewportFrame:(CGRect)arg1 dragging:(BOOL)arg2 decelerating:(BOOL)arg3 ;
-(CGRect)viewportFrame;
-(void)setViewportFrame:(CGRect)arg1 ;
-(void)_playVideoThumbnail;
-(void)_setupCoverVideoViewWithVideoThumbnail:(id)arg1 ;
-(void)_handleTapAction:(id)arg1 ;
-(void)_handleLongPressAction:(id)arg1 ;
-(SCBitmojiDratiniManager *)bitmojiDratiniManager;
-(id)storyCoverImage;
-(void)resumeVideoPlaybackIfPossible;
-(void)pauseVideoPlaybackIfPossible;
-(void)setBitmojiDratiniManager:(SCBitmojiDratiniManager *)arg1 ;
-(void)_hideTileContentsIfNeeded;
-(void)_handleScrollOutOfScreenAction;
-(void)_setupDebugViewIfNeeded:(id)arg1 ;
-(CGSize)_thumbnailImagesizeWithViewModel:(id)arg1 bounds:(CGRect)arg2 ;
-(BOOL)isVideoThumbnailPlaying;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
-(void)applyLayoutAttributes:(id)arg1 ;
-(unsigned long long)roundedCorners;
-(void)setRoundedCorners:(unsigned long long)arg1 ;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)setActionHandler:(id<SCSearchActionHandling>)arg1 ;
-(id<SCSearchActionHandling>)actionHandler;
@end

