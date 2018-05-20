/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:27 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCChatExternalAPIProvider.h>

@protocol SCChatExternalAPIProvider <SCFriendManagerProvider>
@required
-(id)experimentManager;
-(id)friendManager;
-(id)conversationFetcher;
-(/*^block*/id)cacheEncryptionKeyManagerGetterBlock;
-(id)chatMediaFileManager;
-(id)requestAPI;
-(id)userHelper;
-(id)galleryLogger;
-(id)cashHelper;
-(id)storyLoader;
-(id)snapLogger;
-(id)fideliusUnwrapper;
-(id)chatSDKV2Sender;
-(id)messageReceiver;
-(id)fideliusManager;
-(long long)oneOnOneCount;
-(void)createSimpleTicketWithTitle:(id)arg1 email:(id)arg2;
-(id)tooltipManager;
-(id)preloadController;
-(id)messageSender;
-(id)logger;
-(id)feedManager;

@end


@protocol SCChatMessageSender, SCChatConversationFetcher, SCChatMediaFileManager, SCSnapCashHelperProtocol, SCChatStoryLoader, SCChatSDKV2SendingModule, SCSnapLogger;
@class SCUserSession, User, NSString;

@interface SCChatExternalAPIProvider : NSObject <SCChatExternalAPIProvider> {

	id<SCChatMessageSender> _messageSender;
	id<SCChatConversationFetcher> _conversationFetcher;
	id<SCChatMediaFileManager> _mediaFileManager;
	id<SCSnapCashHelperProtocol> _cashHelper;
	id<SCChatStoryLoader> _storyLoader;
	id<SCChatSDKV2SendingModule> _chatSDKV2Sender;
	id<SCSnapLogger> _snapLogger;
	SCUserSession* _userSession;
	User* _user;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)experimentManager;
-(id)friendManager;
-(id)conversationFetcher;
-(/*^block*/id)cacheEncryptionKeyManagerGetterBlock;
-(id)chatMediaFileManager;
-(id)requestAPI;
-(id)userHelper;
-(id)galleryLogger;
-(id)cashHelper;
-(id)storyLoader;
-(id)snapLogger;
-(id)fideliusUnwrapper;
-(id)chatSDKV2Sender;
-(id)messageReceiver;
-(id)fideliusManager;
-(long long)oneOnOneCount;
-(void)createSimpleTicketWithTitle:(id)arg1 email:(id)arg2 ;
-(id)tooltipManager;
-(id)initWithUser:(id)arg1 userSession:(id)arg2 ;
-(id)preloadController;
-(id)messageSender;
-(id)logger;
-(id)feedManager;
@end

