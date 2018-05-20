/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCUserSessionScoped.h>

@protocol SCPerforming;
@class SCSessionRequestManager, SCCache, NSString;

@interface SC3DBitmojiMetadataStore : NSObject <SCUserSessionScoped> {

	SCSessionRequestManager* _requestManager;
	SCCache* _cache;
	id<SCPerforming> _performer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isBitmojiLinked;
-(double)_cacheExpirationTime;
-(void)_bitmojiAvatarIdDidChange;
-(id)initWithRequestManager:(id)arg1 cache:(id)arg2 ;
-(id)_metadataRequestKeyForAvatarId:(id)arg1 ;
-(id)_cacheKeyForAvatarId:(id)arg1 ;
-(void)_fetchMetadataWithRequestSettings:(id)arg1 requestKey:(id)arg2 avatarId:(id)arg3 userId:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_avatarAssetsRequestKey:(id)arg1 avatarId:(id)arg2 ;
-(id)_avatarAssetsCacheKey:(id)arg1 avatarId:(id)arg2 ;
-(void)_fetchAvatarAssets:(id)arg1 requestSettings:(id)arg2 requestKey:(id)arg3 avatarId:(id)arg4 userId:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)_parametersForRequest:(id)arg1 ;
-(id)_getDeploymentEnvironment;
-(id)_deploymentEnvironmentCacheSuffix;
-(id)getMetadataWithRequestSettings:(id)arg1 avatarId:(id)arg2 userId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)getAvatarAssets:(id)arg1 requestSettings:(id)arg2 avatarId:(id)arg3 userId:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)boostRequest:(id)arg1 setting:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)resetCache;
-(id)initWithRequestManager:(id)arg1 ;
@end
