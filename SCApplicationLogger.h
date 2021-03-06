/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, SCQueuePerformer;

@interface SCApplicationLogger : NSObject {

	NSNumber* _deepLinkSource;
	NSString* _deepLinkId;
	NSString* _deepLinkReferrer;
	SCQueuePerformer* _performer;
	BOOL _hasLoggedAppInstall;

}
+(id)sharedInstance;
-(BOOL)hasLoggedInBefore;
-(long long)getDeepLinkSourceType;
-(void)logAppLoginKitLoginSuccess;
-(void)logAppLoginKitLoginFailure:(long long)arg1 ;
-(void)logAppLoginKitLoginAttempt;
-(void)didAppOpenForDeepLinkFeature:(unsigned long long)arg1 linkId:(id)arg2 referrer:(id)arg3 ;
-(void)logApplicationLoginAttempt;
-(void)logApplicationLoginTwoFactorFailure:(long long)arg1 ;
-(void)logApplicationLoginOdlvSuccess:(long long)arg1 otpType:(long long)arg2 ;
-(void)logApplicationLoginOdlvFailure:(long long)arg1 otpType:(long long)arg2 ;
-(void)logApplicationLoginOdlvRequestOtp:(long long)arg1 ;
-(void)logApplicationLogin;
-(void)logApplicationLoginTwoFactorSuccess:(long long)arg1 ;
-(void)logApplicationLoginOdlvPageview:(long long)arg1 ;
-(void)logApplicationLoginOdlvUnableToVerify:(long long)arg1 ;
-(void)logApplicationLoginTwoFactorPageview:(long long)arg1 ;
-(void)logApplicationLoginFailure:(long long)arg1 ;
-(void)logApplicationLoginForgotPasswordStrategy:(long long)arg1 ;
-(void)logApplicationLoginForgotPasswordDialogue;
-(void)logApplicationLoginForgotPasswordCaptchaPageview:(long long)arg1 ;
-(void)logApplicationLoginForgotPasswordCaptchaSuccess:(long long)arg1 ;
-(void)logApplicationLoginForgotPasswordCaptchaFailure:(long long)arg1 ;
-(void)_logStart;
-(void)_logApplicationResignActive;
-(void)_logApplicationClose;
-(void)_logApplicationOpen:(long long)arg1 ;
-(void)_logApplicationOpenWithType:(id)arg1 applicationState:(long long)arg2 ;
-(void)_logApplicationOpenWithPushNotification:(id)arg1 applicationState:(long long)arg2 ;
-(void)_logApplicationReceivedPushNotification:(id)arg1 ;
-(void)_logNotificationWhileOpenWithPushNotification:(id)arg1 ;
-(void)_logNotificationWhileBackgroundedWithPushNotification:(id)arg1 ;
-(void)_logApplicationInstallFromDeepLink:(BOOL)arg1 ;
-(id)_getLoginFlowUUID;
-(void)_logApplicationLogin:(BOOL)arg1 loginFlowSessionId:(id)arg2 ;
-(void)_didAppOpenForDeepLinkFeature:(unsigned long long)arg1 linkId:(id)arg2 referrer:(id)arg3 ;
-(void)_clearLoginFlowUUID;
-(void)_logApplicationLoginAttempt:(BOOL)arg1 loginFlowSessionId:(id)arg2 ;
-(void)_logApplicationLoginFailure:(BOOL)arg1 errorType:(long long)arg2 loginFlowSessionId:(id)arg3 ;
-(void)_clearResetPasswordUUID;
-(id)_getResetPasswordUUID;
-(void)_logApplicationLoginForgotPasswordDialogue:(BOOL)arg1 resetPasswordSessionId:(id)arg2 ;
-(void)_logApplicationLoginForgotPasswordStrategy:(BOOL)arg1 context:(long long)arg2 resetPasswordSessionId:(id)arg3 ;
-(void)_logApplicationLoginForgotPasswordCaptchaPageview:(BOOL)arg1 context:(long long)arg2 resetPasswordSessionId:(id)arg3 ;
-(void)_logApplicationLoginForgotPasswordCaptchaSuccess:(BOOL)arg1 context:(long long)arg2 resetPasswordSessionId:(id)arg3 ;
-(void)_logApplicationLoginForgotPasswordCaptchaFailure:(BOOL)arg1 context:(long long)arg2 resetPasswordSessionId:(id)arg3 ;
-(void)_logApplicationLoginResetPasswordPageview:(BOOL)arg1 context:(long long)arg2 resetPasswordSessionId:(id)arg3 ;
-(void)_logApplicationLoginResetPasswordSuccess:(BOOL)arg1 context:(long long)arg2 resetPasswordSessionId:(id)arg3 ;
-(void)_logApplicationLoginResetPasswordFailure:(BOOL)arg1 context:(long long)arg2 resetPasswordSessionId:(id)arg3 ;
-(void)_logApplicationLoginTwoFactorPageview:(BOOL)arg1 context:(long long)arg2 loginFlowSessionId:(id)arg3 ;
-(void)_logApplicationLoginTwoFactorSuccess:(BOOL)arg1 context:(long long)arg2 loginFlowSessionId:(id)arg3 ;
-(void)_logApplicationLoginTwoFactorFailure:(BOOL)arg1 context:(long long)arg2 loginFlowSessionId:(id)arg3 ;
-(void)_logApplicationLoginOdlvPageview:(long long)arg1 loginFlowSessionId:(id)arg2 ;
-(void)_logApplicationLoginOdlvRequestOtp:(long long)arg1 loginFlowSessionId:(id)arg2 ;
-(void)_logApplicationLoginOdlvUnableToVerify:(long long)arg1 loginFlowSessionId:(id)arg2 ;
-(void)_logApplicationLoginOdlvSuccess:(BOOL)arg1 actionType:(long long)arg2 otpType:(long long)arg3 loginFlowSessionId:(id)arg4 ;
-(void)_logApplicationLoginOdlvFailure:(long long)arg1 otpType:(long long)arg2 loginFlowSessionId:(id)arg3 ;
-(void)_logAppLoginKitLoginSuccess;
-(void)_logAppLoginKitLoginAttempt;
-(void)_logAppLoginKitLoginFailure:(long long)arg1 ;
-(void)logStart;
-(void)logApplicationResignActive;
-(void)logApplicationClose;
-(void)logApplicationOpen;
-(void)logApplicationOpenWithType:(id)arg1 ;
-(void)logApplicationOpenWithPushNotification:(id)arg1 ;
-(void)logApplicationReceivedPushNotification:(id)arg1 ;
-(void)logNotificationWhileOpenWithPushNotification:(id)arg1 ;
-(void)logNotificationWhileBackgroundedWithPushNotification:(id)arg1 ;
-(void)logApplicationInstallFromDeepLink:(BOOL)arg1 ;
-(void)logApplicationLoginResetPasswordPageview:(long long)arg1 ;
-(void)logApplicationLoginResetPasswordSuccess:(long long)arg1 ;
-(void)logApplicationLoginResetPasswordFailure:(long long)arg1 ;
-(id)getLinkId;
-(id)init;
@end

