/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCMiniProfileBaseViewController.h>
#import <Snapchat/SCContextPresentableViewController.h>
#import <Snapchat/SCS2RStackDebuggable.h>
#import <Snapchat/SendSnapNavigationControllerDelegate.h>
#import <Snapchat/SCAlertGearDelegate.h>
#import <Snapchat/AVCameraViewControllerDelegate.h>
#import <Snapchat/SCMiniProfileFriendOptionsSectionControllerDelegate.h>
#import <Snapchat/SCMiniProfileFriendIdentitySectionControllerDelegate.h>
#import <Snapchat/SCMiniProfileMapSectionControllerDelegate.h>
#import <Snapchat/SCShareFriendViewControllerDelegate.h>
#import <Snapchat/SCReplyDelegate.h>
#import <Snapchat/SCStoryPresenterDelegate.h>
#import <Snapchat/SCMiniProfileStoryOptionsSectionControllerDelegate.h>
#import <Snapchat/SCReportPageViewControllerDelegate.h>
#import <Snapchat/SCMiniProfileChatOptionsSectionControllerDelegate.h>
#import <Snapchat/SCMiniProfileRelatedSnapchattersSectionControllerDelegate.h>

@protocol SCMiniProfileViewControllerDelegate;
@class NavigationController, SCStoryPresenter_DEPRECATED, SCTooltipStoriesEverywhere, SCMiniProfileFriendIdentitySectionController, SCMiniProfileMapSectionController, SCMiniProfileFriendOptionsSectionController, SCMiniProfileChatOptionsSectionController, Friend, NSArray, SCUserSession, SCAlertGear, NSString;

@interface SCMiniProfileViewController : SCMiniProfileBaseViewController <SCContextPresentableViewController, SCS2RStackDebuggable, SendSnapNavigationControllerDelegate, SCAlertGearDelegate, AVCameraViewControllerDelegate, SCMiniProfileFriendOptionsSectionControllerDelegate, SCMiniProfileFriendIdentitySectionControllerDelegate, SCMiniProfileMapSectionControllerDelegate, SCShareFriendViewControllerDelegate, SCReplyDelegate, SCStoryPresenterDelegate, SCMiniProfileStoryOptionsSectionControllerDelegate, SCReportPageViewControllerDelegate, SCMiniProfileChatOptionsSectionControllerDelegate, SCMiniProfileRelatedSnapchattersSectionControllerDelegate> {

	NavigationController* _cameraNavigationController;
	SCStoryPresenter_DEPRECATED* _storyPresenter;
	BOOL _showMoreInsteadOfMiniProfileOptions;
	SCTooltipStoriesEverywhere* _tooltip;
	unsigned long long _storyOptionsSection;
	SCMiniProfileFriendIdentitySectionController* _identitySectionController;
	SCMiniProfileMapSectionController* _mapSectionController;
	SCMiniProfileFriendOptionsSectionController* _friendOptionsSectionController;
	SCMiniProfileChatOptionsSectionController* _chatOptionsSectionController;
	BOOL _shouldAttributeToOurStories;
	BOOL _shouldScrollAfterEdit;
	BOOL _preventRecursiveOptions;
	BOOL _hidesMapSection;
	BOOL _notificationStatusForDisplayedFriend;
	Friend* _displayedFriend;
	NSArray* _storyOptions;
	id<SCMiniProfileViewControllerDelegate> _delegate;
	long long _addSource;
	long long _pageType;
	long long _viewLocation;
	long long _friendIndex;
	SCUserSession* _userSession;
	NSArray* _contexts;
	SCAlertGear* _alertGear;

}

