/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCBaseMediaThumbnailViewModelFactory : NSObject
+(id)createViewModelFromChatMediaContent:(id)arg1 metadata:(id)arg2 messageBodyType:(long long)arg3 ;
+(id)createViewModelFromRenderableChatMedia:(id)arg1 ;
+(id)createViewModelFromAdShareMediaContent:(id)arg1 metadata:(id)arg2 ;
+(id)createViewModelFromAdShareMediaMessage:(id)arg1 ;
+(id)createViewModelFromBaseMediaMessage:(id)arg1 ;
+(id)createViewModelFromStoryReplyMediaMessage:(id)arg1 ;
+(id)createViewModelForStoryReplyMediaContent:(id)arg1 isSendingOrHasFailed:(BOOL)arg2 subtext:(id)arg3 shouldCropCircularMedia:(BOOL)arg4 useDisplayedMediaDirectly:(BOOL)arg5 ;
+(id)createViewModelFromStorySnapMessage:(id)arg1 senderColor:(id)arg2 ;
+(id)createViewModelForStorySnapMetadata:(id)arg1 isSendingOrHasFailed:(BOOL)arg2 senderColor:(id)arg3 ;
+(id)createViewModelFromMapSnapMessage:(id)arg1 senderColor:(id)arg2 enableStreaming:(BOOL)arg3 ;
+(id)createViewModelForMapSnapMetadata:(id)arg1 isSendingOrHasFailed:(BOOL)arg2 senderColor:(id)arg3 messageId:(id)arg4 conversationId:(id)arg5 enableStreaming:(BOOL)arg6 ;
+(id)createViewModelFromSearchStoryMessage:(id)arg1 senderColor:(id)arg2 ;
+(id)createViewModelForSearchStoryMetadata:(id)arg1 isSendingOrHasFailed:(BOOL)arg2 senderColor:(id)arg3 ;
@end

