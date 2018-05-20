/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSpectaclesContentMetadata.h>

@class MLBMediaFileMetadata;

@interface SCSpectaclesMalibuContentMetadata : SCSpectaclesContentMetadata {

	MLBMediaFileMetadata* _underlyingMalibuProto;

}

@property (nonatomic,retain) MLBMediaFileMetadata * underlyingMalibuProto;              //@synthesize underlyingMalibuProto=_underlyingMalibuProto - In the implementation block
-(unsigned long long)serializedSize;
-(id)nordicLastBootSession;
-(id)bleConnected;
-(id)timeOfCapture;
-(id)ambientLightIntensity;
-(id)ambaTemperature;
-(id)nordicTemperature;
-(unsigned long long)buttonPressType;
-(id)sensorBeginTemperature;
-(id)sensorEndTemperature;
-(id)multisnapGroupID;
-(id)randBytes;
-(BOOL)isHEVC;
-(id)multisnapIndex;
-(id)batterySoc;
-(id)storagePercentage;
-(id)sensorCurrentDgc;
-(id)sensorCurrentAgc;
-(id)startEvIndex;
-(id)endEvIndex;
-(id)bleUUID;
-(id)snapcodeDetected;
-(id)userAssociated;
-(id)initWithMalibuData:(id)arg1 ;
-(MLBMediaFileMetadata *)underlyingMalibuProto;
-(void)setUnderlyingMalibuProto:(MLBMediaFileMetadata *)arg1 ;
-(id)description;
-(id)videoDuration;
-(unsigned long long)contentType;
-(id)firmwareVersion;
@end
