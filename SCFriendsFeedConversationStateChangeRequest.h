/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCDocObjectChangeRequest.h>

@class NSString, SCFriendsFeedCashState, SCFriendsFeedChatsState, SCFriendsFeedSnapsState, SCFriendsFeedMultiRecipientState;

@interface SCFriendsFeedConversationStateChangeRequest : NSObject <SCDocObjectChangeRequest> {

	long long _rowid;
	int _requestType;
	NSString* _conversationId;
	NSString* _feedItemId;
	long long _lastInteractionTimeIntervalInMs;
	SCFriendsFeedCashState* _cashState;
	SCFriendsFeedChatsState* _chatsState;
	SCFriendsFeedSnapsState* _snapsState;
	SCFriendsFeedMultiRecipientState* _multiRecipientState;

}

@property (nonatomic,copy) NSString * conversationId;                                           //@synthesize conversationId=_conversationId - In the implementation block
@property (nonatomic,copy) NSString * feedItemId;                                               //@synthesize feedItemId=_feedItemId - In the implementation block
@property (assign,nonatomic) long long lastInteractionTimeIntervalInMs;                         //@synthesize lastInteractionTimeIntervalInMs=_lastInteractionTimeIntervalInMs - In the implementation block
@property (nonatomic,copy) SCFriendsFeedCashState * cashState;                                  //@synthesize cashState=_cashState - In the implementation block
@property (nonatomic,copy) SCFriendsFeedChatsState * chatsState;                                //@synthesize chatsState=_chatsState - In the implementation block
@property (nonatomic,copy) SCFriendsFeedSnapsState * snapsState;                                //@synthesize snapsState=_snapsState - In the implementation block
@property (nonatomic,copy) SCFriendsFeedMultiRecipientState * multiRecipientState;              //@synthesize multiRecipientState=_multiRecipientState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)creationRequestWithFriendsFeedConversationState:(id)arg1 ;
+(id)changeRequestForFriendsFeedConversationState:(id)arg1 ;
+(id)deletionRequestForFriendsFeedConversationState:(id)arg1 ;
-(void)createTableWithSQLite:(sqlite3Ref)arg1 ;
-(id)transactWithSQLite:(SQLiteConnection*)arg1 flatbuffers:(FlatBufferBuilder*)arg2 ;
-(SCFriendsFeedCashState *)cashState;
-(NSString *)feedItemId;
-(long long)lastInteractionTimeIntervalInMs;
-(SCFriendsFeedChatsState *)chatsState;
-(SCFriendsFeedSnapsState *)snapsState;
-(SCFriendsFeedMultiRecipientState *)multiRecipientState;
-(id)initWithRowid:(long long)arg1 conversationId:(id)arg2 feedItemId:(id)arg3 lastInteractionTimeIntervalInMs:(long long)arg4 cashState:(id)arg5 chatsState:(id)arg6 snapsState:(id)arg7 multiRecipientState:(id)arg8 ;
-(id)_friendsFeedConversationState;
-(void)setFeedItemId:(NSString *)arg1 ;
-(void)setLastInteractionTimeIntervalInMs:(long long)arg1 ;
-(void)setCashState:(SCFriendsFeedCashState *)arg1 ;
-(void)setChatsState:(SCFriendsFeedChatsState *)arg1 ;
-(void)setSnapsState:(SCFriendsFeedSnapsState *)arg1 ;
-(void)setMultiRecipientState:(SCFriendsFeedMultiRecipientState *)arg1 ;
-(const char*)table;
-(NSString *)conversationId;
-(void)setConversationId:(NSString *)arg1 ;
@end

