/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:27 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCTimeProfilable.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <Snapchat/SCChatMessageReceiveListener.h>
#import <Snapchat/SCTV3ActiveConversationsListener.h>

@protocol SCTalkManager, SCChatConversationFetcher;
@class NSDictionary, NSString, NSMutableDictionary, NSDate, SCMediaCardCache, SCArchivedChats;

@interface SCChats : NSObject <SCTimeProfilable, NSCoding, SCChatMessageReceiveListener, SCTV3ActiveConversationsListener> {

	SC1On1AndGroupSyncState _1On1AndGroupSyncState;
	id<SCTalkManager> _talkManager;
	NSDictionary* _previousConvIdToActiveConversationInfo;
	BOOL _clearing;
	id<SCChatConversationFetcher> _conversationFetcher;
	NSString* _activeChatRecipientBeforeBackgrounded;
	NSString* _lastChatIdWhenActiveChatEntered;
	NSMutableDictionary* _chats;
	NSString* _username;
	NSDictionary* _archivedInitialChatsDeltaRequests;
	NSDictionary* _archivedSnapsDeltaRequests;
	NSDate* _lastCleanClearedMessagesDate;
	SCMediaCardCache* _mediaCardCache;
	SCArchivedChats* _archivedInitialChats;
	SCArchivedChats* _archivedPaginatedChats;

}

