/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGalleryPrivateGalleryFlowPageViewController.h>

@protocol SCGalleryPrivateGalleryConfirmPassphraseViewControllerDelegate;
@class NSString, UIView, SCMemoriesRoundButton, SCGallerySelectableDotView;

@interface SCGalleryPrivateGalleryConfirmPassphraseViewController : SCGalleryPrivateGalleryFlowPageViewController {

	BOOL _forPasscode;
	BOOL _forPassphrase;
	NSString* _title;
	NSString* _passcode;
	NSString* _passphrase;
	UIView* _headerView;
	SCMemoriesRoundButton* _continueButton;
	SCGallerySelectableDotView* _acknowledgeDotView;
	id<SCGalleryPrivateGalleryConfirmPassphraseViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCGalleryPrivateGalleryConfirmPassphraseViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didPressContinueButton;
-(void)_didPressBackButton;
-(id)initForPasscodeWithTitle:(id)arg1 passcode:(id)arg2 ;
-(id)initForPassphraseWithTitle:(id)arg1 passphrase:(id)arg2 ;
-(void)_didPressQuestionMarkButton;
-(void)_handleTapAcknowledgeView:(id)arg1 ;
-(void)setDelegate:(id<SCGalleryPrivateGalleryConfirmPassphraseViewControllerDelegate>)arg1 ;
-(id<SCGalleryPrivateGalleryConfirmPassphraseViewControllerDelegate>)delegate;
-(void)viewDidLoad;
@end
