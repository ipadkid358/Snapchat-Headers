/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <Snapchat/SCDiscoverBarDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Snapchat/SCShazamOperaControllerDelegate.h>
#import <Snapchat/SCBrowserViewControllerDelegate.h>
#import <Snapchat/SCTimeProfilable.h>
#import <Snapchat/SCBaseMediaFullScreenDelegate.h>
#import <Snapchat/SCSendPreviewMediaView.h>

@protocol SCChatCellBaseGestureDelegate, SCChatFullscreenMediaChatTableCellDelegate;
@class SCUserSession, UITapGestureRecognizer, SCBaseMediaFullScreenView, UIWindow, UIViewController, SCDiscoverDSnapExpirationValidator, SCShazamOperaPresenter, SCAudioStitchPreviewHandler, SCBrowserViewController, SCBaseMediaThumbnailViewModel, SCLoadingIndicatorView, UIView, UILabel, SCDiscoverBarView, AVPlayer, FLAnimatedImage, FBKVOController, FLAnimatedImageView, UIImageView, SCPlayerView, NSString;

@interface SCBaseMediaThumbnailView : UIView <SCDiscoverBarDelegate, UIGestureRecognizerDelegate, SCShazamOperaControllerDelegate, SCBrowserViewControllerDelegate, SCTimeProfilable, SCBaseMediaFullScreenDelegate, SCSendPreviewMediaView> {

	SCUserSession* _userSession;
	UITapGestureRecognizer* _tapGesture;
	SCBaseMediaFullScreenView* _baseMediaFullScreenView;
	UIWindow* _mediaFullScreenWindow;
	UIViewController*<SCChatCellBaseGestureDelegate> _parentVC;
	id<SCChatFullscreenMediaChatTableCellDelegate> _delegate;
	SCDiscoverDSnapExpirationValidator* _dSnapExpirationValidator;
	SCShazamOperaPresenter* _khaleesiOperaPresenter;
	double _mediaBottomOffset;
	CGRect _viewBounds;
	SCAudioStitchPreviewHandler* _audioStitchPreviewHandler;
	BOOL _videoShouldBePlaying;
	BOOL _shouldExcludeDiscoverBar;
	SCBrowserViewController* _webBrowser;
	SCBaseMediaThumbnailViewModel* _viewModel;
	SCLoadingIndicatorView* _activityIndicator;
	UIView* _blockingOverlayView;
	UILabel* _failedToSendLabel;
	SCDiscoverBarView* _discoverBar;
	AVPlayer* _player;
	UILabel* _tapToLoadLabel;
	UILabel* _failedToLoadLabel;
	FLAnimatedImage* _storedAnimatedImage;
	FBKVOController* _videoObserveController;
	FLAnimatedImageView* _imageView;
	UIImageView* _videoOverlayView;
	SCPlayerView* _videoView;
	CGSize _thumbnailSize;

}

