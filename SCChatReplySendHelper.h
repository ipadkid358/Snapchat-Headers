/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCGalleryInChatLogger;
#import <Snapchat/Snapchat-Structs.h>
@class SCChatSendHelper, NSString, SCCustomStickerManager;

@interface SCChatReplySendHelper : NSObject {

	SCChatSendHelper* _chatSendHelper;
	NSString* _conversationId;
	SCCustomStickerManager* _customStickerManager;
	id<SCGalleryInChatLogger> _galleryLogger;

}
+(BOOL)doReplyMediasNeedUploadingInMessage:(id)arg1 ;
+(void)uploadReplyMediaForMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)_uploadReplyMediaForMessage:(id)arg1 baseChatMedia:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(/*^block*/id)_createRequestSuccessCallbackWithMessage:(id)arg1 mediaType:(long long)arg2 chatSendHelper:(id)arg3 uploadId:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(/*^block*/id)_createRequestFailureCallbackWithMessage:(id)arg1 chatSendHelper:(id)arg2 uploadId:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_sendTextStoryReply:(id)arg1 story:(id)arg2 storyType:(long long)arg3 storyTypeSpecific:(long long)arg4 completionHandler:(/*^block*/id)arg5 metricsEventInfo:(id)arg6 ;
-(void)_sendTextStoryReplyMessage:(id)arg1 media:(id)arg2 mediaKey:(id)arg3 mediaIv:(id)arg4 isInfiniteDuration:(BOOL)arg5 metricsEventInfo:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)_sendStickerMediaReply:(id)arg1 fromPack:(id)arg2 fromPosition:(unsigned long long)arg3 drawerMode:(long long)arg4 completionHandler:(/*^block*/id)arg5 media:(id)arg6 mediaKey:(id)arg7 mediaIv:(id)arg8 isInfiniteDuration:(BOOL)arg9 stickerSource:(long long)arg10 metricsEventInfo:(id)arg11 ;
-(void)_sendReplyMessage:(id)arg1 media:(id)arg2 mediaKey:(id)arg3 mediaIv:(id)arg4 isInfiniteDuration:(BOOL)arg5 metricsEventInfo:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)_sendMediaDrawerMediaReply:(id)arg1 fromLocation:(SCD_Struct_SC420)arg2 drawerMode:(long long)arg3 media:(id)arg4 mediaKey:(id)arg5 mediaIv:(id)arg6 isInfiniteDuration:(BOOL)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)_sendAudioNoteMediaReply:(id)arg1 duration:(double)arg2 media:(id)arg3 mediaKey:(id)arg4 mediaIv:(id)arg5 isInfiniteDuration:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)_sendVideoNoteMediaReply:(id)arg1 duration:(double)arg2 media:(id)arg3 mediaKey:(id)arg4 mediaIv:(id)arg5 isInfiniteDuration:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)addTemporaryReplyMediaToMessage:(id)arg1 media:(id)arg2 mediaKey:(id)arg3 mediaIv:(id)arg4 isInfiniteDuration:(BOOL)arg5 ;
-(id)initWithChatSendHelper:(id)arg1 conversationId:(id)arg2 customStickerManager:(id)arg3 galleryInChatLogger:(id)arg4 ;
-(void)sendTextStoryReply:(id)arg1 story:(id)arg2 storyType:(long long)arg3 storyTypeSpecific:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)sendStickerStoryReply:(id)arg1 fromPack:(id)arg2 fromPosition:(unsigned long long)arg3 drawerMode:(long long)arg4 completionHandler:(/*^block*/id)arg5 story:(id)arg6 stickerSource:(long long)arg7 ;
-(void)sendMediaDrawerStoryReply:(id)arg1 fromLocation:(SCD_Struct_SC420)arg2 drawerMode:(long long)arg3 story:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)sendAudioNoteStoryReply:(id)arg1 duration:(double)arg2 story:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)sendVideoNoteStoryReply:(id)arg1 duration:(double)arg2 story:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)sendGifStoryReply:(id)arg1 story:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

