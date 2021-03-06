/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Snapchat/SCRegisterV2ViewDelegate.h>

@class SCRegisterCaptchaV2View, NSString, SCUserSession, SCUnauthenticatedCaptchaService, SCUnauthenticatedPhoneManager;

@interface SCRegisterCaptchaV2ViewController : UIViewController <SCRegisterV2ViewDelegate> {

	long long _attemptCount;
	SCRegisterCaptchaV2View* _registerCaptchaView;
	NSString* _forgotPasswordUsernameOrEmail;
	SCUserSession* _userSession;
	SCUnauthenticatedCaptchaService* _unauthenticatedCaptchaService;
	NSString* _captchaId;
	NSString* _forgotPasswordPhoneNumber;
	NSString* _forgotPasswordCountryCode;
	BOOL _forgotPasswordIsCall;
	SCUnauthenticatedPhoneManager* _unauthenticatedPhoneManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 ;
-(BOOL)shouldPopToRootViewController;
-(void)continueButtonClicked;
-(void)backButtonPressed:(id)arg1 ;
-(void)viewWillEnterBackground;
-(double)timeBeforeReturningToCamera;
-(id)_pageNameForPageView;
-(id)initWithUnauthenticatedCaptchaService:(id)arg1 ;
-(void)setPasswordResetUsernameOrEmail:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 unauthenticatedCaptchaService:(id)arg2 ;
-(BOOL)isForPasswordResetAndCaptchaRequiredAfterPhone;
-(void)verifyByPhoneDidFail;
-(void)verifyByPhoneDidSucceed:(id)arg1 ;
-(void)_loadCaptcha;
-(BOOL)isForPasswordReset;
-(void)_captchaDidFinishLoading:(BOOL)arg1 ;
-(void)_fetchCaptchaImagesWithSuccessQueue:(id)arg1 isResetPassword:(BOOL)arg2 usernameOrEmail:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)_getDeferredDeepLinkRequestJson:(id)arg1 ;
-(void)_presentNextViewController:(BOOL)arg1 ;
-(void)_verifyByPhoneWithPreAuthToken:(id)arg1 ;
-(void)_presentVerifyPhoneViewController:(id)arg1 ;
-(void)_captchaVerifiedWithResult:(long long)arg1 captchaCount:(unsigned long long)arg2 enableFindFriends:(BOOL)arg3 isResetPassword:(BOOL)arg4 preAuthToken:(id)arg5 ;
-(void)_verifyCaptchaWithId:(id)arg1 solution:(id)arg2 isResetPassword:(BOOL)arg3 usernameOrEmail:(id)arg4 successQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)_shouldPresentPostRegistrationVideoView:(id)arg1 ;
-(void)setPasswordResetWithUnauthenticatedPhoneManager:(id)arg1 phoneNumber:(id)arg2 isCall:(BOOL)arg3 countryCode:(id)arg4 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

