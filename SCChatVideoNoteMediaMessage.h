/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCChatBaseNoteMediaMessage.h>

@class NSArray;

@interface SCChatVideoNoteMediaMessage : SCChatBaseNoteMediaMessage {

	long long _coverAnimationState;
	NSArray* _coverAnimationImages;

}

@property (assign,nonatomic) long long coverAnimationState;               //@synthesize coverAnimationState=_coverAnimationState - In the implementation block
@property (nonatomic,retain) NSArray * coverAnimationImages;              //@synthesize coverAnimationImages=_coverAnimationImages - In the implementation block
-(long long)mediaState;
-(void)updateWithMessage:(id)arg1 ;
-(id)cacheId;
-(id)sendJSON;
-(id)initWithLastChatAction:(id)arg1 write:(BOOL)arg2 username:(id)arg3 recipient:(id)arg4 ;
-(id)trackingMediaTypeForMedia:(id)arg1 ;
-(long long)scaMediaType;
-(NSArray *)coverAnimationImages;
-(void)setCoverAnimationImages:(NSArray *)arg1 ;
-(void)setCoverAnimationState:(long long)arg1 ;
-(BOOL)isCoverAnimationLoaded;
-(long long)coverAnimationState;
-(void)_generateVideoNoteCoverAnimationWithAnimationData:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id)_coverImagesWithData:(id)arg1 ;
-(double)durationInSec;
-(void)generateVideoNoteMediaSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(long long)mediaType;
-(BOOL)isReadyForDisplay;
-(long long)messageType;
@end

