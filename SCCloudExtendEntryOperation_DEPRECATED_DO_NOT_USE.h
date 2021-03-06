/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCCloudSyncOperation.h>
#import <Snapchat/SCCloudSyncStoryOperation.h>

@protocol SCGalleryProfile;
@class NSString, NSDate, NSDictionary, NSArray, SCCloudSyncTriggerUserContext;

@interface SCCloudExtendEntryOperation_DEPRECATED_DO_NOT_USE : SCCloudSyncOperation <SCCloudSyncStoryOperation> {

	NSString* _requestID;
	id<SCGalleryProfile> _profile;
	NSString* _entryId;
	NSString* _title;
	NSDate* _autosaveTimeUtc;
	NSDictionary* _dataVaultEncryption;
	NSArray* _snapPlaceholders;
	NSArray* _detailPlaceholders;
	NSArray* _miniThumbnailPlaceholders;
	SCCloudSyncTriggerUserContext* _userContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)numberOfSnaps;
-(id)dataVaultEncryption;
-(id)snapPlaceholders;
-(id)detailPlaceholders;
-(id)miniThumbnailPlaceholders;
-(BOOL)doesNotRequireMediaUpload;
-(id)initWithSnapshot:(id)arg1 requestID:(id)arg2 ;
-(id)entryIds;
-(id)makeSnapshot;
-(id)detectAndResolveConflictsWithCloudFS:(id)arg1 mediaDataProvider:(id)arg2 dataObjectContext:(id)arg3 logger:(id)arg4 ;
-(BOOL)executeOptimisticallyWithDataObjectContext:(id)arg1 logger:(id)arg2 ;
-(id)commitWithEntryUpdates:(id)arg1 dataObjectContext:(id)arg2 ;
-(void)cleanupWithContext:(id)arg1 cloudFS:(id)arg2 dataSource:(id)arg3 ;
-(id)changedSnapContextsWithEntryUpdate:(id)arg1 ;
-(BOOL)isOperationValidBeforeRemoteSync:(id)arg1 ;
-(void)remoteSyncFromSequenceNumber:(long long)arg1 cloudFS:(id)arg2 dataVault:(id)arg3 mediaDataProvider:(id)arg4 networker:(id)arg5 logger:(id)arg6 queue:(id)arg7 failureHandler:(/*^block*/id)arg8 successHandler:(/*^block*/id)arg9 ;
-(id)logParameters;
-(BOOL)eligibleForOutOfOrderExecution;
-(BOOL)allMediaUploadsComplete;
-(BOOL)requiresSyncStatusUpdate;
-(BOOL)needRunImmediately;
-(id)processAndCleanupForOutOfOrderDeletions:(id)arg1 dataSource:(id)arg2 logger:(id)arg3 queue:(id)arg4 ;
-(id)cleanupContextForOutOfOrderDeletion;
-(id)initWithEntryId:(id)arg1 title:(id)arg2 autosaveTimeUtc:(id)arg3 addSnapEntities:(id)arg4 dataVaultEncryption:(id)arg5 profile:(id)arg6 userContext:(id)arg7 ;
-(id)_indexSetForInserting:(id)arg1 into:(id)arg2 ;
-(void)_updateEntriesFromSequenceNumber:(long long)arg1 networker:(id)arg2 queue:(id)arg3 snapsUploadInfo:(id)arg4 failureHandler:(/*^block*/id)arg5 successHandler:(/*^block*/id)arg6 ;
-(id)_snapIdsForSnaps:(id)arg1 ;
-(unsigned long long)type;
-(id)requestID;
-(BOOL)isPrivate;
@end

