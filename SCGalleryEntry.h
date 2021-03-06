/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:14 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCGalleryItem.h>
#import <Snapchat/SCMediaDrawerItem.h>
#import <Snapchat/SCGalleryEntry.h>
@class NSString, NSDate, NSDictionary;


@protocol SCGalleryEntry <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * objectID; 
@property (nonatomic,readonly) BOOL allSnapsIncompatible; 
@property (nonatomic,copy,readonly) NSDate * autosaveTimeUtc; 
@property (nonatomic,copy,readonly) NSDate * createTimeUtc; 
@property (nonatomic,copy,readonly) NSDictionary * dataVaultEncryption; 
@property (nonatomic,copy,readonly) NSDate * duplicateTimeUtc; 
@property (nonatomic,copy,readonly) NSDate * earliestSnapCreateTimeUtc; 
@property (nonatomic,copy,readonly) NSString * entryId; 
@property (nonatomic,readonly) int entrySource; 
@property (nonatomic,copy,readonly) NSString * externalId; 
@property (nonatomic,readonly) int galleryType; 
@property (nonatomic,readonly) BOOL isAutoClusterPrototype; 
@property (nonatomic,readonly) BOOL isPrivate; 
@property (nonatomic,readonly) BOOL isTemporary; 
@property (nonatomic,readonly) int pendingSyncs; 
@property (nonatomic,copy,readonly) NSString * retryFromEntryId; 
@property (nonatomic,readonly) long long seqNum; 
@property (nonatomic,copy,readonly) NSString * snapsHash; 
@property (nonatomic,readonly) int sources; 
@property (nonatomic,copy,readonly) NSDate * syncedAutosaveTimeUtc; 
@property (nonatomic,readonly) BOOL syncedIsPrivate; 
@property (nonatomic,copy,readonly) NSString * syncedTitle; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) int viewType; 
@required
-(NSString *)entryId;
-(int)entrySource;
-(NSDate *)createTimeUtc;
-(BOOL)allSnapsIncompatible;
-(BOOL)isAutoClusterPrototype;
-(int)pendingSyncs;
-(BOOL)syncedIsPrivate;
-(NSDate *)autosaveTimeUtc;
-(NSDictionary *)dataVaultEncryption;
-(NSDate *)duplicateTimeUtc;
-(NSDate *)earliestSnapCreateTimeUtc;
-(NSString *)retryFromEntryId;
-(NSString *)snapsHash;
-(NSDate *)syncedAutosaveTimeUtc;
-(NSString *)syncedTitle;
-(NSString *)title;
-(int)viewType;
-(int)sources;
-(NSString *)externalId;
-(NSString *)objectID;
-(long long)seqNum;
-(BOOL)isTemporary;
-(BOOL)isPrivate;
-(int)galleryType;

@end


@class NSString, NSDate, NSDictionary;

@interface SCGalleryEntry : NSObject <SCGalleryItem, SCMediaDrawerItem, SCGalleryEntry> {

