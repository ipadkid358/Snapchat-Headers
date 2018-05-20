/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCLeftSwipableViewController.h>
#import <Snapchat/SCFriendProfileCellViewDelegate.h>
#import <Snapchat/SCShareUsernameControllerDelegate.h>
#import <Snapchat/SendSnapNavigationControllerDelegate.h>
#import <Snapchat/SCRequestPermissionPromptViewDataSource.h>
#import <Snapchat/SCRequestPermissionPromptViewDelegate.h>
#import <Snapchat/SCQuickAddControllerDelegate.h>
#import <Snapchat/SCQuickAddControllerDataSrouce.h>
#import <Snapchat/SCMiniProfileViewControllerDelegate.h>
#import <Snapchat/SCSearchContentViewControlling.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Snapchat/SWTableViewCellDelegate.h>
#import <Snapchat/SCHeaderDelegate.h>
#import <Snapchat/SCHeaderDataSource.h>
#import <Snapchat/Subview.h>

@protocol SCStartChatDelegate, SendSnapNavigationControllerDelegate, NavigationDelegate;
@class SCUserSession, SCShareUsernameController, SCQuickAddController, SCRequestPermissionPromptView, NSMutableSet, NSString, SCSearchContentViewControllerContext, AddFriendsDelegateObject, SCHeader, UITableView, UIImageView, UIView;

@interface SCFindFriendMenuViewController : SCLeftSwipableViewController <SCFriendProfileCellViewDelegate, SCShareUsernameControllerDelegate, SendSnapNavigationControllerDelegate, SCRequestPermissionPromptViewDataSource, SCRequestPermissionPromptViewDelegate, SCQuickAddControllerDelegate, SCQuickAddControllerDataSrouce, SCMiniProfileViewControllerDelegate, SCSearchContentViewControlling, UITableViewDataSource, UITableViewDelegate, SWTableViewCellDelegate, SCHeaderDelegate, SCHeaderDataSource, Subview> {

	id<SCStartChatDelegate> _startChatDelegate;
	id<SendSnapNavigationControllerDelegate> _sendSnapNavigationControllerDelegate;
	SCUserSession* _userSession;
	SCShareUsernameController* _shareUsernameController;
	SCQuickAddController* _quickAddController;
	long long _parentView;
	SCRequestPermissionPromptView* _requestSearchableByPhonePermissionPromtView;
	SCRequestPermissionPromptView* _requestDirectUserToMyContactsPermissionPromptView;
	BOOL _useFriendFeedStyle;
	NSMutableSet* _suggestedFriendsShown;
	NSMutableSet* _suggestedFriendsShownWithDisplayPic;
	NSMutableSet* _suggestedFriendsAdded;
	NSMutableSet* _suggestedFriendsAddedWithDisplayPic;
	NSString* _nextPage;
	BOOL _isFromQuickAction;
	BOOL _didLogUserFirstOptionFromQuickAction;
	SCSearchContentViewControllerContext* _searchContentViewControllerContext;
	AddFriendsDelegateObject* _addFriendsDelegate;
	id<NavigationDelegate> _navigationDelegate;
	SCHeader* _header;
	UITableView* _suggestedFriendTableView;
	UIImageView* _fillerImage;
	UIView* _spacer;

}

