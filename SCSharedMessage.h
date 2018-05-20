/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCBaseMediaMessage.h>

@protocol SCUploadableMediaSCRenderableMediaNSCoding;
@class NSArray, NSMutableDictionary;

@interface SCSharedMessage : SCBaseMediaMessage {

	NSArray* _recipients;
	NSMutableDictionary* _sequenceNumbers;
	BOOL _shouldShowStatusMessage;
	id<SCUploadableMedia><SCRenderableMedia><NSCoding> _mediaToUpload;
	long long _sourceType;

}

@property (nonatomic,retain) id<SCUploadableMedia><SCRenderableMedia><NSCoding> mediaToUpload;              //@synthesize mediaToUpload=_mediaToUpload - In the implementation block
@property (assign,nonatomic) BOOL shouldShowStatusMessage;                                                  //@synthesize shouldShowStatusMessage=_shouldShowStatusMessage - In the implementation block
@property (assign,nonatomic) long long sourceType;                                                          //@synthesize sourceType=_sourceType - In the implementation block
+(id)_recipientUsernames:(id)arg1 ;
-(id)cacheId;
-(id)sendJSON;
-(id)initWithUsername:(id)arg1 dictionary:(id)arg2 ;
-(long long)scaMessageType;
-(void)_send;
-(void)imageWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isMediaDataLoadedInCache;
-(BOOL)isVideoLaguna;
-(BOOL)isPsychomantis;
-(/*^block*/id)_sendSuccessBlock;
-(/*^block*/id)_sendFailureBlock;
-(id)initWithSender:(id)arg1 recipients:(id)arg2 ;
-(long long)scaMediaType;
-(id)initWithSender:(id)arg1 recipientUsernames:(id)arg2 ;
-(void)_generateSequenceNubmers;
-(id)_failedSharedMessageWithRecipients:(id)arg1 isFailedToSendToNonFriend:(BOOL)arg2 ;
-(void)setMediaToUpload:(id<SCUploadableMedia><SCRenderableMedia><NSCoding>)arg1 ;
-(id<SCUploadableMedia><SCRenderableMedia><NSCoding>)mediaToUpload;
-(BOOL)shouldShowStatusMessage;
-(void)setShouldShowStatusMessage:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)type;
-(double)width;
-(double)height;
-(void)send;
-(long long)sourceType;
-(void)setSourceType:(long long)arg1 ;
-(long long)mediaType;
@end

