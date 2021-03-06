/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCChatConversationStore.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <Snapchat/SCTimeProfilable.h>

@protocol SCChatConversationFetcher, SCUserHelperProtocol, SCPerforming, SCConversationStorage;
@class NSMutableDictionary, SCChatV3MessageReceiver, SCChatV3FeedUpdater, SCChatConversationStoreListenerAnnouncer, SCChatV3MetadataStore, NSString, NSSet;

@interface SCChatV3ConversationStore : NSObject <SCChatConversationStore, NSCoding, SCTimeProfilable> {

	NSMutableDictionary* _conversationFetchQueue;
	id<SCChatConversationFetcher> _fetcher;
	SCChatV3MessageReceiver* _messageReceiver;
	SCChatV3FeedUpdater* _feedUpdater;
	id<SCUserHelperProtocol> _userHelper;
	SCChatConversationStoreListenerAnnouncer* _announcer;
	SCChatV3MetadataStore* _metadataStore;
	NSString* _activeConversationId;
	BOOL _isLoadedFromDisk;
	id<SCPerforming> _performer;
	NSString* _username;
	long long _oneOnOneCount;
	NSSet* _conversationIdsForDebugging;
	id<SCConversationStorage> _storage;

}

@property (assign) BOOL isLoadedFromDisk;                                          //@synthesize isLoadedFromDisk=_isLoadedFromDisk - In the implementation block
@property (retain) NSSet * conversationIdsForDebugging;                            //@synthesize conversationIdsForDebugging=_conversationIdsForDebugging - In the implementation block
@property (nonatomic,retain) id<SCConversationStorage> storage;                    //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) SCChatV3MetadataStore * metadataStore;              //@synthesize metadataStore=_metadataStore - In the implementation block
@property (nonatomic,readonly) id<SCPerforming> performer;                         //@synthesize performer=_performer - In the implementation block
@property (nonatomic,copy,readonly) NSString * username;                           //@synthesize username=_username - In the implementation block
@property (assign,nonatomic) long long oneOnOneCount;                              //@synthesize oneOnOneCount=_oneOnOneCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)context;
-(id<SCPerforming>)performer;
-(id)initWithPerformer:(id)arg1 ;
-(void)updateConversationById:(id)arg1 fetchIfDoesntExist:(BOOL)arg2 withMutationBlock:(/*^block*/id)arg3 ;
-(void)resetConversationsSyncTypeWithExcludedMischiefs:(id)arg1 ;
-(void)updateConversationsByIds:(id)arg1 source:(long long)arg2 originType:(long long)arg3 withMutationBlockWithId:(/*^block*/id)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
-(void)paginateForwardForConversationId:(id)arg1 withEarliestSequenceNumbers:(NSDictionary*)arg2 latestSequenceNumbers:(NSDictionary*)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchConversationFromServerById:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateConversationById:(id)arg1 withMutationBlock:(/*^block*/id)arg2 ;
-(void)fetchAuthForConversationId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateConversationById:(id)arg1 modifyMessageIds:(id)arg2 withMutationBlock:(/*^block*/id)arg3 withConversationMutationBlock:(/*^block*/id)arg4 ;
-(void)getAllConversationsAndPerformOnDedicatedThread:(/*^block*/id)arg1 ;
-(void)putConversation:(id)arg1 ;
-(void)updateConversationById:(id)arg1 putContributionStoryPublisher:(id)arg2 ;
-(void)configureWithConversationFetcher:(id)arg1 messageReceiver:(id)arg2 feedUpdater:(id)arg3 userHelper:(id)arg4 lazyDocObjectContext:(id)arg5 username:(id)arg6 ;
-(SCChatV3MetadataStore *)metadataStore;
-(void)setActiveConversationId:(id)arg1 ;
-(void)resetMetadataForConversationById:(id)arg1 ;
-(void)getConversationById:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)metadataDictionaryForConversation:(id)arg1 ;
-(void)unsetActiveConversationId:(id)arg1 ;
-(void)clearConversationById:(id)arg1 ;
-(void)fetchOneOnOneConversation:(id)arg1 fetchReason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)getAllConversationsAndPerformOnDedicatedThreadStoreLoadedFromDisk:(/*^block*/id)arg1 ;
-(id)syncAllDeltaInformation;
-(BOOL)isLoadedFromDisk;
-(void)asyncAllDeltaInformationWithCallback:(/*^block*/id)arg1 ;
-(void)checkAndCorrectAllDiskConversationsWithMessageStateHandler:(id)arg1 chatMediaCache:(id)arg2 ;
-(void)mergeWithConversationStoreLoadedFromDisk:(id)arg1 ;
-(long long)oneOnOneCount;
-(void)setOneOnOneCount:(long long)arg1 ;
-(void)updateConversationById:(id)arg1 modifyMessageIds:(id)arg2 withMutationBlock:(/*^block*/id)arg3 enforceMessagesExist:(BOOL)arg4 withConversationMutationBlock:(/*^block*/id)arg5 ;
-(void)updateConversationById:(id)arg1 putSearchStoryMetadataLoadState:(long long)arg2 putSearchStoryMetadata:(id)arg3 ;
-(void)updateConversationById:(id)arg1 putStorySnapMediaContent:(id)arg2 ;
-(void)updateConversationById:(id)arg1 putSnapchatter:(id)arg2 ;
-(void)updateConversationById:(id)arg1 putStorySnapMetadataLoadState:(long long)arg2 putStorySnapMetadata:(id)arg3 putSnapchatter:(id)arg4 putContributionStoryPublisher:(id)arg5 ;
-(void)updateConversationById:(id)arg1 putURLMediaCardContents:(id)arg2 ;
-(id)conversationStoreQueuePerformer;
-(id)initWithPerformer:(id)arg1 metadataStore:(id)arg2 ;
-(void)setConversationIdsForDebugging:(NSSet *)arg1 ;
-(void)_startFetchingConversations:(id)arg1 ;
-(void)setIsLoadedFromDisk:(BOOL)arg1 ;
-(void)_mergeWithConversationStoreLoadedFromDisk:(id)arg1 ;
-(void)_markAsLoaded;
-(void)_updateConversationFetchQueue;
-(void)_updateConversation:(id)arg1 modifyAllMessagesWithMutationBlock:(/*^block*/id)arg2 withConversationMutationBlock:(/*^block*/id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)_performBlock:(/*^block*/id)arg1 forConversationId:(id)arg2 ;
-(void)_getConversationById:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_fetchConversationFromServerById:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_processSOJUMischiefResponse:(id)arg1 ;
-(void)_didFetchConversation:(id)arg1 forConversationId:(id)arg2 source:(id)arg3 ;
-(void)_processSOJUChatResponse:(id)arg1 isPagination:(BOOL)arg2 isOneOnOnePlaceHolder:(BOOL)arg3 ;
-(void)_putConversation:(id)arg1 ;
-(void)__clearConversationById:(id)arg1 ;
-(NSSet *)conversationIdsForDebugging;
-(void)_resetConversationsSyncTypeWithExcludedConversationIds:(id)arg1 ;
-(void)_updateConversation:(id)arg1 withMutationBlock:(/*^block*/id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_updateConversationsByIds:(id)arg1 withMutationBlockWithId:(/*^block*/id)arg2 source:(long long)arg3 originType:(long long)arg4 withCompletionBlock:(/*^block*/id)arg5 ;
-(void)_updateConversation:(id)arg1 modifyMessageIds:(id)arg2 withMutationBlock:(/*^block*/id)arg3 enforceMessagesExist:(BOOL)arg4 withConversationMutationBlock:(/*^block*/id)arg5 ;
-(void)_processFetchedMessageWithId:(id)arg1 conversationId:(id)arg2 conversation:(id)arg3 result:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)_updateConversation:(id)arg1 setHistoryLoadStateAs:(long long)arg2 ;
-(void)_updateConversation:(id)arg1 setLoadStateAs:(long long)arg2 ;
-(void)announceUpdateForConversationById:(id)arg1 ;
-(void)_announceUpdateForConversation:(id)arg1 ;
-(id)_getSnapchatterIdFromMessage:(id)arg1 ;
-(id)_getStorySnapMediaStoryIdFromMessage:(id)arg1 ;
-(id)_getContributionStoryPublisherForMessage:(id)arg1 ;
-(id)_searchStorySnapMediaForSearchStoryMetadata:(id)arg1 ;
-(void)prefetchConversationById:(id)arg1 ;
-(id)initWithMetadataStore:(id)arg1 ;
-(id)getConversationSync:(id)arg1 ;
-(void)updateConversationById:(id)arg1 putAddressMediaCardContent:(id)arg2 ;
-(void)updateConversationById:(id)arg1 modifyMessageIds:(id)arg2 withMutationBlock:(/*^block*/id)arg3 ;
-(void)updateConversationById:(id)arg1 modifyAllMessagesWithMutationBlock:(/*^block*/id)arg2 withConversationMutationBlock:(/*^block*/id)arg3 ;
-(void)updateConversationById:(id)arg1 withMutationBlock:(/*^block*/id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)getMessageLocallyWithMessageId:(id)arg1 conversationId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchMessageById:(id)arg1 conversationId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchMessageAndMetadataById:(id)arg1 conversationId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getLocalConversationById:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateConversationById:(id)arg1 putAddressMediaCardContents:(id)arg2 ;
-(void)updateConversationById:(id)arg1 modifyAllMessagesWithMutationBlock:(/*^block*/id)arg2 ;
-(void)loadHistoryForConversationId:(id)arg1 retryIfFailed:(BOOL)arg2 ;
-(void)updateConversationById:(id)arg1 markSnapchatterIdAsTapped:(id)arg2 ;
-(void)updateConversationById:(id)arg1 modifyAllMessagesWithMutationBlock:(/*^block*/id)arg2 withConversationMutationBlock:(/*^block*/id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)__clear;
-(void)updateConversationById:(id)arg1 poiID:(id)arg2 putPoiShareMetadataLoadState:(long long)arg3 putMapPoiShareMetadata:(id)arg4 ;
-(void)updateConversationById:(id)arg1 storySnapID:(id)arg2 putMapSnapMetadataLoadState:(long long)arg3 putMapSnapMetadata:(id)arg4 ;
-(id<SCConversationStorage>)storage;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)clear;
-(id)metadataForMessage:(id)arg1 ;
-(NSString *)username;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)setStorage:(id<SCConversationStorage>)arg1 ;
@end

