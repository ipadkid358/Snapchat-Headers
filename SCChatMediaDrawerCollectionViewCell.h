/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:26 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class FLAnimatedImageView, UIView, UIImageView, SCUserSession, SCPlayerView, AVPlayer, FBKVOController, SCChatMediaDrawerBaseMedia;

@interface SCChatMediaDrawerCollectionViewCell : UICollectionViewCell {

	FLAnimatedImageView* _thumbnailView;
	UIView* _selectWhiteOverlayView;
	UIImageView* _checkImageView;
	SCUserSession* _userSession;
	SCPlayerView* _videoView;
	AVPlayer* _player;
	FBKVOController* _videoObserveController;
	SCChatMediaDrawerBaseMedia* _media;

}

@property (nonatomic,retain) SCChatMediaDrawerBaseMedia * media;              //@synthesize media=_media - In the implementation block
+(id)cellDefaultBackgroundColor;
+(id)cellSeletedBackgroundColor;
+(id)highlightedBorderColor;
-(void)animateSelected:(BOOL)arg1 ;
-(void)reloadThumbnail;
-(void)pauseVideoIfNecessary;
-(void)playVideoIfNecessary;
-(void)initThumbnailView;
-(void)applyDeselectedState;
-(void)resetContent;
-(void)cleanCheckImageView;
-(void)cleanVideoView;
-(void)cleanThumbnailView;
-(void)_handleSetMediaThumbnailFetchWithMedia:(id)arg1 imageGenerating:(id)arg2 ;
-(void)_logMediaHasChangedWithPreviousMedia:(id)arg1 ;
-(void)setThumbnailViewImageGenerating:(id)arg1 ;
-(void)applySelectedState;
-(id)checkImageView;
-(void)setUpVideo;
-(void)_playVideoWithPlayerItem:(id)arg1 ;
-(double)animatedImagesTimeIntervalWithDuration:(double)arg1 frameCount:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(void)setUserSession:(id)arg1 ;
-(id)videoView;
-(void)resetPlayer;
-(id)player;
-(SCChatMediaDrawerBaseMedia *)media;
-(void)setMedia:(SCChatMediaDrawerBaseMedia *)arg1 ;
-(void)playerItemDidReachEnd:(id)arg1 ;
@end

