/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SCStoryManifest, SCStoryMediaMessageViewModel;

@interface SCBaseStoryMediaCardViewModel : NSObject {

	BOOL _sentByUser;
	BOOL _isSent;
	BOOL _isSending;
	BOOL _failedToSend;
	NSString* _messageId;
	NSString* _conversationId;
	SCStoryManifest* _storyManifest;
	SCStoryMediaMessageViewModel* _mediaViewModel;

}

@property (nonatomic,readonly) BOOL sentByUser;                                            //@synthesize sentByUser=_sentByUser - In the implementation block
@property (nonatomic,readonly) BOOL isSent;                                                //@synthesize isSent=_isSent - In the implementation block
@property (nonatomic,readonly) BOOL isSending;                                             //@synthesize isSending=_isSending - In the implementation block
@property (nonatomic,readonly) BOOL failedToSend;                                          //@synthesize failedToSend=_failedToSend - In the implementation block
@property (nonatomic,copy,readonly) NSString * messageId;                                  //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,copy,readonly) NSString * conversationId;                             //@synthesize conversationId=_conversationId - In the implementation block
@property (nonatomic,readonly) SCStoryManifest * storyManifest;                            //@synthesize storyManifest=_storyManifest - In the implementation block
@property (nonatomic,readonly) SCStoryMediaMessageViewModel * mediaViewModel;              //@synthesize mediaViewModel=_mediaViewModel - In the implementation block
+(id)_failedColor;
+(id)_titleSendingColor;
+(id)_subtitleSendingColor;
+(id)titleFont;
+(id)subtitleFont;
+(id)_titleColor;
+(id)_subtitleColor;
-(BOOL)failedToSend;
-(BOOL)sentByUser;
-(SCStoryManifest *)storyManifest;
-(id)attributedTextForTitle;
-(id)attributedTextForSubtitle;
-(SCStoryMediaMessageViewModel *)mediaViewModel;
-(id)initWithBaseMediaMessage:(id)arg1 mediaViewModel:(id)arg2 ;
-(id)initWithMediaMessageV3:(id)arg1 mediaViewModel:(id)arg2 currentUserName:(id)arg3 ;
-(id)colorForTitle;
-(id)colorForSubtitle;
-(double)height;
-(NSString *)conversationId;
-(BOOL)isSending;
-(BOOL)isSent;
-(NSString *)messageId;
@end