@property (assign,nonatomic,__weak) id<SCContextPresentableViewControllerDelegate> presentationDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) SCUserSession * userSession;                                                      //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,copy) NSArray * contexts;                                                                        //@synthesize contexts=_contexts - In the implementation block
@property (nonatomic,retain) Friend * displayedFriend;                                                                //@synthesize displayedFriend=_displayedFriend - In the implementation block
@property (assign,nonatomic) BOOL notificationStatusForDisplayedFriend;                                               //@synthesize notificationStatusForDisplayedFriend=_notificationStatusForDisplayedFriend - In the implementation block
@property (nonatomic,copy) NSArray * storyOptions;                                                                    //@synthesize storyOptions=_storyOptions - In the implementation block
@property (nonatomic,retain) SCAlertGear * alertGear;                                                                 //@synthesize alertGear=_alertGear - In the implementation block
@property (assign,nonatomic,__weak) id<SCMiniProfileViewControllerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long addSource;                                                                     //@synthesize addSource=_addSource - In the implementation block
@property (assign,nonatomic) long long pageType;                                                                      //@synthesize pageType=_pageType - In the implementation block
@property (assign,nonatomic) long long viewLocation;                                                                  //@synthesize viewLocation=_viewLocation - In the implementation block
@property (assign,nonatomic) long long friendIndex;                                                                   //@synthesize friendIndex=_friendIndex - In the implementation block
@property (assign,nonatomic) BOOL shouldAttributeToOurStories;                                                        //@synthesize shouldAttributeToOurStories=_shouldAttributeToOurStories - In the implementation block
@property (assign,nonatomic) BOOL shouldScrollAfterEdit;                                                              //@synthesize shouldScrollAfterEdit=_shouldScrollAfterEdit - In the implementation block
@property (assign,nonatomic) BOOL preventRecursiveOptions;                                                            //@synthesize preventRecursiveOptions=_preventRecursiveOptions - In the implementation block
@property (assign,nonatomic) BOOL hidesMapSection;                                                                    //@synthesize hidesMapSection=_hidesMapSection - In the implementation block
-(long long)addSource;
-(void)setAddSource:(long long)arg1 ;
-(id)getPageName;
-(void)setViewLocation:(long long)arg1 ;
-(long long)viewLocation;
-(unsigned long long)preferredScreenEdgesDeferringSystemGestures;
-(id)initWithUserSession:(id)arg1 delegate:(id)arg2 contexts:(id)arg3 ;
-(void)setPreventRecursiveOptions:(BOOL)arg1 ;
-(void)setFriend:(id)arg1 pageType:(long long)arg2 addSource:(long long)arg3 viewLocation:(long long)arg4 ;
-(Friend *)displayedFriend;
-(void)didSendSnaps:(id)arg1 ;
-(void)didCancelFromPreview:(id)arg1 ;
-(void)didPostStory;
-(void)setAlertGear:(SCAlertGear *)arg1 ;
-(SCAlertGear *)alertGear;
-(BOOL)shouldScrollAfterEdit;
-(void)alertGear:(id)arg1 didSetDisplay:(id)arg2 friend:(id)arg3 shouldScroll:(BOOL)arg4 ;
-(BOOL)alertGear:(id)arg1 notificationStatusForFriend:(id)arg2 ;
-(void)alertGear:(id)arg1 didNotificationStatusChangeForFriend:(id)arg2 ;
-(void)customOperationForDeleteorIgnore:(id)arg1 ;
-(void)customOperationForBlock:(id)arg1 blockReasonId:(id)arg2 ;
-(void)customOperationForUnBlock:(id)arg1 ;
-(void)customOperationForReport:(id)arg1 ;
-(void)didUpdateMuteState;
-(void)leftCameraBackButtonPressed;
-(void)rightCameraBackButtonPressed;
-(void)reportPageViewControllerDidSubmitReport:(id)arg1 reasonId:(id)arg2 additionalData:(id)arg3 ;
-(void)reportPageViewControllerDidCancelAtLevel:(unsigned long long)arg1 additionalData:(id)arg2 ;
-(unsigned long long)policyForNotification:(id)arg1 ;
-(BOOL)replyingToStoryWithChat;
-(void)didFollowThrough;
-(void)replyWithParameter:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)additionalS2RDebugOutput;
-(void)setDisplayedFriend:(Friend *)arg1 ;
-(void)shareFriendViewControllerTappedSendUsername:(id)arg1 ;
-(void)shareFriendViewControllerDidCompleteExport:(id)arg1 activityType:(id)arg2 completed:(BOOL)arg3 activityError:(id)arg4 ;
-(void)storyPresenter:(id)arg1 didDismissFriendStories:(id)arg2 becameFullyViewed:(BOOL)arg3 succeededToPresent:(BOOL)arg4 viewingType:(long long)arg5 ;
-(void)storyPresenter:(id)arg1 beginDismissFriendStories:(id)arg2 previousFriendStories:(id)arg3 ;
-(void)storyPresenterWillBeginPresentingStory:(id)arg1 ;
-(void)storyPresenterDidFinishPresentingStory:(id)arg1 ;
-(void)storyPresenterWillBeginAnimatingToDismissStory:(id)arg1 ;
-(void)storyPresenterDidCancelDismissingStory:(id)arg1 ;
-(void)storyPresenterDidFinishDismissingStory:(id)arg1 ;
-(void)storyPresenterWillBeginPlayingStory:(id)arg1 friendStories:(id)arg2 viewLocation:(long long)arg3 ;
-(void)storyPresenter:(id)arg1 didBeginPlayingFriendStories:(id)arg2 ;
-(void)storyPresenter:(id)arg1 didFinishViewingFriendStories:(id)arg2 firstStoryDisplayed:(id)arg3 isReplayMode:(BOOL)arg4 becameFullyViewed:(BOOL)arg5 ;
-(NSArray *)storyOptions;
-(void)updateStoryOptions:(id)arg1 ;
-(void)setFriend:(id)arg1 pageType:(long long)arg2 addSource:(long long)arg3 viewLocation:(long long)arg4 overrideShowMore:(BOOL)arg5 storyOptions:(id)arg6 ;
-(void)addPostSubscribeFriendSuggestions:(id)arg1 ;
-(BOOL)shouldUseChatHeader;
-(BOOL)shouldAnimateWhenPresenting;
-(/*^block*/id)presentationCompletion;
-(void)setHidesMapSection:(BOOL)arg1 ;
-(void)chatOptionsSectionController:(id)arg1 didSelectOption:(long long)arg2 ;
-(void)friendIdentitySectionController:(id)arg1 didTapAddFriend:(id)arg2 ;
-(void)friendIdentitySectionController:(id)arg1 didTapPlayFriendStories:(id)arg2 withBaseView:(id)arg3 ;
-(void)friendIdentitySectionControllerDidSelectMore:(id)arg1 ;
-(void)friendOptionsSectionController:(id)arg1 didSelectOption:(long long)arg2 ;
-(void)mapSectionController:(id)arg1 wantsToPresentViewController:(id)arg2 ;
-(void)mapSectionController:(id)arg1 wantsToVisitPerson:(id)arg2 ;
-(void)relatedSnapchattersSectionController:(id)arg1 didTapAddFriend:(id)arg2 ;
-(void)relatedSnapchattersSectionController:(id)arg1 didTapPlayFriendStories:(id)arg2 withBaseView:(id)arg3 ;
-(void)relatedSnapchattersSectionController:(id)arg1 didLongPressOnFriend:(id)arg2 ;
-(void)storyOptionsSectionController:(id)arg1 didSelectOption:(long long)arg2 ;
-(BOOL)preventRecursiveOptions;
-(void)_handleOptionSelected:(long long)arg1 ;
-(void)_logMiniProfileView;
-(id)pageTypeString;
-(long long)friendIndex;
-(BOOL)shouldAttributeToOurStories;
-(id)friendAdditionRequestContext;
-(void)_logMiniProfileExit;
-(void)_logMiniProfileAddFriend;
-(void)_logMiniProfileChat;
-(void)_logMiniProfileSnap;
-(void)_logMiniProfileCall;
-(void)_logMiniProfileVideo;
-(void)_logMiniProfileSettings;
-(void)_logMiniProfileSend;
-(void)_logMiniProfileShareWithActivityType:(id)arg1 completed:(BOOL)arg2 error:(id)arg3 ;
-(void)setFriendIndex:(long long)arg1 ;
-(BOOL)hidesMapSection;
-(void)_updateNotificationStatusForDisplayFriend;
-(void)_onBlockOrDeleteFriend:(id)arg1 ;
-(void)_displayStoriesEverywhereTooltipIfNecessary;
-(void)_navigateToChatWithDeeplinkURL:(id)arg1 ;
-(void)setNotificationStatusForDisplayedFriend:(BOOL)arg1 ;
-(void)didPressSnapButtonForFriend:(id)arg1 ;
-(void)didPressChatButtonForFriend:(id)arg1 ;
-(void)didPressIgnoreButtonForFriend:(id)arg1 ;
-(void)didPressSendAccountButtonForFriend:(id)arg1 ;
-(void)didPressSettingsGearButtonForFriend:(id)arg1 ;
-(void)didPressIgnoreRecommendedButtonForFriend:(id)arg1 ;
-(void)didPressVideoButtonForFriend:(id)arg1 ;
-(void)didPressCallButtonForFriend:(id)arg1 ;
-(void)didPressAddFriendButton:(id)arg1 friend:(id)arg2 onProgress:(/*^block*/id)arg3 onSuccess:(/*^block*/id)arg4 onFailure:(/*^block*/id)arg5 ;
-(void)_playFriendStories:(id)arg1 withBaseView:(id)arg2 ;
-(void)setStoryOptions:(NSArray *)arg1 ;
-(void)setShouldAttributeToOurStories:(BOOL)arg1 ;
-(void)setShouldScrollAfterEdit:(BOOL)arg1 ;
-(BOOL)notificationStatusForDisplayedFriend;
-(void)setDelegate:(id<SCMiniProfileViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SCMiniProfileViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(SCUserSession *)userSession;
-(void)setUserSession:(SCUserSession *)arg1 ;
-(void)setPageType:(long long)arg1 ;
-(long long)pageType;
-(id<SCContextPresentableViewControllerDelegate>)presentationDelegate;
-(void)setPresentationDelegate:(id<SCContextPresentableViewControllerDelegate>)arg1 ;
-(id)contextString;
-(NSArray *)contexts;
-(void)setContexts:(NSArray *)arg1 ;
@end
