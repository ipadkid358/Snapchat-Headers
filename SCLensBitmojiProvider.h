/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/LSABitmojiEffectComponentListener.h>
#import <Snapchat/LSABitmoji3DComponentListener.h>
#import <Snapchat/SCLensUIUpdateListener.h>

@class LSABitmojiEffectComponent, LSABitmoji3DComponent, SCLensDataFetcherV2, NSString, SCLens;

@interface SCLensBitmojiProvider : NSObject <LSABitmojiEffectComponentListener, LSABitmoji3DComponentListener, SCLensUIUpdateListener> {

	LSABitmojiEffectComponent* _bitmojiEffectComponent;
	LSABitmoji3DComponent* _bitmoji3DComponent;
	SCLensDataFetcherV2* _dataFetcher;
	NSString* _pendingDeeplinkLensId;
	BOOL _isDeeplinkInProgress;
	BOOL _active;
	SCLens* _activeLens;
	NSString* _friendAvatarId;
	NSString* _friendUserId;

}

@property (nonatomic,copy) NSString * friendAvatarId;               //@synthesize friendAvatarId=_friendAvatarId - In the implementation block
@property (nonatomic,copy) NSString * friendUserId;                 //@synthesize friendUserId=_friendUserId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)bitmoji3DComponentDidRequestBitmoji3D:(id)arg1 ;
-(void)bitmojiEffectComponent:(id)arg1 didRequestBitmojiWithId:(id)arg2 bitmojiType:(unsigned long long)arg3 scale:(long long)arg4 ;
-(void)bitmojiEffectComponent:(id)arg1 didRequestBitmojiWithId:(id)arg2 avatarId:(id)arg3 bitmojiType:(unsigned long long)arg4 scale:(long long)arg5 ;
-(void)bitmojiEffectComponent:(id)arg1 didRequestMegapack:(id)arg2 ;
-(void)effectComponentDidRequestBitmojiAvatarId:(id)arg1 ;
-(NSString *)friendAvatarId;
-(void)setFriendAvatarId:(NSString *)arg1 ;
-(void)setFriendUserId:(NSString *)arg1 ;
-(NSString *)friendUserId;
-(BOOL)isBitmojiLinked;
-(void)willShowLenses;
-(void)didHideLenses;
-(void)didUpdateActiveLensOrder:(id)arg1 ;
-(void)didSelectLens:(id)arg1 ;
-(void)willDisplayLens:(id)arg1 ;
-(void)didEndDisplayingLens:(id)arg1 ;
-(void)deeplinkBitmojiForLensId:(id)arg1 ;
-(id)initWithBitmojiEffectComponent:(id)arg1 bitmoji3DComponent:(id)arg2 dataFetcher:(id)arg3 ;
-(void)setFriendBitmojiAvailability:(unsigned long long)arg1 ;
-(void)updatePendingDeeplinkStateWithCompletion:(/*^block*/id)arg1 ;
-(id)pendingDeeplinkLensId;
-(void)loadBitmojiStickerWithId:(id)arg1 avatarId:(id)arg2 scale:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)loadFriendmojiStickerWithId:(id)arg1 avatarId:(id)arg2 friendAvatarId:(id)arg3 scale:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(unsigned long long)bitmojiStyleFromAvatarId:(id)arg1 ;
-(void)bitmojiEffectComponent:(id)arg1 didRequestBitmojiWithId:(id)arg2 avatarId:(id)arg3 bitmojiType:(unsigned long long)arg4 scale:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)setActive:(BOOL)arg1 ;
@end

