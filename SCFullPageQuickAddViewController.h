/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCLeftSwipableViewController.h>
#import <Snapchat/SCSearchBarDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Snapchat/SCHeaderDataSource.h>
#import <Snapchat/SCHeaderDelegate.h>
#import <Snapchat/SCFriendProfileCellViewDelegate.h>
#import <Snapchat/SendSnapNavigationControllerDelegate.h>
#import <Snapchat/SCQuickAddControllerDataSrouce.h>
#import <Snapchat/SCQuickAddControllerDelegate.h>
#import <Snapchat/SCMiniProfileViewControllerDelegate.h>

@protocol SCStartChatDelegate, SendSnapNavigationControllerDelegate;
@class SCHeader, SCSearchBar, UITableView, NSMutableArray, SCUserSession, SCFriendFilter, AddFriendsDelegateObject, SCQuickAddController, NSString;

@interface SCFullPageQuickAddViewController : SCLeftSwipableViewController <SCSearchBarDelegate, UITableViewDataSource, UITableViewDelegate, SCHeaderDataSource, SCHeaderDelegate, SCFriendProfileCellViewDelegate, SendSnapNavigationControllerDelegate, SCQuickAddControllerDataSrouce, SCQuickAddControllerDelegate, SCMiniProfileViewControllerDelegate> {

	SCHeader* _header;
	SCSearchBar* _searchBar;
	UITableView* _tableView;
	NSMutableArray* _filteredSuggestedFriends;
	SCUserSession* _userSession;
	SCFriendFilter* _friendFilter;
	AddFriendsDelegateObject* _addFriendsDelegateObject;
	SCQuickAddController* _quickAddController;
	unsigned long long _source;
	id<SCStartChatDelegate> _startChatDelegate;
	id<SendSnapNavigationControllerDelegate> _sendSnapNavigationControllerDelegate;
	BOOL _searching;
	BOOL _didLogUserFirstOptionFromQuickAction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)leftButtonPressed;
-(id)imageForLeftButtonInState:(unsigned long long)arg1 ;
-(id)imageForRightButtonInState:(unsigned long long)arg1 ;
-(id)backgroundColorForHeader;
-(id)titleForHeader:(id)arg1 ;
-(id)textColorForHeader:(id)arg1 ;
-(void)_tap:(id)arg1 ;
-(void)_presentMiniProfile:(id)arg1 ;
-(void)didSendSnaps:(id)arg1 ;
-(void)_dismissPreviewIfPresented;
-(void)friendProfileCellView:(id)arg1 addFriendPressed:(id)arg2 friend:(id)arg3 ;
-(void)didPressHideButtonForFriend:(id)arg1 ;
-(void)didCancelFromPreview:(id)arg1 ;
-(void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2 ;
-(void)miniProfileViewController:(id)arg1 didSendSnap:(id)arg2 ;
-(void)_initGesture:(id)arg1 ;
-(long long)_getSuggestedFriendIndexPathRow:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 source:(unsigned long long)arg2 startChatDelegate:(id)arg3 sendSnapNavigationControllerDelegate:(id)arg4 ;
-(id)startChatDelegate;
-(id)sendSnapNavigationControllerDelegateForQuickAddController;
-(id)quickAddControllerParentViewController;
-(id)replyParametersForName:(id)arg1 ;
-(void)_suggestedFriendsDidChange:(id)arg1 ;
-(void)reloadFriends;
-(void)_resetFriendFilter;
-(void)_filterResults:(id)arg1 ;
-(id)_requestsAddFriendContext:(long long)arg1 ;
-(id)_requestsDeleteFriendContext:(long long)arg1 ;
-(void)_filterSearch:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)_longPress:(id)arg1 ;
-(void)reloadTable;
@end

