/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Snapchat/SCChatCellParentViewControllerDelegate.h>
#import <Snapchat/SCChatViewHeaderDataSource.h>
#import <Snapchat/SCChatUIProvider.h>
#import <Snapchat/SCSharedStoryPresenterDelegate.h>
#import <Snapchat/SCChatSideMenuLifeCycleListener.h>
#import <Snapchat/SCSharedStoryMiniProfilePresenterDelegate.h>
#import <Snapchat/SCSearchStoriesPresenterDelegate.h>
#import <Snapchat/SCChatURLMediaOperaPresenterDelegate.h>
#import <Snapchat/SCTV3ClientDependenciesProvider.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <Snapchat/SCMiniProfileViewControllerDelegate.h>
#import <Snapchat/SCChatVisibilityProvider.h>
#import <Snapchat/SCChatHamburgerTableSectionOneOnOneSettingDelegate.h>
#import <Snapchat/SCBaseMediaOperaPresenterDelegate.h>
#import <Snapchat/SCTableControllerInsetUpdater.h>
#import <Snapchat/SCTPresencePillTapListener.h>
#import <Snapchat/SCContextOperaPlaylistPluginDelegate.h>
#import <Snapchat/SCActionSheetDelegate.h>
#import <Snapchat/SCHamburgerAnimationDelegte.h>

@protocol SCChatViewControllerParentDelegate, SCTalkClientController, SCV3BubbleChatController, SCStartChatDelegate, NavigationDelegate, SCReplyDelegate, SCStackChatsDelegate, SCCardAnimationViewProtocol;
@class UIView, SCTV3TableContentInsetUpdater, SCChatHamburgerAnimator, SCActionMenuShareController, SCTFeedbackPromptMixin, SCAppNotification, SCChatViewLogger, SCChatViewHeader, SCChatInputController, SCMiniProfileViewController, SCChatCardAnimationContainerView, SCChatViewLifeCycleListenerAnnouncer, NSString;

@interface SCChatBaseViewController : UIViewController <SCChatCellParentViewControllerDelegate, SCChatViewHeaderDataSource, SCChatUIProvider, SCSharedStoryPresenterDelegate, SCChatSideMenuLifeCycleListener, SCSharedStoryMiniProfilePresenterDelegate, SCSearchStoriesPresenterDelegate, SCChatURLMediaOperaPresenterDelegate, SCTV3ClientDependenciesProvider, UIViewControllerTransitioningDelegate, SCMiniProfileViewControllerDelegate, SCChatVisibilityProvider, SCChatHamburgerTableSectionOneOnOneSettingDelegate, SCBaseMediaOperaPresenterDelegate, SCTableControllerInsetUpdater, SCTPresencePillTapListener, SCContextOperaPlaylistPluginDelegate, SCActionSheetDelegate, SCHamburgerAnimationDelegte> {

	UIView* _recipientBar;
	UIView* _blurOverlay;
	BOOL _isChatViewCentered;
	double _lastVerticalTranslateUp;
	SCTV3TableContentInsetUpdater* _tableContentInsetUpdater;
	BOOL _deferAllSystemEdgeGestures;
	long long _transitionState;
	SCChatHamburgerAnimator* _hamburgerAnimator;
	UIView* _blueOverlay;
	UIView* _blueUnderlay;
	SCActionMenuShareController* _actionMenuShareController;
	SCTFeedbackPromptMixin* _talkFeedbackController;
	BOOL _isInPreviewMode;
	BOOL _ignoreScreenshot;
	BOOL _ignoreScreenRecord;
	BOOL _handleLifecycleWhenCentered;
	BOOL _isOperaShowing;
	id<SCChatViewControllerParentDelegate> _parentDelegate;
	UIView* _containerView;
	UIView* _presenceContainer;
	id<SCTalkClientController> _talkClientController;
	id<SCV3BubbleChatController> _bubbleChatController;
	id<SCStartChatDelegate> _delegate;
	id<NavigationDelegate> _navigationDelegate;
	id<SCReplyDelegate> _replyDelegate;
	SCAppNotification* _sourceNotification;
	id<SCStackChatsDelegate> _stackChatsDelegate;
	SCChatViewLogger* _lifecycleLogger;
	UIView*<SCCardAnimationViewProtocol> _tableContainerView;
	SCChatViewHeader* _header;
	SCChatInputController* _chatInputController;
	SCMiniProfileViewController* _miniProfileViewController;
	SCChatCardAnimationContainerView* _contentContainerView;
	SCChatViewLifeCycleListenerAnnouncer* _lifeCycleAnnouncer;

}

