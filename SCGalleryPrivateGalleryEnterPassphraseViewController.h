/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCGalleryPrivateGalleryFlowPageViewController.h>
#import <Snapchat/SCGalleryPassphraseViewDelegate.h>
#import <Snapchat/SCGalleryLockedRateLimitControllerDelegate.h>
#import <Snapchat/SCAlertViewActionController.h>

@protocol SCKeyServicePassphrasePromptRequester, SCGalleryPrivateGalleryEnterPassphraseViewControllerDelegate;
@class NSString, UIView, SCMemoriesRoundButton, SCGallerySelectableDotView, UILabel, SCGalleryPassphraseView, SCGalleryLockedRateLimitController, SCBaseAlertView;

@interface SCGalleryPrivateGalleryEnterPassphraseViewController : SCGalleryPrivateGalleryFlowPageViewController <SCGalleryPassphraseViewDelegate, SCGalleryLockedRateLimitControllerDelegate, SCAlertViewActionController> {

	BOOL _forCreating;
	BOOL _forUnlocking;
	BOOL _forPrompt;
	id<SCKeyServicePassphrasePromptRequester> _passphrasePromptRequester;
	NSString* _title;
	NSString* _text;
	NSString* _passphrasePlaceholder;
	BOOL _showsPasscodeOption;
	double _keyboardHeight;
	UIView* _headerView;
	double _continueButtonBottomPadding;
	SCMemoriesRoundButton* _continueButton;
	SCGallerySelectableDotView* _dotView;
	UILabel* _usePasscodeLabel;
	SCGalleryPassphraseView* _passphraseView;
	SCGalleryLockedRateLimitController* _lockedRateLimitController;
	SCBaseAlertView* _passphraseAlertView;
	id<SCGalleryPrivateGalleryEnterPassphraseViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCGalleryPrivateGalleryEnterPassphraseViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)actionViewSize;
-(unsigned long long)alertViewActionType;
-(BOOL)adjustsSizeToMatchStandard;
-(BOOL)requiresAdditionalPaddingIfLastItem;
-(void)_didPressContinueButton;
-(void)_didPressBackButton;
-(id)initForCreatingWithTitle:(id)arg1 text:(id)arg2 passphrasePlaceholder:(id)arg3 showsPasscodeOption:(BOOL)arg4 ;
-(id)initForUnlockingWithPassphrasePromptRequester:(id)arg1 title:(id)arg2 text:(id)arg3 passphrasePlaceholder:(id)arg4 ;
-(void)_showLockedRateLimitViewIfNeeded:(id)arg1 ;
-(void)lockedRateLimitControllerDidReachAllowedFutureDate:(id)arg1 ;
-(void)setPopupView;
-(void)_handleTapUsePasscodeView:(id)arg1 ;
-(BOOL)_isPassphraseValid;
-(void)_setContinueButtonAndDoneKeyEnabled:(BOOL)arg1 ;
-(void)_didPressContinueButtonOrDoneKey;
-(void)_showRateLimitAlert:(id)arg1 ;
-(void)_createPassphraseAlertView;
-(void)galleryPassphraseViewDidChangePassphrase:(id)arg1 ;
-(void)galleryPassphraseViewDidBeginEditingPassphrase:(id)arg1 ;
-(void)galleryPassphraseViewDidEndEditingPassphrase:(id)arg1 ;
-(void)galleryPassphraseViewDidPressDoneKey:(id)arg1 ;
-(BOOL)galleryPassphraseViewShouldLimitLength:(id)arg1 ;
-(void)showPassphraseAlertView;
-(void)setDelegate:(id<SCGalleryPrivateGalleryEnterPassphraseViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SCGalleryPrivateGalleryEnterPassphraseViewControllerDelegate>)delegate;
-(void)reset;
-(void)becomeFirstResponder;
-(UIEdgeInsets)edgeInsets;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(void)applicationDidEnterBackground;
-(id)actionView;
@end

