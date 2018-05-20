/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCChatSDKActionContextProtocol.h>

@protocol SCChatCellBaseGestureDelegate;
@class UIViewController;

@interface SCChatSDKActionContext : NSObject <SCChatSDKActionContextProtocol> {

	UIViewController*<SCChatCellBaseGestureDelegate> _parentViewController;

}

@property (assign,nonatomic,__weak) UIViewController*<SCChatCellBaseGestureDelegate> parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
-(void)preserveMessageForMessageId:(id)arg1 conversationId:(id)arg2 ;
-(void)followDeepLinkWithUrl:(id)arg1 additionalInfo:(id)arg2 ;
-(void)operaWillAppear;
-(void)operaDidDisappear;
-(id)presentingViewController;
-(UIViewController*<SCChatCellBaseGestureDelegate>)parentViewController;
-(void)setParentViewController:(UIViewController*<SCChatCellBaseGestureDelegate>)arg1 ;
-(id)userSession;
@end

