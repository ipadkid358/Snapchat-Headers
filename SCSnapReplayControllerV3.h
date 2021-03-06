/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCSnapReplayControllerV3Delegate, SCChatMessageActionHandler;
@class User;

@interface SCSnapReplayControllerV3 : NSObject {

	id<SCSnapReplayControllerV3Delegate> _delegate;
	id<SCChatMessageActionHandler> _actionHandler;
	User* _user;
	long long _context;

}
-(id)initWithDelegate:(id)arg1 context:(long long)arg2 actionHandler:(id)arg3 user:(id)arg4 ;
-(void)attemptReplayOfSnap:(id)arg1 inConversation:(id)arg2 ;
-(void)_handleFetchOfSnap:(id)arg1 forUser:(id)arg2 ;
-(id)_paidReplayActionForSnap:(id)arg1 user:(id)arg2 ;
-(id)_cancelActionForSnap:(id)arg1 ;
-(void)_showAlertViewCoordiatorWithActionText:(id)arg1 actions:(id)arg2 snap:(id)arg3 ;
-(id)_replayActionForSnap:(id)arg1 user:(id)arg2 ;
-(void)_logReplayActionForEvent:(id)arg1 sender:(id)arg2 viewer:(id)arg3 ;
-(void)_showFreeReplayAlertViewForSnap:(id)arg1 user:(id)arg2 ;
-(void)_attemptReplayOfSnap:(id)arg1 ;
-(void)_showReplayCreditUpdatePromptForSnap:(id)arg1 user:(id)arg2 ;
-(void)_payToReplaySnap:(id)arg1 forUser:(id)arg2 ;
-(void)_replaySnap:(id)arg1 forUser:(id)arg2 ;
@end

