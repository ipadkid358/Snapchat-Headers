/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCChatHamburgerRoundedCornerCell.h>
#import <Snapchat/SCAvatarViewDelegate.h>

@protocol SCChatHamburgerGroupStoryCellDelegate;
@class UILabel, UIView, SCPieSliceView, SCExpandedButton, SCAvatarView, UITapGestureRecognizer, SCUserSession;

@interface SCChatHamburgerTableSectionGroupStoryCell : SCChatHamburgerRoundedCornerCell <SCAvatarViewDelegate> {

	UILabel* _nameLabel;
	UILabel* _subLabel;
	UIView* _subView;
	UILabel* _addStoryLabel;
	UIView* _separator;
	SCPieSliceView* _pieSliceView;
	SCExpandedButton* _addToStoryButton;
	SCAvatarView* _avatarView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	SCUserSession* _userSession;
	id<SCChatHamburgerGroupStoryCellDelegate> _storyDelegate;

}

@property (assign,nonatomic,__weak) id<SCChatHamburgerGroupStoryCellDelegate> storyDelegate;              //@synthesize storyDelegate=_storyDelegate - In the implementation block
-(void)layoutLabels;
-(void)handleTapOnStoryIconFromAvatarView:(id)arg1 ;
-(void)handleTapOnBitmojiFromAvatarView:(id)arg1 ;
-(void)handleLongPressOnStoryIconFromAvatarView:(id)arg1 ;
-(void)setStoryDelegate:(id<SCChatHamburgerGroupStoryCellDelegate>)arg1 ;
-(id<SCChatHamburgerGroupStoryCellDelegate>)storyDelegate;
-(double)nameLabelWidth;
-(id)nameLabelFont;
-(void)updateGroupStoryName:(id)arg1 ;
-(void)updateWithFriendStories:(id)arg1 groupStoryName:(id)arg2 groupId:(id)arg3 groupStoryMuted:(BOOL)arg4 ;
-(void)addToStoryButtonPressed;
-(void)updateSubLabelWithFriendStories:(id)arg1 ;
-(void)updateLabel:(id)arg1 withStatusText:(id)arg2 date:(id)arg3 showTimestamp:(BOOL)arg4 ;
-(id)pieSliceView;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)setUserSession:(id)arg1 ;
-(void)_setup;
-(id)avatarView;
@end

