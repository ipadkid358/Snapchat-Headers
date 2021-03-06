/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, SCSpectaclesHardwareVersion, SCSpectaclesFirmwareVersion, NSDate;

@interface SCLagunaFirmwareUpdateUserInfo : NSObject <NSCoding> {

	BOOL _updateIsActive;
	NSString* _deviceId;
	SCSpectaclesHardwareVersion* _hardwareVersion;
	SCSpectaclesFirmwareVersion* _firmwareVersion;
	NSString* _sessionId;
	NSDate* _sessionStartTime;
	SCSpectaclesFirmwareVersion* _targetFirmwareVersion;
	long long _downloadDurationInMs;
	long long _transferDurationInMs;
	long long _updateDurationInMs;

}

@property (nonatomic,copy) NSString * deviceId;                                                //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,retain) SCSpectaclesHardwareVersion * hardwareVersion;                    //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (nonatomic,retain) SCSpectaclesFirmwareVersion * firmwareVersion;                    //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,copy) NSString * sessionId;                                               //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,retain) NSDate * sessionStartTime;                                        //@synthesize sessionStartTime=_sessionStartTime - In the implementation block
@property (nonatomic,retain) SCSpectaclesFirmwareVersion * targetFirmwareVersion;              //@synthesize targetFirmwareVersion=_targetFirmwareVersion - In the implementation block
@property (assign,nonatomic) BOOL updateIsActive;                                              //@synthesize updateIsActive=_updateIsActive - In the implementation block
@property (assign,nonatomic) long long downloadDurationInMs;                                   //@synthesize downloadDurationInMs=_downloadDurationInMs - In the implementation block
@property (assign,nonatomic) long long transferDurationInMs;                                   //@synthesize transferDurationInMs=_transferDurationInMs - In the implementation block
@property (assign,nonatomic) long long updateDurationInMs;                                     //@synthesize updateDurationInMs=_updateDurationInMs - In the implementation block
-(long long)transferDurationInMs;
-(long long)downloadDurationInMs;
-(long long)updateDurationInMs;
-(void)setTransferDurationInMs:(long long)arg1 ;
-(void)setDownloadDurationInMs:(long long)arg1 ;
-(void)setUpdateDurationInMs:(long long)arg1 ;
-(void)setTargetFirmwareVersion:(SCSpectaclesFirmwareVersion *)arg1 ;
-(SCSpectaclesFirmwareVersion *)targetFirmwareVersion;
-(BOOL)updateIsActive;
-(void)setUpdateIsActive:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(NSDate *)sessionStartTime;
-(void)setSessionStartTime:(NSDate *)arg1 ;
-(void)setDeviceId:(NSString *)arg1 ;
-(void)setHardwareVersion:(SCSpectaclesHardwareVersion *)arg1 ;
-(void)setFirmwareVersion:(SCSpectaclesFirmwareVersion *)arg1 ;
-(SCSpectaclesHardwareVersion *)hardwareVersion;
-(SCSpectaclesFirmwareVersion *)firmwareVersion;
-(NSString *)deviceId;
@end

