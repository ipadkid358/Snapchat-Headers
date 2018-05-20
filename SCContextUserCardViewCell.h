/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCContextCardViewCell.h>
#import <Snapchat/SCAddFriendButtonV2Delegate.h>
#import <Snapchat/SCAvatarViewDelegate.h>
#import <Snapchat/SCContextStoryPlayback.h>

@protocol SCContextUserCardDelegate;
@class UIView, SCAvatarView, UILabel, UIImageView, SCAddFriendButtonV2, Friend, NSString, SCUserSession;

@interface SCContextUserCardViewCell : SCContextCardViewCell <SCAddFriendButtonV2Delegate, SCAvatarViewDelegate, SCContextStoryPlayback> {

	UIView* _profileContainerView;
	SCAvatarView* _avatarView;
	UIView* _labelContainerView;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UILabel* _tertiaryLabel;
	UIImageView* _feediconImageView;
	SCAddFriendButtonV2* _addButton;
	Friend* _friend;
	long long _style;
	NSString* _feedIconName;
	SCUserSession* _userSession;
	id<SCContextUserCardDelegate> _storyDelegate;
	long long _addSourceType;

}

@property (nonatomic,retain) SCUserSession * userSession;                                     //@synthesize userSession=_userSession - In the implementation block
@property (assign,nonatomic,__weak) id<SCContextUserCardDelegate> storyDelegate;              //@synthesize storyDelegate=_storyDelegate - In the implementation block
@property (assign,nonatomic) long long addSourceType;                                         //@synthesize addSourceType=_addSourceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)addSourceType;
-(void)setAddSourceType:(long long)arg1 ;
-(void)_updateWithViewModel;
-(id)friendmojiPresenter;
-(void)buttonV2Pressed:(id)arg1 friend:(id)arg2 ;
-(void)handleTapOnStoryIconFromAvatarView:(id)arg1 ;
-(void)handleTapOnBitmojiFromAvatarView:(id)arg1 ;
-(void)handleLongPressOnStoryIconFromAvatarView:(id)arg1 ;
-(void)setStoryDelegate:(id<SCContextUserCardDelegate>)arg1 ;
-(id<SCContextUserCardDelegate>)storyDelegate;
-(id)referenceViewForPlayback;
-(BOOL)needsCircleTransition;
-(void)updateWithFriend:(id)arg1 feedIcon:(id)arg2 style:(long long)arg3 ;
-(void)_updateBackgroundColorForLabelsWithColor:(id)arg1 ;
-(void)_updateWithFriend:(id)arg1 ;
-(void)_updateAvatarWithFriend:(id)arg1 ;
-(void)_updateSecondaryTextWithUsername:(id)arg1 score:(id)arg2 friendmoji:(id)arg3 ;
-(void)_updateSecondaryTextWithFriend:(id)arg1 ;
-(void)_updateLabelsWithName:(id)arg1 username:(id)arg2 friendmoji:(id)arg3 suggestedReason:(id)arg4 feediconImage:(id)arg5 ;
-(void)_updateAddButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(SCUserSession *)userSession;
-(void)setUserSession:(SCUserSession *)arg1 ;
@end

