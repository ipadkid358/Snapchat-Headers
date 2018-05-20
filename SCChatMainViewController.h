/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIViewController.h>
#import <Snapchat/SCTimeProfilable.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Snapchat/SCShakeToReportDelegate.h>
#import <Snapchat/SwipeView.h>
#import <Snapchat/SCBaseMediaOperaPresenterDelegate.h>
#import <Snapchat/SCChatViewControllerParentDelegate.h>
#import <Snapchat/SCMainScrollViewDelegate.h>
#import <Snapchat/SCStackChatsDelegate.h>
#import <Snapchat/SCChatViewControllerConversationStateProtocol.h>
#import <Snapchat/SCTalkMainChatVC.h>

@protocol SCTalkManager, SCChatMainViewControllerStateDelegate, SCStartChatDelegate, NavigationDelegate, SCSwipeViewParentDelegate, SCReplyDelegate, SCChatCardsOperaPresenterDelegate;
@class NSMutableArray, SCChatBaseViewController, SCChatChildViewControllerFactory, SCAppNotification, UIView, UIPanGestureRecognizer, NSString;

@interface SCChatMainViewController : UIViewController <SCTimeProfilable, UIGestureRecognizerDelegate, SCShakeToReportDelegate, SwipeView, SCBaseMediaOperaPresenterDelegate, SCChatViewControllerParentDelegate, SCMainScrollViewDelegate, SCStackChatsDelegate, SCChatViewControllerConversationStateProtocol, SCTalkMainChatVC> {

	NSMutableArray* _stack;
	SCChatBaseViewController* _vcBeingAdded;
	SCChatChildViewControllerFactory* _vcFactory;
	id<SCTalkManager> _talkManager;
	SCAppNotification* _sourceNotification;
	UIView* _backgroundView;
	UIPanGestureRecognizer* _panGesture;
	CGPoint _initialPanningPoint;
	UIView* _opaqueView;
	id<SCChatMainViewControllerStateDelegate> _stateDelegate;
	BOOL _didCompletelySwipeIn;
	BOOL _isBackgrounded;
	id<SCStartChatDelegate> _delegate;
	id<NavigationDelegate> _navigationDelegate;
	id<SCSwipeViewParentDelegate> _parentDelegate;
	id<SCReplyDelegate> _replyDelegate;
	id<SCChatCardsOperaPresenterDelegate> _chatCardsOperaPresenterDelegate;

}

