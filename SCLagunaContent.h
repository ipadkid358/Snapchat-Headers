/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class SCLagunaDevice, NSNumber, NSString, NSUUID, NSData, NSDate, SCSpectaclesFile;

@interface SCLagunaContent : NSObject <NSCoding> {

	BOOL _sdSynced;
	BOOL _hdSynced;
	BOOL _pictureSynced;
	int _mediaFormat;
	int _mediaType;
	SCLagunaDevice* _device;
	unsigned long long _type;
	NSNumber* _videoDuration;
	NSString* _multisnapGroupID;
	NSUUID* _batchID;
	NSData* _key;
	NSData* _IV;
	NSString* _UUID;
	NSString* _internalContentName;
	NSDate* _timeOfCapture;
	SCSpectaclesFile* _thumbnailFile;
	SCSpectaclesFile* _sdVideoFile;
	SCSpectaclesFile* _hdVideoFile;
	SCSpectaclesFile* _imuDataFile;
	SCSpectaclesFile* _pictureFile;

}

@property (assign,nonatomic,__weak) SCLagunaDevice * device;                //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) NSString * internalContentName;                  //@synthesize internalContentName=_internalContentName - In the implementation block
@property (nonatomic,copy) NSString * UUID;                                 //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int mediaFormat;                               //@synthesize mediaFormat=_mediaFormat - In the implementation block
@property (assign,nonatomic) int mediaType;                                 //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,retain) NSData * key;                                  //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSData * IV;                                   //@synthesize IV=_IV - In the implementation block
@property (nonatomic,retain) NSDate * timeOfCapture;                        //@synthesize timeOfCapture=_timeOfCapture - In the implementation block
@property (nonatomic,retain) NSNumber * videoDuration;                      //@synthesize videoDuration=_videoDuration - In the implementation block
@property (nonatomic,retain) NSString * multisnapGroupID;                   //@synthesize multisnapGroupID=_multisnapGroupID - In the implementation block
@property (nonatomic,retain) SCSpectaclesFile * thumbnailFile;              //@synthesize thumbnailFile=_thumbnailFile - In the implementation block
@property (nonatomic,retain) SCSpectaclesFile * sdVideoFile;                //@synthesize sdVideoFile=_sdVideoFile - In the implementation block
@property (nonatomic,retain) SCSpectaclesFile * hdVideoFile;                //@synthesize hdVideoFile=_hdVideoFile - In the implementation block
@property (nonatomic,retain) SCSpectaclesFile * imuDataFile;                //@synthesize imuDataFile=_imuDataFile - In the implementation block
@property (nonatomic,retain) SCSpectaclesFile * pictureFile;                //@synthesize pictureFile=_pictureFile - In the implementation block
@property (assign,nonatomic) BOOL sdSynced;                                 //@synthesize sdSynced=_sdSynced - In the implementation block
@property (assign,nonatomic) BOOL hdSynced;                                 //@synthesize hdSynced=_hdSynced - In the implementation block
@property (assign,nonatomic) BOOL pictureSynced;                            //@synthesize pictureSynced=_pictureSynced - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentName; 
@property (nonatomic,retain) NSUUID * batchID;                              //@synthesize batchID=_batchID - In the implementation block
+(id)UUIDForSerialNumber:(id)arg1 contentName:(id)arg2 ;
+(int)_decodeMediaFormat:(int)arg1 ;
+(int)_decodeMediaType:(int)arg1 ;
+(unsigned long long)componentForType:(unsigned long long)arg1 ;
-(int)mediaFormat;
-(void)setMediaFormat:(int)arg1 ;
-(NSDate *)timeOfCapture;
-(NSString *)contentName;
-(void)setTimeOfCapture:(NSDate *)arg1 ;
-(NSData *)IV;
-(void)setIV:(NSData *)arg1 ;
-(id)localFilePathForComponent:(unsigned long long)arg1 ;
-(id)_fileForComponent:(unsigned long long)arg1 ;
-(BOOL)isComponentApplicable:(unsigned long long)arg1 ;
-(BOOL)hdSynced;
-(BOOL)sdSynced;
-(BOOL)pictureSynced;
-(id)dataForComponent:(unsigned long long)arg1 range:(NSRange)arg2 ;
-(SCSpectaclesFile *)hdVideoFile;
-(SCSpectaclesFile *)sdVideoFile;
-(SCSpectaclesFile *)thumbnailFile;
-(SCSpectaclesFile *)pictureFile;
-(SCSpectaclesFile *)imuDataFile;
-(BOOL)isSyncedForComponent:(unsigned long long)arg1 ;
-(id)_descriptionForComponent:(unsigned long long)arg1 ;
-(NSUUID *)batchID;
-(NSString *)multisnapGroupID;
-(void)_removeAllFiles;
-(BOOL)isDownloadCompleteForComponent:(unsigned long long)arg1 ;
-(long long)localSizeForComponent:(unsigned long long)arg1 ;
-(long long)remoteSizeForComponent:(unsigned long long)arg1 ;
-(id)_syncedStatus:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 device:(id)arg2 ;
-(BOOL)isPausedForComponent:(unsigned long long)arg1 ;
-(id)dataForComponent:(unsigned long long)arg1 ;
-(void)setupWithDevice:(id)arg1 cache:(id)arg2 ;
-(float)downloadProgressForComponent:(unsigned long long)arg1 ;
-(void)markPictureSynced;
-(void)markSdSynced;
-(void)markHdSynced;
-(void)markCorrupted;
-(void)setMultisnapGroupID:(NSString *)arg1 ;
-(void)setBatchID:(NSUUID *)arg1 ;
-(NSString *)internalContentName;
-(void)setInternalContentName:(NSString *)arg1 ;
-(void)setThumbnailFile:(SCSpectaclesFile *)arg1 ;
-(void)setSdVideoFile:(SCSpectaclesFile *)arg1 ;
-(void)setHdVideoFile:(SCSpectaclesFile *)arg1 ;
-(void)setImuDataFile:(SCSpectaclesFile *)arg1 ;
-(void)setPictureFile:(SCSpectaclesFile *)arg1 ;
-(void)setSdSynced:(BOOL)arg1 ;
-(void)setHdSynced:(BOOL)arg1 ;
-(void)setPictureSynced:(BOOL)arg1 ;
-(void)scheduleHDContentUploadForSnap:(id)arg1 userSession:(id)arg2 ;
-(unsigned long long)requiredComponentForTransferPersistence;
-(id)optionalMediaUploadDataProvider;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSData *)key;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSString *)UUID;
-(void)setKey:(NSData *)arg1 ;
-(id)longDescription;
-(int)mediaType;
-(NSNumber *)videoDuration;
-(void)setMediaType:(int)arg1 ;
-(void)setVideoDuration:(NSNumber *)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(SCLagunaDevice *)device;
-(void)setDevice:(SCLagunaDevice *)arg1 ;
@end
