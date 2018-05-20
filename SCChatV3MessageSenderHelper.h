/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:27 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCChatConversationManager;
#import <Snapchat/Snapchat-Structs.h>
@class NSString, SCChatReplyMediaProperties, SCUserSession;

@interface SCChatV3MessageSenderHelper : NSObject {

	id<SCChatConversationManager> _manager;
	NSString* _conversationId;
	SCChatReplyMediaProperties* _story;
	long long _chatSource;
	long long _stickerSource;
	SCUserSession* _userSession;
	BOOL _isStorySpectaclesMedia;

}
-(void)_sendTextMessage:(id)arg1 toStory:(id)arg2 metricsEventInfo:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)sendGifMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_sendAudioVideoNote:(id)arg1 messageBodyType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithConversationManager:(id)arg1 userSession:(id)arg2 conversationId:(id)arg3 story:(id)arg4 isStorySpectaclesMedia:(BOOL)arg5 chatSource:(long long)arg6 stickerSource:(long long)arg7 ;
-(void)sendTextMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendGifData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendSticker:(id)arg1 fromPack:(id)arg2 fromPosition:(unsigned long long)arg3 fromSource:(long long)arg4 drawerMode:(long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)sendMediaDrawerMedia:(id)arg1 fromLocation:(SCD_Struct_SC420)arg2 drawerMode:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)sendAudioNoteWithData:(id)arg1 duration:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)sendVideoNoteWithData:(id)arg1 duration:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

