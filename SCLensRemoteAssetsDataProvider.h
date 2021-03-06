/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/LSARemoteAssetsComponentListener.h>
#import <Snapchat/SCLensUIUpdateListener.h>

@class LSARemoteAssetsComponent, SC3DBitmojiMetadataStore, SCLensDataFetcherV2, SCLensDataUploader, SCSessionRequestManager, SCLens, NSString;

@interface SCLensRemoteAssetsDataProvider : NSObject <LSARemoteAssetsComponentListener, SCLensUIUpdateListener> {

	LSARemoteAssetsComponent* _remoteAssetsComponent;
	SC3DBitmojiMetadataStore* _bitmoji3DMetadataStore;
	SCLensDataFetcherV2* _dataFetcher;
	SCLensDataUploader* _dataUploader;
	SCSessionRequestManager* _requestManager;
	SCLens* _activeLens;
	NSString* _userId;
	NSString* _bitmojiAvatarId;
	NSString* _friendUserId;
	NSString* _friendAvatarId;

}

@property (nonatomic,copy) NSString * userId;                       //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy) NSString * bitmojiAvatarId;              //@synthesize bitmojiAvatarId=_bitmojiAvatarId - In the implementation block
@property (nonatomic,copy) NSString * friendUserId;                 //@synthesize friendUserId=_friendUserId - In the implementation block
@property (nonatomic,copy) NSString * friendAvatarId;               //@synthesize friendAvatarId=_friendAvatarId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentlyApplyingAssets;
-(void)remoteAssetsComponent:(id)arg1 didRequestAssetWithId:(id)arg2 assetType:(long long)arg3 avatarId:(id)arg4 effectId:(id)arg5 ;
-(void)remoteAssetsComponent:(id)arg1 didRequestAssetWithId:(id)arg2 assetType:(long long)arg3 avatarId:(id)arg4 encryptionKey:(id)arg5 encryptionIv:(id)arg6 effectId:(id)arg7 ;
-(void)remoteAssetsComponent:(id)arg1 didRequestAssetUploadWithId:(id)arg2 assetPath:(id)arg3 effectId:(id)arg4 ;
-(void)remoteAssetsComponent:(id)arg1 didRequestAssetUploadWithId:(id)arg2 assetPath:(id)arg3 encryptionKey:(id)arg4 encryptionIv:(id)arg5 effectId:(id)arg6 ;
-(NSString *)bitmojiAvatarId;
-(void)setBitmojiAvatarId:(NSString *)arg1 ;
-(NSString *)friendAvatarId;
-(void)setFriendAvatarId:(NSString *)arg1 ;
-(void)setFriendUserId:(NSString *)arg1 ;
-(NSString *)friendUserId;
-(void)willShowLenses;
-(void)didHideLenses;
-(void)didUpdateActiveLensOrder:(id)arg1 ;
-(void)didSelectLens:(id)arg1 ;
-(void)willDisplayLens:(id)arg1 ;
-(void)didEndDisplayingLens:(id)arg1 ;
-(id)initWithRemoteAssetsComponent:(id)arg1 bitmoji3DMetadataStore:(id)arg2 dataFetcher:(id)arg3 dataUploader:(id)arg4 requestManager:(id)arg5 ;
-(void)willSetAsset:(id)arg1 ;
-(void)didSetAsset:(id)arg1 ;
-(void)getAssetForLensId:(id)arg1 assetId:(id)arg2 assetType:(long long)arg3 avatarId:(id)arg4 encryptionKey:(id)arg5 encryptionIv:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
@end

