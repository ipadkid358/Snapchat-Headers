/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIViewController.h>
#import <Snapchat/SCContextChatHeaderDelegate.h>
#import <Snapchat/SCSnapPlayContainer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Snapchat/SCContextPresentableViewController.h>
#import <Snapchat/SCChatCellMessageStateUpdateDelegate.h>
#import <Snapchat/SCChatViewControllerConversationStateProtocol.h>

@protocol SCContextPresentableViewControllerDelegate, SCContextMessagingViewControllerDelegateSCChatViewControllerConversationStateProtocol;
@class SCContextSession, UIView, NSString, SCContextChatHeader, SCChatInputController;

@interface SCContextMessagingViewController : UIViewController <SCContextChatHeaderDelegate, SCSnapPlayContainer, UIGestureRecognizerDelegate, SCContextPresentableViewController, SCChatCellMessageStateUpdateDelegate, SCChatViewControllerConversationStateProtocol> {

	SCContextSession* _session;
	UIView* _dismissView;
	BOOL _shouldEnableKeyboardOnTransition;
	BOOL _hasAlternateRecipient;
	NSString* _displayName;
	BOOL _inCellMode;
	BOOL _transitioningToFullScreen;
	BOOL _dismissingFromFullScreen;
	BOOL _isCurrentlyDisplayed;
	id<SCContextPresentableViewControllerDelegate> presentationDelegate;
	id<SCContextMessagingViewControllerDelegate><SCChatViewControllerConversationStateProtocol> _delegate;
	SCContextChatHeader* _header;
	UIView* _contentView;
	SCChatInputController* _inputController;
	CGRect _frameToTransitionFrom;

}

@property (assign,nonatomic,__weak) id<SCContextMessagingViewControllerDelegate><SCChatViewControllerConversationStateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SCContextChatHeader * header;                                                                                           //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                                                                     //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) SCChatInputController * inputController;                                                                                  //@synthesize inputController=_inputController - In the implementation block
@property (nonatomic,readonly) BOOL inCellMode;                                                                                                        //@synthesize inCellMode=_inCellMode - In the implementation block
@property (nonatomic,readonly) BOOL transitioningToFullScreen;                                                                                         //@synthesize transitioningToFullScreen=_transitioningToFullScreen - In the implementation block
@property (nonatomic,readonly) BOOL dismissingFromFullScreen;                                                                                          //@synthesize dismissingFromFullScreen=_dismissingFromFullScreen - In the implementation block
@property (nonatomic,readonly) CGRect frameToTransitionFrom;                                                                                           //@synthesize frameToTransitionFrom=_frameToTransitionFrom - In the implementation block
@property (nonatomic,readonly) BOOL isCurrentlyDisplayed;                                                                                              //@synthesize isCurrentlyDisplayed=_isCurrentlyDisplayed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCContextPresentableViewControllerDelegate> presentationDelegate; 
-(void)handleGesture:(id)arg1 ;
-(void)didSelectPreserveMessageForMessageId:(id)arg1 conversationId:(id)arg2 ;
-(id)activeConversationId;
-(id)otherParticipant;
-(BOOL)callInProgress;
-(BOOL)isPlayingMedia;
-(void)didRequestStateUpdateForMessageCell:(id)arg1 ;
-(void)didRequestRetryFailedMessage:(id)arg1 ;
-(void)didLongPressOnMessageViewModel:(id)arg1 cell:(id)arg2 ;
-(void)didShowCompleteDisplayForMessageId:(id)arg1 conversationId:(id)arg2 ;
-(void)didShowPendingDisplayForMessageId:(id)arg1 conversationId:(id)arg2 ;
-(void)didReceiveBitmojiInChat:(id)arg1 stickerId:(id)arg2 ;
-(BOOL)shouldUseChatHeader;
-(BOOL)shouldAnimateWhenPresenting;
-(/*^block*/id)presentationCompletion;
-(id)initWithDisplayName:(id)arg1 hasAlternateRecipient:(BOOL)arg2 contextSession:(id)arg3 ;
-(BOOL)inCellMode;
-(BOOL)transitioningToFullScreen;
-(void)prepareForTransitionToFullScreenFromFrame:(CGRect)arg1 enableKeyboard:(BOOL)arg2 ;
-(void)transitionToFullScreenChatView;
-(void)dismissAnimated:(BOOL)arg1 shouldDismissContext:(BOOL)arg2 ;
-(BOOL)dismissingFromFullScreen;
-(void)resetToCellView;
-(BOOL)isCurrentlyDisplayed;
-(void)updateHeaderToDisplayName:(id)arg1 ;
-(void)swapButtonPressedOnHeader:(id)arg1 ;
-(void)xButtonPressedOnHeader:(id)arg1 ;
-(void)_setupDismissView;
-(void)_didSwitchToFullScreenMode;
-(CGRect)frameToTransitionFrom;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(void)setDelegate:(id<SCContextMessagingViewControllerDelegate><SCChatViewControllerConversationStateProtocol>)arg1 ;
-(id<SCContextMessagingViewControllerDelegate><SCChatViewControllerConversationStateProtocol>)delegate;
-(BOOL)prefersStatusBarHidden;
-(long long)preferredStatusBarUpdateAnimation;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_dismiss;
-(SCChatInputController *)inputController;
-(void)setInputController:(SCChatInputController *)arg1 ;
-(SCContextChatHeader *)header;
-(id<SCContextPresentableViewControllerDelegate>)presentationDelegate;
-(void)setPresentationDelegate:(id<SCContextPresentableViewControllerDelegate>)arg1 ;
@end