@property (assign,nonatomic,__weak) id<SCStartChatDelegate> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<NavigationDelegate> navigationDelegate;                                          //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCSwipeViewParentDelegate> parentDelegate;                                       //@synthesize parentDelegate=_parentDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCReplyDelegate> replyDelegate;                                                  //@synthesize replyDelegate=_replyDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCChatCardsOperaPresenterDelegate> chatCardsOperaPresenterDelegate;              //@synthesize chatCardsOperaPresenterDelegate=_chatCardsOperaPresenterDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * hovaAccessoryView; 
+(id)pageViewName;
+(int)context;
-(void)startCall:(unsigned long long)arg1 ;
-(void)setChatSource:(long long)arg1 ;
-(void)lockScrollWithRequestId:(id)arg1 ;
-(void)unlockScrollWithRequestId:(id)arg1 ;
-(void)rightButtonPressed;
-(id)initWithUserSession:(id)arg1 ;
-(unsigned long long)preferredScreenEdgesDeferringSystemGestures;
-(id)activeConversationId;
-(void)viewDidFullyAppear;
-(void)viewDidFullyDisappear;
-(BOOL)shouldPopToRootViewController;
-(id)getPageViewName;
-(void)viewWillResignActive;
-(void)viewDidBecomeActive;
-(BOOL)isFullyVisible:(id)arg1 ;
-(BOOL)isPartiallyVisible:(id)arg1 ;
-(BOOL)isFrameInVisibleBounds:(id)arg1 ;
-(void)willStartCensoringScreenshot;
-(void)willEndCensoringScreenshot;
-(void)viewDidSwipeIn;
-(void)viewDidSwipeOut;
-(void)viewDidAppearAtOffset:(double)arg1 ;
-(void)viewWillEnterBackground;
-(id)otherParticipant;
-(BOOL)callInProgress;
-(BOOL)isPlayingMedia;
-(BOOL)paymentSwipeSenderVisible;
-(id<SCChatCardsOperaPresenterDelegate>)chatCardsOperaPresenterDelegate;
-(void)setChatCardsOperaPresenterDelegate:(id<SCChatCardsOperaPresenterDelegate>)arg1 ;
-(void)setSourceNotification:(id)arg1 ;
-(void)showCallEndDialog:(/*^block*/id)arg1 ;
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
-(void)allowMessageReleasing;
-(BOOL)isInPreviewMode;
-(void)addRecipientBar:(id)arg1 ;
-(void)blockMessageReleasing;
-(id)recipientBar;
-(void)leavePreviewMode:(BOOL)arg1 ;
-(void)setGroupConversationById:(id)arg1 deeplinkType:(unsigned long long)arg2 stateDelegate:(id)arg3 stackType:(long long)arg4 chatPageSource:(long long)arg5 navigationAction:(long long)arg6 ;
-(void)setChatUsername:(id)arg1 deeplinkType:(unsigned long long)arg2 stateDelegate:(id)arg3 isFromNotification:(BOOL)arg4 pageSource:(long long)arg5 chatSource:(long long)arg6 navigationAction:(long long)arg7 ;
-(void)enterPreviewMode;
-(BOOL)presentedModally;
-(id)rightButtonImage;
-(void)didBecomeFullChat;
-(id<SCReplyDelegate>)replyDelegate;
-(BOOL)vcIsInStack:(id)arg1 ;
-(void)setReplyDelegate:(id<SCReplyDelegate>)arg1 ;
-(void)sccpConnectionStatusChanged;
-(void)userDidTakeScreenshot;
-(void)userDidScreenRecord;
-(id)mainChatVC;
-(BOOL)canBeShown;
-(id)activeVC;
-(BOOL)isVisibleViewControllerAndCapableOfPlayingSnaps;
-(CGRect)getViewFrame;
-(BOOL)dismissStackedChatMaybe;
-(void)prepareForJumpIn;
-(void)didLogout;
-(long long)getStackTypeForRecipient:(id)arg1 ;
-(id)activeVCV2;
-(void)showVC:(id)arg1 stackType:(long long)arg2 ;
-(id)activeVCV3;
-(id)_stackedVCForConversationId:(id)arg1 ;
-(void)_clearStackForVC:(id)arg1 ;
-(void)_clearMemoryForInActiveVCs;
-(BOOL)isPartiallyVisibleInStack:(id)arg1 ;
-(void)_removeVC:(id)arg1 handleLifecycle:(BOOL)arg2 ;
-(void)removeVCsFromView:(id)arg1 ;
-(void)_hideStackedActiveView;
-(id)_titleForCallEndDialog;
-(void)prepareChatVC:(id)arg1 ;
-(void)_stackVC:(id)arg1 handleLifeCycle:(BOOL)arg2 stackType:(long long)arg3 ;
-(void)_animate:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleHidingLifeCycle:(id)arg1 isFromStack:(BOOL)arg2 ;
-(void)_updatePanningVC:(double)arg1 ;
-(BOOL)mainScrollViewShouldDisableScroll:(id)arg1 ;
-(void)viewWillSwipeOut:(BOOL)arg1 ;
-(void)setDelegate:(id<SCStartChatDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<SCStartChatDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(BOOL)isBackgrounded;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)removeAllAnimations;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)headerView;
-(void)setParentDelegate:(id<SCSwipeViewParentDelegate>)arg1 ;
-(id<SCSwipeViewParentDelegate>)parentDelegate;
-(id<NavigationDelegate>)navigationDelegate;
-(BOOL)_isApplicationActive;
-(void)_panGesture:(id)arg1 ;
-(void)warmup;
-(void)setNavigationDelegate:(id<NavigationDelegate>)arg1 ;
@end

