/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:14 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class SCCDGalleryQuotaStatusID, NSNumber, SCCDGalleryProfile;

@interface _SCCDGalleryQuotaStatus : NSManagedObject

@property (nonatomic,readonly) SCCDGalleryQuotaStatusID * objectID; 
@property (nonatomic,retain) NSNumber * lastWarningPercentage; 
@property (assign) int lastWarningPercentageValue; 
@property (nonatomic,retain) NSNumber * numOfNoticesLeftForSuccessfulSave; 
@property (assign) int numOfNoticesLeftForSuccessfulSaveValue; 
@property (nonatomic,retain) NSNumber * numOfSuccessSavesAfterFullGallery; 
@property (assign) int numOfSuccessSavesAfterFullGalleryValue; 
@property (nonatomic,retain) NSNumber * numOfWarningsForFullGallery; 
@property (assign) int numOfWarningsForFullGalleryValue; 
@property (nonatomic,retain) SCCDGalleryProfile * profile; 
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertInManagedObjectContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)entityName;
-(int)lastWarningPercentageValue;
-(void)setLastWarningPercentageValue:(int)arg1 ;
-(int)primitiveLastWarningPercentageValue;
-(void)setPrimitiveLastWarningPercentageValue:(int)arg1 ;
-(int)numOfNoticesLeftForSuccessfulSaveValue;
-(void)setNumOfNoticesLeftForSuccessfulSaveValue:(int)arg1 ;
-(int)primitiveNumOfNoticesLeftForSuccessfulSaveValue;
-(void)setPrimitiveNumOfNoticesLeftForSuccessfulSaveValue:(int)arg1 ;
-(int)numOfSuccessSavesAfterFullGalleryValue;
-(void)setNumOfSuccessSavesAfterFullGalleryValue:(int)arg1 ;
-(int)primitiveNumOfSuccessSavesAfterFullGalleryValue;
-(void)setPrimitiveNumOfSuccessSavesAfterFullGalleryValue:(int)arg1 ;
-(int)numOfWarningsForFullGalleryValue;
-(void)setNumOfWarningsForFullGalleryValue:(int)arg1 ;
-(int)primitiveNumOfWarningsForFullGalleryValue;
-(void)setPrimitiveNumOfWarningsForFullGalleryValue:(int)arg1 ;
-(SCCDGalleryQuotaStatusID *)objectID;
@end

