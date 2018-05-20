/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCLeftSwipableViewController.h>
#import <Snapchat/EGORefreshTableHeaderDelegate.h>
#import <Snapchat/SCHeaderDataSource.h>
#import <Snapchat/SCMyFriendsHeaderDelegate.h>
#import <Snapchat/SCSearchFriendsSubViewControllerDelegate.h>
#import <Snapchat/SendTextControllerDelegate.h>
#import <Snapchat/SCContactsAccessDelegate.h>
#import <Snapchat/SCAlertGearDelegate.h>
#import <Snapchat/SCFriendProfileCellViewDelegate.h>
#import <Snapchat/SCTimeProfilable.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Snapchat/SCTableIndexDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Snapchat/SCMiniProfileViewControllerDelegate.h>
#import <Snapchat/Subview.h>

@protocol SCStartChatDelegate, SendSnapNavigationControllerDelegate;
@class SCUserSession, NSMutableSet, NSMutableArray, NSIndexPath, AddFriendsDelegateObject, SCMyFriendsHeader, SCSearchFriendsSubViewController, SCContactsAccessViewController, Friend, NSString, NSDictionary, EGORefreshTableHeaderView, UITableView, SCTableIndexController, NSArray, SCAlertGear;

@interface SCMyContactsViewController : SCLeftSwipableViewController <EGORefreshTableHeaderDelegate, SCHeaderDataSource, SCMyFriendsHeaderDelegate, SCSearchFriendsSubViewControllerDelegate, SendTextControllerDelegate, SCContactsAccessDelegate, SCAlertGearDelegate, SCFriendProfileCellViewDelegate, SCTimeProfilable, UITableViewDataSource, UITableViewDelegate, SCTableIndexDelegate, UIScrollViewDelegate, SCMiniProfileViewControllerDelegate, Subview> {

	SCUserSession* _userSession;
	NSMutableSet* _snapchattersShown;
	NSMutableSet* _snapchattersShownWithDisplayPic;
	NSMutableSet* _snapchattersAdded;
	NSMutableSet* _snapchattersAddedWithDisplayPic;
	NSMutableSet* _nonSnapchattersShown;
	NSMutableArray* _cellContexts;
	NSIndexPath* _currentIndexPath;
	BOOL _skipPhoneVerification;
	BOOL _fromPXPrompt;
	BOOL _useFriendFeedStyle;
	BOOL _didLayoutSubview;
	BOOL _openingFromSendTo;
	BOOL _hasTappedOnFriendSinceSearch;
	BOOL _reloading;
	BOOL _isFromQuickAction;
	AddFriendsDelegateObject* _addFriendsDelegate;
	id<SCStartChatDelegate> _startChatDelegate;
	id<SendSnapNavigationControllerDelegate> _sendSnapNavigationControllerDelegate;
	SCMyFriendsHeader* _header;
	SCSearchFriendsSubViewController* _searchFriendsSVC;
	SCContactsAccessViewController* _contactsAccessVC;
	long long _searchFieldKeyStrokeCount;
	Friend* _friendBeingInvited;
	unsigned long long _myFriendsTableViewType;
	long long _profilePageType;
	NSString* _sourcePageName;
	unsigned long long _myFriendCount;
	unsigned long long _myFriendBlockCount;
	unsigned long long _myFriendNameEditCount;
	unsigned long long _myFriendBlockInSearchCount;
	unsigned long long _myFriendRemoveInSearchCount;
	unsigned long long _myFriendNameEditInSearchCount;
	unsigned long long _myFriendReAddInSearchCount;
	unsigned long long _snapchatterAddInSearchCount;
	unsigned long long _nonSnapchatterInviteInSearchCount;
	unsigned long long _snapchatterInSearchCount;
	unsigned long long _friendInSearchCount;
	NSDictionary* _findFriendsResults;
	NSMutableArray* _temporarilyAddOrRemovedContacts;
	NSMutableArray* _temporarilyRemovedBestFriends;
	EGORefreshTableHeaderView* _refreshHeaderView;
	UITableView* _tableView;
	SCTableIndexController* _friendsTableIndexController;
	NSArray* _sectionToFriendList;
	NSArray* _sectionTitles;
	NSArray* _sections;
	SCAlertGear* _alertGear;

}