@property (nonatomic,retain) SCHeader * header;                                                                      //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) UITableView * suggestedFriendTableView;                                                 //@synthesize suggestedFriendTableView=_suggestedFriendTableView - In the implementation block
@property (nonatomic,retain) UIImageView * fillerImage;                                                              //@synthesize fillerImage=_fillerImage - In the implementation block
@property (nonatomic,retain) UIView * spacer;                                                                        //@synthesize spacer=_spacer - In the implementation block
@property (assign,nonatomic) BOOL isFromQuickAction;                                                                 //@synthesize isFromQuickAction=_isFromQuickAction - In the implementation block
@property (assign,nonatomic) BOOL didLogUserFirstOptionFromQuickAction;                                              //@synthesize didLogUserFirstOptionFromQuickAction=_didLogUserFirstOptionFromQuickAction - In the implementation block
@property (nonatomic,retain) AddFriendsDelegateObject * addFriendsDelegate;                                          //@synthesize addFriendsDelegate=_addFriendsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<NavigationDelegate> navigationDelegate;                                       //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SCSearchContentViewControllerContext * searchContentViewControllerContext;              //@synthesize searchContentViewControllerContext=_searchContentViewControllerContext - In the implementation block
+(id)createSpinner;
-(void)leftButtonPressed;
-(id)imageForLeftButtonInState:(unsigned long long)arg1 ;
-(id)imageForRightButtonInState:(unsigned long long)arg1 ;
-(id)backgroundColorForHeader;
-(id)titleForHeader:(id)arg1 ;
-(id)textColorForHeader:(id)arg1 ;
-(void)leftSwipeSucceed;
-(SCSearchContentViewControllerContext *)searchContentViewControllerContext;
-(void)setSearchContentViewControllerContext:(SCSearchContentViewControllerContext *)arg1 ;
-(BOOL)shouldPopToRootViewController;
-(BOOL)shouldPopToRootViewControllerLater;
-(void)_tap:(id)arg1 ;
-(id)_pagenameForPageView;
-(id)getPageViewName;
-(AddFriendsDelegateObject *)addFriendsDelegate;
-(void)_presentMiniProfile:(id)arg1 ;
-(long long)_getAddSourceTypeForFriend:(id)arg1 ;
-(void)didSendSnaps:(id)arg1 ;
-(void)_dismissPreviewIfPresented;
-(void)friendProfileCellView:(id)arg1 addFriendPressed:(id)arg2 friend:(id)arg3 ;
-(void)didDisplayProfilePictureOnCellView:(id)arg1 onThumbnail:(id)arg2 friend:(id)arg3 ;
-(void)didPressHideButtonForFriend:(id)arg1 ;
-(void)didCancelFromPreview:(id)arg1 ;
-(void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2 ;
-(void)miniProfileViewController:(id)arg1 didSendSnap:(id)arg2 ;
-(void)setAddFriendsDelegate:(AddFriendsDelegateObject *)arg1 ;
-(void)setSuggestedFriendTableView:(UITableView *)arg1 ;
-(UITableView *)suggestedFriendTableView;
-(double)_heightOnTableView:(id)arg1 inSection:(unsigned long long)arg2 ;
-(void)setFillerImage:(UIImageView *)arg1 ;
-(UIImageView *)fillerImage;
-(void)_initFooterIfNecessary;
-(void)suggestedFriendsDidChange:(id)arg1 ;
-(id)_getFindFriendMenuTableViewCellOnTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_initGesture:(id)arg1 ;
-(void)_refreshQuickAddHeader:(id)arg1 ;
-(BOOL)isFromQuickAction;
-(BOOL)didLogUserFirstOptionFromQuickAction;
-(void)setDidLogUserFirstOptionFromQuickAction:(BOOL)arg1 ;
-(void)_handleDidSelectAddByUsernameCellOnTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_handleDidSelectAddFromAddressBookCellOnTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_handleDidSelectAddBySnapcodeCellOnTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_handleDidSelectShareUsernameCellOnTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)logUserFirstOptionIfFromQuickAction:(id)arg1 ;
-(void)presentPhotoAccessDeniedAlert;
-(long long)_getSuggestedFriendIndexPathRow:(id)arg1 ;
-(id)requestsAddFriendContext:(long long)arg1 ;
-(id)requestsDeleteFriendContext:(long long)arg1 ;
-(void)_logUnsampledMyContactsPromptAction:(BOOL)arg1 ;
-(void)_didTapViewAllButton;
-(void)presentActivityViewController:(id)arg1 shareUsernameController:(id)arg2 ;
-(id)titleForRequestPermissionPromptView:(id)arg1 ;
-(id)descriptionForRequestPermissionPromptView:(id)arg1 ;
-(id)positiveButtonStringForRequestPermissionPromptView:(id)arg1 ;
-(void)requestPermissionPromptView:(id)arg1 isPermissionGranted:(BOOL)arg2 ;
-(id)startChatDelegate;
-(id)sendSnapNavigationControllerDelegateForQuickAddController;
-(id)quickAddControllerParentViewController;
-(id)replyParametersForName:(id)arg1 ;
-(id)initWithSendSnapNavigationControllerDelegate:(id)arg1 startChatDelegate:(id)arg2 userSession:(id)arg3 parentView:(long long)arg4 useFriendFeedStyle:(BOOL)arg5 ;
-(void)_handleDidSelectSearchCellOnTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)checkForCameraAccessWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)setIsFromQuickAction:(BOOL)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(UIView *)spacer;
-(void)setSpacer:(UIView *)arg1 ;
-(id<NavigationDelegate>)navigationDelegate;
-(void)_longPress:(id)arg1 ;
-(SCHeader *)header;
-(void)scrollToTop;
-(void)reloadTable;
-(void)setHeader:(SCHeader *)arg1 ;
-(void)setNavigationDelegate:(id<NavigationDelegate>)arg1 ;
@end

