/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class Friend, FLAnimatedImageView, UIImageView;

@interface SCSearchProfilePictureThumbnail : UIView {

	Friend* _friend;
	FLAnimatedImageView* _imageView;
	UIImageView* _ghostBorderView;
	long long _style;

}

@property (nonatomic,retain) FLAnimatedImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * ghostBorderView;                //@synthesize ghostBorderView=_ghostBorderView - In the implementation block
@property (assign,nonatomic) long long style;                              //@synthesize style=_style - In the implementation block
+(id)sharedPerformer;
-(void)_showGhostFace:(unsigned long long)arg1 ;
-(void)_showProfileImages:(id)arg1 ;
-(UIImageView *)ghostBorderView;
-(void)setGhostBorderView:(UIImageView *)arg1 ;
-(void)updateWithFriend:(id)arg1 contexts:(id)arg2 bitmojiManager:(id)arg3 ;
-(void)updateFallbackGhostFaceWithDisplayName:(id)arg1 ;
-(void)_updateWithFriend:(id)arg1 contexts:(id)arg2 bitmojiAvatarId:(id)arg3 stickerId:(id)arg4 bitmojiManager:(id)arg5 ;
-(void)updateWithFriend:(id)arg1 contexts:(id)arg2 stickerId:(id)arg3 bitmojiManager:(id)arg4 ;
-(void)_showBitmojiImage:(id)arg1 ;
-(void)_updateWithFriendGhost:(id)arg1 contexts:(id)arg2 ;
-(id)_getImageArrayWithImageDataArray:(id)arg1 ;
-(void)_setGhostBorderImage;
-(void)updateWithUsername:(id)arg1 userId:(id)arg2 displayName:(id)arg3 bitmojiAvatarId:(id)arg4 stickerId:(id)arg5 bitmojiManager:(id)arg6 ;
-(id)init;
-(void)layoutSubviews;
-(void)reset;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(FLAnimatedImageView *)imageView;
-(void)setImageView:(FLAnimatedImageView *)arg1 ;
@end

