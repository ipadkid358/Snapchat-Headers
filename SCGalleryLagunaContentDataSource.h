/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCCloudSyncStatusListener.h>
#import <Snapchat/SCLagunaEventListener.h>
#import <Snapchat/SCTimeProfilable.h>
#import <Snapchat/SCGalleryLagunaWifiControllerEventListener.h>
#import <Snapchat/SCCloudSyncMediaUploadDataProvider.h>

@protocol OS_dispatch_semaphore, SCGalleryLagunaContentDataSourceDelegate;
@class NSArray, SCUserSession, NSDictionary, NSMutableDictionary, NSObject, SCQueuePerformer, NSMutableSet, SCGalleryLagunaMetadataProvider, NSSet, NSString;

@interface SCGalleryLagunaContentDataSource : NSObject <SCCloudSyncStatusListener, SCLagunaEventListener, SCTimeProfilable, SCGalleryLagunaWifiControllerEventListener, SCCloudSyncMediaUploadDataProvider> {

	BOOL _isSetup;
	BOOL _isSetupOnCloudSyncReady;
	NSArray* _entries;
	NSArray* _entryPlaceholders;
	SCUserSession* _userSession;
	NSArray* _listOfContent;
	NSDictionary* _contentMap;
	NSDictionary* _contentMapToEntryId;
	NSMutableDictionary* _mediaIdToSnapId;
	NSObject*<OS_dispatch_semaphore> _contentForSnapSemaphore;
	NSDictionary* _contentForSnap;
	NSMutableDictionary* _contentAnnouncer;
	SCQueuePerformer* _performer;
	NSMutableSet* _hasSyncedContent;
	NSMutableDictionary* _observeGraph;
	NSMutableDictionary* _entryMap;
	NSMutableDictionary* _entryObserveContext;
	SCGalleryLagunaMetadataProvider* _lagunaMetadataProvider;
	NSSet* _latestTransferredContentIds;
	NSArray* _listToMarkHDAsSyncedContent;
	unsigned long long _cloudSyncStatus;
	id<SCGalleryLagunaContentDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCGalleryLagunaContentDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)context;
-(id)observe:(id)arg1 queue:(id)arg2 changeHandler:(/*^block*/id)arg3 ;
-(id)initWithUserSession:(id)arg1 ;
-(void)markCanonicalMediaSynced:(id)arg1 ;
-(id)optionalMediaDataProviderForSnap:(id)arg1 ;
-(void)markOptionalMediaSynced:(id)arg1 ;
-(void)cloudSync:(id)arg1 didChangeStatus:(unsigned long long)arg2 isBackingUpNow:(BOOL)arg3 mayUpload:(BOOL)arg4 requiresUpgrade:(BOOL)arg5 ;
-(void)lagunaOnTransferUpdate:(id)arg1 updateType:(unsigned long long)arg2 ;
-(void)lagunaOnDeviceFileIndexUpdate:(id)arg1 ;
-(void)lagunaOnDeviceStateUpdate:(id)arg1 ;
-(void)galleryLagunaWifiControllerDidUpdateState:(long long)arg1 device:(id)arg2 ;
-(id)contentLoaderForSnap:(id)arg1 ;
-(void)_setupOnCloudSyncReady;
-(void)unobserve:(id)arg1 entryId:(id)arg2 ;
-(id)_snapPlaceholderForLagunaContent:(id)arg1 location:(id)arg2 ;
-(id)_fetchLagunaContentSnapsForEntry:(id)arg1 ;
-(id)fetchLagunaContentSnapsForEntry:(id)arg1 ;
-(id)_fetchLagunaEntriesForContentIds:(id)arg1 ;
-(id)fetchLagunaEntriesForContentIds:(id)arg1 ;
-(void)_observeDataContextChangesForEntry:(id)arg1 ;
-(BOOL)_mixWithLagunaContentIfNeeded;
-(void)_processLagunaContentChange:(id)arg1 ;
-(BOOL)_isCloudSyncStatusSynced;
-(int)_sojuMediaFormatForLagunaContent:(id)arg1 ;
-(int)_sojuMediaTypeForLagunaContent:(id)arg1 ;
-(float)_mediaDurationForLagunaContent:(id)arg1 ;
-(int)_snapMediaSizeForLagunaContent:(id)arg1 ;
-(id)_sensorBlobFromContent:(id)arg1 ;
-(void)_scheduleHDUploadIfNeededForSnap:(id)arg1 inContentMap:(id)arg2 ;
-(void)_markHDAsSyncedForEligibleContent;
-(long long)_localDayOfEraWithDate:(id)arg1 calendar:(id)arg2 timeZone:(id)arg3 ;
-(void)_performObserveCallbacksForChangedEntryIds:(id)arg1 changedKeys:(id)arg2 ;
-(void)_appendLagunaContents:(id)arg1 toDayStoryId:(id)arg2 ;
-(id)_lagunaMetadataProvider;
-(void)_handleContentUpdate:(id)arg1 contentComponent:(unsigned long long)arg2 updateType:(unsigned long long)arg3 ;
-(void)_updateLatestTransferredContentIds;
-(void)_performObserveCallbacksForEntry:(id)arg1 entryId:(id)arg2 changedKeys:(id)arg3 ;
-(void)_logDirectSnapCreate:(id)arg1 ;
-(unsigned long long)countOfLagunaContentSnapsForEntry:(id)arg1 ;
-(unsigned long long)countOfLagunaContentSnapsForEntryHighlighted:(id)arg1 ;
-(id)fetchLagunaContentSnapsForEntryHighlighted:(id)arg1 ;
-(id)fetchSnapForMediaId:(id)arg1 ;
-(id)fetchLagunaEntryForSnap:(id)arg1 ;
-(id)entryPlaceholdersForLagunaContentWithExistingEntries:(id)arg1 ;
-(id)latestTransferredContentIds;
-(void)setDelegate:(id<SCGalleryLagunaContentDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(id<SCGalleryLagunaContentDataSourceDelegate>)delegate;
-(void)_setupIfNeeded;
-(void)setupIfNeeded;
@end

