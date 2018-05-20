/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSpectaclesPeripheralDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <Snapchat/SCSpectaclesBleMonitorDelegate.h>
#import <Snapchat/SCSpectaclesBluetoothMonitorDelegate.h>
#import <Snapchat/SCSpectaclesWifiMonitorDelegate.h>

@protocol SCPerforming, SCSpectaclesPeripheral, SCLagunaLibraryLogger, SCSpectaclesNetworkClient;
@class NSString, SCSpectaclesFirmwareVersion, SCSpectaclesHardwareVersion, NSNumber, NSDate, SCWeakTimer, SCSpectaclesBleMonitor, SCSpectaclesBluetoothMonitor, SCSpectaclesWifiMonitor, SCSpectaclesTransferProgressMonitor, NSMutableArray, SCSpectaclesContentStore, SCSpectaclesDeviceEventListenerAnnouncer, SCSpectaclesTaskQueue, NSData, NSUUID, SCSpectaclesFirmwareUpdater, SCSpectaclesAmbaWatchdog;

@interface SCLagunaDevice : NSObject <SCSpectaclesPeripheralDelegate, NSCoding, SCSpectaclesBleMonitorDelegate, SCSpectaclesBluetoothMonitorDelegate, SCSpectaclesWifiMonitorDelegate> {

	BOOL _hasSpaceToRecord;
	BOOL _hasReconciledContentList;
	BOOL _detectedBluetoothOverloadError;
	BOOL _charging;
	BOOL _hasChargingInfo;
	BOOL _everConnectedToWifi;
	BOOL _hevcEnabled;
	NSString* _serialNumber;
	NSString* _displayName;
	SCSpectaclesFirmwareVersion* _firmwareVersion;
	SCSpectaclesHardwareVersion* _hardwareVersion;
	NSNumber* _voltageLevel;
	NSNumber* _storageLevel;
	long long _deviceNumber;
	long long _color;
	long long _firstPairedTimestamp;
	long long _lastPairedStatusUpdatedTimestamp;
	long long _lastPairFromUnpairedStateTimestamp;
	long long _lastNameUpdatedTimestamp;
	long long _nordicTemperature;
	long long _ambaTemperature;
	long long _wifiTemperature;
	NSDate* _lastTemperatureReportTime;
	NSDate* _lastUploadAnalyticsLogsTime;
	unsigned long long _lastConnectionFailureReason;
	long long _saveContentToLocation;
	NSNumber* _batteryLevel;
	id<SCPerforming> _performer;
	SCWeakTimer* _deviceUpdateTimer;
	SCWeakTimer* _connectionTimer;
	SCWeakTimer* _encryptionTimer;
	SCWeakTimer* _transitionTimer;
	SCSpectaclesBleMonitor* _bleMonitor;
	SCSpectaclesBluetoothMonitor* _bluetoothMonitor;
	SCSpectaclesWifiMonitor* _wifiMonitor;
	NSString* _ssidPassword;
	NSString* _countryCode;
	long long _transferDisabledReason;
	SCSpectaclesTransferProgressMonitor* _progressMonitor;
	NSMutableArray* _responseMonitors;
	SCSpectaclesContentStore* _contentStore;
	SCSpectaclesDeviceEventListenerAnnouncer* _deviceAnnouncer;
	id<SCSpectaclesPeripheral> _peripheral;
	SCSpectaclesTaskQueue* _taskQueue;
	NSString* _shortDisplayName;
	NSData* _encryptionKey;
	long long _state;
	long long _connectionReason;
	NSUUID* _identifier;
	NSNumber* _mockBatteryLevel;
	long long _mockCoulombCounterTemperature;
	id<SCLagunaLibraryLogger> _analyticsLogger;
	long long _numberOfConnectionAttempts;
	long long _lastMediaCountSeenInResponse;
	long long _lastMediaCount;
	long long _coulombCounterTemperature;
	NSString* _wifiName;
	NSString* _wifiPassword;
	NSString* _deviceIpAddress;
	SCSpectaclesFirmwareUpdater* _firmwareUpdater;
	SCSpectaclesAmbaWatchdog* _ambaWatchdog;
	long long _capabilities;
	id<SCSpectaclesNetworkClient> _cachedBluetoothClient;

}

