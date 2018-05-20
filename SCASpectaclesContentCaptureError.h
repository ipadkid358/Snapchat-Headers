/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:05 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCASpectaclesTemperatureTrackedEvent.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface SCASpectaclesContentCaptureError : SCASpectaclesTemperatureTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* timeOfCapture;
	NSNumber* deviceBattery;
	NSNumber* deviceStorage;
	NSNumber* bleConnected;
	NSNumber* ambientLightIntensity;
	NSNumber* sensorBeginTemperature;
	long long errorType;

}
-(void)setDeviceBattery:(long long)arg1 ;
-(void)setBleConnected:(BOOL)arg1 ;
-(void)setTimeOfCapture:(long long)arg1 ;
-(void)setAmbientLightIntensity:(long long)arg1 ;
-(void)setDeviceStorage:(long long)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(long long)getErrorType;
-(long long)getDeviceBattery;
-(long long)getDeviceStorage;
-(long long)getAmbientLightIntensity;
-(long long)getSensorBeginTemperature;
-(void)setSensorBeginTemperature:(long long)arg1 ;
-(long long)getTimeOfCapture;
-(BOOL)getBleConnected;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)asDictionary;
-(void)setErrorType:(long long)arg1 ;
@end
