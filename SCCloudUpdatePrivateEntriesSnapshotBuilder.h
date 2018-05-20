/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCGalleryProfile;
@class NSString, NSArray, NSDictionary, SCCloudSyncTriggerUserContext;

@interface SCCloudUpdatePrivateEntriesSnapshotBuilder : NSObject {

	id<SCGalleryProfile> _profile;
	NSString* _entryId;
	NSArray* _addSnapEntities;
	BOOL _isPrivate;
	NSDictionary* _dataVaultEncryption;
	SCCloudSyncTriggerUserContext* _userContext;

}
+(id)withCloudUpdatePrivateEntriesSnapshot:(id)arg1 ;
-(id)setEntryId:(id)arg1 ;
-(id)setIsPrivate:(BOOL)arg1 ;
-(id)setDataVaultEncryption:(id)arg1 ;
-(id)setAddSnapEntities:(id)arg1 ;
-(id)build;
-(id)setProfile:(id)arg1 ;
-(id)setUserContext:(id)arg1 ;
@end

