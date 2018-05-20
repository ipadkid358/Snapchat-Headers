/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:26 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCBubbleDataSourceDelegate.h>
#import <Snapchat/SCChatViewModelListener.h>

@protocol SCBubbleDataSourceManagerDelegate, SCChatCellGestureDelegate;
@class SCChat, SCChatViewModelForChat, UIViewController, NSMutableArray, NSString;

@interface SCBubbleDataSourceManager : NSObject <SCBubbleDataSourceDelegate, SCChatViewModelListener> {

	id<SCBubbleDataSourceManagerDelegate> _delegate;
	SCChat* _chat;
	SCChatViewModelForChat* _chatViewModel;
	UIViewController*<SCChatCellGestureDelegate> _parentVC;
	NSMutableArray* _bubbleDataSources;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)bubbleDataSourceDidBeginExpiring:(id)arg1 ;
-(void)bubbleDataSourceDidExpire:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 userSession:(id)arg2 parentVC:(id)arg3 ;
-(void)setChatViewModel:(id)arg1 ;
-(id)bubbleDataSourceForViewModel:(id)arg1 ;
-(void)didMessagesChangeAtIndexPaths:(id)arg1 ;
-(void)didMessagesAddAtIndexPaths:(id)arg1 ;
-(void)stackedViewModel:(id)arg1 didChildrenChangeAt:(id)arg2 ;
@end

