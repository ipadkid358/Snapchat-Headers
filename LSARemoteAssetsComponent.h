/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/LSABaseComponent.h>
#import <Snapchat/LSARemoteAssetsListener.h>

@class LSARemoteAssetsComponentListenerAnnouncer, NSString;

@interface LSARemoteAssetsComponent : LSABaseComponent <LSARemoteAssetsListener> {

	LSARemoteAssetsComponentListenerAnnouncer* _remoteAssetsComponentAnnouncer;
	shared_ptr<LSARemoteAssetsDelegateWrapper>* _delegateWrapper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPerformer:(id)arg1 ;
-(void)setCoreManager:(shared_ptr<LS::CoreManager>*)arg1 announcer:(id)arg2 configuration:(id)arg3 ;
-(void)didRequestAsset:(id)arg1 assetType:(long long)arg2 avatarId:(id)arg3 effectId:(id)arg4 ;
-(void)didRequestAsset:(id)arg1 assetType:(long long)arg2 avatarId:(id)arg3 encryptionKey:(id)arg4 encryptionIv:(id)arg5 effectId:(id)arg6 ;
-(void)didRequestAssetUpload:(id)arg1 atPath:(id)arg2 effectId:(id)arg3 ;
-(void)didRequestAssetUpload:(id)arg1 atPath:(id)arg2 encryptionKey:(id)arg3 encryptionIv:(id)arg4 effectId:(id)arg5 ;
-(void)setAssetWithPath:(id)arg1 assetId:(id)arg2 effectId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setAssetUploadStatus:(long long)arg1 assetId:(id)arg2 effectId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
