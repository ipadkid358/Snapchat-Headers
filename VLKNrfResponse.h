/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:59 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, VLKNrfDebugReport, VLKHardwareVersion, VLKNrfTemperatureReport, VLKNrfDiffUpdateResponse, VLKAmbaFsStatus, NSData, VLKNrfAuthResponse, VLKNrfBackgroundUpdateResponse, VLKNrfBatteryInfo, VLKNrfEventLogData, VLKNrfFirmwareVersionInfo;

@interface VLKNrfResponse : GPBMessage

@property (assign,nonatomic) int mediaCount; 
@property (assign,nonatomic) BOOL hasMediaCount; 
@property (assign,nonatomic) int batteryLevel; 
@property (assign,nonatomic) BOOL hasBatteryLevel; 
@property (nonatomic,copy) NSString * errorMessage; 
@property (assign,nonatomic) BOOL hasErrorMessage; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int deviceColor; 
@property (assign,nonatomic) BOOL hasDeviceColor; 
@property (nonatomic,retain) VLKNrfDebugReport * debugReport; 
@property (assign,nonatomic) BOOL hasDebugReport; 
@property (nonatomic,copy) NSString * firmwareVersion; 
@property (assign,nonatomic) BOOL hasFirmwareVersion; 
@property (nonatomic,copy) NSString * serialNumber; 
@property (assign,nonatomic) BOOL hasSerialNumber; 
@property (assign,nonatomic) int wifiState; 
@property (assign,nonatomic) BOOL hasWifiState; 
@property (assign,nonatomic) BOOL wifiRateLimitingActive; 
@property (assign,nonatomic) BOOL hasWifiRateLimitingActive; 
@property (nonatomic,retain) VLKHardwareVersion * hardwareVersion; 
@property (assign,nonatomic) BOOL hasHardwareVersion; 
@property (nonatomic,retain) VLKNrfTemperatureReport * temperatureReport; 
@property (assign,nonatomic) BOOL hasTemperatureReport; 
@property (assign,nonatomic) int bluetoothClassicEvent; 
@property (assign,nonatomic) BOOL hasBluetoothClassicEvent; 
@property (assign,nonatomic) BOOL mediaUpdated; 
@property (assign,nonatomic) BOOL hasMediaUpdated; 
@property (assign,nonatomic) int storagePercent; 
@property (assign,nonatomic) BOOL hasStoragePercent; 
@property (assign,nonatomic) BOOL ambaCrashed; 
@property (assign,nonatomic) BOOL hasAmbaCrashed; 
@property (nonatomic,retain) VLKNrfDiffUpdateResponse * nrfDiffUpdateResponse; 
@property (assign,nonatomic) BOOL hasNrfDiffUpdateResponse; 
@property (assign,nonatomic) BOOL contentCleared; 
@property (assign,nonatomic) BOOL hasContentCleared; 
@property (assign,nonatomic) int highTempState; 
@property (assign,nonatomic) BOOL hasHighTempState; 
@property (assign,nonatomic) BOOL sawBackupPairingConfirmationTap; 
@property (assign,nonatomic) BOOL hasSawBackupPairingConfirmationTap; 
@property (assign,nonatomic) BOOL videoRecordingHasStarted; 
@property (assign,nonatomic) BOOL hasVideoRecordingHasStarted; 
@property (nonatomic,retain) VLKAmbaFsStatus * ambaFsStatus; 
@property (assign,nonatomic) BOOL hasAmbaFsStatus; 
@property (nonatomic,copy) NSData * logMessage; 
@property (assign,nonatomic) BOOL hasLogMessage; 
@property (nonatomic,copy) NSData * gapAddress; 
@property (assign,nonatomic) BOOL hasGapAddress; 
@property (assign,nonatomic) int wifiRequestResult; 
@property (assign,nonatomic) BOOL hasWifiRequestResult; 
@property (nonatomic,copy) NSString * wifiName; 
@property (assign,nonatomic) BOOL hasWifiName; 
@property (nonatomic,retain) VLKNrfAuthResponse * nrfAuthResponse; 
@property (assign,nonatomic) BOOL hasNrfAuthResponse; 
@property (nonatomic,retain) VLKNrfBackgroundUpdateResponse * nrfBackgroundUpdateResponse; 
@property (assign,nonatomic) BOOL hasNrfBackgroundUpdateResponse; 
@property (nonatomic,retain) VLKNrfBatteryInfo * batteryInfo; 
@property (assign,nonatomic) BOOL hasBatteryInfo; 
@property (nonatomic,retain) VLKNrfEventLogData * nrfEventLogData; 
@property (assign,nonatomic) BOOL hasNrfEventLogData; 
@property (nonatomic,copy) NSString * ipAddress; 
@property (assign,nonatomic) BOOL hasIpAddress; 
@property (assign,nonatomic) int nrfChargerState; 
@property (assign,nonatomic) BOOL hasNrfChargerState; 
@property (nonatomic,retain) VLKNrfFirmwareVersionInfo * firmwareVersionInfo; 
@property (assign,nonatomic) BOOL hasFirmwareVersionInfo; 
@property (assign,nonatomic) int latestMediaType; 
@property (assign,nonatomic) BOOL hasLatestMediaType; 
@property (assign,nonatomic) int videoCount; 
@property (assign,nonatomic) BOOL hasVideoCount; 
@property (assign,nonatomic) int photoCount; 
@property (assign,nonatomic) BOOL hasPhotoCount; 
@property (nonatomic,copy) NSData * macAddress; 
@property (assign,nonatomic) BOOL hasMacAddress; 
@property (assign,nonatomic) int nrfError; 
@property (assign,nonatomic) BOOL hasNrfError; 
+(id)descriptor;
@end
