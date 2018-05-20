/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSpectaclesResponseMessage.h>

@class SCLagunaRpcResponse;

@interface SCSpectaclesMalibuRpcResponseMessage : SCSpectaclesResponseMessage {

	SCLagunaRpcResponse* _rpcResponse;

}

@property (nonatomic,readonly) SCLagunaRpcResponse * rpcResponse;              //@synthesize rpcResponse=_rpcResponse - In the implementation block
+(id)_descriptionForFailureReason:(int)arg1 ;
+(unsigned long long)_convertMLBAPState:(int)arg1 ;
-(id)ambaTemperature;
-(id)nordicTemperature;
-(id)wifiTemperature;
-(id)coulombCounterTemperature;
-(BOOL)receivedUserAssociationDoneMessage;
-(BOOL)hasDeviceColor;
-(BOOL)hasWifiState;
-(BOOL)contentCleared;
-(id)mediaCount;
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
-(id)peerPublicKey;
-(id)peerVerificationNonce;
-(id)peerVerificationCiphertext;
-(id)peerVerificationTag;
-(id)encryptionSetupNonce;
-(BOOL)requestAuthzCode;
-(id)cloudUploadClientId;
-(id)knownWifiAPList;
-(BOOL)setWifiAPListResponse;
-(id)lastCloudUploadTime;
-(BOOL)shipmodeSet;
-(id)initWithRpcResponse:(id)arg1 request:(id)arg2 ;
-(SCLagunaRpcResponse *)rpcResponse;
-(id)description;
-(id)batteryLevel;
-(long long)deviceColor;
-(id)serialNumber;
-(id)hardwareVersion;
-(id)firmwareVersion;
-(long long)responseStatus;
@end

