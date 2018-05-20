/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:39 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SCSnapTapEventLogger : NSObject {

	NSMutableDictionary* _snapTapStateEvents;
	NSMutableDictionary* _snapTapContext;

}
+(id)sharedInstance;
-(void)logChatV2SnapTapStateEventForSnap:(id)arg1 context:(id)arg2 playbackMethod:(long long)arg3 ;
-(void)logChatV3SnapTapStateEventForMessageId:(id)arg1 conversationId:(id)arg2 context:(id)arg3 playbackMethod:(long long)arg4 ;
-(long long)_snapLoadStateForSnapState:(long long)arg1 ;
-(BOOL)_shouldEmitSnapTapEventForStartState:(long long)arg1 endState:(long long)arg2 ;
-(void)_logUnsampledCounterEventForSnapId:(id)arg1 startState:(long long)arg2 endState:(long long)arg3 mediaType:(id)arg4 snapType:(long long)arg5 sendingFlowVersion:(long long)arg6 context:(id)arg7 senderUsername:(id)arg8 playbackMethod:(long long)arg9 ;
-(long long)_snapLoadStateForChatMediaContentLoadState:(long long)arg1 ;
-(id)_stringFromSnapTapState:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)clearEvents;
@end
