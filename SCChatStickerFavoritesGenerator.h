/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:26 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCChatStickerFavoritesDelegate;
#import <Snapchat/Snapchat-Structs.h>
@interface SCChatStickerFavoritesGenerator : NSObject {

	id<SCChatStickerFavoritesDelegate> _delegate;

}
-(id)_generateFavoriteStickersWithHistory:(NSDictionary*)arg1 validPacksIds:(id)arg2 includeFriendBitmojis:(BOOL)arg3 customStickerManager:(id)arg4 ;
-(id)_sortedFavoriteStickersWithHistory:(NSDictionary*)arg1 maxNumOfStickers:(long long)arg2 excludedStickers:(id)arg3 forDay:(long long)arg4 validPacksIds:(id)arg5 includeFriendBitmojis:(BOOL)arg6 includeCustomSticker:(BOOL)arg7 ;
-(NSDictionary*)_allAvailableCustomStickers:(NSDictionary*)arg1 customStickerManager:(id)arg2 ;
-(long long)_maxUsageCountInStickerUsageArray:(id)arg1 ;
-(id)generateFavoriteStickersWithValidPacksIds:(id)arg1 includeFriendBitmojis:(BOOL)arg2 customStickerManager:(id)arg3 ;
-(id)initWithDelegate:(id)arg1 ;
@end

