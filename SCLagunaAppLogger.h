/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCLagunaAppLogger <NSObject>
@required
-(void)logDeviceStatusUpdate:(id)arg1 videoCount:(long long)arg2;
-(void)logDeviceInfoUpdated:(id)arg1;
-(void)logOnboardingStart:(id)arg1;
-(void)logOnboardingPageChange:(id)arg1;
-(void)logOnboardingExit:(id)arg1 exitSource:(unsigned long long)arg2;
-(void)logUserEnterSettingsPageWithNumDevices:(long long)arg1 deviceState:(long long)arg2;
-(void)logUserExitSettingsPageWithNumDevices:(long long)arg1 deviceState:(long long)arg2;
-(void)logSettingsUserVisitedNeedHelpPage;
-(void)logSettingsUserVisitedGettingStartedPage;
-(void)logSettingsUserAddedSpectacles;
-(void)logSettingsUserPressedManageDevice:(id)arg1;
-(void)logSettingsUserRenamedDeviceOpen:(id)arg1;
-(void)logSettingsUserRenamedDeviceSuccess:(id)arg1;
-(void)logSettingsUserRenamedDeviceCancel:(id)arg1;
-(void)logSettingsUserPressedClearContent:(id)arg1;
-(void)logSettingsUserPressedForgetDevice:(id)arg1;
-(void)logSettingsUserPressedRestartDevice:(id)arg1;
-(void)logSettingsUserPressedCheckUpdate:(id)arg1;
-(void)logUserVisitedCommerceWebsiteWithNumDevices:(long long)arg1 deviceState:(long long)arg2;
-(void)logRenameDeviceWithDeviceId:(id)arg1 oldName:(id)arg2 newName:(id)arg3;
-(void)logDeviceConnectionWithDeviceId:(id)arg1;
-(void)logForgetDeviceWithDeviceId:(id)arg1;
-(void)logClearContentWithDeviceId:(id)arg1;
-(void)logRestartDeviceWithDeviceId:(id)arg1;
-(void)logUserEnterSettingsWithDeviceId:(id)arg1;
-(void)logLagunaGetHdButtonPressed:(id)arg1 fromSource:(unsigned long long)arg2;
-(void)logHdFlowStartedWithBatchId:(id)arg1;
-(void)logLagunaHdStartingWifi;
-(void)logLagunaHdWifiPopupDisplayedWithActionDisplayed:(unsigned long long)arg1;
-(void)logLagunaHdWifiPopupButtonPressedWithAction:(unsigned long long)arg1;
-(void)logLagunaHdFlowStarted:(id)arg1 fromSource:(unsigned long long)arg2;
-(void)logLagunaHdFlowCancelled:(id)arg1 fromSource:(unsigned long long)arg2;
-(void)logLagunaHdFlowFinished;
-(void)logButtonPress:(long long)arg1;
-(void)logDeleteContent:(id)arg1;
-(void)logNotificationDisplayed:(id)arg1 withSystem:(BOOL)arg2;
-(void)logNotificationOpened:(id)arg1 inApp:(BOOL)arg2;
-(void)logNotificationExpanded:(id)arg1;
-(void)logFirmwareUpdateChecked:(id)arg1;
-(void)logFirmwareUpdateSeen:(id)arg1;
-(void)logFirmwareUpdatePromptShown:(id)arg1;
-(void)logFirmwareUpdatePromptDismissed:(id)arg1 promptAccepted:(BOOL)arg2;
-(void)logFirmwareUpdateStarted:(id)arg1;
-(void)logFirmwareUpdateBinaryRevertStarted:(id)arg1;
-(void)logFirmwareUpdateBinaryRevertFinished:(id)arg1;
-(void)logFirmwareUpdatePatchDownloadStarted:(id)arg1;
-(void)logFirmwareUpdatePatchDownloadFinished:(id)arg1;
-(void)logFirmwareUpdatePatchTransferStarted:(id)arg1;
-(void)logFirmwareUpdatePatchTransferFinished:(id)arg1;
-(void)logFirmwareUpdatePatchApplyStarted:(id)arg1;
-(void)logFirmwareUpdatePatchApplyFinished:(id)arg1;
-(void)logFirmwareUpdateScheduled:(id)arg1;
-(void)logFirmwareUpdateFlashStarted:(id)arg1;
-(void)logFirmwareUpdateSucceeded:(id)arg1;
-(void)logFirmwareUpdateFailed:(id)arg1 reason:(unsigned long long)arg2;
-(void)logFirmwareUpdateSuccessWithDeviceID:(id)arg1 updateSessionID:(id)arg2 newFirmwareVersion:(id)arg3 downloadDurationInMs:(long long)arg4 transferDurationInMs:(long long)arg5 updateDurationInMs:(long long)arg6 updateIsActive:(BOOL)arg7;
-(void)logFirmwareUpdateFailureWithDeviceID:(id)arg1 updateSessionID:(id)arg2 firmwareVersion:(id)arg3 failureReason:(id)arg4 updateIsActive:(BOOL)arg5;
-(void)logFirmwareUpdateScheduledWithDeviceID:(id)arg1 updateSessionID:(id)arg2 previousFirmwareVersion:(id)arg3 newFirmwareVersion:(id)arg4;
-(void)logPairingStarted:(id)arg1;
-(void)logPairingBleDetected:(id)arg1;
-(void)logPairingSnapcodeRecognized:(id)arg1;
-(void)logPairingBackupStart:(id)arg1 failureReason:(unsigned long long)arg2;
-(void)logPairingBackupDetected:(id)arg1;
-(void)logPairingBackupConfirmed:(id)arg1;
-(void)logPairingBleConnected:(id)arg1;
-(void)logPairingNameDialogDisplayed:(id)arg1;
-(void)logPairingNameChanged:(id)arg1;
-(void)logPairingTermsOfServiceOpened:(id)arg1;
-(void)logPairingTermsOfServiceClosed:(id)arg1;
-(void)logPairingBleSynced:(id)arg1;
-(void)logPairingSuccessful:(id)arg1;
-(void)logPairingFailure:(id)arg1 failureReason:(unsigned long long)arg2;
-(void)logPairingRetry:(id)arg1;
-(void)logPairingCancel:(id)arg1 cancellationSource:(unsigned long long)arg2;
-(void)logPairingInactiveAlertShown:(id)arg1;
-(void)logPairingInactiveAlertKeepPairingPressed:(id)arg1;
-(void)logPairingInactiveAlertSupportSiteLinkPressed:(id)arg1;
-(void)logPairingNeedHelpPressed:(id)arg1;
-(void)logPairingSpecificPageStart:(id)arg1 pairingSessionId:(id)arg2 bluetoothEnabled:(BOOL)arg3;
-(void)logPairingAnalyticsEvent:(unsigned long long)arg1 pairingStartTime:(id)arg2 pairingSessionId:(id)arg3 pairingLocation:(id)arg4;
-(void)logPairingConnecting:(id)arg1 pairingSessionId:(id)arg2 isProfile:(BOOL)arg3 isBackupPairing:(BOOL)arg4 numOtherPairedDevices:(long long)arg5;
-(void)logViewTosWithPairingSessionId:(id)arg1;
-(void)logSuccessfullPairingWithDeviceID:(id)arg1 pairingSessionId:(id)arg2;
-(void)logSpectaclesConnectionStartForPairing:(id)arg1;
-(void)logSpectaclesConnectionStartForUpdate:(id)arg1;
-(void)logSpectaclesConnectionSuccessForPairing:(id)arg1;
-(void)logSpectaclesConnectionSuccessForUpdate:(id)arg1;
-(void)logSpectaclesConnectionFailureForPairing:(id)arg1 failureReason:(id)arg2;
-(void)logSpectaclesConnectionFailureForUpdate:(id)arg1 failureReason:(id)arg2;
-(void)logHomeWifiInstructionsDisplayed:(id)arg1;
-(void)logHomeWifiViewOpened:(id)arg1 numAddedNetworks:(long long)arg2 startSource:(unsigned long long)arg3;
-(void)logHomeWifiShareFlowStarted:(id)arg1 isResharingCredentials:(BOOL)arg2;
-(void)logHomeWifiShareFlowShared:(id)arg1 isResharingCredentials:(BOOL)arg2;
-(void)logHomeWifiShareFlowConnected:(id)arg1 isResharingCredentials:(BOOL)arg2;
-(void)logHomeWifiShareFlowFailed:(id)arg1 isResharingCredentials:(BOOL)arg2 failureReason:(long long)arg3;
-(void)logHomeWifiRemoveNetwork:(id)arg1;
-(void)logHomeWifiUploadUpdate:(id)arg1 updateType:(long long)arg2;
-(void)logHomeWifiRefreshTokenInvalid:(id)arg1;

@end