@property (nonatomic,retain) SCChatInputController * chatInputController;                               //@synthesize chatInputController=_chatInputController - In the implementation block
@property (nonatomic,readonly) SCMiniProfileViewController * miniProfileViewController;                 //@synthesize miniProfileViewController=_miniProfileViewController - In the implementation block
@property (nonatomic,retain) SCChatCardAnimationContainerView * contentContainerView;                   //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (nonatomic,retain) SCChatViewLifeCycleListenerAnnouncer * lifeCycleAnnouncer;                 //@synthesize lifeCycleAnnouncer=_lifeCycleAnnouncer - In the implementation block
@property (nonatomic,readonly) BOOL isOperaShowing;                                                     //@synthesize isOperaShowing=_isOperaShowing - In the implementation block
@property (assign,nonatomic,__weak) id<SCChatViewControllerParentDelegate> parentDelegate;              //@synthesize parentDelegate=_parentDelegate - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                    //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIView * presenceContainer;                                                //@synthesize presenceContainer=_presenceContainer - In the implementation block
@property (nonatomic,retain) id<SCTalkClientController> talkClientController;                           //@synthesize talkClientController=_talkClientController - In the implementation block
@property (nonatomic,retain) id<SCV3BubbleChatController> bubbleChatController;                         //@synthesize bubbleChatController=_bubbleChatController - In the implementation block
@property (assign,nonatomic,__weak) id<SCStartChatDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<NavigationDelegate> navigationDelegate;                          //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCReplyDelegate> replyDelegate;                                  //@synthesize replyDelegate=_replyDelegate - In the implementation block
@property (nonatomic,retain) SCAppNotification * sourceNotification;                                    //@synthesize sourceNotification=_sourceNotification - In the implementation block
@property (assign,nonatomic,__weak) id<SCStackChatsDelegate> stackChatsDelegate;                        //@synthesize stackChatsDelegate=_stackChatsDelegate - In the implementation block
@property (nonatomic,retain) SCChatViewLogger * lifecycleLogger;                                        //@synthesize lifecycleLogger=_lifecycleLogger - In the implementation block
@property (assign,nonatomic) BOOL isInPreviewMode;                                                      //@synthesize isInPreviewMode=_isInPreviewMode - In the implementation block
@property (assign,nonatomic) BOOL ignoreScreenshot;                                                     //@synthesize ignoreScreenshot=_ignoreScreenshot - In the implementation block
@property (assign,nonatomic) BOOL ignoreScreenRecord;                                                   //@synthesize ignoreScreenRecord=_ignoreScreenRecord - In the implementation block
@property (assign,nonatomic) BOOL handleLifecycleWhenCentered;                                          //@synthesize handleLifecycleWhenCentered=_handleLifecycleWhenCentered - In the implementation block
@property (nonatomic,retain) UIView*<SCCardAnimationViewProtocol> tableContainerView;                   //@synthesize tableContainerView=_tableContainerView - In the implementation block
@property (nonatomic,retain) SCChatViewHeader * header;                                                 //@synthesize header=_header - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stringForStatusBarActionSource:(long long)arg1 ;
-(void)rightButtonPressed;
-(id)imageForRightButtonInState:(unsigned long long)arg1 ;
-(void)presencePillTapped:(id)arg1 username:(id)arg2 longPressed:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)preferredScreenEdgesDeferringSystemGestures;
-(void)sharedStoryPresenterDidDisappear;
-(void)sharedStoryPresenterWillAppear;
-(BOOL)shouldShowGreetingSticker;
-(void)showBlurOverlayOnView:(id)arg1 ;
-(void)hideBlurOverlay;
-(id)getPageViewName;
-(void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2 ;
-(void)miniProfileViewControllerDidPressSnapButton:(id)arg1 ;
-(void)miniProfileViewControllerDidUpdateFriendStatus:(id)arg1 friend:(id)arg2 ;
-(void)miniProfileViewControllerWasDismissed:(id)arg1 ;
-(void)viewWillResignActive;
-(void)viewDidBecomeActive;
-(void)viewDidSwipeIn;
-(void)viewDidSwipeOut;
-(void)viewDidAppearAtOffset:(double)arg1 ;
-(void)viewWillEnterBackground;
-(BOOL)isPlayingSnap;
-(SCAppNotification *)sourceNotification;
-(void)setSourceNotification:(SCAppNotification *)arg1 ;
-(void)showStatusBarFromActionSource:(long long)arg1 ;
-(id)baseMediaOperaPresenter:(id)arg1 thumbnailViewForMedia:(id)arg2 conversationId:(id)arg3 ;
-(void)operaPresenterWillAppear;
-(void)operaPresenterDidDisappear;
-(void)baseMediaOperaPresenterFoundNothingToDisplay:(id)arg1 ;
-(void)baseMediaOperaPresenterDidFinishPresentationAnimation:(id)arg1 ;
-(void)baseMediaOperaPresenter:(id)arg1 didTapSendForMessage:(id)arg2 ;
-(void)baseMediaOperaPresenter:(id)arg1 didTapReportForMessage:(id)arg2 shareableMediaComponents:(id)arg3 ;
-(void)baseMediaOperaPresenter:(id)arg1 pausedTimerForMessage:(id)arg2 ;
-(void)baseMediaOperaPresenter:(id)arg1 resumedTimerForMessage:(id)arg2 ;
-(void)baseMediaOperaPresenter:(id)arg1 didTapFooterBarForMedia:(id)arg2 ;
-(void)baseMediaOperaPresenter:(id)arg1 mediaFailsToDisplay:(id)arg2 ;
-(void)baseMediaOperaPresenterViewWillResignActive:(id)arg1 ;
-(id)presentingVC;
-(BOOL)isInPreviewMode;
-(id)chatRecipientUsername;
-(void)addRecipientBar:(id)arg1 ;
-(void)setChatEntryEvent:(long long)arg1 ;
-(BOOL)chatIsPartiallyVisible;
-(UIView*<SCCardAnimationViewProtocol>)tableContainerView;
-(void)setTableContainerView:(UIView*<SCCardAnimationViewProtocol>)arg1 ;
-(void)leavePreviewMode:(BOOL)arg1 ;
-(void)enterPreviewMode;
-(void)initInputView;
-(void)setupPresenceContainer;
-(void)setLifecycleLogger:(SCChatViewLogger *)arg1 ;
-(SCChatViewLogger *)lifecycleLogger;
-(void)setupHeader;
-(void)updateTableContainerViewTopConstraint;
-(id<SCTalkClientController>)talkClientController;
-(void)prepareToBeVisible;
-(void)setActiveTalkSessionForConversationWithId:(id)arg1 ;
-(SCChatInputController *)chatInputController;
-(BOOL)isFullScreenPlayerShown;
-(void)releaseMemory;
-(void)viewDidFullyAppearFromStack:(BOOL)arg1 ;
-(BOOL)isOperaShowing;
-(id<SCReplyDelegate>)replyDelegate;
-(void)viewDidFullyDisappearFromStack:(BOOL)arg1 ;
-(id<SCStackChatsDelegate>)stackChatsDelegate;
-(void)viewDidPopFromStack;
-(BOOL)shouldDisableScrollOut:(id)arg1 ;
-(void)setChatInputController:(SCChatInputController *)arg1 ;
-(BOOL)isTalkRemoteVideoFullscreen;
-(void)showSendToViewForForwardableViewModel:(id)arg1 userSession:(id)arg2 ;
-(void)didAttemptToSendMessage;
-(void)chatInputControllerViewDidChange:(id)arg1 ;
-(void)presentMiniProfileForSnapchatter:(id)arg1 addSource:(long long)arg2 page:(long long)arg3 context:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)modalHamburgerViewController;
-(void)setReplyDelegate:(id<SCReplyDelegate>)arg1 ;
-(void)setIgnoreScreenshot:(BOOL)arg1 ;
-(void)setIgnoreScreenRecord:(BOOL)arg1 ;
-(UIView *)presenceContainer;
-(void)sccpConnectionStatusChanged;
-(void)userDidTakeScreenshot;
-(BOOL)ignoreScreenshot;
-(void)userDidScreenRecord;
-(BOOL)ignoreScreenRecord;
-(void)switchChatTo:(id)arg1 deepLinkURL:(id)arg2 ;
-(void)hamburgerTableSectionOneOnOneSettingDidBlockFriend:(id)arg1 ;
-(void)hamburgerTableSectionOneOnOneSettingDidRemoveFriend:(id)arg1 ;
-(BOOL)chatIsFullyVisible;
-(BOOL)shouldSuppressKeyboard;
-(void)hideStatusBarFromActionSource:(long long)arg1 ;
-(void)sharedStoryMiniProfileWillAppear;
-(void)sharedStoryMiniProfileDidDisappear;
-(void)gotoSendMeSnapsSettingsViewWithAnimation:(BOOL)arg1 ;
-(void)hamburgerTableSectionOneOnOneSettingDidUpdateUsername:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 parentDelegate:(id)arg2 ;
-(void)resumeConversation;
-(BOOL)canBeShown;
-(id<SCV3BubbleChatController>)bubbleChatController;
-(void)prepareSideMenuAppear;
-(void)restoreViewAfterSideMenuDisappear;
-(void)updateTableContentInset:(double)arg1 ;
-(SCChatViewLifeCycleListenerAnnouncer *)lifeCycleAnnouncer;
-(void)setLifeCycleAnnouncer:(SCChatViewLifeCycleListenerAnnouncer *)arg1 ;
-(void)setBubbleChatController:(id<SCV3BubbleChatController>)arg1 ;
-(void)sideMenuWillAppear;
-(void)sideMenuDidAppear;
-(void)sideMenuDidDisappear;
-(void)operaURLMediaPresenterWillAppear;
-(void)operaURLMediaPresenterDidDisappear;
-(void)contextViewControllerWillDismiss:(id)arg1 ;
-(void)contextViewControllerWillPresent:(id)arg1 ;
-(void)cardWasTapped;
-(void)_initContentContainerView;
-(void)_initTableContentInsetUpdater;
-(void)_setContentContainerViewRoundedCorner;
-(id)_maskLayerWithRoundedCorner;
-(void)updateHeaderForPreviewMode;
-(void)updateContentContainerViewTopConstraint;
-(void)resetTransitionState;
-(BOOL)handleLifecycleWhenCentered;
-(void)setHandleLifecycleWhenCentered:(BOOL)arg1 ;
-(void)_setBlueUnderlayAlpha:(double)arg1 ;
-(BOOL)_isPresentingMiniProfile;
-(void)_handleSourceNotificationIfNeeded;
-(void)setHeaderButtonsAlpha:(double)arg1 ;
-(void)_prepareTalkFeedbackForConvoId:(id)arg1 ;
-(void)_updatePresenceContainerLayout;
-(double)_chatHeaderVerticalTranslationUp;
-(BOOL)isHeaderShown;
-(void)removeRecipientBar:(BOOL)arg1 ;
-(id)blueOverlay;
-(id)blueUnderlay;
-(void)_setPreferredScreenEdgesDeferringSystemGesturesToAll:(BOOL)arg1 ;
-(void)_presentReportViewControllerWithReportType:(long long)arg1 ;
-(void)_showCameraForUsername:(id)arg1 doubleTap:(BOOL)arg2 context:(id)arg3 ;
-(id)presentingViewControllerForSearchStoriesPresenter:(id)arg1 ;
-(BOOL)isCustomPresentationForSearchStoriesPresenter:(id)arg1 ;
-(void)searchStoryPresenterWillBeginPresentingStory:(id)arg1 ;
-(void)searchStoryPresenterDidFinishDismissingStory:(id)arg1 ;
-(id)tableInsetUpdater;
-(BOOL)chatFullyVisibile;
-(BOOL)shouldShowCallPrompt;
-(void)actionSheetWillAppear;
-(void)actionSheetWillDisappear;
-(void)hamburgerRootViewController:(id)arg1 didAppearWithPercentage:(double)arg2 ;
-(id)hamburgerRootViewControllerBackgroundView:(id)arg1 ;
-(void)setBlueOverlayAlpha:(double)arg1 ;
-(BOOL)shouldSuppressKeyboardFromNotBeingVisible;
-(void)prepareForJumpIn;
-(void)switchChatTo:(id)arg1 ;
-(void)setPresenceContainer:(UIView *)arg1 ;
-(void)setTalkClientController:(id<SCTalkClientController>)arg1 ;
-(void)setStackChatsDelegate:(id<SCStackChatsDelegate>)arg1 ;
-(void)setIsInPreviewMode:(BOOL)arg1 ;
-(SCMiniProfileViewController *)miniProfileViewController;
-(void)setDelegate:(id<SCStartChatDelegate>)arg1 ;
-(id<SCStartChatDelegate>)delegate;
-(UIView *)containerView;
-(void)loadView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)tableView;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)inputView;
-(id)headerView;
-(id)shortDescription;
-(void)setParentDelegate:(id<SCChatViewControllerParentDelegate>)arg1 ;
-(id<SCChatViewControllerParentDelegate>)parentDelegate;
-(id<NavigationDelegate>)navigationDelegate;
-(id)conversationId;
-(SCChatViewHeader *)header;
-(void)setContentContainerView:(SCChatCardAnimationContainerView *)arg1 ;
-(void)setHeader:(SCChatViewHeader *)arg1 ;
-(SCChatCardAnimationContainerView *)contentContainerView;
-(void)setNavigationDelegate:(id<NavigationDelegate>)arg1 ;
@end

