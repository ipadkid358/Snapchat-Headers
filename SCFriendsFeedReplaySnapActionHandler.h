/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:30 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSnapReplayControllerV3Delegate.h>
#import <Snapchat/SCSearchActionHandling.h>

@protocol SCChatMessageActionHandler;
@class SCLazy, SCFriendsFeedDataCoordinator, NSString;

@interface SCFriendsFeedReplaySnapActionHandler : NSObject <SCSnapReplayControllerV3Delegate, SCSearchActionHandling> {

	SCLazy* _replayController;
	SCFriendsFeedDataCoordinator* _dataCoordinator;
	id<SCChatMessageActionHandler> _messageActionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3 ;
-(void)replayControllerWillDisplayAlertView:(id)arg1 ;
-(void)replayControllerDidDismissAlertView:(id)arg1 ;
-(void)replayControllerConsumedRemainingCredits:(id)arg1 onSnap:(id)arg2 inConversation:(id)arg3 ;
-(id)initWithFriendsFeedDataCoordinator:(id)arg1 chatMessageActionHandler:(id)arg2 user:(id)arg3 ;
@end

