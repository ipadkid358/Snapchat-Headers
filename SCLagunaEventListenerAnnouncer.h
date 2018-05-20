/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCLagunaEventListener.h>

@class NSString;

@interface SCLagunaEventListenerAnnouncer : NSObject <SCLagunaEventListener> {

	mutex _mutex;
	shared_ptr<std::__1::vector<__weak id<SCLagunaEventListener>, std::__1::allocator<__weak id<SCLagunaEventListener> > > >* _listeners;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)lagunaOnBluetoothStateUpdate:(long long)arg1 ;
-(void)lagunaOnPairingStateUpdate:(unsigned long long)arg1 deviceInformation:(id)arg2 ;
-(void)lagunaOnTransferUpdate:(id)arg1 updateType:(unsigned long long)arg2 ;
-(void)lagunaOnDeviceFileIndexUpdate:(id)arg1 ;
-(void)lagunaOnDeviceFirmwareUpdate:(id)arg1 updateType:(unsigned long long)arg2 progress:(float)arg3 ;
-(void)lagunaOnDeviceFirmwareDigestFetched:(id)arg1 digest:(id)arg2 ;
-(void)lagunaOnDeviceFirmwareScheduledUpdateCompleted:(id)arg1 userInfo:(id)arg2 error:(id)arg3 ;
-(void)lagunaOnDeviceStateUpdate:(id)arg1 ;
-(void)lagunaOnDeviceInfoUpdate:(id)arg1 updateType:(unsigned long long)arg2 ;
-(void)lagunaOnDevicePaired:(id)arg1 ;
-(void)lagunaOnDeviceUnpaired:(id)arg1 reason:(unsigned long long)arg2 ;
-(void)lagunaOnDeviceAlertNotification:(id)arg1 reason:(unsigned long long)arg2 ;
-(void)lagunaOnDeviceForgotten:(id)arg1 ;
-(void)lagunaOnDeviceLogsUpdate:(id)arg1 updateType:(unsigned long long)arg2 ;
-(void)lagunaOnShareWifiCredentialsUpdate:(id)arg1 status:(unsigned long long)arg2 ;
-(void)lagunaOnDeviceUploadToCloudEvent:(id)arg1 event:(unsigned long long)arg2 ;
-(void)lagunaOnDeviceReceivedClientId:(id)arg1 clientId:(id)arg2 requestAuthzCode:(BOOL)arg3 ;
-(void)lagunaOnDeviceReceivedWifiAPList:(id)arg1 wifiAPList:(id)arg2 ;
-(void)lagunaOnDeviceReceivedLastCloudUploadTime:(id)arg1 uploadTime:(id)arg2 ;
-(NSString *)description;
-(BOOL)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

