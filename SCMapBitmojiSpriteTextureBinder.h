/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:41 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCXRenderLayer, SCMapBitmojiAssetProvider, SCUserSession;

@interface SCMapBitmojiSpriteTextureBinder : NSObject {

	SCXRenderLayer* _renderLayer;
	SCMapBitmojiAssetProvider* _assetProvider;
	SCUserSession* _userSession;

}
+(/*^block*/id)_missingBitmojiImageFetcherWithColor:(unsigned long long)arg1 facingLeft:(BOOL)arg2 displaysGhostModeAvatar:(BOOL)arg3 ;
-(id)initWithRenderLayer:(id)arg1 assetProvider:(id)arg2 userSession:(id)arg3 ;
-(void)bindTextureIfNeededToSprite:(id)arg1 forced:(BOOL)arg2 ;
-(void)bindTextureIfNeededToSprite:(id)arg1 forced:(BOOL)arg2 animated:(BOOL)arg3 animationType:(unsigned long long)arg4 ;
-(void)_updateShadowSpriteIfNeeded:(id)arg1 personSprite:(id)arg2 ;
-(void)_bindTextureIfNeededToSprite:(id)arg1 forced:(BOOL)arg2 animated:(BOOL)arg3 animationType:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)_bindMissingBitmojiTextureForSprite:(id)arg1 animated:(BOOL)arg2 animationType:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_bindBitmojiTextureForSprite:(id)arg1 animated:(BOOL)arg2 animationType:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(/*^block*/id)_bitmojiImageFetcherForAvatarId:(id)arg1 stickerId:(id)arg2 stickerDynamicElements:(id)arg3 clustered:(BOOL)arg4 ;
-(void)_bindTextureToSprite:(id)arg1 imageIdentifier:(id)arg2 imageFetcher:(/*^block*/id)arg3 animated:(BOOL)arg4 animationType:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)_bindTextureToShadowSprite:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