@property (nonatomic,retain) SCLoadingIndicatorView * activityIndicator;                                                                             //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UIView * blockingOverlayView;                                                                                           //@synthesize blockingOverlayView=_blockingOverlayView - In the implementation block
@property (nonatomic,retain) UILabel * failedToSendLabel;                                                                                            //@synthesize failedToSendLabel=_failedToSendLabel - In the implementation block
@property (nonatomic,retain) SCDiscoverBarView * discoverBar;                                                                                        //@synthesize discoverBar=_discoverBar - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                                                                      //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) UILabel * tapToLoadLabel;                                                                                               //@synthesize tapToLoadLabel=_tapToLoadLabel - In the implementation block
@property (nonatomic,retain) UILabel * failedToLoadLabel;                                                                                            //@synthesize failedToLoadLabel=_failedToLoadLabel - In the implementation block
@property (nonatomic,retain) FLAnimatedImage * storedAnimatedImage;                                                                                  //@synthesize storedAnimatedImage=_storedAnimatedImage - In the implementation block
@property (nonatomic,retain) FBKVOController * videoObserveController;                                                                               //@synthesize videoObserveController=_videoObserveController - In the implementation block
@property (nonatomic,retain) FLAnimatedImageView * imageView;                                                                                        //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * videoOverlayView;                                                                                         //@synthesize videoOverlayView=_videoOverlayView - In the implementation block
@property (nonatomic,retain) SCPlayerView * videoView;                                                                                               //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,retain) SCBaseMediaThumbnailViewModel * viewModel;                                                                              //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                                                                                                   //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController*<SCChatCellBaseGestureDelegate>*<SCChatCellMessageStateUpdateDelegate> parentVC;              //@synthesize parentVC=_parentVC - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)grayChatColor;
+(int)context;
+(id)borderColor;
+(id)defaultBackgroundColor;
+(id)labelFont;
-(UIViewController*<SCChatCellBaseGestureDelegate>*<SCChatCellMessageStateUpdateDelegate>)parentVC;
-(void)resumeVideo;
-(void)_initGestures;
-(void)operaPresenterWillAppear;
-(void)operaPresenterDidDisappear;
-(void)resetContents;
-(void)dismissFullScreenView;
-(BOOL)fullScreenIsShown;
-(void)setUpVideo;
-(void)fetchOriginalImageToDisplayWithCompletionHandler:(/*^block*/id)arg1 ;
-(CGRect)destinationBoundingFrame;
-(id)thumbnailViewForMedia:(id)arg1 ;
-(void)releaseAnimatedImage;
-(BOOL)isDiscoverMessage:(id)arg1 ;
-(id)discoverMetadataToLog:(id)arg1 ;
-(SCDiscoverBarView *)discoverBar;
-(FBKVOController *)videoObserveController;
-(void)fullScreenViewStartPanning;
-(void)repopulateAnimatedImage;
-(void)fullScreenViewWasDismissed:(id)arg1 ;
-(id)storyReplyMessageToLog;
-(void)setVideoOverlayView:(UIImageView *)arg1 ;
-(void)setDiscoverBar:(SCDiscoverBarView *)arg1 ;
-(void)setVideoObserveController:(FBKVOController *)arg1 ;
-(id)initWithParentVC:(id)arg1 delegate:(id)arg2 ;
-(void)setMediaViewModel:(id)arg1 ;
-(void)onRenderingDoneWithMediaType:(id)arg1 ;
-(void)createFullScreenView;
-(void)prepareVideoIfNecessary;
-(void)_initImageView;
-(void)_initBlockingOverlayView;
-(UIView *)blockingOverlayView;
-(void)layoutActivityIndicator;
-(double)_centerYOffsetWithThumbnailHeight:(double)arg1 mediaOffset:(double)arg2 ;
-(id)_thumbnailLabelWithText:(id)arg1 ;
-(void)_insertThumbnailLabel:(id)arg1 ;
-(BOOL)contentPopulated;
-(void)setUpDisplay;
-(void)_renderAnimatedImage:(id)arg1 ;
-(void)_mediaLoadFailed:(id)arg1 ;
-(void)_renderThumbnailViewImageGenerating:(id)arg1 ;
-(void)_renderThumbnailImage:(id)arg1 ;
-(BOOL)_isMischiefMessage;
-(void)_prepareDiscoverBarIfNecessary;
-(BOOL)_isDisplayingDiscoverShare;
-(void)_setUpAVPlayerWithAVComposition:(id)arg1 ;
-(BOOL)_isDisplayingV3Media;
-(BOOL)_readyToRemoveOverlay;
-(void)_setUpCompleteDisplay;
-(void)setUpPendingDisplay;
-(void)_setUpCompleteDisplayWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)hideBlockingOverlayWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_updateBlockingOverlay;
-(UILabel *)tapToLoadLabel;
-(UILabel *)failedToSendLabel;
-(UILabel *)failedToLoadLabel;
-(void)_showSendingBlockingOverlay;
-(void)_showLoadingBlockingOverlay;
-(BOOL)isDiscoverMessageInChatV3:(id)arg1 ;
-(void)setStoredAnimatedImage:(FLAnimatedImage *)arg1 ;
-(FLAnimatedImage *)storedAnimatedImage;
-(BOOL)isDiscoverMessageInChatV2:(id)arg1 ;
-(void)_initWebViewBrowserWithURL:(id)arg1 ;
-(void)_presentWebView;
-(id)dSnapValidator;
-(void)handleTapToNavigateOnBar:(id)arg1 withDiscoverMetadata:(id)arg2 ;
-(void)handleRetryOnBar:(id)arg1 ;
-(void)didCloseOperaViewer;
-(void)browserViewIsClosing;
-(id)SCAMediaTypes;
-(id)initWithThumbnailSize:(CGSize)arg1 userInteractionEnabled:(BOOL)arg2 shouldExcludeDiscoverBar:(BOOL)arg3 ;
-(void)setMediaBottomOffset:(double)arg1 ;
-(BOOL)_isStoryReplyMessage;
-(BOOL)_isDiscoverMessage;
-(void)presentDeepLinkContentFromFullScreen;
-(void)setBlockingOverlayView:(UIView *)arg1 ;
-(void)setFailedToSendLabel:(UILabel *)arg1 ;
-(void)setTapToLoadLabel:(UILabel *)arg1 ;
-(void)setFailedToLoadLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)stopAnimation;
-(FLAnimatedImageView *)imageView;
-(void)startAnimation;
-(void)_initSubviews;
-(void)handleTap:(id)arg1 ;
-(void)setImageView:(FLAnimatedImageView *)arg1 ;
-(void)play;
-(void)pause;
-(SCLoadingIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(SCLoadingIndicatorView *)arg1 ;
-(void)setUserSession:(id)arg1 ;
-(SCPlayerView *)videoView;
-(UIImageView *)videoOverlayView;
-(void)setVideoView:(SCPlayerView *)arg1 ;
-(void)resetPlayer;
-(SCBaseMediaThumbnailViewModel *)viewModel;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(CGSize)thumbnailSize;
-(void)setViewModel:(SCBaseMediaThumbnailViewModel *)arg1 ;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)pauseVideo;
-(void)playerItemDidReachEnd:(id)arg1 ;
-(void)_showSpinner;
-(void)_hideSpinner;
@end

