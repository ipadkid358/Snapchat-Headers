/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/TwoFASettingCodeVerificationViewController.h>
#import <Snapchat/SCMobileSettingsDelegate.h>
#import <Snapchat/TTTAttributedLabelDelegate.h>

@class SCUserSession, NSString;

@interface TwoFASmsSettingsViewController : TwoFASettingCodeVerificationViewController <SCMobileSettingsDelegate, TTTAttributedLabelDelegate> {

	BOOL _skipRecoveryCode;
	SCUserSession* _userSession;

}

@property (assign,nonatomic) BOOL skipRecoveryCode;                    //@synthesize skipRecoveryCode=_skipRecoveryCode - In the implementation block
@property (nonatomic,retain) SCUserSession * userSession;              //@synthesize userSession=_userSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2 ;
-(id)getPageViewName;
-(void)verifyMobileDidSucceed;
-(void)verifyMobileWasCancelled;
-(void)verifyMobileDidSucceedWithTwoFaRecoveryCode:(id)arg1 ;
-(id)initWithPhoneNumber:(id)arg1 userSession:(id)arg2 ;
-(void)leftButtonPressed:(id)arg1 ;
-(void)verifyPressed:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)verifySucceed:(id)arg1 recoveryCode:(id)arg2 ;
-(void)resendPressed:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)presentRecoveryCodeViewWithRecoveryCode:(id)arg1 ;
-(BOOL)skipRecoveryCode;
-(void)setSkipRecoveryCode:(BOOL)arg1 ;
-(void)loadView;
-(SCUserSession *)userSession;
-(void)setUserSession:(SCUserSession *)arg1 ;
@end
