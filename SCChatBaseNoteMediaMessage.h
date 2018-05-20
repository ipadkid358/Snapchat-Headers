/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCBaseMediaMessage.h>
#import <Snapchat/SCChatMediaContentProvider.h>

@class NSString, Media;

@interface SCChatBaseNoteMediaMessage : SCBaseMediaMessage <SCChatMediaContentProvider> {

	NSString* _chatMediaID;
	BOOL _shouldStopRetryFetchMedia;
	Media* _animationMedia;
	double _duration;
	double _retryFetchMediaDelayTime;

}

@property (assign,nonatomic) BOOL shouldStopRetryFetchMedia;               //@synthesize shouldStopRetryFetchMedia=_shouldStopRetryFetchMedia - In the implementation block
@property (assign,nonatomic) double retryFetchMediaDelayTime;              //@synthesize retryFetchMediaDelayTime=_retryFetchMediaDelayTime - In the implementation block
@property (nonatomic,retain) Media * animationMedia;                       //@synthesize animationMedia=_animationMedia - In the implementation block
@property (assign,nonatomic) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createMessageWithSender:(id)arg1 recipient:(id)arg2 data:(id)arg3 duration:(double)arg4 ;
-(BOOL)isZipped;
-(id)venueId;
-(id)snapAttachmentUrl;
-(void)prepareDataToUploadForMediaId:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)needsToBeUploaded;
-(void)uploadWithCompletion:(/*^block*/id)arg1 ;
-(long long)mediaContentType;
-(id)chatMediaID;
-(id)chatKey;
-(id)chatIV;
-(id)sendJSON;
-(void)retryFetchMedia;
-(id)initWithLastChatAction:(id)arg1 write:(BOOL)arg2 username:(id)arg3 recipient:(id)arg4 ;
-(void)removeMediaFromCache;
-(long long)scaMessageType;
-(id)logEventName;
-(id)mediaIdForMedia:(id)arg1 ;
-(/*^block*/id)uploadSuccessBlock;
-(/*^block*/id)uploadFailureBlock;
-(BOOL)isMediaDataLoadedInCache;
-(id)endpointForMedia:(id)arg1 ;
-(void)fetchMediaIsLoadingForMedia:(id)arg1 ;
-(void)fetchMediaDidFailForMedia:(id)arg1 ;
-(void)fetchMediaIsGoneForMedia:(id)arg1 ;
-(void)fetchMediaNotFoundForMedia:(id)arg1 ;
-(void)fetchMediaBadRequestForMedia:(id)arg1 ;
-(void)fetchMediaDidSucceedForMedia:(id)arg1 ;
-(BOOL)failedToDecode;
-(BOOL)isAnimationMediaInCache;
-(Media *)animationMedia;
-(void)fetchContentMediaFromCacheWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchAnimationMediaFromCacheWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isContentMediaInCache;
-(void)_fetchMedia:(id)arg1 FromCacheWithCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)shouldStopRetryFetchMedia;
-(double)retryFetchMediaDelayTime;
-(void)setRetryFetchMediaDelayTime:(double)arg1 ;
-(void)setShouldStopRetryFetchMedia:(BOOL)arg1 ;
-(void)resetRetryFetchMediaDelayTime;
-(void)setAnimationMedia:(Media *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(BOOL)isInfiniteDuration;
-(void)upload;
@end
