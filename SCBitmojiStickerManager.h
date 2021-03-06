/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCBitmojiStickerManagerProtocol.h>
#import <Snapchat/SCUserSessionScoped.h>

@protocol SCPerforming;
@class Manager, SCSessionRequestManager, NSNumber, NSMutableDictionary, SCStickerSearchDatabase, NSDictionary, NSString;

@interface SCBitmojiStickerManager : NSObject <SCBitmojiStickerManagerProtocol, SCUserSessionScoped> {

	Manager* _userManager;
	SCSessionRequestManager* _requestManager;
	id<SCPerforming> _performer;
	NSNumber* _bitmojiStickerPacksVersion;
	NSMutableDictionary* _packIdToIconId;
	SCStickerSearchDatabase* _searchDatabase;
	NSDictionary* _bitmojiStickerPacks;
	NSDictionary* _bitmojiGeoStickerPacks;
	NSDictionary* _stickersDictionary;

}

@property (nonatomic,readonly) id<SCPerforming> performer;                    //@synthesize performer=_performer - In the implementation block
@property (nonatomic,retain) NSDictionary * bitmojiStickerPacks;              //@synthesize bitmojiStickerPacks=_bitmojiStickerPacks - In the implementation block
@property (retain) NSDictionary * bitmojiGeoStickerPacks;                     //@synthesize bitmojiGeoStickerPacks=_bitmojiGeoStickerPacks - In the implementation block
@property (copy) NSDictionary * stickersDictionary;                           //@synthesize stickersDictionary=_stickersDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_tryParseEncodedBitmoji:(id)arg1 ;
+(id)_parseEncodedBitmoji:(id)arg1 ;
+(id)_encodeBitmoji_DEPRECATED:(id)arg1 avatarId:(id)arg2 friendAvatarId:(id)arg3 userManager:(id)arg4 ;
+(BOOL)isFriendmojiStickerID:(id)arg1 ;
+(id)bitmojiIDByStrippingAvatarID:(id)arg1 ;
-(id<SCPerforming>)performer;
-(BOOL)isBitmojiSticker_DEPRECATED:(id)arg1 ;
-(NSDictionary *)stickersDictionary;
-(id)_refreshBitmojiEncoding:(id)arg1 friendAvatarId:(id)arg2 stickerDictionary:(NSDictionary*)arg3 ;
-(id)_refreshBitmojiEncoding:(id)arg1 avatarId:(id)arg2 friendAvatarId:(id)arg3 stickerDictionary:(NSDictionary*)arg4 ;
-(id)refreshBitmojiSticker:(id)arg1 friendAvatarId:(id)arg2 ;
-(BOOL)_isFriendBitmoji:(id)arg1 stickerMetadataDict:(NSDictionary*)arg2 ;
-(void)setBitmojiStickerPacks:(NSDictionary *)arg1 ;
-(void)_archiveListOfPacks:(id)arg1 ;
-(void)_fetchStickerPackMetadataForAllMegaPacks:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setBitmojiGeoStickerPacks:(NSDictionary *)arg1 ;
-(void)_associatePackIdToIconUrl:(id)arg1 iconUrl:(id)arg2 ;
-(void)_fetchStickerPackMetadataForMegaPack:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_restoreStickerPacks:(id)arg1 ;
-(id)_determineStickerPackUrl:(id)arg1 ;
-(void)_archiveStickerPack:(id)arg1 packId:(id)arg2 version:(id)arg3 ;
-(void)_fetchStickerSearchMetadataWithSearchPack:(id)arg1 ;
-(NSDictionary *)bitmojiStickerPacks;
-(NSDictionary*)_tryReadPackMetadataFromDisk;
-(NSDictionary *)bitmojiGeoStickerPacks;
-(id)_restoreListOfPacks;
-(id)_stickerId:(id)arg1 ForTarget:(long long)arg2 ;
-(id)_metadataDirectory;
-(id)_archiveFileUrl:(id)arg1 ;
-(void)setStickersDictionary:(NSDictionary *)arg1 ;
-(id)initWithUserManager:(id)arg1 requestManager:(id)arg2 searchDatabase:(id)arg3 ;
-(id)refreshBitmojiEncoding:(id)arg1 friendAvatarId:(id)arg2 ;
-(id)refreshBitmojiInStickers:(id)arg1 friendAvatarId:(id)arg2 ;
-(id)refreshBitmojiInStickers:(id)arg1 avartarId:(id)arg2 friendAvatarId:(id)arg3 ;
-(void)updateStickerPacks:(id)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)updateGeoStickerPacks:(id)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)updateSearchPacks:(id)arg1 ;
-(void)getBitmojiPackMetadatasAsync:(/*^block*/id)arg1 ;
-(id)getBitmojiGeoPackMetadatas;
-(void)searchBitmoji:(id)arg1 forTarget:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getFrequentTags:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getAllTagsWithPrefix:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)convertStickerPackMetaToStickerPack:(id)arg1 ;
-(void)invalidate;
@end

