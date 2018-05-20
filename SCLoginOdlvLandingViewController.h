/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Snapchat/SCRegisterV2ViewDelegate.h>
#import <Snapchat/SCLoginOdlvLandingOtpOptionDelegate.h>
#import <Snapchat/SCLoginOdlvLandingPage.h>

@protocol SCLoginOdlvLandingUserActionDelegate;
@class NSString, SCApplicationLogger, SCLoginOdlvLandingView;

@interface SCLoginOdlvLandingViewController : UIViewController <SCRegisterV2ViewDelegate, SCLoginOdlvLandingOtpOptionDelegate, SCLoginOdlvLandingPage> {

	NSString* _obfuscatedPhoneNumber;
	NSString* _obfuscatedEmailAddress;
	long long _otpTypeSelected;
	SCApplicationLogger* _applicationLogger;
	SCLoginOdlvLandingView* _odlvLandingView;
	id<SCLoginOdlvLandingUserActionDelegate> _userActionDelegate;

}

@property (nonatomic,readonly) NSString * obfuscatedPhoneNumber;                                         //@synthesize obfuscatedPhoneNumber=_obfuscatedPhoneNumber - In the implementation block
@property (nonatomic,readonly) NSString * obfuscatedEmailAddress;                                        //@synthesize obfuscatedEmailAddress=_obfuscatedEmailAddress - In the implementation block
@property (nonatomic,readonly) long long otpTypeSelected;                                                //@synthesize otpTypeSelected=_otpTypeSelected - In the implementation block
@property (nonatomic,__weak,readonly) SCApplicationLogger * applicationLogger;                           //@synthesize applicationLogger=_applicationLogger - In the implementation block
@property (nonatomic,readonly) SCLoginOdlvLandingView * odlvLandingView;                                 //@synthesize odlvLandingView=_odlvLandingView - In the implementation block
@property (nonatomic,readonly) id<SCLoginOdlvLandingUserActionDelegate> userActionDelegate;              //@synthesize userActionDelegate=_userActionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)getOtpType;
-(void)setOtpType:(long long)arg1 ;
-(BOOL)shouldPopToRootViewController;
-(void)continueButtonClicked;
-(void)backButtonPressed:(id)arg1 ;
-(id<SCLoginOdlvLandingUserActionDelegate>)userActionDelegate;
-(id)getSelectedObfuscatedContact;
-(void)setRequestingForOdlvOtp:(BOOL)arg1 ;
-(void)displayErrorAlertDialog:(id)arg1 ;
-(id)initWithObfuscatedPhoneNumber:(id)arg1 obfuscatedEmailAddress:(id)arg2 applicationLogger:(id)arg3 userActionDelegate:(id)arg4 ;
-(long long)getOtpTypeSelected;
-(NSString *)obfuscatedPhoneNumber;
-(NSString *)obfuscatedEmailAddress;
-(long long)otpTypeSelected;
-(SCApplicationLogger *)applicationLogger;
-(SCLoginOdlvLandingView *)odlvLandingView;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
@end
