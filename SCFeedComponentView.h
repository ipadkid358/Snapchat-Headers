/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <Snapchat/SCFeedComponentBaseView.h>

@protocol SCFeedBaseComponentViewModel, SCFeedComponentViewDelegate;
@class SCFeedIconView, UILabel, SCSnapReplayAnimationView, UIView, SCFriendmojiView, SCReplyButton, SCAddFriendButtonV2, SCFriendsFeedSnapButton, SCFriendsFeedRetryButtonView, NSTimer, SCUserSession, NSString;

@interface SCFeedComponentView : UIView <SCFeedComponentBaseView> {

	SCFeedIconView* _feedIconImageView;
	UILabel* _snapCountDownLabel;
	SCSnapReplayAnimationView* _animatingReplaySnapView;
	BOOL _lastReplayWasAnimated;
	UILabel* _mainLabel;
	UILabel* _subLabel;
	UILabel* _separatorLabel;
	BOOL _isAnimatingSubstituteSubLabel;
	BOOL _isAnimatingTypingSubLabel;
	UIView* _bottomBorder;
	SCFriendmojiView* _friendMojiView;
	SCFriendmojiView* _sublabelFriendmojiView;
	SCReplyButton* _replyButton;
	SCAddFriendButtonV2* _addFriendButton;
	SCFriendsFeedSnapButton* _feedSnapButton;
	SCFriendsFeedRetryButtonView* _retryButtonView;
	UILabel* _groupMojiLabel;
	BOOL _highlighted;
	BOOL _highlightEnabled;
	NSTimer* _snapTimer;
	SCUserSession* _userSession;
	id<SCFeedBaseComponentViewModel> _viewModel;
	id<SCFeedComponentViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) SCUserSession * userSession;                           //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) id<SCFeedBaseComponentViewModel> viewModel;                   //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<SCFeedComponentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)buttonV2Pressed:(id)arg1 friend:(id)arg2 ;
-(id)operaBaseView;
-(void)handlePressOnSnapButton;
-(BOOL)isReplyButtonVisible;
-(BOOL)isFeedSnapButtonVisible;
-(BOOL)isAddFriendButtonVisible;
-(BOOL)_isSublabelFriendmojiViewVisible;
-(void)resetBackgroundColorAnimated:(BOOL)arg1 ;
-(void)handlePressOnReplyButton;
-(void)_removeSubLabelAnimations;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 delayed:(BOOL)arg3 ;
-(void)animateSubLabelWithAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateSublabelFriendmojiView;
-(id)sublabelFeedIconView;
-(void)updateAddFriendButton;
-(void)updateFriendMojiView;
-(id)replyButton;
-(id)feedIconView;
-(void)toggleBottomBorderVisibility:(BOOL)arg1 ;
-(void)setTouchedBackgroundColor;
-(void)setTouchedBackgroundColorWithDismissPercentage:(double)arg1 ;
-(void)showSubstituteSubLabelBriefly;
-(void)updateReplyButtonWithIdentifer:(id)arg1 updateFriendMoji:(BOOL)arg2 ;
-(id)leftIconView;
-(id)dismissFeedIconView;
-(BOOL)isRetryButtonViewVisible;
-(BOOL)isFriendMojiViewVisible;
-(BOOL)isGroupMojiLableVisible;
-(id)feedIconImageView;
-(void)updateGroupMojiLabel;
-(void)animateSnapReplayIfNecessary;
-(void)updateSubLabel;
-(void)updateSnapCountdownLabel;
-(void)alternateReplyButtonSubLabelWithTapToChatOn:(BOOL)arg1 ;
-(id)feedSnapButton;
-(id)retryButtonView;
-(void)_refreshSnapCountdownLabel;
-(void)_setSnapCountdownLabelWithTimeLeft:(unsigned long long)arg1 ;
-(id)snapCountDownLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<SCFeedComponentViewDelegate>)arg1 ;
-(id<SCFeedComponentViewDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setBackgroundAlpha:(double)arg1 ;
-(SCUserSession *)userSession;
-(void)setUserSession:(SCUserSession *)arg1 ;
-(id<SCFeedBaseComponentViewModel>)viewModel;
-(id)separatorLabel;
-(void)setViewModel:(id<SCFeedBaseComponentViewModel>)arg1 ;
@end

