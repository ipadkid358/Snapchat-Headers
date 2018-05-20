/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCChatHamburgerRoundedCornerCell.h>
#import <Snapchat/SCHamburgerFriendCellViewEventDelegate.h>

@protocol SCHamburgerFriendGestureDelegate;
@class SCHamburgerFriendCellView, SCHamburgerFriendCellViewModel, NSString;

@interface SCHamburgerFriendCell : SCChatHamburgerRoundedCornerCell <SCHamburgerFriendCellViewEventDelegate> {

	SCHamburgerFriendCellView* _friendCellContentView;
	id<SCHamburgerFriendGestureDelegate> _gestureDelegate;
	SCHamburgerFriendCellViewModel* _viewModel;

}

@property (assign,nonatomic,__weak) id<SCHamburgerFriendGestureDelegate> gestureDelegate;              //@synthesize gestureDelegate=_gestureDelegate - In the implementation block
@property (nonatomic,retain) SCHamburgerFriendCellViewModel * viewModel;                               //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resetFriendCellView;
-(void)resetDisplayNameFromUsername:(id)arg1 ;
-(void)resetUsernameOrScoreForUsername:(id)arg1 ;
-(void)hamburgerFriendCellViewDidPressOnBitmoji:(id)arg1 ;
-(void)hamburgerFriendCellView:(id)arg1 didPressOnStoryIcon:(id)arg2 ;
-(void)hamburgerFriendCellView:(id)arg1 didTapAddFriend:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)identifier;
-(void)prepareForReuse;
-(void)setGestureDelegate:(id<SCHamburgerFriendGestureDelegate>)arg1 ;
-(id<SCHamburgerFriendGestureDelegate>)gestureDelegate;
-(SCHamburgerFriendCellViewModel *)viewModel;
-(void)setViewModel:(SCHamburgerFriendCellViewModel *)arg1 ;
@end

