/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SCSpectaclesFirmwareVersion, SCSpectaclesHardwareVersion;

@interface SCSpectaclesPairingDeviceInformation : NSObject {

	NSString* _serialNumber;
	SCSpectaclesFirmwareVersion* _firmwareVersion;
	SCSpectaclesHardwareVersion* _hardwareVersion;
	unsigned long long _bleState;
	unsigned long long _btcState;

}

@property (nonatomic,copy) NSString * serialNumber;                                      //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,retain) SCSpectaclesFirmwareVersion * firmwareVersion;              //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,retain) SCSpectaclesHardwareVersion * hardwareVersion;              //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (assign,nonatomic) unsigned long long bleState;                                //@synthesize bleState=_bleState - In the implementation block
@property (assign,nonatomic) unsigned long long btcState;                                //@synthesize btcState=_btcState - In the implementation block
-(void)setBleState:(unsigned long long)arg1 ;
-(void)setBtcState:(unsigned long long)arg1 ;
-(unsigned long long)bleState;
-(unsigned long long)btcState;
-(NSString *)serialNumber;
-(void)setHardwareVersion:(SCSpectaclesHardwareVersion *)arg1 ;
-(void)setFirmwareVersion:(SCSpectaclesFirmwareVersion *)arg1 ;
-(SCSpectaclesHardwareVersion *)hardwareVersion;
-(SCSpectaclesFirmwareVersion *)firmwareVersion;
-(void)setSerialNumber:(NSString *)arg1 ;
@end

