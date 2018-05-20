/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCChat;

@interface SCEventGenerator : NSObject {

	long long _generatorType;
	SCChat* _chat;

}

@property (nonatomic,readonly) long long generatorType;              //@synthesize generatorType=_generatorType - In the implementation block
@property (assign,nonatomic,__weak) SCChat * chat;                   //@synthesize chat=_chat - In the implementation block
-(long long)generatorType;
-(id)snapInfo:(id)arg1 ;
-(id)paymentMessageInfo:(id)arg1 ;
-(id)hereBaseCallInfo:(id)arg1 ;
-(id)chatScreenshotInfo:(id)arg1 ;
-(id)hereScreenshotInfo:(id)arg1 ;
-(id)_cameraRollSaveInfo:(id)arg1 ;
-(id)baseMessageInfo:(id)arg1 ;
-(id)stateMessageState:(id)arg1 ;
-(BOOL)isMessageOnBirthday:(id)arg1 ;
-(BOOL)isMessageStateSending:(id)arg1 ;
-(id)initWithChat:(id)arg1 generatorType:(long long)arg2 ;
-(id)toInteractionEvent;
-(id)conversationInfo;
-(id)messageInfo:(id)arg1 ;
-(BOOL)isMessageRecentlySent:(id)arg1 ;
-(SCChat *)chat;
-(void)setChat:(SCChat *)arg1 ;
@end

