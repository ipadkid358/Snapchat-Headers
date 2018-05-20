/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGenericSettingsViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Snapchat/SCMiniProfileViewControllerDelegate.h>
#import <Snapchat/SCFriendProfileCellViewDelegate.h>

@protocol SCReplyDelegate;
@class UITableView, SCSearchContainerView, NSArray, NSDictionary, NSString, AddFriendsDelegateObject, SCUserSession, UILongPressGestureRecognizer;

@interface SCGroupStoryMembersViewController : SCGenericSettingsViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, SCMiniProfileViewControllerDelegate, SCFriendProfileCellViewDelegate> {

	UITableView* _tableView;
	SCSearchContainerView* _blurredContainerView;
	NSArray* _friends;
	NSArray* _nonFriends;
	NSDictionary* _usernameDict;
	NSDictionary* _displayNameDict;
	NSString* _title;
	AddFriendsDelegateObject* _addFriendsController;
	long long _context;
	SCUserSession* _userSession;
	NSString* _loggingId;
	BOOL _isDarkThemed;
	BOOL _hideNonFriendAdd;
	UILongPressGestureRecognizer* _longPressRecognizer;
	id<SCReplyDelegate> _replyDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imageForLeftButtonInState:(unsigned long long)arg1 ;
-(id)backgroundColorForHeader;
-(id)textColorForHeader:(id)arg1 ;
-(id)getTitle;
-(void)_presentMiniProfile:(id)arg1 ;
-(void)friendProfileCellView:(id)arg1 addFriendPressed:(id)arg2 friend:(id)arg3 ;
-(void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2 ;
-(id)additionalAddFriendContextForMiniProfileViewController:(id)arg1 ;
-(void)friendProfileCellView:(id)arg1 chatButtonPressed:(id)arg2 friend:(id)arg3 ;
-(void)friendProfileCellView:(id)arg1 snapButtonPressed:(id)arg2 friend:(id)arg3 ;
-(id)initWithMemberNames:(id)arg1 title:(id)arg2 isDarkThemed:(BOOL)arg3 usernameDict:(id)arg4 displayNameDict:(id)arg5 replyDelegate:(id)arg6 context:(long long)arg7 userSession:(id)arg8 loggingId:(id)arg9 ;
-(void)_sortFriendsAndNonFriendsFromUserIds:(id)arg1 ;
-(void)_friendsDidChange:(id)arg1 ;
-(id)_friendCellForIndexPath:(id)arg1 ;
-(id)_nonFriendCellForIndexPath:(id)arg1 ;
-(id)_friendAtIndexPath:(id)arg1 ;
-(long long)_buttonStateForFriend:(id)arg1 processingType:(unsigned long long)arg2 ;
-(id)_addFriendsContext;
-(void)dealloc;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)_handleLongPress:(id)arg1 ;
@end

