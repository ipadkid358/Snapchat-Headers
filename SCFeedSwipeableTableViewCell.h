/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCFeedTableViewCell.h>
#import <Snapchat/SCFeedSnapActionCell.h>
#import <Snapchat/SCFeedChatActionCell.h>
#import <Snapchat/SCFeedComponentViewDelegate.h>
#import <Snapchat/SCPannableCell.h>
#import <Snapchat/SCFeedStoryViewDelegate.h>
#import <Snapchat/SCFeedIconViewDelegate.h>

@protocol SCFeedComponentBaseView;
@class UIImageView, SCLazy, UIView, NSString;

@interface SCFeedSwipeableTableViewCell : SCFeedTableViewCell <SCFeedSnapActionCell, SCFeedChatActionCell, SCFeedComponentViewDelegate, SCPannableCell, SCFeedStoryViewDelegate, SCFeedIconViewDelegate> {

	UIImageView* _swipeBackgroundIconView;
	SCLazy* _storyFeedComponentView;
	UIView*<SCFeedComponentBaseView> _feedComponentView;

}

@property (nonatomic,retain) UIView*<SCFeedComponentBaseView> feedComponentView;              //@synthesize feedComponentView=_feedComponentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handlePressOnRetryButton:(id)arg1 ;
-(void)handlePressOnSnapButton;
-(void)resetBackgroundColorAnimated:(BOOL)arg1 ;
-(void)handlePressOnReplyButton;
-(void)snapSubstituteLabelDidShow;
-(void)updateFriendMojiView;
-(id)feedIconView;
-(id)cellViewModel;
-(void)handlePressOnStoryIcon;
-(void)handlePressOnBitmoji;
-(void)setDebugStringOnPress;
-(void)toggleBottomBorderVisibility:(BOOL)arg1 ;
-(void)setTouchedBackgroundColor;
-(void)setTouchedBackgroundColorWithDismissPercentage:(double)arg1 ;
-(void)showSubstituteSubLabelBriefly;
-(void)updateReplyButtonWithIdentifer:(id)arg1 updateFriendMoji:(BOOL)arg2 ;
-(id)dismissFeedIconView;
-(void)showSnapSubstituteSubLabelBrieflyIfNecessary;
-(void)bounceRepeatedlyIfNecessary;
-(BOOL)tapGestureRecognizerShouldBegin;
-(BOOL)delayedTapGestureRecognizerShouldBegin;
-(BOOL)doubleTapGestureRecognizerShouldBegin;
-(BOOL)longPressGestureRecognizerShouldBegin;
-(UIView*<SCFeedComponentBaseView>)feedComponentView;
-(id)dismissBaseView;
-(CGRect)dismissBaseViewFrame;
-(void)panOverWithOffset:(double)arg1 isDragging:(BOOL)arg2 ;
-(void)endPanning:(BOOL)arg1 ;
-(void)snapTimerDidExpire;
-(void)resetNextVC:(id)arg1 ;
-(void)_initV10Views;
-(id)swipeableViewModel;
-(void)_bounceRepeatedlyAfterDelays:(id)arg1 ;
-(void)_bounceWithCompletion:(/*^block*/id)arg1 ;
-(void)_bounceWithMagnitude:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(double)_bounceXOffsetWithMagnitude:(long long)arg1 ;
-(void)setFeedComponentView:(UIView*<SCFeedComponentBaseView>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)bounce;
-(void)setUserSession:(id)arg1 ;
-(unsigned long long)cellPosition;
-(void)setViewModel:(id)arg1 ;
@end