@property (nonatomic,copy) NSString * serialNumber;                                                   //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,retain) SCSpectaclesFirmwareVersion * firmwareVersion;                           //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,retain) SCSpectaclesHardwareVersion * hardwareVersion;                           //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (nonatomic,retain) NSNumber * batteryLevel;                                                 //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (nonatomic,retain) NSNumber * voltageLevel;                                                 //@synthesize voltageLevel=_voltageLevel - In the implementation block
@property (nonatomic,retain) NSNumber * storageLevel;                                                 //@synthesize storageLevel=_storageLevel - In the implementation block
@property (assign,nonatomic) BOOL hasSpaceToRecord;                                                   //@synthesize hasSpaceToRecord=_hasSpaceToRecord - In the implementation block
@property (assign,nonatomic) long long color;                                                         //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) id<SCPerforming> performer;                                              //@synthesize performer=_performer - In the implementation block
@property (nonatomic,retain) SCWeakTimer * deviceUpdateTimer;                                         //@synthesize deviceUpdateTimer=_deviceUpdateTimer - In the implementation block
@property (nonatomic,retain) SCWeakTimer * connectionTimer;                                           //@synthesize connectionTimer=_connectionTimer - In the implementation block
@property (nonatomic,retain) SCWeakTimer * encryptionTimer;                                           //@synthesize encryptionTimer=_encryptionTimer - In the implementation block
@property (nonatomic,retain) SCWeakTimer * transitionTimer;                                           //@synthesize transitionTimer=_transitionTimer - In the implementation block
@property (nonatomic,retain) SCSpectaclesBleMonitor * bleMonitor;                                     //@synthesize bleMonitor=_bleMonitor - In the implementation block
@property (nonatomic,retain) SCSpectaclesBluetoothMonitor * bluetoothMonitor;                         //@synthesize bluetoothMonitor=_bluetoothMonitor - In the implementation block
@property (nonatomic,retain) SCSpectaclesWifiMonitor * wifiMonitor;                                   //@synthesize wifiMonitor=_wifiMonitor - In the implementation block
@property (nonatomic,copy) NSString * ssidPassword;                                                   //@synthesize ssidPassword=_ssidPassword - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                                                    //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) BOOL hasReconciledContentList;                                           //@synthesize hasReconciledContentList=_hasReconciledContentList - In the implementation block
@property (assign,nonatomic) long long transferDisabledReason;                                        //@synthesize transferDisabledReason=_transferDisabledReason - In the implementation block
@property (nonatomic,retain) SCSpectaclesTransferProgressMonitor * progressMonitor;                   //@synthesize progressMonitor=_progressMonitor - In the implementation block
@property (nonatomic,retain) NSMutableArray * responseMonitors;                                       //@synthesize responseMonitors=_responseMonitors - In the implementation block
@property (nonatomic,retain) SCSpectaclesContentStore * contentStore;                                 //@synthesize contentStore=_contentStore - In the implementation block
@property (nonatomic,retain) SCSpectaclesDeviceEventListenerAnnouncer * deviceAnnouncer;              //@synthesize deviceAnnouncer=_deviceAnnouncer - In the implementation block
@property (nonatomic,retain) id<SCSpectaclesPeripheral> peripheral;                                   //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,retain) SCSpectaclesTaskQueue * taskQueue;                                       //@synthesize taskQueue=_taskQueue - In the implementation block
@property (nonatomic,copy) NSString * shortDisplayName;                                               //@synthesize shortDisplayName=_shortDisplayName - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                    //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) long long deviceNumber;                                                  //@synthesize deviceNumber=_deviceNumber - In the implementation block
@property (assign,nonatomic) long long firstPairedTimestamp;                                          //@synthesize firstPairedTimestamp=_firstPairedTimestamp - In the implementation block
@property (assign,nonatomic) long long lastPairedStatusUpdatedTimestamp;                              //@synthesize lastPairedStatusUpdatedTimestamp=_lastPairedStatusUpdatedTimestamp - In the implementation block
@property (assign,nonatomic) long long lastNameUpdatedTimestamp;                                      //@synthesize lastNameUpdatedTimestamp=_lastNameUpdatedTimestamp - In the implementation block
@property (nonatomic,retain) NSData * encryptionKey;                                                  //@synthesize encryptionKey=_encryptionKey - In the implementation block
@property (assign,nonatomic) long long state;                                                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long connectionReason;                                              //@synthesize connectionReason=_connectionReason - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSNumber * mockBatteryLevel;                                             //@synthesize mockBatteryLevel=_mockBatteryLevel - In the implementation block
@property (assign,nonatomic) long long mockCoulombCounterTemperature;                                 //@synthesize mockCoulombCounterTemperature=_mockCoulombCounterTemperature - In the implementation block
@property (assign,nonatomic) BOOL detectedBluetoothOverloadError;                                     //@synthesize detectedBluetoothOverloadError=_detectedBluetoothOverloadError - In the implementation block
@property (assign,nonatomic,__weak) id<SCLagunaLibraryLogger> analyticsLogger;                        //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
@property (assign,nonatomic) long long numberOfConnectionAttempts;                                    //@synthesize numberOfConnectionAttempts=_numberOfConnectionAttempts - In the implementation block
@property (assign,nonatomic) long long lastMediaCountSeenInResponse;                                  //@synthesize lastMediaCountSeenInResponse=_lastMediaCountSeenInResponse - In the implementation block
@property (assign,nonatomic) long long lastMediaCount;                                                //@synthesize lastMediaCount=_lastMediaCount - In the implementation block
@property (assign,nonatomic) long long nordicTemperature;                                             //@synthesize nordicTemperature=_nordicTemperature - In the implementation block
@property (assign,nonatomic) long long coulombCounterTemperature;                                     //@synthesize coulombCounterTemperature=_coulombCounterTemperature - In the implementation block
@property (assign,nonatomic) long long ambaTemperature;                                               //@synthesize ambaTemperature=_ambaTemperature - In the implementation block
@property (assign,nonatomic) long long wifiTemperature;                                               //@synthesize wifiTemperature=_wifiTemperature - In the implementation block
@property (nonatomic,retain) NSDate * lastTemperatureReportTime;                                      //@synthesize lastTemperatureReportTime=_lastTemperatureReportTime - In the implementation block
@property (nonatomic,copy) NSString * wifiName;                                                       //@synthesize wifiName=_wifiName - In the implementation block
@property (nonatomic,copy) NSString * wifiPassword;                                                   //@synthesize wifiPassword=_wifiPassword - In the implementation block
@property (nonatomic,copy) NSString * deviceIpAddress;                                                //@synthesize deviceIpAddress=_deviceIpAddress - In the implementation block
@property (assign,getter=isCharging,nonatomic) BOOL charging;                                         //@synthesize charging=_charging - In the implementation block
@property (assign,nonatomic) BOOL hasChargingInfo;                                                    //@synthesize hasChargingInfo=_hasChargingInfo - In the implementation block
@property (nonatomic,retain) SCSpectaclesFirmwareUpdater * firmwareUpdater;                           //@synthesize firmwareUpdater=_firmwareUpdater - In the implementation block
@property (nonatomic,retain) SCSpectaclesAmbaWatchdog * ambaWatchdog;                                 //@synthesize ambaWatchdog=_ambaWatchdog - In the implementation block
@property (assign,nonatomic) BOOL everConnectedToWifi;                                                //@synthesize everConnectedToWifi=_everConnectedToWifi - In the implementation block
@property (nonatomic,readonly) long long capabilities;                                                //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) BOOL hevcEnabled;                                                        //@synthesize hevcEnabled=_hevcEnabled - In the implementation block
@property (nonatomic,retain) id<SCSpectaclesNetworkClient> cachedBluetoothClient;                     //@synthesize cachedBluetoothClient=_cachedBluetoothClient - In the implementation block
@property (nonatomic,retain) NSDate * lastUploadAnalyticsLogsTime;                                    //@synthesize lastUploadAnalyticsLogsTime=_lastUploadAnalyticsLogsTime - In the implementation block
@property (assign,nonatomic) unsigned long long lastConnectionFailureReason;                          //@synthesize lastConnectionFailureReason=_lastConnectionFailureReason - In the implementation block
@property (nonatomic,readonly) long long lastPairFromUnpairedStateTimestamp;                          //@synthesize lastPairFromUnpairedStateTimestamp=_lastPairFromUnpairedStateTimestamp - In the implementation block
@property (assign,nonatomic) long long saveContentToLocation;                                         //@synthesize saveContentToLocation=_saveContentToLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_emojis;
+(BOOL)isDeviceColorValid:(long long)arg1 ;
+(long long)_capabilitiesWithFirmware:(id)arg1 hardware:(id)arg2 ;
+(id)deviceColorToString:(long long)arg1 ;
+(BOOL)supportsPsychomantisWithFirmware:(id)arg1 hardware:(id)arg2 ;
+(id)emojiForDeviceNumber:(long long)arg1 ;
+(id)mockDevice;
-(id<SCPerforming>)performer;
-(void)setPerformer:(id<SCPerforming>)arg1 ;
-(long long)deviceNumber;
-(long long)lastNameUpdatedTimestamp;
-(long long)firstPairedTimestamp;
-(long long)ambaTemperature;
-(long long)nordicTemperature;
-(void)setAmbaTemperature:(long long)arg1 ;
-(void)setNordicTemperature:(long long)arg1 ;
-(void)setWifiTemperature:(long long)arg1 ;
-(long long)wifiTemperature;
-(void)bleMonitor:(id)arg1 didDisconnectPeripheral:(id)arg2 reason:(long long)arg3 ;
-(void)bleMonitor:(id)arg1 didConnectPeripheral:(id)arg2 ;
-(void)bleMonitor:(id)arg1 didFindPeripheral:(id)arg2 ;
-(SCSpectaclesDeviceEventListenerAnnouncer *)deviceAnnouncer;
-(void)removeCorruptContent:(id)arg1 ;
-(BOOL)tryingToConnectBT;
-(BOOL)connectedOverBLEOrWiFi;
-(BOOL)tryingToConnectBTDeviceRecording;
-(BOOL)tryingToConnectBTForContentTransfer;
-(BOOL)tryingToConnectWiFi;
-(id)displayNameWithoutEmoji;
-(void)_checkCapabilities;
-(void)_adoptBabyDevice:(id)arg1 ;
-(void)setBleMonitor:(SCSpectaclesBleMonitor *)arg1 ;
-(void)setProgressMonitor:(SCSpectaclesTransferProgressMonitor *)arg1 ;
-(SCSpectaclesBleMonitor *)bleMonitor;
-(void)_stopDeviceUpdates;
-(void)_stopConnectionTimeout;
-(SCSpectaclesWifiMonitor *)wifiMonitor;
-(BOOL)hasReconciledContentList;
-(BOOL)wifiBooted;
-(long long)lastPairFromUnpairedStateTimestamp;
-(BOOL)everConnectedToWifi;
-(SCSpectaclesFirmwareUpdater *)firmwareUpdater;
-(long long)lastMediaCount;
-(NSDate *)lastUploadAnalyticsLogsTime;
-(void)setNumberOfConnectionAttempts:(long long)arg1 ;
-(void)unpairWithReason:(unsigned long long)arg1 ;
-(void)setDetectedBluetoothOverloadError:(BOOL)arg1 ;
-(void)setDeviceIpAddress:(NSString *)arg1 ;
-(void)setEverConnectedToWifi:(BOOL)arg1 ;
-(SCWeakTimer *)deviceUpdateTimer;
-(void)_sendDeviceUpdateRequest;
-(void)setDeviceUpdateTimer:(SCWeakTimer *)arg1 ;
-(void)_connectionDidTimeout;
-(SCWeakTimer *)encryptionTimer;
-(void)setEncryptionTimer:(SCWeakTimer *)arg1 ;
-(id)_myUUID;
-(id)bluetoothDisplayName;
-(BOOL)supportsHevc;
-(void)_addResponseMonitorWithHandler:(/*^block*/id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 timeoutBlock:(/*^block*/id)arg4 ;
-(NSMutableArray *)responseMonitors;
-(void)_passMonitorsResponse:(id)arg1 ;
-(BOOL)_crashDetectedInResponse:(id)arg1 ;
-(void)_handleAmbaCrashed;
-(unsigned long long)_handleDeviceStatus:(id)arg1 ;
-(void)setLastMediaCount:(long long)arg1 ;
-(BOOL)_handleMediaCount:(long long)arg1 ;
-(void)addRefreshContentRequestIfNecessary;
-(long long)lastMediaCountSeenInResponse;
-(void)setLastMediaCountSeenInResponse:(long long)arg1 ;
-(void)setHasSpaceToRecord:(BOOL)arg1 ;
-(void)setStorageLevel:(NSNumber *)arg1 ;
-(void)setCoulombCounterTemperature:(long long)arg1 ;
-(void)setLastTemperatureReportTime:(NSDate *)arg1 ;
-(void)setHasChargingInfo:(BOOL)arg1 ;
-(void)_transitionToStateTimeoutComplete:(id)arg1 ;
-(void)_transitionToState:(long long)arg1 afterTime:(double)arg2 ;
-(void)_transitionToState:(long long)arg1 afterRequest:(id)arg2 afterTime:(double)arg3 ;
-(long long)numberOfConnectionAttempts;
-(unsigned long long)_unpairReasonFromConnectionFailure;
-(void)_startDeviceUpdates;
-(void)_sendDeviceInfoRequest;
-(void)setPeripheralDisplayName;
-(SCSpectaclesBluetoothMonitor *)bluetoothMonitor;
-(void)_startConnectionTimeout;
-(void)_sendStartBTRequest;
-(void)_sendStopBTRequest;
-(id)wifiDisplayName;
-(NSString *)ssidPassword;
-(void)setConnectionReason:(long long)arg1 ;
-(void)setBluetoothMonitor:(SCSpectaclesBluetoothMonitor *)arg1 ;
-(id)bleDisplayName;
-(long long)transferDisabledReason;
-(BOOL)_transferDisabled;
-(void)setTransferDisabledReason:(long long)arg1 ;
-(void)setLastPairedStatusUpdatedTimestamp:(long long)arg1 ;
-(void)_sendDeviceReset;
-(void)setHasReconciledContentList:(BOOL)arg1 ;
-(unsigned long long)lastConnectionFailureReason;
-(void)_addRefreshContentRequest;
-(void)_startEncryptionSetupTimer;
-(void)_stopEncryptionSetupTimer;
-(void)bluetoothDidConnect:(id)arg1 ;
-(void)bluetoothDidDisconnect:(id)arg1 ;
-(void)bluetoothNeedsPicker;
-(void)bluetoothDetectedOverload;
-(void)wifiMonitorSendRequest:(id)arg1 ;
-(void)wifiDidBoot;
-(void)wifiDidConnect:(id)arg1 ;
-(void)wifiDidDisconnect;
-(BOOL)wifiHasDeviceReliableWiFiNotification;
-(id)initWithBabyDevice:(id)arg1 ;
-(void)setupWithCentralManager:(id)arg1 analyticsLogger:(id)arg2 progressMonitor:(id)arg3 ;
-(void)setupContentWithCache:(id)arg1 ;
-(BOOL)hasHdContentToDownload;
-(id)undownloadedHdContent;
-(void)switchToHomeWifi:(id)arg1 wifiPassword:(id)arg2 ;
-(void)clearContentWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)prepShippingStateWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)adoptBabyDevice:(id)arg1 ;
-(void)contentListReconciled;
-(void)shareWifiCredentials;
-(void)cancelShareWifiCredentials;
-(void)requestClientId;
-(void)sendAuthzCode:(id)arg1 codeVerifier:(id)arg2 redirectUri:(id)arg3 ;
-(void)requestWifiAPList;
-(void)setWifiAPList:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)requestLastCloudUploadTime;
-(void)firmwareUploadTaskDidFail;
-(void)addDeviceLogsRequest:(/*^block*/id)arg1 ;
-(void)addDeviceIdleAnalyticsRequest:(/*^block*/id)arg1 ;
-(BOOL)allowsPassiveUpdates;
-(BOOL)supportsPsychomantis;
-(BOOL)supportsBatchRequests;
-(BOOL)supportsTaskBatching;
-(BOOL)supportsAutomaticStartAsNeededDeletion;
-(BOOL)supportsProtectedWifi;
-(BOOL)supportsHomeWiFi;
-(BOOL)supportsAnalyticsLogs;
-(void)setFirstPairedTimestamp:(long long)arg1 ;
-(void)setLastNameUpdatedTimestamp:(long long)arg1 ;
-(BOOL)hasChargingInfo;
-(void)setLastUploadAnalyticsLogsTime:(NSDate *)arg1 ;
-(void)setSaveContentToLocation:(long long)arg1 ;
-(void)setWifiMonitor:(SCSpectaclesWifiMonitor *)arg1 ;
-(SCSpectaclesTransferProgressMonitor *)progressMonitor;
-(void)setResponseMonitors:(NSMutableArray *)arg1 ;
-(void)setContentStore:(SCSpectaclesContentStore *)arg1 ;
-(void)setDeviceAnnouncer:(SCSpectaclesDeviceEventListenerAnnouncer *)arg1 ;
-(NSNumber *)mockBatteryLevel;
-(void)setMockBatteryLevel:(NSNumber *)arg1 ;
-(long long)mockCoulombCounterTemperature;
-(void)setMockCoulombCounterTemperature:(long long)arg1 ;
-(void)setFirmwareUpdater:(SCSpectaclesFirmwareUpdater *)arg1 ;
-(void)setAmbaWatchdog:(SCSpectaclesAmbaWatchdog *)arg1 ;
-(SCSpectaclesAmbaWatchdog *)ambaWatchdog;
-(void)setTransferDisabled:(BOOL)arg1 forReason:(long long)arg2 ;
-(void)firmwareUpdaterSendRequest:(id)arg1 ;
-(BOOL)connectedOverBLE;
-(void)firmwareUploadTaskDidSucceed;
-(NSNumber *)storageLevel;
-(long long)coulombCounterTemperature;
-(NSDate *)lastTemperatureReportTime;
-(void)setSsidPassword:(NSString *)arg1 ;
-(void)requestCrashReport;
-(void)clearCrashReport;
-(BOOL)hasSpaceToRecord;
-(NSNumber *)voltageLevel;
-(void)peripheralOnError:(id)arg1 ;
-(void)peripheralDidReceiveResponse:(id)arg1 ;
-(void)peripheralDidReceiveEncryptionResponse:(id)arg1 ;
-(void)peripheralDidOpenStream;
-(void)peripheralRequiresEncryptionSetup;
-(NSString *)shortDisplayName;
-(void)setShortDisplayName:(NSString *)arg1 ;
-(void)setDeviceNumber:(long long)arg1 ;
-(void)setVoltageLevel:(NSNumber *)arg1 ;
-(BOOL)isUnpaired;
-(void)ambaWatchdogKick;
-(long long)lastPairedStatusUpdatedTimestamp;
-(id)initWithSerialNumber:(id)arg1 displayName:(id)arg2 color:(long long)arg3 firstPairedTimestamp:(long long)arg4 lastPairedStatusUpdatedTimestamp:(long long)arg5 lastNameUpdatedTimestamp:(long long)arg6 deviceNumber:(long long)arg7 firmwareVersion:(id)arg8 hardwareVersion:(id)arg9 ;
-(SCSpectaclesContentStore *)contentStore;
-(void)resetConnectionTimer;
-(void)requestWiFiDisconnection;
-(long long)saveContentToLocation;
-(BOOL)detectedBluetoothOverloadError;
-(void)setHevcEnabled:(BOOL)arg1 ;
-(BOOL)connectedOverBT;
-(void)requestBluetoothConnection:(long long)arg1 ;
-(void)requestWiFiConnectionWithSsidPassword:(id)arg1 countryCode:(id)arg2 connectionReason:(long long)arg3 ;
-(void)requestBluetoothDisconnection;
-(id<SCLagunaLibraryLogger>)analyticsLogger;
-(id<SCSpectaclesNetworkClient>)cachedBluetoothClient;
-(void)setCachedBluetoothClient:(id<SCSpectaclesNetworkClient>)arg1 ;
-(NSString *)deviceIpAddress;
-(BOOL)connectedOverWiFi;
-(BOOL)connectedOverBTOrWiFi;
-(BOOL)hevcEnabled;
-(long long)connectionReason;
-(void)setLastConnectionFailureReason:(unsigned long long)arg1 ;
-(void)setAnalyticsLogger:(id<SCLagunaLibraryLogger>)arg1 ;
-(void)setBatteryLevel:(NSNumber *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(long long)state;
-(id)emoji;
-(void)setState:(long long)arg1 ;
-(NSUUID *)identifier;
-(void)reset;
-(long long)color;
-(void)setColor:(long long)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(SCSpectaclesTaskQueue *)taskQueue;
-(void)setTaskQueue:(SCSpectaclesTaskQueue *)arg1 ;
-(NSNumber *)batteryLevel;
-(NSString *)displayName;
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)serialNumber;
-(void)_transitionToState:(long long)arg1 ;
-(void)setWifiName:(NSString *)arg1 ;
-(void)setWifiPassword:(NSString *)arg1 ;
-(NSString *)wifiPassword;
-(NSString *)wifiName;
-(NSData *)encryptionKey;
-(void)setEncryptionKey:(NSData *)arg1 ;
-(void)setCharging:(BOOL)arg1 ;
-(id<SCSpectaclesPeripheral>)peripheral;
-(void)_handleResponse:(id)arg1 ;
-(long long)capabilities;
-(void)setPeripheral:(id<SCSpectaclesPeripheral>)arg1 ;
-(void)setHardwareVersion:(SCSpectaclesHardwareVersion *)arg1 ;
-(void)setFirmwareVersion:(SCSpectaclesFirmwareVersion *)arg1 ;
-(SCSpectaclesHardwareVersion *)hardwareVersion;
-(SCSpectaclesFirmwareVersion *)firmwareVersion;
-(void)setSerialNumber:(NSString *)arg1 ;
-(SCWeakTimer *)connectionTimer;
-(void)setConnectionTimer:(SCWeakTimer *)arg1 ;
-(BOOL)isCharging;
-(void)_applicationWillTerminateNotification:(id)arg1 ;
-(SCWeakTimer *)transitionTimer;
-(void)setTransitionTimer:(SCWeakTimer *)arg1 ;
@end
