/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCMiniProfileViewControllerDelegate.h>
#import <Snapchat/SCPublicContentMiniProfileControllerDelegate.h>
#import <Snapchat/SCSearchStoryShareSessionDelegate.h>
#import <Snapchat/SCStoryMiniProfileViewControllerDelegate.h>
#import <Snapchat/SCReportPageViewControllerDelegate.h>
#import <Snapchat/SCSearchEventListener.h>
#import <Snapchat/SCSearchActionHandling.h>
#import <Snapchat/SCOperaSubscribeActionHandler.h>
#import <Snapchat/SCGroupMiniProfileViewControllerDelegate.h>
#import <Snapchat/SCGroupStorySettingsViewControllerDelegate.h>
#import <Snapchat/SCGroupStorySettingsControllerDelegate.h>
#import <Snapchat/SCSearchEventAnnouncing.h>

@protocol SCPerforming, SCCheetahStoriesMiniProfileHandlerDelegate, SCReplyDelegate, NavigationDelegate;
@class SCUserSession, NSSet, NSDictionary, SCStoryMiniProfileViewController, SCMiniProfileViewController, SCPublicContentMiniProfileController, UIViewController, SCSearchStoryShareSession, SCPromotedStoryShareSession, SCSearchStoriesEverywhereService, SCMiniProfileActionHandler, UIImage, SCSearchEventListenerAnnouncer, NSString;

@interface SCCheetahStoriesMiniProfileHandler : NSObject <SCMiniProfileViewControllerDelegate, SCPublicContentMiniProfileControllerDelegate, SCSearchStoryShareSessionDelegate, SCStoryMiniProfileViewControllerDelegate, SCReportPageViewControllerDelegate, SCSearchEventListener, SCSearchActionHandling, SCOperaSubscribeActionHandler, SCGroupMiniProfileViewControllerDelegate, SCGroupStorySettingsViewControllerDelegate, SCGroupStorySettingsControllerDelegate, SCSearchEventAnnouncing> {

	SCUserSession* _userSession;
	id<SCPerforming> _performer;
	NSSet* _pendingSubscribeRequestIds;
	NSSet* _pendingHideRequestIds;
	NSDictionary* _startingSubscribeStateForStoryIds;
	SCStoryMiniProfileViewController* _activeStoryMiniProfileController;
	SCMiniProfileViewController* _activeMiniProfileController;
	SCPublicContentMiniProfileController* _activePublicContentMiniProfileController;
	UIViewController* _businessProfileViewController;
	SCSearchStoryShareSession* _storyShareSession;
	SCPromotedStoryShareSession* _promotedStoryShareSession;
	SCSearchStoriesEverywhereService* _storiesEverywhereService;
	SCMiniProfileActionHandler* _miniProfileActionHandler;
	UIImage* _screenshot;
	SCSearchEventListenerAnnouncer* _searchEventAnnouncer;
	BOOL startingIsSubscribedState;
	id<SCCheetahStoriesMiniProfileHandlerDelegate> _miniProfileDelegate;
	id<SCReplyDelegate> _replyDelegate;
	id<NavigationDelegate> _navigationDelegate;
	UIViewController* _presentingViewController;

}

