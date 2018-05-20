/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCChatMessageSender;
@class SCQueuePerformer, SCGCDTimer, NSMutableDictionary, NSMutableArray;

@interface SCChatMessageSendQueue : NSObject {

	SCQueuePerformer* _performer;
	id<SCChatMessageSender> _messageSender;
	long long _maxRetryTimeInterval;
	long long _nextRetryDelay;
	SCGCDTimer* _timeoutTimer;
	SCGCDTimer* _resendTimer;
	NSMutableDictionary* _failedMessageResult;
	NSMutableDictionary* _lastFailedMessageResult;
	NSMutableArray* _chatMessageQueue;
	NSMutableDictionary* _messageCompletionHandlers;

}

@property (nonatomic,retain) NSMutableArray * chatMessageQueue;                            //@synthesize chatMessageQueue=_chatMessageQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * messageCompletionHandlers;              //@synthesize messageCompletionHandlers=_messageCompletionHandlers - In the implementation block
-(id)initWithMaxRetryInterval:(long long)arg1 messageSender:(id)arg2 performer:(id)arg3 ;
-(void)_sendMessage:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)_retryMessagesInQueue;
-(NSMutableDictionary *)messageCompletionHandlers;
-(void)_sentMessagesTimedOut;
-(void)_sendChatMessages;
-(void)message:(id)arg1 handleSendMessageResult:(long long)arg2 withResponse:(id)arg3 ;
-(void)_message:(id)arg1 handleSendMessageResult:(long long)arg2 withResponse:(id)arg3 ;
-(void)_invokeHandlerForMessageWithId:(id)arg1 result:(long long)arg2 response:(id)arg3 ;
-(NSMutableArray *)chatMessageQueue;
-(void)didSCCPConnect;
-(void)setChatMessageQueue:(NSMutableArray *)arg1 ;
-(void)setMessageCompletionHandlers:(NSMutableDictionary *)arg1 ;
-(id)initWithMessageSender:(id)arg1 ;
-(void)sendMessage:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_sendMessage:(id)arg1 ;
@end
