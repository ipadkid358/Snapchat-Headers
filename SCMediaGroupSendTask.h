/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:27 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/EphemeralMediaDelegate.h>
#import <Snapchat/SCMediaSendTask.h>

@protocol SCMediaSendTaskDelegate;
@class NSString, SCQueuePerformer, SCMediaSendTaskMediaList, SCMediaSendTaskEphemeralMedia, Snap, SCMediaSendTaskConfiguration, NSMutableArray, SCMediaSendTaskMetricsProperties, SCMediaGroupSendTaskWaitingGroup, NSDate;

@interface SCMediaGroupSendTask : NSObject <EphemeralMediaDelegate, SCMediaSendTask> {

	SCQueuePerformer* _performer;
	NSString* _preferredMessageId;
	SCMediaSendTaskMediaList* _mediaList;
	SCMediaSendTaskEphemeralMedia* _ephemeralMedia;
	Snap* _snap;
	unsigned long long _type;
	SCMediaSendTaskConfiguration* _configuration;
	NSMutableArray* _usersWithUnsentSnap;
	NSMutableArray* _inviteUsersWithUnsentSnap;
	NSMutableArray* _groupIdsWithUncreatedChatMedia;
	NSMutableArray* _userIdsWithUncreatedChatMedia;
	NSMutableArray* _groupIdsWithUnsentSCCPMessage;
	NSMutableArray* _userIdsWithUnsentSCCPMessage;
	NSMutableArray* _invalidRecipients;
	SCMediaSendTaskMetricsProperties* _metricsProperties;
	BOOL _shouldSendOnUploaded;
	SCMediaGroupSendTaskWaitingGroup* _waitingGroup;
	BOOL _storyAlreadyPosted;
	NSMutableArray* _completionHandlers;
	NSDate* _creationTimestamp;
	NSString* _context;
	BOOL _shouldRetryUploadAfterCreateMediaFailed;
	NSString* _taskId;
	NSString* _feedId;
	id<SCMediaSendTaskDelegate> _delegate;
	long long _taskState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * taskId;                                 //@synthesize taskId=_taskId - In the implementation block
@property (assign,nonatomic,__weak) id<SCMediaSendTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedId;                                 //@synthesize feedId=_feedId - In the implementation block
@property (nonatomic,readonly) long long taskState;                                    //@synthesize taskState=_taskState - In the implementation block
-(id)multiSnapBundleId;
-(void)ephemeralMediaUploadDidStartForMedia:(id)arg1 ;
-(void)ephemeralMediaUploadDidSucceedForMedia:(id)arg1 ;
-(void)ephemeralMediaUploadDidFailForMedia:(id)arg1 ;
-(void)ephemeralMediaSendDidSucceedForMedia:(id)arg1 snapIdsAndTimestamps:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)ephemeralMediaSendDidFailForMedia:(id)arg1 ;
-(void)sendWithCompletionHandler:(/*^block*/id)arg1 context:(id)arg2 ;
-(id)_generateFeedId;
-(id)initWithConfiguration:(id)arg1 performer:(id)arg2 ;
-(void)finishDecodingWithPerformer:(id)arg1 ;
-(void)_updateRecipients;
-(id)_invitePhoneNumers;
-(void)_send;
-(void)_didCompleteSend:(BOOL)arg1 ;
-(id)_userRecipientUsernameArray;
-(id)_groupIdArray;
-(BOOL)_isSending;
-(void)_createMediaOnServerAndSendSCCPMessages;
-(void)_sendSnapAndPostStory;
-(void)_updateTaskStateAfterFinishTask;
-(void)_createGroupsWithCompletion:(/*^block*/id)arg1 ;
-(void)_logChatChatSend;
-(id)_mediasJsonArrayParams;
-(/*^block*/id)_createMediaOnServerSuccessBlock;
-(/*^block*/id)_createMediaOnServerFailureBlock;
-(void)_createSCCPMessagesForRecipients:(id)arg1 groups:(id)arg2 ;
-(void)_processCreateMediaOnServerResponse:(id)arg1 ;
-(id)_determineMediaProviders;
-(id)_addTaskInformationToMetadata:(id)arg1 withSendStatus:(long long)arg2 ;
-(void)_didSendUploadedMediaForGroupMessage:(id)arg1 groupId:(id)arg2 success:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_didSendUploadedMediaForMessage:(id)arg1 recipient:(id)arg2 success:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)__didSendUploadedMediaForGroupMessage:(id)arg1 groupId:(id)arg2 success:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)__didSendUploadedMediaForMessage:(id)arg1 recipient:(id)arg2 success:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isRecipientSingleUser;
-(BOOL)isRecipientSingleGroup;
-(id)singleGroupId;
-(void)_didAddOrUpdateMediaMessage:(id)arg1 ;
-(id)singleRecipientUsername;
-(void)__didAddOrUpdateMediaMessage:(id)arg1 ;
-(void)_ephemeralMediaUploadDidSucceedForMedia:(id)arg1 ;
-(void)_ephemeralMediaUploadDidFailForMedia:(id)arg1 ;
-(void)_ephemeralMediaSendDidSucceedForMedia:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_addOrUpdateMessageWithStatus:(long long)arg1 ;
-(BOOL)_hasValidMedia;
-(BOOL)isRecipientSingleGroupOrUser;
-(BOOL)_isValidSingleRecipientTask;
-(void)didFailToSend;
-(void)addOrUpdateSendToMessageInConversationWithSendStatus:(long long)arg1 ;
-(void)updateFeedId;
-(id)invalidRecipientsNameString;
-(void)clearInvalidRecipients;
-(void)prepareToBeRemoved;
-(void)removeCorrespondingMessage;
-(id)initWithMediaList:(id)arg1 configuration:(id)arg2 performer:(id)arg3 ;
-(id)initWithEphemeralMedia:(id)arg1 configuration:(id)arg2 performer:(id)arg3 ;
-(id)initWithConfiguration:(id)arg1 taskType:(unsigned long long)arg2 performer:(id)arg3 ;
-(BOOL)_isExpired;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SCMediaSendTaskDelegate>)arg1 ;
-(id<SCMediaSendTaskDelegate>)delegate;
-(BOOL)isValid;
-(id)groups;
-(NSString *)feedId;
-(NSString *)taskId;
-(long long)taskState;
@end

