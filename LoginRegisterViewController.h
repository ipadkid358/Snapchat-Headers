/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCCameraBackgroundViewController.h>
#import <Snapchat/SCPreLoginLensControllerDelegate.h>
#import <Snapchat/SCRegistrationUserActionDelegate.h>
#import <Snapchat/LoginRegisterNavigationDelegate.h>

@protocol SCLoginRegisterUserActionDelegate;
@class SCPreLoginLensController, SCRegisterService, UIImageView, UIButton, NSString;

@interface LoginRegisterViewController : SCCameraBackgroundViewController <SCPreLoginLensControllerDelegate, SCRegistrationUserActionDelegate, LoginRegisterNavigationDelegate> {

	SCPreLoginLensController* _preLoginLensController;
	SCRegisterService* _registerService;
	UIImageView* _ghostFaceImageView;
	UIImageView* _ghostImageView;
	UIButton* _snapchatterButton;
	id<SCLoginRegisterUserActionDelegate> _userActionDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObservers;
-(void)removeObservers;
-(id)getPageViewName;
-(BOOL)canPerformNavigation;
-(void)verifyPhoneFromDeepLink:(id)arg1 ;
-(id)initWithRegisterService:(id)arg1 userActionDelegate:(id)arg2 ;
-(void)fetchRegisterStudySettings;
-(void)snapchatterButtonClicked;
-(void)touchDownInsideButton;
-(void)touchUpOutside;
-(void)newMemberButtonClicked;
-(void)setLensVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)handleRegistration;
-(id)preLoginLensController;
-(void)setOverlaysVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)preLoginLensControllerDidActivateLens:(id)arg1 ;
-(void)didTapSwitchToLoginButton;
-(void)activateLensWithPartnerId:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)keyboardDidShow:(id)arg1 ;
-(void)didEnterBackground:(id)arg1 ;
-(void)willEnterForeground:(id)arg1 ;
-(void)didBecomeActive:(id)arg1 ;
@end