@property (nonatomic,retain) NSMutableDictionary * chats;                                      //@synthesize chats=_chats - In the implementation block
@property (assign,getter=isClearing,nonatomic) BOOL clearing;                                  //@synthesize clearing=_clearing - In the implementation block
@property (nonatomic,retain) NSDate * lastCleanClearedMessagesDate;                            //@synthesize lastCleanClearedMessagesDate=_lastCleanClearedMessagesDate - In the implementation block
@property (nonatomic,retain) SCMediaCardCache * mediaCardCache;                                //@synthesize mediaCardCache=_mediaCardCache - In the implementation block
@property (nonatomic,retain) NSString * username;                                              //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) SCArchivedChats * archivedInitialChats;                           //@synthesize archivedInitialChats=_archivedInitialChats - In the implementation block
@property (nonatomic,retain) SCArchivedChats * archivedPaginatedChats;                         //@synthesize archivedPaginatedChats=_archivedPaginatedChats - In the implementation block
@property (nonatomic,readonly) id<SCChatConversationFetcher> conversationFetcher;              //@synthesize conversationFetcher=_conversationFetcher - In the implementation block
@property (nonatomic,retain) NSString * activeChatRecipientBeforeBackgrounded;                 //@synthesize activeChatRecipientBeforeBackgrounded=_activeChatRecipientBeforeBackgrounded - In the implementation block
@property (nonatomic,retain) NSString * lastChatIdWhenActiveChatEntered;                       //@synthesize lastChatIdWhenActiveChatEntered=_lastChatIdWhenActiveChatEntered - In the implementation block
@property (nonatomic,retain) NSDictionary * archivedInitialChatsDeltaRequests;                 //@synthesize archivedInitialChatsDeltaRequests=_archivedInitialChatsDeltaRequests - In the implementation block
@property (nonatomic,retain) NSDictionary * archivedSnapsDeltaRequests;                        //@synthesize archivedSnapsDeltaRequests=_archivedSnapsDeltaRequests - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)filterOrphanedChats:(id)arg1 ;
+(long long)unreadCountForChats:(id)arg1 ;
+(BOOL)hasUnviewedCash:(id)arg1 ;
+(BOOL)hasUnviewedChats:(id)arg1 ;
+(BOOL)hasUnviewedSnaps:(id)arg1 ;
+(id)archivedInitialChatsPath;
+(id)archivedPaginatedChatsPath;
+(long long)unreadCountForChats:(id)arg1 logChats:(BOOL)arg2 ;
+(long long)unreadCountForChats:(id)arg1 logChats:(BOOL)arg2 countOneUnreadMessagePerChat:(BOOL)arg3 ;
+(id)chatConversationsFromResponses:(id)arg1 ;
+(int)context;
-(void)setClearing:(BOOL)arg1 ;
-(void)onActiveConversationsChanged;
-(void)didReceiveConversations:(id)arg1 username:(id)arg2 originType:(long long)arg3 source:(long long)arg4 ;
-(void)didReceiveWireMessage:(id)arg1 ;
-(void)didReceiveMischiefs:(id)arg1 username:(id)arg2 hasStaleChats:(BOOL)arg3 originType:(long long)arg4 source:(long long)arg5 ;
-(id<SCChatConversationFetcher>)conversationFetcher;
-(void)setBitmojiManager:(id)arg1 ;
-(BOOL)activeBackgroundedChatHasUnreadMessageOrCallInProgress;
-(id)bitmojiManager;
-(id)initWithUsername:(id)arg1 ;
-(void)_bitmojiAvatarIdDidChange;
-(id)chatForUsername:(id)arg1 ;
-(void)messageStateDidChange:(id)arg1 recipient:(id)arg2 ;
-(void)unsaveMessage:(id)arg1 ;
-(void)saveMessage:(id)arg1 ;
-(id)chatForConversationId:(id)arg1 ;
-(void)setActiveChatRecipientBeforeBackgrounded:(NSString *)arg1 ;
-(void)setLastChatIdWhenActiveChatEntered:(NSString *)arg1 ;
-(void)ensureNonNilObjects;
-(void)updateWithChatConversation:(id)arg1 ;
-(NSString *)activeChatRecipientBeforeBackgrounded;
-(void)sendMedia:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)insertSendingMessage:(id)arg1 ;
-(id)chatForBaseMessage:(id)arg1 ;
-(void)unpreserveMessage:(id)arg1 ;
-(void)sccpDisconnected:(id)arg1 ;
-(void)sccpConnected;
-(void)cleanUpClearedMessages;
-(void)mediaMessage:(id)arg1 didSentWithSuccess:(BOOL)arg2 ;
-(void)sendSnapState:(id)arg1 ;
-(void)removeExpiredMessages;
-(void)preserveMessage:(id)arg1 ;
-(void)addSnap:(id)arg1 ;
-(BOOL)isClearing;
-(void)removeChatForBlockedOrDeletedFriend:(id)arg1 ;
-(void)setChats:(NSMutableDictionary *)arg1 ;
-(void)setArchivedInitialChats:(SCArchivedChats *)arg1 ;
-(void)setArchivedPaginatedChats:(SCArchivedChats *)arg1 ;
-(void)archiveChatsWithCoder:(id)arg1 ;
-(NSString *)lastChatIdWhenActiveChatEntered;
-(NSDate *)lastCleanClearedMessagesDate;
-(id)orderedChats;
-(id)deltaChatConversationRequestsWithChats:(id)arg1 ;
-(id)snapDeltaChatConversationRequests;
-(SCArchivedChats *)archivedInitialChats;
-(void)appendArchivedChats:(id)arg1 ;
-(void)unarchivePaginatedChatsAndSyncOneOnOneAndGroup;
-(SCArchivedChats *)archivedPaginatedChats;
-(BOOL)initialChatsLoaded;
-(void)setLastCleanClearedMessagesDate:(NSDate *)arg1 ;
-(id)invalidChats;
-(id)clearFeedIdsAfterRemovingChats:(id)arg1 ;
-(void)chatsDidChange;
-(void)retryPendingOrFailedMessagesIfPossible;
-(void)waitUntilInitialChatsLoadedOnQueue:(id)arg1 loadedBlock:(/*^block*/id)arg2 ;
-(void)waitUntilPaginatedChatsLoadedOnQueue:(id)arg1 loadedBlock:(/*^block*/id)arg2 ;
-(void)syncOneOnOneAndGroup;
-(id)allChats;
-(void)logChatConversations:(id)arg1 logId:(id)arg2 ;
-(id)chatEventsAfterUpdatingWithChatConversations:(id)arg1 originType:(long long)arg2 ;
-(void)removeArchivedPaginatedChatsIfNotLoaded;
-(id)localStaleChatsWithChatConversations:(id)arg1 ;
-(id)originatingChatsFromChatConversations:(id)arg1 ;
-(void)waitUntilChatsLoadedOnQueue:(id)arg1 loadedBlock:(/*^block*/id)arg2 ;
-(id)chatAfterUpdatingWithChatConversation:(id)arg1 ;
-(void)logReceivedMessagesForNewChat:(id)arg1 ;
-(void)logReceivedNewSnapsForChat:(id)arg1 ;
-(void)addChatConversations:(id)arg1 ;
-(BOOL)shouldAcceptMessageFromSender:(id)arg1 ;
-(id)findOrCreateChatAndFetchUpdatesForUsername:(id)arg1 ;
-(void)addSnap:(id)arg1 contentInviteRecipient:(id)arg2 ;
-(void)fetchChatAsyncIfNecessaryForUsername:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)uniqueChats;
-(id)deltaChatConversationRequests;
-(id)latestInteractionTimestamp;
-(id)oldChats;
-(BOOL)paginatedChatsLoaded;
-(void)unarchivedPaginatedChatsWithCompletion:(/*^block*/id)arg1 ;
-(void)_addInteractionEventBatchForChat:(id)arg1 ;
-(void)setTalkManager:(id)arg1 ;
-(void)didUpdateNoficationSettingForUser:(id)arg1 enabled:(BOOL)arg2 ;
-(void)updateWithChatConversations:(id)arg1 hasStaleChats:(BOOL)arg2 originType:(long long)arg3 ;
-(void)didLoadMoreChatConversations:(id)arg1 ;
-(void)removeSnap:(id)arg1 ;
-(void)loadBatchOfSnapsWithRecipient:(id)arg1 ;
-(BOOL)firstChatHasLoadedSnap;
-(void)fetchOneOnOneConversationsDeltaFetchInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)attemptSentUploadedMediaWithRecipient:(id)arg1 uploadedMediaProviders:(id)arg2 messageMetadata:(id)arg3 chatText:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)addOrUpdateMediaMessageWithRecipient:(id)arg1 uploadedMediaProviders:(id)arg2 messageMetadata:(id)arg3 ;
-(void)removeMessageByMessageId:(id)arg1 recipient:(id)arg2 ;
-(id)messageWithMessageId:(id)arg1 inConversation:(id)arg2 ;
-(void)retrySendingAllFailedMessagesWithRecipient:(id)arg1 userSession:(id)arg2 ;
-(BOOL)hasStaleChatsBasedOnFirstPageChatConversations:(id)arg1 ;
-(void)releaseLeftoverMessages;
-(void)clearChatForRecipient:(id)arg1 ;
-(void)removeOldChats;
-(void)removeAllChats;
-(void)updateWithContentInviteSOJUReceivedSnap:(id)arg1 ;
-(void)fetchChatWithRecipient:(id)arg1 fetchReason:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSDictionary *)archivedInitialChatsDeltaRequests;
-(void)setArchivedInitialChatsDeltaRequests:(NSDictionary *)arg1 ;
-(NSDictionary *)archivedSnapsDeltaRequests;
-(void)setArchivedSnapsDeltaRequests:(NSDictionary *)arg1 ;
-(SCMediaCardCache *)mediaCardCache;
-(void)setMediaCardCache:(SCMediaCardCache *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)removeMessage:(id)arg1 ;
-(void)removeChat:(id)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(NSMutableDictionary *)chats;
@end