	BOOL _allSnapsIncompatible;
	BOOL _isAutoClusterPrototype;
	BOOL _isPrivate;
	BOOL _isTemporary;
	BOOL _syncedIsPrivate;
	int _entrySource;
	int _galleryType;
	int _pendingSyncs;
	int _sources;
	int _viewType;
	NSString* _objectID;
	NSDate* _autosaveTimeUtc;
	NSDate* _createTimeUtc;
	NSDictionary* _dataVaultEncryption;
	NSDate* _duplicateTimeUtc;
	NSDate* _earliestSnapCreateTimeUtc;
	NSString* _entryId;
	NSString* _externalId;
	NSString* _retryFromEntryId;
	long long _seqNum;
	NSString* _snapsHash;
	NSDate* _syncedAutosaveTimeUtc;
	NSString* _syncedTitle;
	NSString* _title;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long galleryItemType; 
@property (nonatomic,copy,readonly) NSString * galleryItemIdentifier; 
@property (nonatomic,readonly) NSDate * galleryItemCreateTime; 
@property (nonatomic,readonly) NSDate * galleryItemDuplicateTime; 
@property (nonatomic,copy,readonly) NSString * objectID;                             //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) BOOL allSnapsIncompatible;                            //@synthesize allSnapsIncompatible=_allSnapsIncompatible - In the implementation block
@property (nonatomic,copy,readonly) NSDate * autosaveTimeUtc;                        //@synthesize autosaveTimeUtc=_autosaveTimeUtc - In the implementation block
@property (nonatomic,copy,readonly) NSDate * createTimeUtc;                          //@synthesize createTimeUtc=_createTimeUtc - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dataVaultEncryption;              //@synthesize dataVaultEncryption=_dataVaultEncryption - In the implementation block
@property (nonatomic,copy,readonly) NSDate * duplicateTimeUtc;                       //@synthesize duplicateTimeUtc=_duplicateTimeUtc - In the implementation block
@property (nonatomic,copy,readonly) NSDate * earliestSnapCreateTimeUtc;              //@synthesize earliestSnapCreateTimeUtc=_earliestSnapCreateTimeUtc - In the implementation block
@property (nonatomic,copy,readonly) NSString * entryId;                              //@synthesize entryId=_entryId - In the implementation block
@property (nonatomic,readonly) int entrySource;                                      //@synthesize entrySource=_entrySource - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalId;                           //@synthesize externalId=_externalId - In the implementation block
@property (nonatomic,readonly) int galleryType;                                      //@synthesize galleryType=_galleryType - In the implementation block
@property (nonatomic,readonly) BOOL isAutoClusterPrototype;                          //@synthesize isAutoClusterPrototype=_isAutoClusterPrototype - In the implementation block
@property (nonatomic,readonly) BOOL isPrivate;                                       //@synthesize isPrivate=_isPrivate - In the implementation block
@property (nonatomic,readonly) BOOL isTemporary;                                     //@synthesize isTemporary=_isTemporary - In the implementation block
@property (nonatomic,readonly) int pendingSyncs;                                     //@synthesize pendingSyncs=_pendingSyncs - In the implementation block
@property (nonatomic,copy,readonly) NSString * retryFromEntryId;                     //@synthesize retryFromEntryId=_retryFromEntryId - In the implementation block
@property (nonatomic,readonly) long long seqNum;                                     //@synthesize seqNum=_seqNum - In the implementation block
@property (nonatomic,copy,readonly) NSString * snapsHash;                            //@synthesize snapsHash=_snapsHash - In the implementation block
@property (nonatomic,readonly) int sources;                                          //@synthesize sources=_sources - In the implementation block
@property (nonatomic,copy,readonly) NSDate * syncedAutosaveTimeUtc;                  //@synthesize syncedAutosaveTimeUtc=_syncedAutosaveTimeUtc - In the implementation block
@property (nonatomic,readonly) BOOL syncedIsPrivate;                                 //@synthesize syncedIsPrivate=_syncedIsPrivate - In the implementation block
@property (nonatomic,copy,readonly) NSString * syncedTitle;                          //@synthesize syncedTitle=_syncedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) int viewType;                                         //@synthesize viewType=_viewType - In the implementation block
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(id)observe:(id)arg1 queue:(id)arg2 changeHandler:(/*^block*/id)arg3 ;
+(id)parseManagedObject:(id)arg1 ;
+(id)fetchGalleryEntriesWithOptions:(id)arg1 ;
+(id)fetchGalleryEntriesForOwner:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)fetchGalleryEntriesForOwnerDeleted:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)fetchGalleryEntriesForOwnerFailed:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)fetchAllGalleryEntriesIncludingPrivate:(BOOL)arg1 ;
+(BOOL)fetchIsFailedWithEntryId:(id)arg1 ;
+(BOOL)fetchIsDeletedEntryWithEntryId:(id)arg1 ;
+(id)fetchGalleryEntryWithEntryId:(id)arg1 ;
+(id)fetchManualSaveGalleryEntryWithExternalId:(id)arg1 isPrivate:(BOOL)arg2 owner:(id)arg3 ;
+(id)fetchGalleryEntriesWithEntryIds:(id)arg1 ;
+(id)fetchUnsyncedGalleryEntriesForOwnerAndOwnerDeleted:(id)arg1 ;
+(id)fetchOrderedGalleryEntriesForOwner:(id)arg1 error:(id*)arg2 ;
+(id)fetchOrderedGalleryEntriesForOwnerFailed:(id)arg1 ;
+(id)fetchPrivateGalleryEntriesForOwnerFailed:(id)arg1 ;
+(id)fetchPrivateGalleryEntriesForOwner:(id)arg1 ;
+(id)fetchPublicGalleryEntriesForOwner:(id)arg1 ;
+(id)fetchLatestAutosavedMyStoryGalleryEntryForOwner:(id)arg1 isPrivate:(BOOL)arg2 ;
+(id)fetchLatestAutosavedGroupStoryWithExternalId:(id)arg1 owner:(id)arg2 isPrivate:(BOOL)arg3 ;
+(id)fetchSharedStoryWithExternalId:(id)arg1 owner:(id)arg2 ;
+(id)fetchFeaturedEntryWithExternalId:(id)arg1 ownerOrOwnerDeleted:(id)arg2 ;
+(id)fetchAllFeaturedEntries:(id)arg1 ;
+(id)fetchAllPrototypeEntries:(id)arg1 ;
+(id)fetchAllGalleryEntries;
+(unsigned long long)countOfGalleryEntriesWithOptions:(id)arg1 ;
+(id)fetchGalleryEntryForHighlightedSnap:(id)arg1 options:(id)arg2 ;
+(id)fetchGalleryEntryForSnap:(id)arg1 options:(id)arg2 ;
+(id)fetchGalleryEntryForSyncedHighlightedSnap:(id)arg1 options:(id)arg2 ;
+(id)fetchGalleryEntryForSyncedSnap:(id)arg1 options:(id)arg2 ;
+(unsigned long long)countOfGalleryEntriesForOwner:(id)arg1 options:(id)arg2 ;
+(unsigned long long)countOfGalleryEntriesForOwnerDeleted:(id)arg1 options:(id)arg2 ;
+(unsigned long long)countOfGalleryEntriesForOwnerFailed:(id)arg1 options:(id)arg2 ;
+(id)galleryEntryWithAllSnapsIncompatible:(BOOL)arg1 autosaveTimeUtc:(id)arg2 createTimeUtc:(id)arg3 dataVaultEncryption:(id)arg4 duplicateTimeUtc:(id)arg5 earliestSnapCreateTimeUtc:(id)arg6 entryId:(id)arg7 entrySource:(int)arg8 externalId:(id)arg9 galleryType:(int)arg10 isAutoClusterPrototype:(BOOL)arg11 isPrivate:(BOOL)arg12 isTemporary:(BOOL)arg13 pendingSyncs:(int)arg14 retryFromEntryId:(id)arg15 seqNum:(long long)arg16 snapsHash:(id)arg17 sources:(int)arg18 syncedAutosaveTimeUtc:(id)arg19 syncedIsPrivate:(BOOL)arg20 syncedTitle:(id)arg21 title:(id)arg22 viewType:(int)arg23 ;
+(id)allKeys;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setBool:(BOOL)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(NSString *)entryId;
-(int)entrySource;
-(NSDate *)createTimeUtc;
-(BOOL)allSnapsIncompatible;
-(BOOL)isAutoClusterPrototype;
-(int)pendingSyncs;
-(BOOL)syncedIsPrivate;
-(NSDate *)autosaveTimeUtc;
-(NSDictionary *)dataVaultEncryption;
-(NSDate *)duplicateTimeUtc;
-(NSDate *)earliestSnapCreateTimeUtc;
-(NSString *)retryFromEntryId;
-(NSString *)snapsHash;
-(NSDate *)syncedAutosaveTimeUtc;
-(NSString *)syncedTitle;
-(id)initWithObjectID:(id)arg1 allSnapsIncompatible:(BOOL)arg2 autosaveTimeUtc:(id)arg3 createTimeUtc:(id)arg4 dataVaultEncryption:(id)arg5 duplicateTimeUtc:(id)arg6 earliestSnapCreateTimeUtc:(id)arg7 entryId:(id)arg8 entrySource:(int)arg9 externalId:(id)arg10 galleryType:(int)arg11 isAutoClusterPrototype:(BOOL)arg12 isPrivate:(BOOL)arg13 isTemporary:(BOOL)arg14 pendingSyncs:(int)arg15 retryFromEntryId:(id)arg16 seqNum:(long long)arg17 snapsHash:(id)arg18 sources:(int)arg19 syncedAutosaveTimeUtc:(id)arg20 syncedIsPrivate:(BOOL)arg21 syncedTitle:(id)arg22 title:(id)arg23 viewType:(int)arg24 ;
-(unsigned long long)galleryItemType;
-(NSString *)galleryItemIdentifier;
-(NSDate *)galleryItemCreateTime;
-(NSDate *)galleryItemDuplicateTime;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)viewType;
-(int)sources;
-(long long)itemType;
-(NSString *)externalId;
-(NSString *)objectID;
-(id)itemId;
-(long long)seqNum;
-(BOOL)isTemporary;
-(BOOL)isPrivate;
-(int)galleryType;
@end

