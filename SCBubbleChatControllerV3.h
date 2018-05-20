/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:26 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCBubbleDataSourceManagerDelegate.h>
#import <Snapchat/SCV3BubbleChatController.h>

@protocol SCChatConversationManager;
@class SCUserSession, SCChatSendBlockAssigner, SCChatInputController, SCActionSheetCoordinator, SCBubbleDataSourceManagerV3, SCBubbleContainerGradientView, UIView, NSMutableArray, MASViewAttribute, NSString;

@interface SCBubbleChatControllerV3 : NSObject <SCBubbleDataSourceManagerDelegate, SCV3BubbleChatController> {

	SCUserSession* _userSession;
	SCChatSendBlockAssigner* _blockAssigner;
	SCChatInputController* _chatInputController;
	SCActionSheetCoordinator* _actionSheetCoordinator;
	SCBubbleDataSourceManagerV3* _bubbleDataSourceManager;
	SCBubbleContainerGradientView* _containerView;
	UIView* _elmPane;
	UIView* _presenceBarPane;
	UIView* _bubbleChatView;
	NSMutableArray* _bubbleViews;
	MASViewAttribute* _containerBottomConstraint;
	id<SCChatConversationManager> _conversationManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateChatViewSize:(CGSize)arg1 ;
-(void)_updateContainerViewOffsetAnimated:(BOOL)arg1 ;
-(void)shiftBubbleViewsUpByYOffset:(double)arg1 ;
-(id)_bubbleViewForDataSource:(id)arg1 ;
-(void)didCreateNewBubbleWithDataSource:(id)arg1 ;
-(void)didAddMessageToBubbleWithDataSource:(id)arg1 ;
-(void)didUpdateBubbleWithDataSource:(id)arg1 indexPath:(id)arg2 ;
-(void)didUpdateSaveStateForBubbleDataSource:(id)arg1 indexPath:(id)arg2 viewModel:(id)arg3 ;
-(void)didRemoveEmptyDataSource:(id)arg1 ;
-(void)didRemoveMessageInBubbleWithDataSource:(id)arg1 indexPath:(id)arg2 ;
-(void)didBeginExpiringBubbleWithDataSource:(id)arg1 ;
-(id)bubbleChatView;
-(void)adjustBottomInsetAnimated:(BOOL)arg1 ;
-(void)setELMPane:(id)arg1 ;
-(void)setPresenceBarPane:(id)arg1 ;
-(void)startUpdatingBubbles;
-(void)stopUpdatingBubbles;
-(BOOL)isTouchInsideChatBubble:(id)arg1 ;
-(BOOL)shouldPreviewRecognizeTapGestureRecognizer:(id)arg1 ;
-(id)initWithParentViewController:(id)arg1 userSession:(id)arg2 chatInputController:(id)arg3 navigationDelegate:(id)arg4 conversationManager:(id)arg5 ;
-(void)inputViewDidChange;
@end

