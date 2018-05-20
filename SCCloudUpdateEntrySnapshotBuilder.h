/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCGalleryProfile, SCGallerySnap, SCGallerySnapDetail, SCGallerySnapMiniThumbnail;
@class NSString, NSDictionary, SCCloudSyncTriggerUserContext;

@interface SCCloudUpdateEntrySnapshotBuilder : NSObject {

	id<SCGalleryProfile> _profile;
	NSString* _entryId;
	NSString* _title;
	NSString* _deletedSnapId;
	id<SCGallerySnap> _snapPlaceholder;
	id<SCGallerySnapDetail> _detailPlaceholder;
	id<SCGallerySnapMiniThumbnail> _miniThumbnailPlaceholder;
	NSDictionary* _dataVaultEncryption;
	SCCloudSyncTriggerUserContext* _userContext;
	BOOL _requiresSyncStatusUpdate;

}
+(id)withCloudUpdateEntrySnapshot:(id)arg1 ;
-(id)setEntryId:(id)arg1 ;
-(id)setDataVaultEncryption:(id)arg1 ;
-(id)setSnapPlaceholder:(id)arg1 ;
-(id)setDetailPlaceholder:(id)arg1 ;
-(id)setMiniThumbnailPlaceholder:(id)arg1 ;
-(id)setDeletedSnapId:(id)arg1 ;
-(id)setRequiresSyncStatusUpdate:(BOOL)arg1 ;
-(id)setTitle:(id)arg1 ;
-(id)build;
-(id)setProfile:(id)arg1 ;
-(id)setUserContext:(id)arg1 ;
@end
