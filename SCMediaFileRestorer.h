/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCService.h>
#import <Snapchat/SCUserSessionScoped.h>

@protocol SCNetworker, SCProgressReportingSCCanceling, SCGalleryProfile;
@class SCCloudSync, SCDataObjectContext, SCCloudFS, SCQueuePerformer, SCCloudFSFile, SCMediaFileRestorerStatusListenerAnnouncer, NSArray, SCSentinel, NSString;

@interface SCMediaFileRestorer : NSObject <SCService, SCUserSessionScoped> {

	SCCloudSync* _cloudSync;
	id<SCNetworker> _networker;
	SCDataObjectContext* _dataObjectContext;
	SCCloudFS* _cloudFS;
	SCQueuePerformer* _performer;
	SCCloudFSFile* _currentCloudFile;
	id<SCProgressReporting><SCCanceling> _currentDownloadRequest;
	unsigned long long _status;
	SCMediaFileRestorerStatusListenerAnnouncer* _announcer;
	NSArray* _pendingEntries;
	NSArray* _pendingSnaps;
	long long _entryIndex;
	long long _snapIndex;
	SCSentinel* _invalidateSentinel;
	id<SCGalleryProfile> _profile;

}

@property (nonatomic,readonly) id<SCGalleryProfile> profile;              //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dedicatedQueue;
-(void)runWithServiceTerm:(id)arg1 ;
-(void)_transitToState:(unsigned long long)arg1 serviceTerm:(id)arg2 ;
-(id)defaultLongRunningNotifier;
-(id)defaultImmediateNotifier;
-(void)_fetchAllEntriesWithServiceTerm:(id)arg1 ;
-(void)_processEntryWithServiceTerm:(id)arg1 ;
-(void)_continueDownloadSnapsWithServiceTerm:(id)arg1 ;
-(id)_notifierWithSyncedStatusNotifier:(id)arg1 ;
-(void)_downloadSnapsWithServiceTerm:(id)arg1 ;
-(id)_fileRestoringNotifier;
-(BOOL)_shouldDownloadWholeSnap;
-(id)initWithProfile:(id)arg1 cloudSync:(id)arg2 networker:(id)arg3 dataObjectContext:(id)arg4 cloudFS:(id)arg5 ;
-(void)invalidate;
-(BOOL)_isInvalidated;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(id<SCGalleryProfile>)profile;
@end

