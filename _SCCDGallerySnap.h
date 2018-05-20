/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:14 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class SCCDGallerySnapID, NSNumber, NSString, NSDate, SCCDGallerySnapDetail, SCCDGalleryEntry, SCCDGallerySnapMiniThumbnail, SCCDGalleryProfile;

@interface _SCCDGallerySnap : NSManagedObject

@property (nonatomic,readonly) SCCDGallerySnapID * objectID; 
@property (nonatomic,retain) id attribution; 
@property (nonatomic,retain) NSNumber * cameraFrontFacing; 
@property (assign) BOOL cameraFrontFacingValue; 
@property (nonatomic,retain) NSString * cameraRollId; 
@property (nonatomic,retain) NSDate * captureTimeUtc; 
@property (nonatomic,retain) NSNumber * cloudMediaState; 
@property (assign) int cloudMediaStateValue; 
@property (nonatomic,retain) NSDate * createTimeUtc; 
@property (nonatomic,retain) NSString * creatorUserId; 
@property (nonatomic,retain) NSString * deviceFirmwareInfo; 
@property (nonatomic,retain) NSString * deviceId; 
@property (nonatomic,retain) NSString * duplicatedFromSnapId; 
@property (nonatomic,retain) NSNumber * duration; 
@property (assign) float durationValue; 
@property (nonatomic,retain) NSString * externalId; 
@property (nonatomic,retain) id framing; 
@property (nonatomic,retain) NSNumber * hasInterestingnessScore; 
@property (assign) BOOL hasInterestingnessScoreValue; 
@property (nonatomic,retain) NSNumber * hasLocation; 
@property (assign) BOOL hasLocationValue; 
@property (nonatomic,retain) NSNumber * hasOverlayImage; 
@property (assign) BOOL hasOverlayImageValue; 
@property (nonatomic,retain) NSNumber * hasSynced; 
@property (assign) BOOL hasSyncedValue; 
@property (nonatomic,retain) NSNumber * hasThumbnail; 
@property (assign) BOOL hasThumbnailValue; 
@property (nonatomic,retain) NSString * hdMediaRedirectURI; 
@property (nonatomic,retain) NSNumber * hdMediaState; 
@property (assign) int hdMediaStateValue; 
@property (nonatomic,retain) id hdMediaURI; 
@property (nonatomic,retain) NSNumber * height; 
@property (assign) int heightValue; 
@property (nonatomic,retain) NSNumber * infiniteDuration; 
@property (assign) BOOL infiniteDurationValue; 
@property (nonatomic,retain) NSNumber * interestingnessScore; 
@property (assign) float interestingnessScoreValue; 
@property (nonatomic,retain) NSNumber * isTemporary; 
@property (assign) BOOL isTemporaryValue; 
@property (nonatomic,retain) NSNumber * mediaFormat; 
@property (assign) int mediaFormatValue; 
@property (nonatomic,retain) NSString * mediaId; 
@property (nonatomic,retain) NSString * mediaRedirectURI; 
@property (nonatomic,retain) NSNumber * mediaType; 
@property (assign) int mediaTypeValue; 
@property (nonatomic,retain) id mediaURI; 
@property (nonatomic,retain) NSString * multiSnapGroupId; 
@property (nonatomic,retain) NSNumber * orientation; 
@property (assign) int orientationValue; 
@property (nonatomic,retain) id overlayImageURI; 
@property (nonatomic,retain) NSString * overlayRedirectURI; 
@property (nonatomic,retain) NSNumber * pendingOptionalMediaSync; 
@property (assign) BOOL pendingOptionalMediaSyncValue; 
@property (nonatomic,retain) NSDate * placeholderCreateTime; 
@property (nonatomic,retain) NSString * retryFromSnapId; 
@property (nonatomic,retain) id sensorBlob; 
@property (nonatomic,retain) NSString * servletMediaFormat; 
@property (nonatomic,retain) NSString * snapId; 
@property (nonatomic,retain) id sojuMediaFormat; 
@property (nonatomic,retain) id sojuMediaType; 
@property (nonatomic,retain) NSNumber * source; 
@property (assign) int sourceValue; 
@property (nonatomic,retain) NSString * thumbnailRedirectURI; 
@property (nonatomic,retain) id thumbnailURI; 
@property (nonatomic,retain) NSNumber * thumbnailUploadState; 
@property (assign) int thumbnailUploadStateValue; 
@property (nonatomic,retain) NSString * timeZoneName; 
@property (nonatomic,retain) NSString * transferBatchId; 
@property (nonatomic,retain) NSNumber * width; 
@property (assign) int widthValue; 
@property (nonatomic,retain) SCCDGallerySnapDetail * detail; 
@property (nonatomic,retain) SCCDGalleryEntry * entry; 
@property (nonatomic,retain) SCCDGalleryEntry * entryHighlighted; 
@property (nonatomic,retain) SCCDGallerySnapMiniThumbnail * miniThumbnail; 
@property (nonatomic,retain) SCCDGalleryProfile * owner; 
@property (nonatomic,retain) SCCDGalleryProfile * ownerDeleted; 
@property (nonatomic,retain) SCCDGalleryEntry * syncedEntry; 
@property (nonatomic,retain) SCCDGalleryEntry * syncedEntryHighlighted; 
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertInManagedObjectContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)entityName;
-(int)heightValue;
-(int)widthValue;
-(void)setHeightValue:(int)arg1 ;
-(void)setWidthValue:(int)arg1 ;
-(int)orientationValue;
-(int)mediaTypeValue;
-(float)durationValue;
-(BOOL)hasOverlayImageValue;
-(BOOL)hasThumbnailValue;
-(BOOL)cameraFrontFacingValue;
-(BOOL)infiniteDurationValue;
-(void)setMediaTypeValue:(int)arg1 ;
-(void)setOrientationValue:(int)arg1 ;
-(void)setDurationValue:(float)arg1 ;
-(void)setHasOverlayImageValue:(BOOL)arg1 ;
-(void)setHasThumbnailValue:(BOOL)arg1 ;
-(void)setCameraFrontFacingValue:(BOOL)arg1 ;
-(void)setInfiniteDurationValue:(BOOL)arg1 ;
-(int)mediaFormatValue;
-(void)setMediaFormatValue:(int)arg1 ;
-(int)sourceValue;
-(void)setSourceValue:(int)arg1 ;
-(BOOL)isTemporaryValue;
-(void)setIsTemporaryValue:(BOOL)arg1 ;
-(BOOL)primitiveIsTemporaryValue;
-(void)setPrimitiveIsTemporaryValue:(BOOL)arg1 ;
-(BOOL)primitiveCameraFrontFacingValue;
-(void)setPrimitiveCameraFrontFacingValue:(BOOL)arg1 ;
-(int)cloudMediaStateValue;
-(void)setCloudMediaStateValue:(int)arg1 ;
-(int)primitiveCloudMediaStateValue;
-(void)setPrimitiveCloudMediaStateValue:(int)arg1 ;
-(float)primitiveDurationValue;
-(void)setPrimitiveDurationValue:(float)arg1 ;
-(BOOL)hasInterestingnessScoreValue;
-(void)setHasInterestingnessScoreValue:(BOOL)arg1 ;
-(BOOL)primitiveHasInterestingnessScoreValue;
-(void)setPrimitiveHasInterestingnessScoreValue:(BOOL)arg1 ;
-(void)setHasLocationValue:(BOOL)arg1 ;
-(BOOL)primitiveHasLocationValue;
-(void)setPrimitiveHasLocationValue:(BOOL)arg1 ;
-(BOOL)primitiveHasOverlayImageValue;
-(void)setPrimitiveHasOverlayImageValue:(BOOL)arg1 ;
-(BOOL)hasSyncedValue;
-(void)setHasSyncedValue:(BOOL)arg1 ;
-(BOOL)primitiveHasSyncedValue;
-(void)setPrimitiveHasSyncedValue:(BOOL)arg1 ;
-(BOOL)primitiveHasThumbnailValue;
-(void)setPrimitiveHasThumbnailValue:(BOOL)arg1 ;
-(int)hdMediaStateValue;
-(void)setHdMediaStateValue:(int)arg1 ;
-(int)primitiveHdMediaStateValue;
-(void)setPrimitiveHdMediaStateValue:(int)arg1 ;
-(int)primitiveHeightValue;
-(void)setPrimitiveHeightValue:(int)arg1 ;
-(BOOL)primitiveInfiniteDurationValue;
-(void)setPrimitiveInfiniteDurationValue:(BOOL)arg1 ;
-(float)interestingnessScoreValue;
-(void)setInterestingnessScoreValue:(float)arg1 ;
-(float)primitiveInterestingnessScoreValue;
-(void)setPrimitiveInterestingnessScoreValue:(float)arg1 ;
-(int)primitiveMediaFormatValue;
-(void)setPrimitiveMediaFormatValue:(int)arg1 ;
-(int)primitiveMediaTypeValue;
-(void)setPrimitiveMediaTypeValue:(int)arg1 ;
-(int)primitiveOrientationValue;
-(void)setPrimitiveOrientationValue:(int)arg1 ;
-(BOOL)pendingOptionalMediaSyncValue;
-(void)setPendingOptionalMediaSyncValue:(BOOL)arg1 ;
-(BOOL)primitivePendingOptionalMediaSyncValue;
-(void)setPrimitivePendingOptionalMediaSyncValue:(BOOL)arg1 ;
-(int)primitiveSourceValue;
-(void)setPrimitiveSourceValue:(int)arg1 ;
-(int)thumbnailUploadStateValue;
-(void)setThumbnailUploadStateValue:(int)arg1 ;
-(int)primitiveThumbnailUploadStateValue;
-(void)setPrimitiveThumbnailUploadStateValue:(int)arg1 ;
-(int)primitiveWidthValue;
-(void)setPrimitiveWidthValue:(int)arg1 ;
-(SCCDGallerySnapID *)objectID;
-(BOOL)hasLocationValue;
@end