@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3 ;
-(BOOL)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3 ;
-(void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2 ;
-(void)miniProfileViewControllerDidUpdateFriendStatus:(id)arg1 friend:(id)arg2 ;
-(void)miniProfileViewControllerWasDismissed:(id)arg1 ;
-(void)miniProfileViewControllerDidSelectOptionHideStory:(id)arg1 ;
-(void)miniProfileViewControllerDidSelectOptionShareStoryURL:(id)arg1 ;
-(void)miniProfileViewControllerDidSelectFriendRelatedSnapchatter:(id)arg1 friend:(id)arg2 ;
-(void)reportPageViewControllerDidSubmitReport:(id)arg1 reasonId:(id)arg2 additionalData:(id)arg3 ;
-(void)reportPageViewControllerDidCancelAtLevel:(unsigned long long)arg1 additionalData:(id)arg2 ;
-(void)groupMiniProfileControllerDidPressChatButton:(id)arg1 ;
-(void)groupMiniProfileControllerDidPressSnapButton:(id)arg1 ;
-(void)groupMiniProfileController:(id)arg1 wantsToNavigateToChatForFriend:(id)arg2 deepLinkURL:(id)arg3 ;
-(void)groupMiniProfileController:(id)arg1 requestsAction:(long long)arg2 ;
-(void)publicContentMiniProfile:(id)arg1 didTapButtonWithEntry:(id)arg2 ;
-(void)didDismissPublicContentMiniProfile;
-(void)didTapLeavePublication:(id)arg1 ;
-(void)didTapPublicationDetails:(id)arg1 ;
-(void)fillInGeofenceDetails;
-(void)didFinishUpdatingPublicationMetadata:(id)arg1 ;
-(void)didUpdateSettingsForPublication:(id)arg1 ;
-(void)updatePublicationForRemoval:(id)arg1 groupStories:(id)arg2 ;
-(void)gsSettingsViewControllerDidFinishEditing:(id)arg1 ;
-(void)gsSettingsViewController:(id)arg1 didUpdateSettingsForPublication:(id)arg2 ;
-(void)gsSettingsViewController:(id)arg1 updateTableForPublicationCreation:(id)arg2 ;
-(void)gsSettingsViewControllerDidAttemptToKeepEditing:(id)arg1 ;
-(void)gsSettingsViewController:(id)arg1 updateTableForPublicationReaddition:(id)arg2 ;
-(void)gsSettingsViewController:(id)arg1 updateTableForPublicationRemoval:(id)arg2 groupStories:(id)arg3 ;
-(void)_leaveGroupStoryForPublication:(id)arg1 ;
-(void)searchModalPresenterPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithUserSession:(id)arg1 miniProfileDelegate:(id)arg2 replyDelegate:(id)arg3 navigationDelegate:(id)arg4 ;
-(void)dismissAnyMiniProfile;
-(void)_didBlockFriend:(id)arg1 ;
-(void)_removeStoryFromDataStore:(id)arg1 ;
-(void)_setSubscribeStateForStory:(id)arg1 subscribeState:(BOOL)arg2 ;
-(BOOL)presentCheetahStoryMiniProfileForActionModel:(id)arg1 fromSender:(id)arg2 ;
-(unsigned long long)_subscribeStateForStory:(id)arg1 ;
-(void)_addDebugControllersForMiniProfileBaseViewController:(id)arg1 cheetahStory:(id)arg2 ;
-(void)_updateCheetahStoriesInDataStore:(id)arg1 ;
-(void)subscribeToPublicUser:(id)arg1 successCompletion:(/*^block*/id)arg2 failureCompletion:(/*^block*/id)arg3 ;
-(void)unsubscribeToPublicUser:(id)arg1 successCompletion:(/*^block*/id)arg2 failureCompletion:(/*^block*/id)arg3 ;
-(void)subscribeToCheetahStory:(id)arg1 successCompletion:(/*^block*/id)arg2 failureCompletion:(/*^block*/id)arg3 ;
-(id)_debuggingSectionControllersForCheetahStory:(id)arg1 ;
-(void)_sendCheetahHideRequest:(id)arg1 ;
-(void)_logCheetahEventForActionType:(long long)arg1 story:(id)arg2 ;
-(void)_sendNextSubscribeStateForStory:(id)arg1 storyMiniProfileViewController:(id)arg2 viewModel:(id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(void)_displayAlertToleaveGroupStoryForPublication:(id)arg1 ;
-(void)_presentGroupStorySettingsForPublication:(id)arg1 ;
-(void)_sendCheetahSubscribeRequestForPublisher:(long long)arg1 shouldSubscribe:(BOOL)arg2 successCompletion:(/*^block*/id)arg3 failureCompletion:(/*^block*/id)arg4 ;
-(void)_updateSubscribeStateForPublicUser:(id)arg1 shouldSubscribe:(BOOL)arg2 successCompletion:(/*^block*/id)arg3 failureCompletion:(/*^block*/id)arg4 ;
-(void)_handleSubscribeResponseShouldSubscribe:(BOOL)arg1 success:(BOOL)arg2 successCompletion:(/*^block*/id)arg3 failureCompletion:(/*^block*/id)arg4 ;
-(void)_didSendCheetahHideRequest:(id)arg1 ;
-(void)_handleCheetahHideResponse:(id)arg1 success:(BOOL)arg2 ;
-(void)_didReceiveCheetahHideResponse:(id)arg1 ;
-(BOOL)_isPresentingSCStoryMiniProfileViewControllerForStory:(id)arg1 ;
-(BOOL)_isPresentingSCMiniProfileViewControllerForPublicUserStory:(id)arg1 ;
-(void)_hideNearbyPromotedStory:(id)arg1 ;
-(void)_updateDiscoverFeedWithRemovalForGroupStories:(id)arg1 publicationId:(id)arg2 ;
-(void)_showCameraForPublicationId:(id)arg1 cellViewPosition:(long long)arg2 ;
-(void)_didReceiveCheetahSubscribeResponse:(id)arg1 ;
-(void)_didSendCheetahSubscribeRequest:(id)arg1 ;
-(void)searchModalPresenterDismissViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)storyMiniProfileViewControllerDidTapActionButton:(id)arg1 ;
-(id)storyMiniProfileViewControllerOperaDataModelToPresent:(id)arg1 ;
-(void)storyMiniProfileViewControllerDidSelectOptionHideStory:(id)arg1 ;
-(void)storyMiniProfileViewControllerDidSelectOptionShareStoryURL:(id)arg1 ;
-(void)storyMiniProfileViewControllerDidSelectOptionSendStory:(id)arg1 ;
-(void)storyMiniProfileViewControllerDidSelectOptionGetLiveUpdates:(id)arg1 ;
-(void)storyMiniProfileViewControllerDidSelectOptionInfoStory:(id)arg1 ;
-(void)storyMiniProfileViewControllerDismissedViewController:(id)arg1 ;
-(void)unsubscribeToCheetahStory:(id)arg1 successCompletion:(/*^block*/id)arg2 failureCompletion:(/*^block*/id)arg3 ;
-(void)subscribeToPublisher:(long long)arg1 successCompletion:(/*^block*/id)arg2 failureCompletion:(/*^block*/id)arg3 ;
-(void)unsubscribeToPublisher:(long long)arg1 successCompletion:(/*^block*/id)arg2 failureCompletion:(/*^block*/id)arg3 ;
-(void)_chatWithFriend:(id)arg1 ;
-(void)dealloc;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)_appDidEnterBackground:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
