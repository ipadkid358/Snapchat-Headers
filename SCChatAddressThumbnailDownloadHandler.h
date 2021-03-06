/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCChatMediaDownloadHandler.h>

@protocol SCChatRequestManager;
@class SCChatV3ConversationStore;

@interface SCChatAddressThumbnailDownloadHandler : NSObject <SCChatMediaDownloadHandler> {

	id<SCChatRequestManager> _chatRequestManager;
	SCChatV3ConversationStore* _conversationStore;

}
-(id)initWithChatRequestManager:(id)arg1 conversationStore:(id)arg2 messageStateHandler:(id)arg3 mediaStateManager:(id)arg4 mediaReferenceManager:(id)arg5 logger:(id)arg6 ;
-(void)downloadItem:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

