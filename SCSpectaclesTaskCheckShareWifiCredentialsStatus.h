/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSpectaclesTask.h>

@class SCLagunaDevice;

@interface SCSpectaclesTaskCheckShareWifiCredentialsStatus : SCSpectaclesTask {

	SCLagunaDevice* _device;
	unsigned long long _wifiSharingStatus;

}

@property (nonatomic,__weak,readonly) SCLagunaDevice * device;                  //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) unsigned long long wifiSharingStatus;              //@synthesize wifiSharingStatus=_wifiSharingStatus - In the implementation block
-(id)nextRequest:(long long)arg1 ;
-(double)requiredDelay;
-(unsigned long long)wifiSharingStatus;
-(void)setWifiSharingStatus:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(BOOL)isFinished;
-(BOOL)handleResponse:(id)arg1 ;
-(SCLagunaDevice *)device;
-(id)initWithDevice:(id)arg1 ;
@end

