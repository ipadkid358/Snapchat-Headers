/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCLoginPageRouter <NSObject>
@required
-(id)showLoginPageWithUserActionDelegate:(id)arg1;
-(void)showMemoriesPendingSyncAlertWithUserActionDelegate:(id)arg1 usernameOrEmail:(id)arg2 lastMatchingUserData:(id)arg3;
-(void)dismissLoginPage;
-(void)dimissToLoginPage;
-(id)showOdlvVerifyingWithOtpTypeSelected:(long long)arg1 ObfuscatedContact:(id)arg2 userActionDelegate:(id)arg3;
-(void)showLoginReactivationConfirmationMessage:(id)arg1 uerActionDelegate:(id)arg2;
-(void)showLoginReactivationMessage:(id)arg1;
-(id)showTwoFAWithLoginResponse:(id)arg1 userActionDelegate:(id)arg2 unauthenticatedTwoFAService:(id)arg3;
-(id)showOdlvLandingWithLoginResponse:(id)arg1 userActionDelegate:(id)arg2;
-(void)presentRegisterPhoneViewController:(id)arg1 authenticatedPhoneManager:(id)arg2;
-(void)presentRegisterEmailViewController:(id)arg1;

@end

