/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:27 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIViewController.h>
#import <Snapchat/NavigationDelegate.h>
#import <Snapchat/SCChatMainViewControllerStateDelegate.h>
#import <Snapchat/SCSwipeViewParentDelegate.h>
#import <Snapchat/SCAddToGroupViewControllerDelegate.h>
#import <Snapchat/SCGroupManagerListener.h>
#import <Snapchat/SCStartChatDelegate.h>
#import <Snapchat/SCReplyDelegate.h>
#import <Snapchat/SendSnapNavigationControllerDelegate.h>
#import <Snapchat/AVCameraViewControllerDelegate.h>
#import <Snapchat/SCCommerceOperaPresenterDelegate.h>
#import <Snapchat/SCChatViewControllerConversationStateProtocol.h>

@protocol SCStartChatDelegate, SCReplyDelegate;
@class UIPanGestureRecognizer, UIPinchGestureRecognizer, SCUserSession, UIView, SCChatMainViewController, SCAddToGroupViewController, NSString, UINavigationController, SCCommerceOperaPresenter, UIImage, NSMutableSet;

@interface SCModalChatRootViewController : UIViewController <NavigationDelegate, SCChatMainViewControllerStateDelegate, SCSwipeViewParentDelegate, SCAddToGroupViewControllerDelegate, SCGroupManagerListener, SCStartChatDelegate, SCReplyDelegate, SendSnapNavigationControllerDelegate, AVCameraViewControllerDelegate, SCCommerceOperaPresenterDelegate, SCChatViewControllerConversationStateProtocol> {

	SCUserSession* _userSession;
	UIView* _containerView;
	BOOL _viewIsSwipedIn;
	SCChatMainViewController* _chatViewController;
	SCAddToGroupViewController* _addToGroupViewController;
	NSString* _pendingGroupId;
	UINavigationController* _snapReplyNavigationController;
	SCCommerceOperaPresenter* _commercePresenter;
	id<SCStartChatDelegate> _chatDelegate;
	id<SCReplyDelegate> _replyDelegate;
	UIImage* _dismissButtonImage;
	NSMutableSet* _lockScrollRequestIds;

}

