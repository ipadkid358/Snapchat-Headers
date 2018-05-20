/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <Snapchat/SCGalleryPrivateGalleryStartSetupViewControllerDelegate.h>
#import <Snapchat/SCGalleryPrivateGalleryFinishSetupViewControllerDelegate.h>
#import <Snapchat/SCGalleryPrivateGalleryEnterPasscodeViewControllerDelegate.h>
#import <Snapchat/SCGalleryPrivateGalleryEnterPassphraseViewControllerDelegate.h>
#import <Snapchat/SCGalleryPrivateGalleryConfirmPassphraseViewControllerDelegate.h>
#import <Snapchat/SCGalleryInformationWebViewControllerDelegate.h>

@protocol SCGalleryPrivateGallerySetupFlowDelegate;
@class SCUserSession, UIViewController, NSString, SCGalleryPrivateGalleryFlowNavigationController, SCGalleryPrivateGalleryStartSetupViewController, SCGalleryPrivateGalleryFinishSetupViewController, SCGalleryPrivateGalleryEnterPasscodeViewController, SCGalleryPrivateGalleryConfirmPassphraseViewController, SCGalleryPrivateGalleryEnterPassphraseViewController, SCGalleryInformationWebViewController;

@interface SCGalleryPrivateGallerySetupFlow : NSObject <UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, SCGalleryPrivateGalleryStartSetupViewControllerDelegate, SCGalleryPrivateGalleryFinishSetupViewControllerDelegate, SCGalleryPrivateGalleryEnterPasscodeViewControllerDelegate, SCGalleryPrivateGalleryEnterPassphraseViewControllerDelegate, SCGalleryPrivateGalleryConfirmPassphraseViewControllerDelegate, SCGalleryInformationWebViewControllerDelegate> {

	SCUserSession* _userSession;
	UIViewController* _fromViewController;
	NSString* _passcode;
	NSString* _passphrase;
	SCGalleryPrivateGalleryFlowNavigationController* _navigationController;
	SCGalleryPrivateGalleryStartSetupViewController* _startSetupViewController;
	SCGalleryPrivateGalleryFinishSetupViewController* _finishSetupViewController;
	SCGalleryPrivateGalleryEnterPasscodeViewController* _createPasscodeViewController;
	SCGalleryPrivateGalleryEnterPasscodeViewController* _confirmPasscodeViewController;
	SCGalleryPrivateGalleryConfirmPassphraseViewController* _showPasscodeViewController;
	SCGalleryPrivateGalleryEnterPassphraseViewController* _createPassphraseViewController;
	SCGalleryPrivateGalleryConfirmPassphraseViewController* _confirmPassphraseViewController;
	SCGalleryInformationWebViewController* _informationViewController;
	SCGalleryInformationWebViewController* _topSecretInformationViewController;
	id<SCGalleryPrivateGallerySetupFlowDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCGalleryPrivateGallerySetupFlowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 fromViewController:(id)arg2 ;
-(void)galleryInformationWebViewControllerDidPressBack:(id)arg1 ;
-(void)enterPasscodeViewControllerDidPressBack:(id)arg1 ;
-(void)enterPasscodeViewController:(id)arg1 didCreatePasscode:(id)arg2 ;
-(void)enterPasscodeViewControllerDidPressUsePassphrase:(id)arg1 ;
-(void)enterPasscodeViewControllerDidConfirmPasscode:(id)arg1 ;
-(void)enterPassphraseViewControllerDidPressBack:(id)arg1 ;
-(void)enterPassphraseViewController:(id)arg1 didCreatePassphrase:(id)arg2 ;
-(void)confirmPassphraseViewControllerDidPressBack:(id)arg1 ;
-(void)confirmPassphraseViewControllerDidPressQuestionMark:(id)arg1 ;
-(void)confirmPassphraseViewControllerDidConfirmPassphrase:(id)arg1 ;
-(void)_setPrivateGalleryPassphrase;
-(void)startSetupViewControllerDidPressStart:(id)arg1 ;
-(void)startSetupViewControllerDidPressBack:(id)arg1 ;
-(void)finishSetupViewControllerDidPressFinish:(id)arg1 ;
-(void)setDelegate:(id<SCGalleryPrivateGallerySetupFlowDelegate>)arg1 ;
-(id<SCGalleryPrivateGallerySetupFlowDelegate>)delegate;
-(void)_reset;
-(void)start;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(BOOL)isStarted;
@end

