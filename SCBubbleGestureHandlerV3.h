/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:26 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCBaseMediaOperaPresenterDelegate.h>
#import <Snapchat/SCChatFullscreenMediaChatTableCellDelegate.h>
#import <Snapchat/SCChatCellStackGestureDelegate.h>

@protocol SCBubbleChatKeyboardDelegate, SCChatMessageActionHandler, SCChatCellGestureDelegate;
@class SCBaseMediaOperaPresenter, SCUserSession, UIViewController, NSString;

@interface SCBubbleGestureHandlerV3 : NSObject <SCBaseMediaOperaPresenterDelegate, SCChatFullscreenMediaChatTableCellDelegate, SCChatCellStackGestureDelegate> {

	SCBaseMediaOperaPresenter* _operaPresenter;
	SCUserSession* _userSession;
	id<SCBubbleChatKeyboardDelegate> _keyboardDelegate;
	id<SCChatMessageActionHandler> _actionHandler;
	CGRect _containerFrame;
	UIViewController*<SCChatCellGestureDelegate> _parentViewController;

}

@property (nonatomic,__weak,readonly) UIViewController*<SCChatCellGestureDelegate> parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)tableIsFadedOut;
-(CGRect)iconViewRectForSnap:(id)arg1 ;
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
-(void)stackedTableViewCell:(id)arg1 didSelectIndex:(unsigned long long)arg2 viewModel:(id)arg3 ;
-(id)operaPresenter;
-(id)searchStoriesPresenter;
-(id)presentingVC;
-(CGRect)mediaBoundingFrame;
-(id)initWithParentViewController:(id)arg1 userSession:(id)arg2 keyboardDelegate:(id)arg3 containerFrame:(CGRect)arg4 actionHandler:(id)arg5 ;
-(void)handleTapOnCell:(id)arg1 viewModel:(id)arg2 ;
-(UIViewController*<SCChatCellGestureDelegate>)parentViewController;
@end
