/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <Snapchat/SCStoryAvatarViewDelegate.h>
#import <Snapchat/SCBitmojiAvatarViewDelegate.h>
#import <Snapchat/SCGroupBitmojiAvatarViewDelegate.h>

@protocol SCSearchItemDownloading, SCAvatarViewDelegate;
@class SCUserSession, NSArray, NSString, SCLazy, SCAvatarViewConfiguration, SCNetworkImageViewSynchronizer, SCAvatarViewModel;

@interface SCAvatarView : UIView <SCStoryAvatarViewDelegate, SCBitmojiAvatarViewDelegate, SCGroupBitmojiAvatarViewDelegate> {

	SCUserSession* _userSession;
	NSArray* _contexts;
	long long _feature;
	NSString* _username;
	SCLazy* _storyAvatarView;
	SCLazy* _bitmojiAvatarView;
	SCLazy* _groupBitmojiAvatarView;
	SCAvatarViewConfiguration* _avatarViewConfiguration;
	NSArray* _accessibilityElements;
	SCNetworkImageViewSynchronizer* _imageSynchronizer;
	SCAvatarViewModel* _viewModel;
	id<SCSearchItemDownloading> _imageDownloader;
	id<SCAvatarViewDelegate> _delegate;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,retain) SCAvatarViewModel * viewModel;                            //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) id<SCSearchItemDownloading> imageDownloader;              //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                           //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (assign,nonatomic,__weak) id<SCAvatarViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
-(void)setImageDownloader:(id<SCSearchItemDownloading>)arg1 ;
-(id<SCSearchItemDownloading>)imageDownloader;
-(void)setViewModel:(id)arg1 withImageSynchronizer:(id)arg2 ;
-(void)_updateWithBitmojiAvatarViewModel:(id)arg1 ;
-(id)_friendStoriesForUsername:(id)arg1 ;
-(void)_showBitmojiView;
-(id)initWithUserSession:(id)arg1 contexts:(id)arg2 feature:(long long)arg3 ;
-(id)operaBaseView;
-(void)handlePressOnStoryIcon;
-(void)handlePressOnBitmoji;
-(id)storyIconView;
-(void)_showStoryView;
-(void)_updateWithBitmojiAvatarViewModels:(id)arg1 ;
-(void)_updateWithStoryAvatarViewModel:(id)arg1 ;
-(void)_showGroupBitmojiView;
-(void)_updateWithConfiguration:(id)arg1 ;
-(void)_showStoryViewForFriendStories:(id)arg1 borderStyle:(long long)arg2 isStoryReplayable:(BOOL)arg3 isStoryMuted:(BOOL)arg4 ;
-(void)_animateSpringOnPress;
-(void)handleLongPressOnStoryIcon;
-(void)_friendForUsername:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCAvatarViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<SCAvatarViewDelegate>)delegate;
-(void)didAddSubview:(id)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)prepareForReuse;
-(UIEdgeInsets)contentEdgeInsets;
-(id)accessibilityElements;
-(SCAvatarViewModel *)viewModel;
-(void)setViewModel:(SCAvatarViewModel *)arg1 ;
-(void)updateWithConfiguration:(id)arg1 ;
@end
