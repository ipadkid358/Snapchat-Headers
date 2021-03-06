/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCService.h>

@protocol SCNetworker;
@class SCGallerySearch, SCQueuePerformer, NSMutableArray, NSMutableSet, SCGalleryLogger, EGODatabaseStatement, NSString;

@interface SCGallerySearchTagUploader : NSObject <SCService> {

	SCGallerySearch* _gallerySearch;
	SCQueuePerformer* _performer;
	NSMutableArray* _waitForUploadSnapTagsList;
	NSMutableSet* _waitForUploadSnapIdSet;
	id<SCNetworker> _networker;
	SCGalleryLogger* _galleryLogger;
	EGODatabaseStatement* _markAsSynced;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dedicatedQueue;
-(void)runWithServiceTerm:(id)arg1 ;
-(id)defaultNotifierWithLowPowerMode;
-(void)enqueueWithSnapId:(id)arg1 languageId:(id)arg2 tagsData:(id)arg3 ;
-(void)markSyncedSnapsWithSnapId:(id)arg1 ;
-(void)enqueueSnap:(id)arg1 locationTags:(id)arg2 timeTags:(id)arg3 metaTags:(id)arg4 visualTagToConfidenceMap:(id)arg5 tagVersion:(id)arg6 languageId:(id)arg7 tagClusterName:(id)arg8 locationClusterName:(id)arg9 caption:(id)arg10 ;
-(id)regularScheduleNotifier;
-(void)_markSyncedSnapsWithTagsResponse:(id)arg1 ;
-(BOOL)_markAsSyncedWithSnapId:(id)arg1 database:(id)arg2 ;
-(id)initWithGallerySearch:(id)arg1 networker:(id)arg2 galleryLogger:(id)arg3 ;
-(void)_setupDatabase:(id)arg1 ;
@end

