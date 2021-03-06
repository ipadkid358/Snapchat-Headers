/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCCloudSyncDataVault.h>

@protocol SCCloudSyncDataVault;
@class NSDictionary, NSString;

@interface SCCloudSyncCachedDataVault : NSObject <SCCloudSyncDataVault> {

	id<SCCloudSyncDataVault> _dataVault;
	NSDictionary* _cachedEncryption;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataVault:(id)arg1 cachedEncrytion:(id)arg2 ;
-(void)addLocationsWithSnaps:(id)arg1 ;
-(void)addKeysAndIVsWithSnaps:(id)arg1 ;
-(void)addLocation:(id)arg1 forSnapId:(id)arg2 ;
-(BOOL)addKey:(id)arg1 IV:(id)arg2 isEncrypted:(BOOL)arg3 forSnapId:(id)arg4 ;
-(void)requestLocationForSnapId:(id)arg1 synchronous:(BOOL)arg2 queue:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)requestKeyForSnapId:(id)arg1 synchronous:(BOOL)arg2 queue:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)duplicateFromSnapIds:(id)arg1 toSnapIds:(id)arg2 localOnly:(BOOL)arg3 ;
@end

