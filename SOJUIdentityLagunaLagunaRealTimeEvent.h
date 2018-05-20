/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:54 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUIdentityLagunaLagunaRealTimeEvent.h>
@class NSString, NSNumber;


@protocol SOJUIdentityLagunaLagunaRealTimeEvent <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * eventName; 
@property (nonatomic,copy,readonly) NSString * userId; 
@property (nonatomic,copy,readonly) NSString * sessionId; 
@property (nonatomic,copy,readonly) NSString * pairingSessionId; 
@property (nonatomic,copy,readonly) NSString * userInitiationPage; 
@property (nonatomic,copy,readonly) NSString * pairingType; 
@property (nonatomic,copy,readonly) NSNumber * otherPairedDeviceCount; 
@property (nonatomic,copy,readonly) NSNumber * durationInMs; 
@property (nonatomic,copy,readonly) NSString * nordicLastBootSession; 
@property (nonatomic,copy,readonly) NSString * deviceId; 
@property (nonatomic,copy,readonly) NSNumber * deviceBattery; 
@property (nonatomic,copy,readonly) NSString * bleUuid; 
@property (nonatomic,copy,readonly) NSNumber * bleConnected; 
@property (nonatomic,copy,readonly) NSNumber * timeOfCapture; 
@property (nonatomic,copy,readonly) NSString * contentName; 
@property (nonatomic,copy,readonly) NSNumber * hdVideoFileSize; 
@property (nonatomic,copy,readonly) NSString * hdVideoFileName; 
@property (nonatomic,copy,readonly) NSNumber * sdVideoFileSize; 
@property (nonatomic,copy,readonly) NSString * sdVideoFileName; 
@property (nonatomic,copy,readonly) NSNumber * thumbnailFileSize; 
@property (nonatomic,copy,readonly) NSString * thumbnailFileName; 
@property (nonatomic,copy,readonly) NSString * firmwareVersion; 
@property (nonatomic,copy,readonly) NSNumber * ambientLightIntensity; 
@property (nonatomic,copy,readonly) NSNumber * deviceBatteryAtStart; 
@property (nonatomic,copy,readonly) NSNumber * deviceBatteryAtEnd; 
@property (nonatomic,copy,readonly) NSNumber * ambaTemperature; 
@property (nonatomic,copy,readonly) NSNumber * nordicTemperature; 
@property (nonatomic,copy,readonly) NSString * buttonPressType; 
@property (nonatomic,copy,readonly) NSNumber * deviceStorage; 
@property (nonatomic,copy,readonly) NSString * transferBatchId; 
@property (nonatomic,copy,readonly) NSNumber * dataResponseSize; 
@property (nonatomic,copy,readonly) NSNumber * numberOfSdVideoBeingTransferred; 
@property (nonatomic,copy,readonly) NSNumber * numberOfHdVideoBeingTransferred; 
@property (nonatomic,copy,readonly) NSNumber * totalFileSizeTransferred; 
@property (nonatomic,copy,readonly) NSString * transferChannel; 
@property (nonatomic,copy,readonly) NSNumber * timeOfTransferStartUtc; 
@property (nonatomic,copy,readonly) NSNumber * timeOfTransferEndUtc; 
@property (nonatomic,copy,readonly) NSNumber * bluetoothBootTimeInMs; 
@property (nonatomic,copy,readonly) NSNumber * wifiBootTimeInMs; 
@property (nonatomic,copy,readonly) NSString * updateSessionId; 
@property (nonatomic,copy,readonly) NSString * failureReason; 
@property (nonatomic,copy,readonly) NSNumber * transferDurationInMs; 
@property (nonatomic,copy,readonly) NSNumber * downloadDurationInMs; 
@property (nonatomic,copy,readonly) NSNumber * updateDurationInMs; 
@required
-(NSString *)pairingSessionId;
-(NSString *)userInitiationPage;
-(NSNumber *)otherPairedDeviceCount;
-(NSNumber *)durationInMs;
-(NSString *)nordicLastBootSession;
-(NSNumber *)deviceBattery;
-(NSString *)bleUuid;
-(NSNumber *)bleConnected;
-(NSNumber *)timeOfCapture;
-(NSString *)contentName;
-(NSNumber *)hdVideoFileSize;
-(NSString *)hdVideoFileName;
-(NSNumber *)sdVideoFileSize;
-(NSString *)sdVideoFileName;
-(NSNumber *)thumbnailFileSize;
-(NSString *)thumbnailFileName;
-(NSNumber *)ambientLightIntensity;
-(NSNumber *)deviceBatteryAtStart;
-(NSNumber *)deviceBatteryAtEnd;
-(NSNumber *)ambaTemperature;
-(NSNumber *)nordicTemperature;
-(NSString *)buttonPressType;
-(NSNumber *)deviceStorage;
-(NSString *)transferBatchId;
-(NSNumber *)dataResponseSize;
-(NSNumber *)numberOfSdVideoBeingTransferred;
-(NSNumber *)numberOfHdVideoBeingTransferred;
-(NSNumber *)totalFileSizeTransferred;
-(NSString *)transferChannel;
-(NSNumber *)timeOfTransferStartUtc;
-(NSNumber *)timeOfTransferEndUtc;
-(NSNumber *)bluetoothBootTimeInMs;
-(NSNumber *)wifiBootTimeInMs;
-(NSString *)updateSessionId;
-(NSNumber *)transferDurationInMs;
-(NSNumber *)downloadDurationInMs;
-(NSNumber *)updateDurationInMs;
-(NSString *)sessionId;
-(NSString *)eventName;
-(NSString *)userId;
-(NSString *)pairingType;
-(NSString *)failureReason;
-(NSString *)firmwareVersion;
-(NSString *)deviceId;

