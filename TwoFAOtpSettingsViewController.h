/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/TwoFASettingCodeVerificationViewController.h>

@class NSString, SCUserSession;

@interface TwoFAOtpSettingsViewController : TwoFASettingCodeVerificationViewController {

	NSString* _srcFlowName;
	NSString* _otpSecret;
	SCUserSession* _userSession;

}
-(id)getPageViewName;
-(void)leftButtonPressed:(id)arg1 ;
-(void)verifyPressed:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)verifySucceed:(id)arg1 recoveryCode:(id)arg2 ;
-(id)initWithSourceFlowName:(id)arg1 otpSecret:(id)arg2 userSession:(id)arg3 ;
@end
