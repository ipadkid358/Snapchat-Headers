/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLSCrashReportingControllerDelegate <NSObject>
@required
-(BOOL)shouldInstallCrashCallback;
-(BOOL)isFirstInstallForCrashReportingController:(id)arg1;
-(id)installIDForCrashReportingController:(id)arg1;
-(id)APIKeyForCrashReportingController:(id)arg1;
-(id)settingsForCrashReportingController:(id)arg1;
-(BOOL)reportingController:(id)arg1 ensureDeliveryOfUnixSignal:(int)arg2;
-(void)detectedCrash;
-(BOOL)reportingControllerMustInformDelegateOfReports:(id)arg1;
-(void)reportingController:(id)arg1 internalDidDetectReportForLastExecution:(id)arg2;
-(void)reportingController:(id)arg1 didDetectReportForLastExecution:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)reportingControllerCanUseBackgroundSessions:(id)arg1;

@end