@end


@class NSString, NSNumber;

@interface SOJUIdentityLagunaLagunaRealTimeEvent : NSObject <SOJUIdentityLagunaLagunaRealTimeEvent> {

	NSString* _eventName;
	NSString* _userId;
	NSString* _sessionId;
	NSString* _pairingSessionId;
	NSString* _userInitiationPage;
	NSString* _pairingType;
	NSNumber* _otherPairedDeviceCount;
	NSNumber* _durationInMs;
	NSString* _nordicLastBootSession;
	NSString* _deviceId;
	NSNumber* _deviceBattery;
	NSString* _bleUuid;
	NSNumber* _bleConnected;
	NSNumber* _timeOfCapture;
	NSString* _contentName;
	NSNumber* _hdVideoFileSize;
	NSString* _hdVideoFileName;
	NSNumber* _sdVideoFileSize;
	NSString* _sdVideoFileName;
	NSNumber* _thumbnailFileSize;
	NSString* _thumbnailFileName;
	NSString* _firmwareVersion;
	NSNumber* _ambientLightIntensity;
	NSNumber* _deviceBatteryAtStart;
	NSNumber* _deviceBatteryAtEnd;
	NSNumber* _ambaTemperature;
	NSNumber* _nordicTemperature;
	NSString* _buttonPressType;
	NSNumber* _deviceStorage;
	NSString* _transferBatchId;
	NSNumber* _dataResponseSize;
	NSNumber* _numberOfSdVideoBeingTransferred;
	NSNumber* _numberOfHdVideoBeingTransferred;
	NSNumber* _totalFileSizeTransferred;
	NSString* _transferChannel;
	NSNumber* _timeOfTransferStartUtc;
	NSNumber* _timeOfTransferEndUtc;
	NSNumber* _bluetoothBootTimeInMs;
	NSNumber* _wifiBootTimeInMs;
	NSString* _updateSessionId;
	NSString* _failureReason;
	NSNumber* _transferDurationInMs;
	NSNumber* _downloadDurationInMs;
	NSNumber* _updateDurationInMs;

}

