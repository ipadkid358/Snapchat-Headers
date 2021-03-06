/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface SCChatNotificationTrackingItem : NSObject {

	BOOL _receivedPush;
	BOOL _receivedChat;
	BOOL _reported;
	NSDate* _createTime;
	NSString* _messageId;

}

@property (assign) BOOL receivedPush;                                  //@synthesize receivedPush=_receivedPush - In the implementation block
@property (assign) BOOL receivedChat;                                  //@synthesize receivedChat=_receivedChat - In the implementation block
@property (assign) BOOL reported;                                      //@synthesize reported=_reported - In the implementation block
@property (nonatomic,copy,readonly) NSDate * createTime;               //@synthesize createTime=_createTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageId;              //@synthesize messageId=_messageId - In the implementation block
-(NSDate *)createTime;
-(id)initWithMessageId:(id)arg1 ;
-(BOOL)receivedPush;
-(void)setReceivedPush:(BOOL)arg1 ;
-(BOOL)receivedChat;
-(void)setReceivedChat:(BOOL)arg1 ;
-(NSString *)messageId;
-(BOOL)reported;
-(void)setReported:(BOOL)arg1 ;
@end

