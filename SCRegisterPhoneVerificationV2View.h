/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCRegisterV2BaseView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SCRegisterPhoneVerificationV2ViewDelegate;
@class UILabel, UITextField, UIScrollView, UIView, UIButton, NSString;

@interface SCRegisterPhoneVerificationV2View : SCRegisterV2BaseView <UITextFieldDelegate> {

	UIEdgeInsets _horizontalInsets;
	UILabel* _titleLabel;
	UILabel* _descLabel;
	UILabel* _codeLabel;
	UITextField* _codeField;
	UILabel* _errorLabel;
	UIScrollView* _scrollView;
	UIView* _keyboardSeparator;
	UIButton* _sendCodeByCallButton;
	UIButton* _sendCodeBySmsButton;
	double _underlineWidth;
	double _underlineHorizontalInset;
	id<SCRegisterPhoneVerificationV2ViewDelegate> _phoneVerificationViewDelegate;

}

@property (assign,nonatomic,__weak) id<SCRegisterPhoneVerificationV2ViewDelegate> phoneVerificationViewDelegate;              //@synthesize phoneVerificationViewDelegate=_phoneVerificationViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)initScrollView;
-(id)getConfirmationCode;
-(void)updateButtonTitle:(id)arg1 enabled:(BOOL)arg2 ;
-(void)clearConfirmationCode:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 phoneNumber:(id)arg2 delegate:(id)arg3 altButtonIsCallMeInstead:(BOOL)arg4 baseColorPalette:(unsigned long long)arg5 ;
-(void)setPhoneVerificationViewDelegate:(id<SCRegisterPhoneVerificationV2ViewDelegate>)arg1 ;
-(void)setConfirmationCode:(id)arg1 ;
-(void)setAltButtonState:(BOOL)arg1 ;
-(void)initTitle;
-(void)initCodeLabel;
-(void)initCodeInputField;
-(void)initErrorLabel;
-(void)initNextButton;
-(void)initKeyboardSeparator;
-(double)getAppropriateButtonWidth;
-(void)_clearError;
-(void)initDescriptionWithPhoneNumber:(id)arg1 ;
-(void)initSendCodeByCallAltButton;
-(void)initSendCodeBySmsAltButton;
-(id<SCRegisterPhoneVerificationV2ViewDelegate>)phoneVerificationViewDelegate;
-(void)_configureSharedSendCodeByAltButton:(id)arg1 ;
-(double)_getSingleNumberWidth;
-(BOOL)_textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 isDeepLink:(BOOL)arg4 ;
-(double)_getKerning;
-(BOOL)becomeFirstResponder;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)setError:(id)arg1 ;
@end