@property (nonatomic,retain) NSMutableSet * lockScrollRequestIds;                                //@synthesize lockScrollRequestIds=_lockScrollRequestIds - In the implementation block
@property (nonatomic,retain) SCAddToGroupViewController * addToGroupViewController;              //@synthesize addToGroupViewController=_addToGroupViewController - In the implementation block
@property (nonatomic,readonly) SCChatMainViewController * chatViewController; 
@property (assign,nonatomic,__weak) id<SCStartChatDelegate> chatDelegate;                        //@synthesize chatDelegate=_chatDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCReplyDelegate> replyDelegate;                           //@synthesize replyDelegate=_replyDelegate - In the implementation block
@property (nonatomic,retain) UIImage * dismissButtonImage;                                       //@synthesize dismissButtonImage=_dismissButtonImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer; 
@property (nonatomic,readonly) UIPinchGestureRecognizer * pinchGestureRecognizer; 
-(void)lockScrollWithRequestId:(id)arg1 ;
-(void)unlockScrollWithRequestId:(id)arg1 ;
-(void)rightButtonPressed;
-(id)initWithUserSession:(id)arg1 ;
-(void)didJoinGroupWithId:(id)arg1 ;
-(void)didCreateGroupOnServerWithId:(id)arg1 initialSojuMischief:(id)arg2 ;
-(void)didBeginLeavingGroupWithId:(id)arg1 ;
-(void)didFinishLoadingGroups;
-(void)didChangeInfoForGroupWithId:(id)arg1 ;
-(unsigned long long)preferredScreenEdgesDeferringSystemGestures;
-(id)activeConversationId;
-(id<SCStartChatDelegate>)chatDelegate;
-(void)setChatDelegate:(id<SCStartChatDelegate>)arg1 ;
-(void)setChatUsername:(id)arg1 chatPageSource:(long long)arg2 navigationAction:(long long)arg3 ;
-(void)navigateToChatView;
-(void)setChatUsername:(id)arg1 deepLinkURL:(id)arg2 chatPageSource:(long long)arg3 navigationAction:(long long)arg4 ;
-(void)didSendSnaps:(id)arg1 ;
-(void)didCancelFromPreview:(id)arg1 ;
-(void)leftCameraBackButtonPressed;
-(void)rightCameraBackButtonPressed;
-(BOOL)canPerformNavigation;
-(BOOL)isAtFarLeft;
-(void)presentMiddleVCAnimated:(BOOL)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)profileTransitionCoordinator;
-(BOOL)isFullyVisible:(id)arg1 ;
-(BOOL)isPartiallyVisible:(id)arg1 ;
-(BOOL)isAnimatingScroll;
-(BOOL)isFrameInVisibleBounds:(id)arg1 ;
-(void)navigateToChatViewAnimated:(BOOL)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentLeftVCAnimated:(BOOL)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentRightVCAnimated:(BOOL)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)otherParticipant;
-(BOOL)callInProgress;
-(BOOL)isPlayingMedia;
-(void)presentFarLeftVCAnimated:(BOOL)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)recipientBar;
-(void)dismissViewControllerAnimated:(BOOL)arg1 viewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)navigateToChatViewWithGroupId:(id)arg1 ;
-(void)didPressMischiefConfirmationButton:(id)arg1 viewController:(id)arg2 ;
-(void)navigateToChatViewWithFriend:(id)arg1 deepLinkURL:(id)arg2 viewController:(id)arg3 ;
-(void)didSendSnapInViewController:(id)arg1 ;
-(BOOL)presentedModally;
-(id)rightButtonImage;
-(void)didBecomeFullChat;
-(void)willSwipeOut;
-(void)removeFeedToChatTapDectionView;
-(id<SCReplyDelegate>)replyDelegate;
-(BOOL)replyingToStoryWithChat;
-(void)didFollowThrough;
-(void)setReplyDelegate:(id<SCReplyDelegate>)arg1 ;
-(void)setGroupConversationById:(id)arg1 navigationAction:(long long)arg2 ;
-(void)replyWithParameter:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_maybeAddChatViewController;
-(void)_maybeAddGroupViewController;
-(SCChatMainViewController *)chatViewController;
-(void)setChatUsername:(id)arg1 isFromNotification:(BOOL)arg2 sourceType:(long long)arg3 deepLinkURL:(id)arg4 ;
-(SCAddToGroupViewController *)addToGroupViewController;
-(NSMutableSet *)lockScrollRequestIds;
-(id)chatHeader;
-(void)setGroupConversationById:(id)arg1 ;
-(void)presentOnCurrentVCAnimated:(BOOL)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)commerceOperaViewerDidDisappear:(id)arg1 unlockedLens:(id)arg2 additionalInfo:(id)arg3 wasBackgrounded:(BOOL)arg4 ;
-(UIImage *)dismissButtonImage;
-(void)setLockScrollRequestIds:(NSMutableSet *)arg1 ;
-(void)cancelScroll;
-(BOOL)isLeftOfViewController:(id)arg1 ;
-(BOOL)isRightOfViewController:(id)arg1 ;
-(BOOL)isVisibleViewControllerAndCapableOfPlayingSnaps;
-(void)didHideFullscreenSubview;
-(void)navigateToChatViewAnimated:(BOOL)arg1 ;
-(void)setGroupConversationById:(id)arg1 deeplinkURL:(id)arg2 navigationAction:(long long)arg3 ;
-(void)attachFeedToChatTapDectionViewWithCurrentTapLocation:(CGPoint)arg1 delegate:(id)arg2 ;
-(void)setFriend:(id)arg1 sourceType:(long long)arg2 deepLinkURL:(id)arg3 ;
-(void)setGroupCreationWithRecipients:(id)arg1 ;
-(BOOL)isScrollingLocked;
-(void)setDismissButtonImage:(UIImage *)arg1 ;
-(id)chatHeaderView;
-(void)setAddToGroupViewController:(SCAddToGroupViewController *)arg1 ;
-(void)dealloc;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(void)viewDidLoad;
@end