@property (nonatomic,copy,readonly) NSString * eventName;                                    //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,copy,readonly) NSString * userId;                                       //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionId;                                    //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,copy,readonly) NSString * pairingSessionId;                             //@synthesize pairingSessionId=_pairingSessionId - In the implementation block
@property (nonatomic,copy,readonly) NSString * userInitiationPage;                           //@synthesize userInitiationPage=_userInitiationPage - In the implementation block
@property (nonatomic,copy,readonly) NSString * pairingType;                                  //@synthesize pairingType=_pairingType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * otherPairedDeviceCount;                       //@synthesize otherPairedDeviceCount=_otherPairedDeviceCount - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * durationInMs;                                 //@synthesize durationInMs=_durationInMs - In the implementation block
@property (nonatomic,copy,readonly) NSString * nordicLastBootSession;                        //@synthesize nordicLastBootSession=_nordicLastBootSession - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceId;                                     //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * deviceBattery;                                //@synthesize deviceBattery=_deviceBattery - In the implementation block
@property (nonatomic,copy,readonly) NSString * bleUuid;                                      //@synthesize bleUuid=_bleUuid - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * bleConnected;                                 //@synthesize bleConnected=_bleConnected - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timeOfCapture;                                //@synthesize timeOfCapture=_timeOfCapture - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentName;                                  //@synthesize contentName=_contentName - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * hdVideoFileSize;                              //@synthesize hdVideoFileSize=_hdVideoFileSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * hdVideoFileName;                              //@synthesize hdVideoFileName=_hdVideoFileName - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * sdVideoFileSize;                              //@synthesize sdVideoFileSize=_sdVideoFileSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * sdVideoFileName;                              //@synthesize sdVideoFileName=_sdVideoFileName - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * thumbnailFileSize;                            //@synthesize thumbnailFileSize=_thumbnailFileSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * thumbnailFileName;                            //@synthesize thumbnailFileName=_thumbnailFileName - In the implementation block
@property (nonatomic,copy,readonly) NSString * firmwareVersion;                              //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * ambientLightIntensity;                        //@synthesize ambientLightIntensity=_ambientLightIntensity - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * deviceBatteryAtStart;                         //@synthesize deviceBatteryAtStart=_deviceBatteryAtStart - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * deviceBatteryAtEnd;                           //@synthesize deviceBatteryAtEnd=_deviceBatteryAtEnd - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * ambaTemperature;                              //@synthesize ambaTemperature=_ambaTemperature - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * nordicTemperature;                            //@synthesize nordicTemperature=_nordicTemperature - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonPressType;                              //@synthesize buttonPressType=_buttonPressType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * deviceStorage;                                //@synthesize deviceStorage=_deviceStorage - In the implementation block
@property (nonatomic,copy,readonly) NSString * transferBatchId;                              //@synthesize transferBatchId=_transferBatchId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * dataResponseSize;                             //@synthesize dataResponseSize=_dataResponseSize - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numberOfSdVideoBeingTransferred;              //@synthesize numberOfSdVideoBeingTransferred=_numberOfSdVideoBeingTransferred - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numberOfHdVideoBeingTransferred;              //@synthesize numberOfHdVideoBeingTransferred=_numberOfHdVideoBeingTransferred - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * totalFileSizeTransferred;                     //@synthesize totalFileSizeTransferred=_totalFileSizeTransferred - In the implementation block
@property (nonatomic,copy,readonly) NSString * transferChannel;                              //@synthesize transferChannel=_transferChannel - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timeOfTransferStartUtc;                       //@synthesize timeOfTransferStartUtc=_timeOfTransferStartUtc - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * timeOfTransferEndUtc;                         //@synthesize timeOfTransferEndUtc=_timeOfTransferEndUtc - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * bluetoothBootTimeInMs;                        //@synthesize bluetoothBootTimeInMs=_bluetoothBootTimeInMs - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * wifiBootTimeInMs;                             //@synthesize wifiBootTimeInMs=_wifiBootTimeInMs - In the implementation block
@property (nonatomic,copy,readonly) NSString * updateSessionId;                              //@synthesize updateSessionId=_updateSessionId - In the implementation block
@property (nonatomic,copy,readonly) NSString * failureReason;                                //@synthesize failureReason=_failureReason - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * transferDurationInMs;                         //@synthesize transferDurationInMs=_transferDurationInMs - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * downloadDurationInMs;                         //@synthesize downloadDurationInMs=_downloadDurationInMs - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * updateDurationInMs;                           //@synthesize updateDurationInMs=_updateDurationInMs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)toJson;
-(long long)eventNameEnum;
-(int)otherPairedDeviceCountValue;
-(long long)durationInMsValue;
-(int)deviceBatteryValue;
-(BOOL)bleConnectedValue;
-(long long)timeOfCaptureValue;
-(long long)hdVideoFileSizeValue;
-(long long)sdVideoFileSizeValue;
-(long long)thumbnailFileSizeValue;
-(int)ambientLightIntensityValue;
-(long long)deviceBatteryAtStartValue;
-(long long)deviceBatteryAtEndValue;
-(int)ambaTemperatureValue;
-(int)nordicTemperatureValue;
-(long long)deviceStorageValue;
-(long long)dataResponseSizeValue;
-(int)numberOfSdVideoBeingTransferredValue;
-(int)numberOfHdVideoBeingTransferredValue;
-(int)totalFileSizeTransferredValue;
-(long long)timeOfTransferStartUtcValue;
-(long long)timeOfTransferEndUtcValue;
-(long long)bluetoothBootTimeInMsValue;
-(long long)wifiBootTimeInMsValue;
-(long long)transferDurationInMsValue;
-(long long)downloadDurationInMsValue;
-(long long)updateDurationInMsValue;
-(NSString *)pairingSessionId;
-(NSString *)userInitiationPage;
-(NSNumber *)otherPairedDeviceCount;
-(NSNumber *)durationInMs;
-(NSString *)nordicLastBootSession;
-(NSNumber *)deviceBattery;
-(NSString *)bleUuid;
-(NSNumber *)bleConnected;
-(NSNumber *)timeOfCapture;
-(NSString *)contentName;
-(NSNumber *)hdVideoFileSize;
-(NSString *)hdVideoFileName;
-(NSNumber *)sdVideoFileSize;
-(NSString *)sdVideoFileName;
-(NSNumber *)thumbnailFileSize;
-(NSString *)thumbnailFileName;
-(NSNumber *)ambientLightIntensity;
-(NSNumber *)deviceBatteryAtStart;
-(NSNumber *)deviceBatteryAtEnd;
-(NSNumber *)ambaTemperature;
-(NSNumber *)nordicTemperature;
-(NSString *)buttonPressType;
-(NSNumber *)deviceStorage;
-(NSString *)transferBatchId;
-(NSNumber *)dataResponseSize;
-(NSNumber *)numberOfSdVideoBeingTransferred;
-(NSNumber *)numberOfHdVideoBeingTransferred;
-(NSNumber *)totalFileSizeTransferred;
-(NSString *)transferChannel;
-(NSNumber *)timeOfTransferStartUtc;
-(NSNumber *)timeOfTransferEndUtc;
-(NSNumber *)bluetoothBootTimeInMs;
-(NSNumber *)wifiBootTimeInMs;
-(NSString *)updateSessionId;
-(NSNumber *)transferDurationInMs;
-(NSNumber *)downloadDurationInMs;
-(NSNumber *)updateDurationInMs;
-(id)initWithEventName:(id)arg1 userId:(id)arg2 sessionId:(id)arg3 pairingSessionId:(id)arg4 userInitiationPage:(id)arg5 pairingType:(id)arg6 otherPairedDeviceCount:(id)arg7 durationInMs:(id)arg8 nordicLastBootSession:(id)arg9 deviceId:(id)arg10 deviceBattery:(id)arg11 bleUuid:(id)arg12 bleConnected:(id)arg13 timeOfCapture:(id)arg14 contentName:(id)arg15 hdVideoFileSize:(id)arg16 hdVideoFileName:(id)arg17 sdVideoFileSize:(id)arg18 sdVideoFileName:(id)arg19 thumbnailFileSize:(id)arg20 thumbnailFileName:(id)arg21 firmwareVersion:(id)arg22 ambientLightIntensity:(id)arg23 deviceBatteryAtStart:(id)arg24 deviceBatteryAtEnd:(id)arg25 ambaTemperature:(id)arg26 nordicTemperature:(id)arg27 buttonPressType:(id)arg28 deviceStorage:(id)arg29 transferBatchId:(id)arg30 dataResponseSize:(id)arg31 numberOfSdVideoBeingTransferred:(id)arg32 numberOfHdVideoBeingTransferred:(id)arg33 totalFileSizeTransferred:(id)arg34 transferChannel:(id)arg35 timeOfTransferStartUtc:(id)arg36 timeOfTransferEndUtc:(id)arg37 bluetoothBootTimeInMs:(id)arg38 wifiBootTimeInMs:(id)arg39 updateSessionId:(id)arg40 failureReason:(id)arg41 transferDurationInMs:(id)arg42 downloadDurationInMs:(id)arg43 updateDurationInMs:(id)arg44 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)sessionId;
-(NSString *)eventName;
-(NSString *)userId;
-(NSString *)pairingType;
-(id)toDictionary;
-(NSString *)failureReason;
-(NSString *)firmwareVersion;
-(NSString *)deviceId;
@end

