/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:14 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class SCCDGalleryProfileID, NSDate, NSNumber, NSString, NSSet, SCCDGalleryQuotaStatus, SCCDGalleryUserDefaults;

@interface _SCCDGalleryProfile : NSManagedObject

@property (nonatomic,readonly) SCCDGalleryProfileID * objectID; 
@property (nonatomic,retain) NSDate * lastBackupNotificationTime; 
@property (nonatomic,retain) NSDate * lastFeaturedStorySyncTime; 
@property (nonatomic,retain) NSDate * lastFullSyncTime; 
@property (nonatomic,retain) NSNumber * lastUpdateSeqNum; 
@property (assign) long long lastUpdateSeqNumValue; 
@property (nonatomic,retain) NSNumber * privateGalleryEnabled; 
@property (assign) BOOL privateGalleryEnabledValue; 
@property (nonatomic,retain) NSNumber * snapTotalQuota; 
@property (assign) int snapTotalQuotaValue; 
@property (nonatomic,retain) NSString * syncToken; 
@property (nonatomic,retain) NSNumber * topSecretPrivateGalleryEnabled; 
@property (assign) BOOL topSecretPrivateGalleryEnabledValue; 
@property (nonatomic,retain) NSString * userId; 
@property (nonatomic,retain) NSSet * deletedEntries; 
@property (nonatomic,retain) NSSet * deletedSnaps; 
@property (nonatomic,retain) NSSet * entries; 
@property (nonatomic,retain) NSSet * failedEntries; 
@property (nonatomic,retain) NSSet * operations; 
@property (nonatomic,retain) SCCDGalleryQuotaStatus * quotaStatus; 
@property (nonatomic,retain) NSSet * snaps; 
@property (nonatomic,retain) SCCDGalleryUserDefaults * userDefaults; 
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertInManagedObjectContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)entityName;
-(BOOL)privateGalleryEnabledValue;
-(BOOL)topSecretPrivateGalleryEnabledValue;
-(id)snapsSet;
-(long long)lastUpdateSeqNumValue;
-(void)setLastUpdateSeqNumValue:(long long)arg1 ;
-(long long)primitiveLastUpdateSeqNumValue;
-(void)setPrimitiveLastUpdateSeqNumValue:(long long)arg1 ;
-(void)setPrivateGalleryEnabledValue:(BOOL)arg1 ;
-(BOOL)primitivePrivateGalleryEnabledValue;
-(void)setPrimitivePrivateGalleryEnabledValue:(BOOL)arg1 ;
-(int)snapTotalQuotaValue;
-(void)setSnapTotalQuotaValue:(int)arg1 ;
-(int)primitiveSnapTotalQuotaValue;
-(void)setPrimitiveSnapTotalQuotaValue:(int)arg1 ;
-(void)setTopSecretPrivateGalleryEnabledValue:(BOOL)arg1 ;
-(BOOL)primitiveTopSecretPrivateGalleryEnabledValue;
-(void)setPrimitiveTopSecretPrivateGalleryEnabledValue:(BOOL)arg1 ;
-(id)deletedEntriesSet;
-(id)deletedSnapsSet;
-(id)entriesSet;
-(id)failedEntriesSet;
-(id)operationsSet;
-(SCCDGalleryProfileID *)objectID;
@end

