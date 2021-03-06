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
@class SCQueuePerformer, SCMediaSendTaskEphemeralMedia, NSString, Snap, Story, SCMediaSendTaskConfiguration, NSMutableArray, NSDate;

@interface SCMediaIndividualSendTask : NSObject <EphemeralMediaDelegate, SCMediaSendTask> {

	SCQueuePerformer* _performer;
	SCMediaSendTaskEphemeralMedia* _ephemeralMedia;
	NSString* _ephemeralMediaClientId;
	Snap* _snap;
	Story* _story;
	SCMediaSendTaskConfiguration* _configuration;
	NSMutableArray* _unsentSnapRecipients;
	NSMutableArray* _unsentSnapInviteRecipients;
	NSMutableArray* _completionHandlers;
	BOOL _storyPostedLocally;
	NSDate* _creationTimestamp;
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
-(void)finishDecodingWithPerformer:(id)arg1 ;
-(void)_updateRecipients;
-(id)_invitePhoneNumers;
-(void)_didCompleteSend:(BOOL)arg1 ;
-(id)_userRecipientUsernameArray;
-(void)_sendSnapAndPostStory;
-(id)singleGroupId;
-(BOOL)_hasValidMedia;
-(BOOL)isRecipientSingleGroupOrUser;
-(void)didFailToSend;
-(void)addOrUpdateSendToMessageInConversationWithSendStatus:(long long)arg1 ;
-(void)updateFeedId;
-(id)invalidRecipientsNameString;
-(void)clearInvalidRecipients;
-(void)prepareToBeRemoved;
-(void)removeCorrespondingMessage;
-(id)initWithEphemeralMedia:(id)arg1 configuration:(id)arg2 performer:(id)arg3 ;
-(void)_initSnapAndStory;
-(void)_initStoryWithIsDoublePost:(BOOL)arg1 ;
-(void)_initSnapWithIsDoublePost:(BOOL)arg1 ;
-(void)_updateFailedSnapState;
-(void)_ephemeralMediaSendDidFailForMediaHelper:(id)arg1 ;
-(BOOL)isSingleRecipient;
-(void)_addMessageToConversationsWithStatus:(long long)arg1 snapIdsAndTimestamps:(id)arg2 ;
-(id)_singleRecipientUsername;
-(void)_ephemeralMediaSendDidSucceedForMediaHelper:(id)arg1 snapIdsAndTimestamps:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_isExpired;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SCMediaSendTaskDelegate>)arg1 ;
-(NSString *)description;
-(id<SCMediaSendTaskDelegate>)delegate;
-(BOOL)isValid;
-(id)groups;
-(NSString *)feedId;
-(NSString *)taskId;
-(long long)taskState;
@end

