/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCUserSession;

@interface SCUnlockedStickerManager : NSObject {

	SCUserSession* _userSession;
	BOOL _isFetchingUnlockedStickerPacks;
	BOOL _isUnlockedPacksFetchedFromNetwork;

}

@property (nonatomic,readonly) BOOL isFetchingUnlockedStickerPacks;                 //@synthesize isFetchingUnlockedStickerPacks=_isFetchingUnlockedStickerPacks - In the implementation block
@property (nonatomic,readonly) BOOL isUnlockedPacksFetchedFromNetwork;              //@synthesize isUnlockedPacksFetchedFromNetwork=_isUnlockedPacksFetchedFromNetwork - In the implementation block
-(id)initWithUserSession:(id)arg1 ;
-(void)fetchUnlockedStickerPacksMetadataWithChatStickerManager:(id)arg1 ;
-(id)_unlockedStickerPacksFromResponseDictionary:(id)arg1 ;
-(id)_retrieveStickerPacksFromUnlockableResponse:(id)arg1 ;
-(BOOL)isFetchingUnlockedStickerPacks;
-(BOOL)isUnlockedPacksFetchedFromNetwork;
@end

