/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSpectaclesDeviceEventListener.h>
#import <Snapchat/SCSpectaclesDeviceNamerDelegate.h>

@protocol SCSpectaclesDeviceStoreDelegate, SCSpectaclesCrashLogger, SCPerforming, SCLagunaLibraryLogger;
@class SCSpectaclesDeviceNamer, SCLagunaEventListenerAnnouncer, NSDictionary, SCSpectaclesCache, SCSpectaclesCBCentralManager, NSMutableDictionary, NSString;

@interface SCSpectaclesDeviceStore : NSObject <SCSpectaclesDeviceEventListener, SCSpectaclesDeviceNamerDelegate> {

	BOOL _restoredFromDisk;
	id<SCSpectaclesDeviceStoreDelegate> _delegate;
	SCSpectaclesDeviceNamer* _namer;
	SCLagunaEventListenerAnnouncer* _announcer;
	id<SCSpectaclesCrashLogger> _crashLogger;
	NSDictionary* _internalDevices;
	SCSpectaclesCache* _cache;
	id<SCPerforming> _archivePerformer;
	SCSpectaclesCBCentralManager* _centralManager;
	id<SCLagunaLibraryLogger> _analyticsLogger;
	NSMutableDictionary* _minimumRequiredFirmwareVersions;

}

@property (nonatomic,retain) SCLagunaEventListenerAnnouncer * announcer;                         //@synthesize announcer=_announcer - In the implementation block
@property (nonatomic,retain) id<SCSpectaclesCrashLogger> crashLogger;                            //@synthesize crashLogger=_crashLogger - In the implementation block
@property (nonatomic,retain) NSDictionary * internalDevices;                                     //@synthesize internalDevices=_internalDevices - In the implementation block
@property (nonatomic,retain) SCSpectaclesCache * cache;                                          //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) id<SCPerforming> archivePerformer;                                  //@synthesize archivePerformer=_archivePerformer - In the implementation block
@property (nonatomic,retain) SCSpectaclesCBCentralManager * centralManager;                      //@synthesize centralManager=_centralManager - In the implementation block
@property (assign,nonatomic) BOOL restoredFromDisk;                                              //@synthesize restoredFromDisk=_restoredFromDisk - In the implementation block
@property (assign,nonatomic,__weak) id<SCLagunaLibraryLogger> analyticsLogger;                   //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * minimumRequiredFirmwareVersions;              //@synthesize minimumRequiredFirmwareVersions=_minimumRequiredFirmwareVersions - In the implementation block
@property (assign,nonatomic,__weak) id<SCSpectaclesDeviceStoreDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SCSpectaclesDeviceNamer * namer;                                    //@synthesize namer=_namer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCLagunaEventListenerAnnouncer *)announcer;
-(void)setAnnouncer:(SCLagunaEventListenerAnnouncer *)arg1 ;
-(void)deviceDidRequestArchiving:(id)arg1 ;
-(void)deviceDidUpdateState:(id)arg1 ;
-(void)device:(id)arg1 didUnpairWithReason:(unsigned long long)arg2 ;
-(void)device:(id)arg1 didReceiveAlertNotification:(unsigned long long)arg2 ;
-(void)device:(id)arg1 didUpdateInfo:(unsigned long long)arg2 ;
-(void)device:(id)arg1 onFirmwareUpdate:(unsigned long long)arg2 progress:(float)arg3 ;
-(void)deviceDidFetchFirmwareDigest:(id)arg1 digest:(id)arg2 ;
-(void)device:(id)arg1 didCompletedScheduledUpdateWithUserInfo:(id)arg2 error:(id)arg3 ;
-(void)device:(id)arg1 didReceiveCrashReport:(id)arg2 ;
-(void)device:(id)arg1 uploadToCloudEvent:(unsigned long long)arg2 ;
-(void)device:(id)arg1 receivedClientId:(id)arg2 requestAuthzCode:(BOOL)arg3 ;
-(void)device:(id)arg1 receivedWifiAPList:(id)arg2 ;
-(void)device:(id)arg1 receivedLastCloudUploadTime:(id)arg2 ;
-(NSMutableDictionary *)minimumRequiredFirmwareVersions;
-(void)_archiveDevicesToCache;
-(void)_addToInternalDevices:(id)arg1 ;
-(void)_updateRequiredFirmwareStatus:(id)arg1 ;
-(void)_clearDevices;
-(void)addMockDevice:(id)arg1 ;
-(id<SCPerforming>)archivePerformer;
-(void)setArchivePerformer:(id<SCPerforming>)arg1 ;
-(BOOL)restoredFromDisk;
-(void)setRestoredFromDisk:(BOOL)arg1 ;
-(void)setMinimumRequiredFirmwareVersions:(NSMutableDictionary *)arg1 ;
-(long long)deviceNamerNumberOfCurrentDevices;
-(id)deviceForSerialNumber:(id)arg1 ;
-(SCSpectaclesDeviceNamer *)namer;
-(void)pairingManagerDidPairBabyDevice:(id)arg1 ;
-(void)pairingManagerUnpairAllDevices;
-(void)pairingManagerDidReceiveCrashReport:(id)arg1 babyDevice:(id)arg2 ;
-(id<SCLagunaLibraryLogger>)analyticsLogger;
-(void)archiveDevices;
-(void)setAnalyticsLogger:(id<SCLagunaLibraryLogger>)arg1 ;
-(id<SCSpectaclesCrashLogger>)crashLogger;
-(id)initWithAnnouncer:(id)arg1 cache:(id)arg2 namer:(id)arg3 analyticsLogger:(id)arg4 crashLogger:(id)arg5 centralManager:(id)arg6 ;
-(void)retrieveArchivedDevices;
-(id)reconcileDevicesFromServer:(id)arg1 ;
-(void)setMinimumRequiredFirmwareVersion:(id)arg1 forHardwareWithMajorNumber:(unsigned long long)arg2 ;
-(void)setCrashLogger:(id<SCSpectaclesCrashLogger>)arg1 ;
-(void)setNamer:(SCSpectaclesDeviceNamer *)arg1 ;
-(void)setDelegate:(id<SCSpectaclesDeviceStoreDelegate>)arg1 ;
-(void)dealloc;
-(id<SCSpectaclesDeviceStoreDelegate>)delegate;
-(SCSpectaclesCache *)cache;
-(void)setCache:(SCSpectaclesCache *)arg1 ;
-(void)setInternalDevices:(NSDictionary *)arg1 ;
-(NSDictionary *)internalDevices;
-(SCSpectaclesCBCentralManager *)centralManager;
-(void)setCentralManager:(SCSpectaclesCBCentralManager *)arg1 ;
-(id)devices;
-(void)removeDevice:(id)arg1 ;
@end

