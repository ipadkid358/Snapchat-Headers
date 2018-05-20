/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCFeedEventGenerator.h>

@class SCChatMessageV3, NSMutableDictionary;

@interface SCFeedChatEventGenerator : SCFeedEventGenerator {

	SCChatMessageV3* _lastReceivedUnreadMessage;
	NSMutableDictionary* _unreadMessages;

}
-(id)initWithGeneratorType:(long long)arg1 username:(id)arg2 userId:(id)arg3 conversationId:(id)arg4 ;
-(void)updateWithMessage:(id)arg1 ;
-(void)removeMessageWithMessageId:(id)arg1 ;
-(id)conversationToInteractionEvent:(id)arg1 messageIdToMetadataMap:(id)arg2 ;
-(id)_conversationToHighPriorityInteractionEvent:(id)arg1 messageIdToMetadataMap:(id)arg2 ;
-(id)_conversationToNormalPriorityInteractionEvent:(id)arg1 messageIdToMetadataMap:(id)arg2 ;
@end

