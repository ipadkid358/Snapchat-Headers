/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:59 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/GPBMessage.h>

@class NSString, MLBMediaCountsMessage, MLBCrashReport, MLBSpecsEvent, MLBResetReason, MLBSnapScanResponse, MLBButtonHoldEvent, MLBSystemCounters, MLBErrorReport, MLBUserMediaCountsMessage, MLBSpectaclesPushMessage_InvalidatedRequest;

@interface MLBSpectaclesPushMessage : GPBMessage

@property (nonatomic,copy) NSString * logMessage; 
@property (assign,nonatomic) BOOL hasLogMessage; 
@property (assign,nonatomic) unsigned mediaCount; 
@property (assign,nonatomic) BOOL hasMediaCount; 
@property (assign,nonatomic) unsigned battStatus; 
@property (assign,nonatomic) BOOL hasBattStatus; 
@property (assign,nonatomic) BOOL booted; 
@property (assign,nonatomic) BOOL hasBooted; 
@property (nonatomic,copy) NSString * ipAddress; 
@property (assign,nonatomic) BOOL hasIpAddress; 
@property (nonatomic,retain) MLBMediaCountsMessage * mediaCounts; 
@property (assign,nonatomic) BOOL hasMediaCounts; 
@property (nonatomic,retain) MLBCrashReport * crashReport; 
@property (assign,nonatomic) BOOL hasCrashReport; 
@property (nonatomic,retain) MLBSpecsEvent * specsEvent; 
@property (assign,nonatomic) BOOL hasSpecsEvent; 
@property (nonatomic,retain) MLBResetReason * resetReason; 
@property (assign,nonatomic) BOOL hasResetReason; 
@property (assign,nonatomic) unsigned remainingHeapBytes; 
@property (assign,nonatomic) BOOL hasRemainingHeapBytes; 
@property (assign,nonatomic) int wifiConnectionEvent; 
@property (assign,nonatomic) BOOL hasWifiConnectionEvent; 
@property (assign,nonatomic) int bluetoothConnectionEvent; 
@property (assign,nonatomic) BOOL hasBluetoothConnectionEvent; 
@property (assign,nonatomic) BOOL receivedBackupPairingConfirmationTap; 
@property (assign,nonatomic) BOOL hasReceivedBackupPairingConfirmationTap; 
@property (assign,nonatomic) int logLevel; 
@property (assign,nonatomic) BOOL hasLogLevel; 
@property (assign,nonatomic) BOOL linuxBooted; 
@property (assign,nonatomic) BOOL hasLinuxBooted; 
@property (assign,nonatomic) int systemStatus; 
@property (assign,nonatomic) BOOL hasSystemStatus; 
@property (nonatomic,retain) MLBSnapScanResponse * snapScanResponse; 
@property (assign,nonatomic) BOOL hasSnapScanResponse; 
@property (assign,nonatomic) unsigned msSinceBoot; 
@property (assign,nonatomic) BOOL hasMsSinceBoot; 
@property (assign,nonatomic) int uploadToCloudEvent; 
@property (assign,nonatomic) BOOL hasUploadToCloudEvent; 
@property (nonatomic,retain) MLBButtonHoldEvent * buttonHoldEvent; 
@property (assign,nonatomic) BOOL hasButtonHoldEvent; 
@property (nonatomic,retain) MLBSystemCounters * systemCounters; 
@property (assign,nonatomic) BOOL hasSystemCounters; 
@property (nonatomic,retain) MLBErrorReport * errorReport; 
@property (assign,nonatomic) BOOL hasErrorReport; 
@property (assign,nonatomic) int chargerEvent; 
@property (assign,nonatomic) BOOL hasChargerEvent; 
@property (nonatomic,retain) MLBUserMediaCountsMessage * userMediaCounts; 
@property (assign,nonatomic) BOOL hasUserMediaCounts; 
@property (nonatomic,retain) MLBSpectaclesPushMessage_InvalidatedRequest * invalidatedRequest; 
@property (assign,nonatomic) BOOL hasInvalidatedRequest; 
@property (assign,nonatomic) int transferThrottledEvent; 
@property (assign,nonatomic) BOOL hasTransferThrottledEvent; 
@property (assign,nonatomic) BOOL encryptionLayerFailure; 
@property (assign,nonatomic) BOOL hasEncryptionLayerFailure; 
+(id)descriptor;
@end

