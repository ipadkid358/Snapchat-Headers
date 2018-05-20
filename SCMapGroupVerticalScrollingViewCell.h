/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:41 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Snapchat/SCAvatarViewDelegate.h>

@protocol SCMapGroupVerticalScrollingViewCellDelegate, SCChatGroup;
@class UIView, UILabel, UITapGestureRecognizer, SCUserSession, SCAvatarView, NSString;

@interface SCMapGroupVerticalScrollingViewCell : UICollectionViewCell <UIGestureRecognizerDelegate, SCAvatarViewDelegate> {

	UIView* _containerView;
	UILabel* _label;
	UILabel* _sublabel;
	UITapGestureRecognizer* _tapGestureRecognizer;
	SCUserSession* _userSession;
	BOOL _canShowStory;
	id<SCMapGroupVerticalScrollingViewCellDelegate> _delegate;
	id<SCChatGroup> _group;
	SCAvatarView* _avatarView;
	unsigned long long _layoutDensity;

}

@property (assign,nonatomic,__weak) id<SCMapGroupVerticalScrollingViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<SCChatGroup> group;                                                      //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) SCAvatarView * avatarView;                                                  //@synthesize avatarView=_avatarView - In the implementation block
@property (assign,nonatomic) BOOL canShowStory;                                                            //@synthesize canShowStory=_canShowStory - In the implementation block
@property (assign,nonatomic) unsigned long long layoutDensity;                                             //@synthesize layoutDensity=_layoutDensity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didTap:(id)arg1 ;
-(BOOL)canShowStory;
-(void)handleTapOnStoryIconFromAvatarView:(id)arg1 ;
-(void)handleTapOnBitmojiFromAvatarView:(id)arg1 ;
-(void)handleLongPressOnStoryIconFromAvatarView:(id)arg1 ;
-(void)setCanShowStory:(BOOL)arg1 ;
-(void)setLayoutDensity:(unsigned long long)arg1 ;
-(void)setGroup:(id)arg1 userSession:(id)arg2 ;
-(void)_onFriendsDidChange;
-(void)_rebuildUI;
-(unsigned long long)layoutDensity;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)setDelegate:(id<SCMapGroupVerticalScrollingViewCellDelegate>)arg1 ;
-(void)dealloc;
-(id<SCMapGroupVerticalScrollingViewCellDelegate>)delegate;
-(id<SCChatGroup>)group;
-(SCAvatarView *)avatarView;
@end

