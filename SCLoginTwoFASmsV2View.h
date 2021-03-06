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

@protocol SCLoginTwoFASmsViewDelegate;
@class UILabel, UITextField, UIView, UIButton, UISwitch, UIScrollView, NSString;

@interface SCLoginTwoFASmsV2View : SCRegisterV2BaseView <UITextFieldDelegate> {

	UIEdgeInsets _horizontalInsets;
	UILabel* _titleLabel;
	UILabel* _descLabel;
	UILabel* _codeLabel;
	UITextField* _codeField;
	UILabel* _errorLabel;
	UIView* _rememberDeviceView;
	UIButton* _otpToSmsButton;
	UISwitch* _rememberDeviceSwitch;
	UIScrollView* _scrollView;
	UIView* _keyboardSeparator;
	NSString* _phoneNumber;
	BOOL _isSMS;
	BOOL _fromOAuth2;
	id<SCLoginTwoFASmsViewDelegate> _twoFASmsDelegate;

}

@property (assign,nonatomic,__weak) id<SCLoginTwoFASmsViewDelegate> twoFASmsDelegate;              //@synthesize twoFASmsDelegate=_twoFASmsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)initScrollView;
-(void)shiftViewUpWithKeyboard:(double)arg1 ;
-(id)getConfirmationCode;
-(void)updateButtonTitle:(id)arg1 enabled:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 phoneNumber:(id)arg2 isSMS:(BOOL)arg3 delegate:(id)arg4 fromOAuth2:(BOOL)arg5 ;
-(void)setTwoFASmsDelegate:(id<SCLoginTwoFASmsViewDelegate>)arg1 ;
-(void)clearConfirmationCode:(BOOL)arg1 ;
-(BOOL)shouldRememberDevice;
-(void)switchOtpAndSms:(BOOL)arg1 ;
-(void)switchOtpToSmsIsLoading:(BOOL)arg1 ;
-(void)initTitle;
-(void)initTwoFADescription;
-(void)initOtpToSMSButton;
-(void)initCodeLabel;
-(void)initCodeInputField;
-(void)initErrorLabel;
-(void)initRememberDeviceView;
-(void)initNextButton;
-(void)initKeyboardSeparator;
-(id<SCLoginTwoFASmsViewDelegate>)twoFASmsDelegate;
-(double)getAppropriateButtonWidth;
-(void)_changeNextButtonHighlightState:(long long)arg1 ;
-(void)_clearError;
-(void)setFieldsEnabled:(BOOL)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)setError:(id)arg1 ;
@end

