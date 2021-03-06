/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSpectaclesResponseMessage.h>

@class VLKNrfResponse;

@interface SCSpectaclesLagunaNrfResponseMessage : SCSpectaclesResponseMessage {

	VLKNrfResponse* _nrfResponse;

}

@property (nonatomic,readonly) VLKNrfResponse * nrfResponse;              //@synthesize nrfResponse=_nrfResponse - In the implementation block
+(id)_descriptionForFailureReason:(int)arg1 ;
-(id)ambaTemperature;
-(id)nordicTemperature;
-(id)wifiTemperature;
-(id)storagePercentage;
-(id)coulombCounterTemperature;
-(VLKNrfResponse *)nrfResponse;
-(BOOL)hasNrfError;
-(BOOL)hasDeviceColor;
-(BOOL)hasHasSpaceToRecord;
-(BOOL)hasSpaceToRecord;
-(BOOL)hasWifiState;
-(BOOL)contentCleared;
-(BOOL)ambaCrashed;
-(BOOL)videoRecordingHasStarted;
-(id)mediaCount;
-(BOOL)wifiRateLimitingActive;
-(id)initWithNrfResponse:(id)arg1 request:(id)arg2 ;
-(unsigned long long)nrfErrorType;
-(id)voltageLevel;
-(BOOL)hasCharging;
-(BOOL)charging;
-(BOOL)hasBluetoothEvent;
-(long long)bluetoothEvent;
-(BOOL)wifiOn;
-(BOOL)hasFirmwareUpdateResponse;
-(long long)firmwareUpdateResponseType;
-(BOOL)hasPatchApplied;
-(BOOL)patchApplied;
-(id)firmwareDigest;
-(id)backgroundUpdateParameters;
-(id)backgroundUpdateFailureReason;
-(id)description;
-(id)batteryLevel;
-(long long)deviceColor;
-(id)serialNumber;
-(id)hardwareVersion;
-(id)firmwareVersion;
-(id)ipAddress;
-(long long)responseStatus;
-(id)crashReports;
@end

