/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Snapchat/SCRegisterV2ViewDelegate.h>
#import <Snapchat/SCLoginTwoFASmsViewDelegate.h>
#import <Snapchat/SCLoginTwoFAPage.h>

@protocol SCLoginTwoFAUserActionDelegate;
@class NSString, SCLoginTwoFASmsV2View, NSTimer, SCUnauthenticatedTwoFAService;

@interface SCLoginTwoFASmsV2ViewController : UIViewController <SCRegisterV2ViewDelegate, SCLoginTwoFASmsViewDelegate, SCLoginTwoFAPage> {

	NSString* _userOrEmail;
	NSString* _phoneNumber;
	NSString* _preAuthToken;
	BOOL _isSMS;
	BOOL _hasOtpEnabled;
	SCLoginTwoFASmsV2View* _twoFAView;
	unsigned long long _resendTimeLeft;
	NSTimer* _resendTimer;
	BOOL _verifyCodeFailed;
	SCUnauthenticatedTwoFAService* _unauthenticatedTwoFAService;
	id<SCLoginTwoFAUserActionDelegate> _userActionDelegate;
	BOOL _fromOAuth2;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldPopToRootViewController;
-(void)updateContinueButtonState;
-(void)continueButtonClicked;
-(void)backButtonPressed:(id)arg1 ;
-(void)showTwoFAErrorMessage:(id)arg1 ;
-(id)initWithUserOrEmail:(id)arg1 phoneNumber:(id)arg2 preAuthToken:(id)arg3 isSMS:(BOOL)arg4 userActionDelegate:(id)arg5 applicationLogger:(id)arg6 unauthenticatedTwoFAService:(id)arg7 fromOAuth2:(BOOL)arg8 ;
-(void)updateContinueButtonResendLabel;
-(void)updateResendTimeLeft;
-(void)otpToSmsPressed;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)resetTimer;
-(void)textFieldDidChange:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

