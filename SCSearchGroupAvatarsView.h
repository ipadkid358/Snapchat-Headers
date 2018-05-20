/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, SCSearchProfilePictureThumbnail, SCSearchGroupAvatarsCountView;

@interface SCSearchGroupAvatarsView : UIView {

	NSArray* _friends;
	NSArray* _fallbackUsernames;
	double _scale;
	BOOL _hideRemainingCount;
	SCSearchProfilePictureThumbnail* _avatarView1;
	SCSearchProfilePictureThumbnail* _avatarView2;
	SCSearchProfilePictureThumbnail* _avatarView3;
	SCSearchProfilePictureThumbnail* _avatarView4;
	SCSearchGroupAvatarsCountView* _countView;

}

@property (nonatomic,retain) SCSearchProfilePictureThumbnail * avatarView1;              //@synthesize avatarView1=_avatarView1 - In the implementation block
@property (nonatomic,retain) SCSearchProfilePictureThumbnail * avatarView2;              //@synthesize avatarView2=_avatarView2 - In the implementation block
@property (nonatomic,retain) SCSearchProfilePictureThumbnail * avatarView3;              //@synthesize avatarView3=_avatarView3 - In the implementation block
@property (nonatomic,retain) SCSearchProfilePictureThumbnail * avatarView4;              //@synthesize avatarView4=_avatarView4 - In the implementation block
@property (nonatomic,retain) SCSearchGroupAvatarsCountView * countView;                  //@synthesize countView=_countView - In the implementation block
-(void)updateWithFriends:(id)arg1 bitmojiManager:(id)arg2 hideRemainingCount:(BOOL)arg3 ;
-(void)resetAvatars;
-(void)_layoutOneAvatar:(id)arg1 ;
-(void)_layoutTwoAvatars:(id)arg1 ;
-(void)_layoutThreeAvatars:(id)arg1 ;
-(void)_layoutFourOrMoreAvatars:(id)arg1 ;
-(id)_createSingleAvatarView;
-(SCSearchProfilePictureThumbnail *)avatarView1;
-(SCSearchProfilePictureThumbnail *)avatarView2;
-(SCSearchProfilePictureThumbnail *)avatarView3;
-(SCSearchGroupAvatarsCountView *)countView;
-(SCSearchProfilePictureThumbnail *)avatarView4;
-(void)updateWithFriends:(id)arg1 bitmojiManager:(id)arg2 ;
-(void)updateFallbackAvatarWithUsernames:(id)arg1 ;
-(void)setAvatarView1:(SCSearchProfilePictureThumbnail *)arg1 ;
-(void)setAvatarView2:(SCSearchProfilePictureThumbnail *)arg1 ;
-(void)setAvatarView3:(SCSearchProfilePictureThumbnail *)arg1 ;
-(void)setAvatarView4:(SCSearchProfilePictureThumbnail *)arg1 ;
-(void)setCountView:(SCSearchGroupAvatarsCountView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithSize:(double)arg1 ;
@end
