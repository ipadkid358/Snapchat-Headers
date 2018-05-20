/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <Snapchat/SCStoryMediaStateListener.h>
#import <Snapchat/SCStoryIconViewDelegate.h>

@protocol SCSearchItemDownloading, SCStoryAvatarViewDelegate;
@class SCSearchNetworkImageView, SCLazy, CAShapeLayer, SCUserSession, NSArray, SCStoryIconView, SCSingleIconConfigurer, Story, FriendStories, SCStoryAvatarViewModel, NSString;

@interface SCStoryAvatarView : UIView <SCStoryMediaStateListener, SCStoryIconViewDelegate> {

	SCSearchNetworkImageView* _storyNetworkImageView;
	SCLazy* _replayImageView;
	SCLazy* _loadingView;
	SCLazy* _gradientLayer;
	CAShapeLayer* _gradientMaskLayer;
	SCUserSession* _userSession;
	NSArray* _contexts;
	SCStoryIconView* _storyIconView;
	SCSingleIconConfigurer* _singleIconConfigurer;
	long long _borderStyle;
	BOOL _isStoryReplayable;
	BOOL _isStoryMuted;
	Story* _thumbnailStory;
	FriendStories* _friendStories;
	SCStoryAvatarViewModel* _viewModel;
	id<SCSearchItemDownloading> _imageDownloader;
	id<SCStoryAvatarViewDelegate> _delegate;

}

@property (nonatomic,retain) SCStoryAvatarViewModel * viewModel;                         //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) id<SCSearchItemDownloading> imageDownloader;                //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (assign,nonatomic,__weak) id<SCStoryAvatarViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImageDownloader:(id<SCSearchItemDownloading>)arg1 ;
-(id<SCSearchItemDownloading>)imageDownloader;
-(void)_showGradientLayer;
-(void)story:(id)arg1 didChangeMediaState:(long long)arg2 ;
-(void)story:(id)arg1 didChangeThumbnailMediaState:(long long)arg2 ;
-(id)operaBaseView;
-(id)storyIconView;
-(void)updateWithFriendStories:(id)arg1 borderStyle:(long long)arg2 isStoryReplayable:(BOOL)arg3 isStoryMuted:(BOOL)arg4 ;
-(id)initWithUserSession:(id)arg1 contexts:(id)arg2 ;
-(void)_initGradientLayer;
-(void)_initStoryIcon;
-(void)_reachabilityDidChangeNotification:(id)arg1 ;
-(void)_showReplayIconIfNecessary;
-(void)_showLoadingViewIfNecessary;
-(void)_showLoadingAnimationIfNecessary:(BOOL)arg1 ;
-(long long)_viewingTypeForFriendStories:(id)arg1 ;
-(void)_fetchThumbnailMediaForCurrentStoryIfNecessary;
-(void)_displayThumbnailForCurrentStory;
-(void)_updateStoryIconViewProperties;
-(BOOL)_shouldForceNoBorderStyle;
-(void)onShowingSpinner;
-(void)onHidingSpinner;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCStoryAvatarViewDelegate>)arg1 ;
-(void)dealloc;
-(id<SCStoryAvatarViewDelegate>)delegate;
-(void)_updateStyle;
-(void)prepareForReuse;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)borderWidth;
-(double)_borderWidth;
-(id)gradientColors;
-(SCStoryAvatarViewModel *)viewModel;
-(void)setViewModel:(SCStoryAvatarViewModel *)arg1 ;
@end

