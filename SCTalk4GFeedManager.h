/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCTV3ActiveConversationsListener.h>

@protocol SCTalkManager, SCPerforming;
@class SCChatV3ConversationStore, SCFeedManager, NSString, NSDictionary;

@interface SCTalk4GFeedManager : NSObject <SCTV3ActiveConversationsListener> {

	SCChatV3ConversationStore* _conversationStore;
	SCFeedManager* _feedManager;
	NSString* _username;
	id<SCTalkManager> _talkManager;
	NSDictionary* _previousConvIdToActiveConversationInfo;
	id<SCPerforming> _performer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onActiveConversationsChanged;
-(id)initWithConversationStore:(id)arg1 feedManager:(id)arg2 talkManager:(id)arg3 username:(id)arg4 ;
-(void)_updateConversationWithId:(id)arg1 lastInteractionTimestamp:(id)arg2 ;
-(void)dealloc;
@end
