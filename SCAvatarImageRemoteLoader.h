/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchItemRemoteDownloading.h>

@protocol SCPerforming;
@class SCBitmojiDratiniManager, SCBitmojiManager, NSString;

@interface SCAvatarImageRemoteLoader : NSObject <SCSearchItemRemoteDownloading> {

	SCBitmojiDratiniManager* _bitmojiDratiniManager;
	SCBitmojiManager* _bitmojiManager;
	id<SCPerforming> _performer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_fetchSelfieWithUserId:(id)arg1 avatarId:(id)arg2 selfieId:(id)arg3 contexts:(id)arg4 feature:(long long)arg5 callbackQueue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_fetchBitmojiWithTemplateId:(id)arg1 avatarId:(id)arg2 friendAvatarId:(id)arg3 contexts:(id)arg4 feature:(long long)arg5 callbackQueue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_fetchBitmojiWithImageParams:(id)arg1 contexts:(id)arg2 feature:(long long)arg3 callbackQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)downloadItem:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 retryCount:(unsigned long long)arg4 ;
-(id)initWithBitmojiDratiniManager:(id)arg1 bitmojiManager:(id)arg2 ;
@end

