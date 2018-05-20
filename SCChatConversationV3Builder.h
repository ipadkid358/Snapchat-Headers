/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCChatGroup;
#import <Snapchat/Snapchat-Structs.h>
@class NSString, NSArray, NSDictionary, SCChatDraft, NSDate, SOJULastMischiefContent;

@interface SCChatConversationV3Builder : NSObject {

	NSString* _id;
	id<SCChatGroup> _group;
	long long _historyLoadingStatus;
	long long _loadingStatus;
	NSArray* _messages;
	long long _sequenceSyncState;
	NSDictionary* _knownChatSequenceNums;
	NSDictionary* _knownStateUpdateSequenceNums;
	NSDictionary* _knownSnapSequenceNums;
	NSDictionary* _pageKnownChatSequenceNums;
	NSDictionary* _earliestKnownChatSequenceNums;
	NSDictionary* _seenChatSequenceNums;
	BOOL _earlierContentExists;
	NSDictionary* _stickerUsageHistory;
	NSArray* _failedSilentWireMessages;
	NSDictionary* _pendingSnapUpdates;
	SCChatDraft* _chatDraft;
	NSDate* _lastInteractionTimestamp;
	NSDate* _lastClearedTimestamp;
	BOOL _notificationStatus;
	NSDictionary* _lastReleasedSnapTimestamp;
	NSDictionary* _lastReleasedSnapId;
	SOJULastMischiefContent* _lastMischiefContent;
	long long _lastSyncContentType;
	NSDate* _lastOpenSnapTimestamp;
	NSDate* _lastOpenChatTimestamp;
	NSArray* _participantUsernames;
	NSString* _iterToken;
	NSString* _authMac;
	NSString* _authPayload;
	NSString* _conversationAuthType;
	BOOL _recipientCanReceiveCash;
	unsigned long long _messageRetentionInMinutes;

}
+(id)withChatConversationV3:(id)arg1 ;
+(id)setDefaultsForParticipants:(id)arg1 withConversationBuilder:(id)arg2 ;
+(id)forConversationGroup:(id)arg1 ;
+(id)withChatConversationV3:(id)arg1 removeMessages:(id)arg2 ;
+(id)withChatConversationV3:(id)arg1 addMessages:(id)arg2 ;
+(id)withChatConversationV3:(id)arg1 modifyAllMessageswithMutationBlock:(/*^block*/id)arg2 ;
+(id)withChatConversationV3:(id)arg1 removeMessageIds:(id)arg2 ;
+(id)withChatConversationV3:(id)arg1 modifyMessageIds:(id)arg2 withMutationBlock:(/*^block*/id)arg3 enforceMessagesExist:(BOOL)arg4 ;
-(id)setMessageRetentionInMinutes:(unsigned long long)arg1 ;
-(id)setIterToken:(id)arg1 ;
-(id)setNotificationStatus:(BOOL)arg1 ;
-(id)setLastInteractionTimestamp:(id)arg1 ;
-(id)setLastClearedTimestamp:(id)arg1 ;
-(id)setEarlierContentExists:(BOOL)arg1 ;
-(id)setLastMischiefContent:(id)arg1 ;
-(id)setLastSyncContentType:(long long)arg1 ;
-(id)setParticipantUsernames:(id)arg1 ;
-(id)setSequenceSyncState:(long long)arg1 ;
-(id)setKnownChatSequenceNums:(NSDictionary*)arg1 ;
-(id)setKnownStateUpdateSequenceNums:(NSDictionary*)arg1 ;
-(id)setKnownSnapSequenceNums:(NSDictionary*)arg1 ;
-(id)setSeenChatSequenceNums:(id)arg1 ;
-(id)setEarliestKnownChatSequenceNums:(NSDictionary*)arg1 ;
-(id)setPageKnownChatSequenceNums:(NSDictionary*)arg1 ;
-(id)setAuthMac:(id)arg1 ;
-(id)setAuthPayload:(id)arg1 ;
-(id)setConversationAuthType:(id)arg1 ;
-(id)setStickerUsageHistory:(NSDictionary*)arg1 ;
-(id)setLastOpenSnapTimestamp:(id)arg1 ;
-(id)setLastOpenChatTimestamp:(id)arg1 ;
-(id)setFailedSilentWireMessages:(id)arg1 ;
-(id)setPendingSnapUpdates:(id)arg1 ;
-(id)setLastReleasedSnapId:(id)arg1 ;
-(id)setLastReleasedSnapTimestamp:(id)arg1 ;
-(id)setHistoryLoadingStatus:(long long)arg1 ;
-(id)setChatDraft:(id)arg1 ;
-(id)setRecipientCanReceiveCash:(BOOL)arg1 ;
-(id)setGroup:(id)arg1 ;
-(id)build;
-(id)setLoadingStatus:(long long)arg1 ;
-(id)setMessages:(id)arg1 ;
-(id)setId:(id)arg1 ;
@end

