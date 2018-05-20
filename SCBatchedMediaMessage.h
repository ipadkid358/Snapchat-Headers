/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCBaseMediaMessage.h>
#import <Snapchat/SCChatMediaMessageStateDelegate.h>
#import <Snapchat/MediaUploadDelegate.h>
#import <Snapchat/SCBaseMediaMessageUploadingDelegate.h>

@class NSString, SCAttachmentsLogger, NSMutableArray;

@interface SCBatchedMediaMessage : SCBaseMediaMessage <SCChatMediaMessageStateDelegate, MediaUploadDelegate, SCBaseMediaMessageUploadingDelegate> {

	NSString* _recipientString;
	long long _lastUploadingMediaIndex;
	SCAttachmentsLogger* _attachmentsLogger;
	NSMutableArray* _mediaList;

}

@property (nonatomic,retain) NSMutableArray * mediaList;              //@synthesize mediaList=_mediaList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didDecodeObject;
-(id)senderId;
-(NSMutableArray *)mediaList;
-(id)trackingType;
-(id)sendJSON;
-(long long)_recipientCount;
-(void)setMediaList:(NSMutableArray *)arg1 ;
-(id)initWithUsername:(id)arg1 dictionary:(id)arg2 ;
-(BOOL)isNotLoaded;
-(void)fetchMediaUserInitiated:(BOOL)arg1 ;
-(void)uploadAndSend;
-(void)baseMediaMessageDidUpload:(id)arg1 ;
-(void)baseMediaMessageDidFailUpload:(id)arg1 ;
-(void)retryToSend;
-(BOOL)hasUploadedAllMedia;
-(void)baseMediaMessageDidLoseMedia:(id)arg1 ;
-(id)initWithSender:(id)arg1 recipient:(id)arg2 ;
-(void)mediaUploadDidFailForMedia:(id)arg1 ;
-(void)mediaUploadDidSucceedForMedia:(id)arg1 ;
-(void)mediaUploadDidLoseMediaData:(id)arg1 ;
-(BOOL)isMediaDataLoadedInCache;
-(id)uploadMediaIdForMedia:(id)arg1 ;
-(long long)uploadMediaTypeForMedia:(id)arg1 ;
-(BOOL)failedToDecode;
-(void)prefetchMedia;
-(BOOL)shouldNotifyUserOfFailure;
-(BOOL)_isGalleryMessage;
-(BOOL)_allValidMediasAreUploaded;
-(void)_uploadNextMedia;
-(void)setDefaultUploadingDelegateIfNecessary;
-(void)sendViaHTTP;
-(id)httpSenderParameters;
-(/*^block*/id)_sendSuccessBlock;
-(/*^block*/id)_sendFailureBlock;
-(id)_failedStoryMessageWithRecipientUserNames:(id)arg1 isFailedToSendToNonFriend:(BOOL)arg2 ;
-(id)initWithSender:(id)arg1 recipients:(id)arg2 ;
-(long long)scaMediaType;
-(long long)messageMediaType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isLoaded;
-(unsigned long long)videoCount;
-(void)_upload;
-(long long)messageType;
-(long long)notificationType;
@end

