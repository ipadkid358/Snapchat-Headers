/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:25 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCGenericSettingsViewController.h>
#import <Snapchat/SCTextFieldDelegate.h>
#import <Snapchat/SCBackspaceTextFieldDelegate.h>

@protocol SCCardLinkingDelegate;
@class SCPayment, SCCardTextField, SCButton, UILabel, UIImageView, UIScrollView, NSString;

@interface SCCardLinkingViewController : SCGenericSettingsViewController <SCTextFieldDelegate, SCBackspaceTextFieldDelegate> {

	BOOL _selfDismiss;
	BOOL _isCardNumberValid;
	BOOL _isExpiryValid;
	BOOL _isCvvValid;
	BOOL _isZipValid;
	BOOL _isForSettings;
	BOOL _isRelink;
	id<SCCardLinkingDelegate> _cardLinkingDelegate;
	SCPayment* _payment;
	SCCardTextField* _cardNumberField;
	SCCardTextField* _cvvField;
	SCCardTextField* _expirationDateField;
	SCCardTextField* _zipField;
	SCButton* _continueButton;
	UILabel* _disclaimerLabel;
	UIImageView* _lockIcon;
	UIScrollView* _scrollView;

}

@property (nonatomic,retain) SCPayment * payment;                                               //@synthesize payment=_payment - In the implementation block
@property (assign,nonatomic) BOOL selfDismiss;                                                  //@synthesize selfDismiss=_selfDismiss - In the implementation block
@property (nonatomic,retain) SCCardTextField * cardNumberField;                                 //@synthesize cardNumberField=_cardNumberField - In the implementation block
@property (nonatomic,retain) SCCardTextField * cvvField;                                        //@synthesize cvvField=_cvvField - In the implementation block
@property (nonatomic,retain) SCCardTextField * expirationDateField;                             //@synthesize expirationDateField=_expirationDateField - In the implementation block
@property (nonatomic,retain) SCCardTextField * zipField;                                        //@synthesize zipField=_zipField - In the implementation block
@property (nonatomic,retain) SCButton * continueButton;                                         //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) UILabel * disclaimerLabel;                                         //@synthesize disclaimerLabel=_disclaimerLabel - In the implementation block
@property (nonatomic,retain) UIImageView * lockIcon;                                            //@synthesize lockIcon=_lockIcon - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                         //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) BOOL isCardNumberValid;                                            //@synthesize isCardNumberValid=_isCardNumberValid - In the implementation block
@property (assign,nonatomic) BOOL isExpiryValid;                                                //@synthesize isExpiryValid=_isExpiryValid - In the implementation block
@property (assign,nonatomic) BOOL isCvvValid;                                                   //@synthesize isCvvValid=_isCvvValid - In the implementation block
@property (assign,nonatomic) BOOL isZipValid;                                                   //@synthesize isZipValid=_isZipValid - In the implementation block
@property (assign,nonatomic) BOOL isForSettings;                                                //@synthesize isForSettings=_isForSettings - In the implementation block
@property (assign,nonatomic) BOOL isRelink;                                                     //@synthesize isRelink=_isRelink - In the implementation block
@property (assign,nonatomic,__weak) id<SCCardLinkingDelegate> cardLinkingDelegate;              //@synthesize cardLinkingDelegate=_cardLinkingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)leftButtonPressed;
-(id)imageForLeftButtonInState:(unsigned long long)arg1 ;
-(id)titleForHeader:(id)arg1 ;
-(id)textColorForHeader:(id)arg1 ;
-(BOOL)disableLeftSwipe;
-(UIImageView *)lockIcon;
-(void)setLockIcon:(UIImageView *)arg1 ;
-(void)setCardLinkingDelegate:(id<SCCardLinkingDelegate>)arg1 ;
-(void)setIsZipValid:(BOOL)arg1 ;
-(void)setIsCvvValid:(BOOL)arg1 ;
-(void)setIsExpiryValid:(BOOL)arg1 ;
-(void)setIsCardNumberValid:(BOOL)arg1 ;
-(void)textFieldEditingDidBegin:(id)arg1 ;
-(SCCardTextField *)cardNumberField;
-(SCCardTextField *)expirationDateField;
-(SCCardTextField *)cvvField;
-(SCCardTextField *)zipField;
-(void)setIsRelink:(BOOL)arg1 ;
-(BOOL)isDisplayingBecauseOfMissingCardProofToken;
-(void)presentMissingCardProofTokenAlertView;
-(BOOL)selfDismiss;
-(void)setSelfDismiss:(BOOL)arg1 ;
-(BOOL)isForSettings;
-(void)dismissViewIfSelfDismissing;
-(id<SCCardLinkingDelegate>)cardLinkingDelegate;
-(BOOL)isRelink;
-(void)handleCardLinkingError:(id)arg1 ;
-(void)linkCard;
-(BOOL)cardNumberShouldChangeCharactersInRange:(NSRange)arg1 replacementString:(id)arg2 ;
-(BOOL)expirationDateShouldChangeToString:(id)arg1 afterReplacement:(id)arg2 ;
-(BOOL)isCardNumberValid;
-(BOOL)isExpiryValid;
-(void)clearCVVFieldError;
-(BOOL)isCvvValid;
-(void)clearExpirationDateFieldError;
-(BOOL)allFieldsValid;
-(void)adjustContentOffsetForIphone5;
-(void)adjustContentOffsetForIphone4;
-(BOOL)isZipValid;
-(void)adjustContentOffsetWithOffset:(double)arg1 ;
-(void)textFieldDidClearText:(id)arg1 ;
-(void)backspaceTextFieldDidDeleteEmptyField:(id)arg1 ;
-(id)initForSettings;
-(void)configureForSelfDismiss;
-(void)setCardNumberField:(SCCardTextField *)arg1 ;
-(void)setCvvField:(SCCardTextField *)arg1 ;
-(void)setExpirationDateField:(SCCardTextField *)arg1 ;
-(void)setZipField:(SCCardTextField *)arg1 ;
-(void)setIsForSettings:(BOOL)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)viewDidLoad;
-(UIScrollView *)scrollView;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(id)initWithPayment:(id)arg1 ;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)textFieldDidChange:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)setPayment:(SCPayment *)arg1 ;
-(UILabel *)disclaimerLabel;
-(void)setDisclaimerLabel:(UILabel *)arg1 ;
-(void)continueButtonPressed;
-(SCPayment *)payment;
-(SCButton *)continueButton;
-(void)setContinueButton:(SCButton *)arg1 ;
@end