@property (assign,nonatomic,__weak) id<SCStartChatDelegate> startChatDelegate;                                                  //@synthesize startChatDelegate=_startChatDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SendSnapNavigationControllerDelegate> sendSnapNavigationControllerDelegate;              //@synthesize sendSnapNavigationControllerDelegate=_sendSnapNavigationControllerDelegate - In the implementation block
@property (nonatomic,retain) SCMyFriendsHeader * header;                                                                        //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) SCSearchFriendsSubViewController * searchFriendsSVC;                                               //@synthesize searchFriendsSVC=_searchFriendsSVC - In the implementation block
@property (nonatomic,retain) SCContactsAccessViewController * contactsAccessVC;                                                 //@synthesize contactsAccessVC=_contactsAccessVC - In the implementation block
@property (assign,nonatomic) BOOL hasTappedOnFriendSinceSearch;                                                                 //@synthesize hasTappedOnFriendSinceSearch=_hasTappedOnFriendSinceSearch - In the implementation block
@property (assign,nonatomic) long long searchFieldKeyStrokeCount;                                                               //@synthesize searchFieldKeyStrokeCount=_searchFieldKeyStrokeCount - In the implementation block
@property (nonatomic,retain) Friend * friendBeingInvited;                                                                       //@synthesize friendBeingInvited=_friendBeingInvited - In the implementation block
@property (assign) unsigned long long myFriendsTableViewType;                                                                   //@synthesize myFriendsTableViewType=_myFriendsTableViewType - In the implementation block
@property (assign) long long profilePageType;                                                                                   //@synthesize profilePageType=_profilePageType - In the implementation block
@property (retain) NSString * sourcePageName;                                                                                   //@synthesize sourcePageName=_sourcePageName - In the implementation block
@property (assign,nonatomic) unsigned long long myFriendCount;                                                                  //@synthesize myFriendCount=_myFriendCount - In the implementation block
@property (assign,nonatomic) unsigned long long myFriendBlockCount;                                                             //@synthesize myFriendBlockCount=_myFriendBlockCount - In the implementation block
@property (assign,nonatomic) unsigned long long myFriendNameEditCount;                                                          //@synthesize myFriendNameEditCount=_myFriendNameEditCount - In the implementation block
@property (assign,nonatomic) unsigned long long myFriendBlockInSearchCount;                                                     //@synthesize myFriendBlockInSearchCount=_myFriendBlockInSearchCount - In the implementation block
@property (assign,nonatomic) unsigned long long myFriendRemoveInSearchCount;                                                    //@synthesize myFriendRemoveInSearchCount=_myFriendRemoveInSearchCount - In the implementation block
@property (assign,nonatomic) unsigned long long myFriendNameEditInSearchCount;                                                  //@synthesize myFriendNameEditInSearchCount=_myFriendNameEditInSearchCount - In the implementation block
@property (assign,nonatomic) unsigned long long myFriendReAddInSearchCount;                                                     //@synthesize myFriendReAddInSearchCount=_myFriendReAddInSearchCount - In the implementation block
@property (assign,nonatomic) unsigned long long snapchatterAddInSearchCount;                                                    //@synthesize snapchatterAddInSearchCount=_snapchatterAddInSearchCount - In the implementation block
@property (assign,nonatomic) unsigned long long nonSnapchatterInviteInSearchCount;                                              //@synthesize nonSnapchatterInviteInSearchCount=_nonSnapchatterInviteInSearchCount - In the implementation block
@property (assign,nonatomic) unsigned long long snapchatterInSearchCount;                                                       //@synthesize snapchatterInSearchCount=_snapchatterInSearchCount - In the implementation block
@property (assign,nonatomic) unsigned long long friendInSearchCount;                                                            //@synthesize friendInSearchCount=_friendInSearchCount - In the implementation block
@property (nonatomic,retain) NSDictionary * findFriendsResults;                                                                 //@synthesize findFriendsResults=_findFriendsResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * temporarilyAddOrRemovedContacts;                                                  //@synthesize temporarilyAddOrRemovedContacts=_temporarilyAddOrRemovedContacts - In the implementation block
@property (nonatomic,retain) NSMutableArray * temporarilyRemovedBestFriends;                                                    //@synthesize temporarilyRemovedBestFriends=_temporarilyRemovedBestFriends - In the implementation block
@property (nonatomic,retain) EGORefreshTableHeaderView * refreshHeaderView;                                                     //@synthesize refreshHeaderView=_refreshHeaderView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                                           //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) SCTableIndexController * friendsTableIndexController;                                              //@synthesize friendsTableIndexController=_friendsTableIndexController - In the implementation block
@property (nonatomic,retain) NSArray * sectionToFriendList;                                                                     //@synthesize sectionToFriendList=_sectionToFriendList - In the implementation block
@property (nonatomic,retain) NSArray * sectionTitles;                                                                           //@synthesize sectionTitles=_sectionTitles - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                                                                //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) SCAlertGear * alertGear;                                                                           //@synthesize alertGear=_alertGear - In the implementation block
@property (assign,nonatomic) BOOL reloading;                                                                                    //@synthesize reloading=_reloading - In the implementation block
@property (assign,nonatomic) BOOL isFromQuickAction;                                                                            //@synthesize isFromQuickAction=_isFromQuickAction - In the implementation block
@property (nonatomic,retain) AddFriendsDelegateObject * addFriendsDelegate;                                                     //@synthesize addFriendsDelegate=_addFriendsDelegate - In the implementation block
@property (assign,nonatomic) BOOL openingFromSendTo;                                                                            //@synthesize openingFromSendTo=_openingFromSendTo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contactsContext;
+(id)addContactsContext;
+(id)addFromContactsContext;
+(int)context;
+(id)searchContext;
-(void)leftButtonPressed;
-(id)imageForLeftButtonInState:(unsigned long long)arg1 ;
-(id)imageForRightButtonInState:(unsigned long long)arg1 ;
-(id)backgroundColorForHeader;
-(BOOL)shouldShowHeaderLabel:(id)arg1 ;
-(id)titleForHeader:(id)arg1 ;
-(id)textColorForHeader:(id)arg1 ;
-(BOOL)inValidView:(id)arg1 ;
-(void)leftSwipeSucceed;
-(id)pageName;
-(void)setSnapchatterAddInSearchCount:(unsigned long long)arg1 ;
-(void)setNonSnapchatterInviteInSearchCount:(unsigned long long)arg1 ;
-(unsigned long long)snapchatterAddInSearchCount;
-(unsigned long long)nonSnapchatterInviteInSearchCount;
-(void)setMyFriendCount:(unsigned long long)arg1 ;
-(void)setMyFriendBlockCount:(unsigned long long)arg1 ;
-(void)setMyFriendNameEditCount:(unsigned long long)arg1 ;
-(void)setMyFriendRemoveInSearchCount:(unsigned long long)arg1 ;
-(void)setMyFriendBlockInSearchCount:(unsigned long long)arg1 ;
-(void)setMyFriendReAddInSearchCount:(unsigned long long)arg1 ;
-(void)setMyFriendNameEditInSearchCount:(unsigned long long)arg1 ;
-(unsigned long long)myFriendCount;
-(unsigned long long)myFriendBlockCount;
-(unsigned long long)myFriendNameEditCount;
-(unsigned long long)myFriendRemoveInSearchCount;
-(unsigned long long)myFriendBlockInSearchCount;
-(unsigned long long)myFriendReAddInSearchCount;
-(unsigned long long)myFriendNameEditInSearchCount;
-(BOOL)shouldPopToRootViewController;
-(BOOL)shouldPopToRootViewControllerLater;
-(void)_tap:(id)arg1 ;
-(id)_pagenameForPageView;
-(void)setSendSnapNavigationControllerDelegate:(id<SendSnapNavigationControllerDelegate>)arg1 ;
-(id)getPageViewName;
-(void)addFindFriendsObservers;
-(void)_initGestures;
-(void)setHasTappedOnFriendSinceSearch:(BOOL)arg1 ;
-(long long)getProfilePageType;
-(void)removeFindFriendsObservers;
-(void)resetFriendFilter;
-(void)handleChangeToFindFriendsResults:(id)arg1 ;
-(Friend *)friendBeingInvited;
-(AddFriendsDelegateObject *)addFriendsDelegate;
-(void)setFriendBeingInvited:(Friend *)arg1 ;
-(NSDictionary *)findFriendsResults;
-(void)setStartChatDelegate:(id<SCStartChatDelegate>)arg1 ;
-(long long)keyStrokeCount;
-(void)_presentMiniProfile:(id)arg1 ;
-(long long)_getAddSourceTypeForFriend:(id)arg1 ;
-(void)didSendSnaps:(id)arg1 ;
-(void)_sendingInvitesToFriend:(id)arg1 friend:(id)arg2 ;
-(void)friendProfileCellView:(id)arg1 addFriendPressed:(id)arg2 friend:(id)arg3 ;
-(void)didDisplayProfilePictureOnCellView:(id)arg1 onThumbnail:(id)arg2 friend:(id)arg3 ;
-(void)didCancelFromPreview:(id)arg1 ;
-(void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2 ;
-(void)miniProfileViewControllerDidPressSettingsButton:(id)arg1 ;
-(void)miniProfileViewController:(id)arg1 didSendSnap:(id)arg2 ;
-(void)miniProfileViewControllerDidPostStoryWithoutSendingSnap:(id)arg1 ;
-(void)miniProfileViewControllerWasDismissed:(id)arg1 ;
-(id)getSearchResultsBySection:(id)arg1 withSearchText:(id)arg2 ;
-(id)cellForModelView:(id)arg1 onTableView:(id)arg2 forRowAtindexPath:(id)arg3 ;
-(void)didDismissSearch;
-(void)didBeginEditingSearchBox;
-(void)setKeyStrokeCount:(long long)arg1 ;
-(void)sendTextController:(id)arg1 completedWithStatus:(int)arg2 ;
-(void)setAddFriendsDelegate:(AddFriendsDelegateObject *)arg1 ;
-(BOOL)hasTappedOnFriendSinceSearch;
-(long long)searchFieldKeyStrokeCount;
-(void)setSearchFieldKeyStrokeCount:(long long)arg1 ;
-(void)didGrantAccessSuccessfully;
-(BOOL)openingFromSendTo;
-(void)setOpeningFromSendTo:(BOOL)arg1 ;
-(id)getSourcePageName;
-(void)setSourcePageName:(NSString *)arg1 ;
-(void)subviewWillAppear;
-(BOOL)isFromQuickAction;
-(id)initWithSendSnapNavigationControllerDelegate:(id)arg1 startChatDelegate:(id)arg2 userSession:(id)arg3 profilePageType:(long long)arg4 sourcePageName:(id)arg5 fromQuickAction:(BOOL)arg6 useFriendFeedStyle:(BOOL)arg7 ;
-(id<SCStartChatDelegate>)startChatDelegate;
-(void)setIsFromQuickAction:(BOOL)arg1 ;
-(long long)profilePageType;
-(id)initWithSendSnapNavigationControllerDelegate:(id)arg1 startChatDelegate:(id)arg2 userSession:(id)arg3 profilePageType:(long long)arg4 sourcePageName:(id)arg5 fromQuickAction:(BOOL)arg6 skipPhoneVerification:(BOOL)arg7 fromPXPrompt:(BOOL)arg8 useFriendFeedStyle:(BOOL)arg9 ;
-(void)setProfilePageType:(long long)arg1 ;
-(void)setMyFriendsTableViewType:(unsigned long long)arg1 ;
-(void)setSearchFriendsSVC:(SCSearchFriendsSubViewController *)arg1 ;
-(SCSearchFriendsSubViewController *)searchFriendsSVC;
-(void)setAlertGear:(SCAlertGear *)arg1 ;
-(BOOL)_shouldShowFriendsTableIndex;
-(SCTableIndexController *)friendsTableIndexController;
-(void)setFriendsTableIndexController:(SCTableIndexController *)arg1 ;
-(void)showContactsAccessWorkflow;
-(void)didFetchUpdates:(id)arg1 ;
-(void)setFriendInSearchCount:(unsigned long long)arg1 ;
-(void)setSnapchatterInSearchCount:(unsigned long long)arg1 ;
-(void)_updateFriendsTableIndexAnimated:(BOOL)arg1 ;
-(void)initTableInteractionValues;
-(unsigned long long)myFriendsTableViewType;
-(EGORefreshTableHeaderView *)refreshHeaderView;
-(void)logOnPageExit;
-(void)_setupFriendsSectionList;
-(void)_setupContactsSectionList;
-(NSMutableArray *)temporarilyRemovedBestFriends;
-(NSMutableArray *)temporarilyAddOrRemovedContacts;
-(id)_getFriendProfileCellForFriend:(id)arg1 onTableView:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_removeDownloadContextFor:(id)arg1 ;
-(void)_addDownloadContextFor:(id)arg1 ;
-(id)_getDownloadContextFor:(id)arg1 inMiniProfile:(BOOL)arg2 ;
-(BOOL)isInSearch;
-(unsigned long long)snapchatterInSearchCount;
-(unsigned long long)friendInSearchCount;
-(void)setTemporarilyRemovedBestFriends:(NSMutableArray *)arg1 ;
-(BOOL)reloading;
-(void)_playHapticFeedbackIfNecessary;
-(void)setReloading:(BOOL)arg1 ;
-(void)_removeFriendsTableIndex;
-(SCContactsAccessViewController *)contactsAccessVC;
-(void)dismissPreviewIfPresented;
-(id<SendSnapNavigationControllerDelegate>)sendSnapNavigationControllerDelegate;
-(void)setContactsAccessVC:(SCContactsAccessViewController *)arg1 ;
-(void)_setupFriendsTableIndexWithScrollView:(id)arg1 ;
-(NSString *)sourcePageName;
-(SCAlertGear *)alertGear;
-(void)setTemporarilyAddOrRemovedContacts:(NSMutableArray *)arg1 ;
-(id)_indexPathForCurrentScrollBar;
-(id)_labelTextForTableIndex;
-(void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1 ;
-(BOOL)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1 ;
-(void)friendsTabPressed;
-(void)contactsTabPressed;
-(void)alertGear:(id)arg1 didSetDisplay:(id)arg2 friend:(id)arg3 shouldScroll:(BOOL)arg4 ;
-(BOOL)alertGear:(id)arg1 notificationStatusForFriend:(id)arg2 ;
-(void)alertGear:(id)arg1 didNotificationStatusChangeForFriend:(id)arg2 ;
-(void)customOperationForEditName:(id)arg1 ;
-(void)customOperationForDeleteorIgnore:(id)arg1 ;
-(void)customOperationForBlock:(id)arg1 blockReasonId:(id)arg2 ;
-(void)customOperationForReport:(id)arg1 ;
-(id)removeOrIgnoreButtonTitle:(id)arg1 ;
-(void)scrollToPercent:(double)arg1 ;
-(void)getLabelTextWithCompletion:(/*^block*/id)arg1 ;
-(void)didFinishLongPressingTableIndex;
-(double)tableIndexOffset;
-(id)initWithSendSnapNavigationControllerDelegate:(id)arg1 startChatDelegate:(id)arg2 userSession:(id)arg3 profilePageType:(long long)arg4 sourcePageName:(id)arg5 ;
-(id)initWithSendSnapNavigationControllerDelegate:(id)arg1 startChatDelegate:(id)arg2 userSession:(id)arg3 profilePageType:(long long)arg4 sourcePageName:(id)arg5 fromQuickAction:(BOOL)arg6 ;
-(id)initWithSendSnapNavigationControllerDelegate:(id)arg1 startChatDelegate:(id)arg2 userSession:(id)arg3 profilePageType:(long long)arg4 sourcePageName:(id)arg5 skipPhoneVerification:(BOOL)arg6 ;
-(id)initWithSendSnapNavigationControllerDelegate:(id)arg1 startChatDelegate:(id)arg2 userSession:(id)arg3 profilePageType:(long long)arg4 sourcePageName:(id)arg5 skipPhoneVerification:(BOOL)arg6 fromPXPrompt:(BOOL)arg7 useFriendFeedStyle:(BOOL)arg8 ;
-(id)tableView:(id)arg1 cellForViewModel:(id)arg2 atIndexPath:(id)arg3 ;
-(void)friendProfileCellView:(id)arg1 chatButtonPressed:(id)arg2 friend:(id)arg3 ;
-(void)friendProfileCellView:(id)arg1 snapButtonPressed:(id)arg2 friend:(id)arg3 ;
-(void)setFindFriendsResults:(NSDictionary *)arg1 ;
-(void)setRefreshHeaderView:(EGORefreshTableHeaderView *)arg1 ;
-(NSArray *)sectionToFriendList;
-(void)setSectionToFriendList:(NSArray *)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadData;
-(NSArray *)sectionTitles;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(void)scrollViewDidEndScrolling:(id)arg1 ;
-(void)_longPress:(id)arg1 ;
-(SCMyFriendsHeader *)header;
-(void)setSectionTitles:(NSArray *)arg1 ;
-(void)setHeader:(SCMyFriendsHeader *)arg1 ;
@end

