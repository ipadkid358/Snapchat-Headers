/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCGalleryInChatLogger
@required
-(id)sendToChatBlizzardEventsWithMediaArray:(id)arg1 recipientCount:(long long)arg2 mischiefIds:(id)arg3 postToStory:(BOOL)arg4 userContext:(id)arg5;
-(void)logIfSendFromGalleryWithMessageId:(id)arg1 failureReason:(id)arg2;
-(void)addEvent:(id)arg1 withMessageId:(id)arg2;

@end

