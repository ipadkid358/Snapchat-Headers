/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCRegisterV2BaseView.h>
#import <Snapchat/SCTextViewDelegate.h>

@class UILabel, UIView, SCTextView, UIScrollView, UIButton, NSString;

@interface SCRegisterPasswordV2View : SCRegisterV2BaseView <SCTextViewDelegate> {

	UIEdgeInsets _horizontalInsets;
	UILabel* _titleLabel;
	UILabel* _descLabel;
	UILabel* _passwordLabel;
	UIView* _passwordFieldContainer;
	SCTextView* _passwordTextView;
	UILabel* _errorLabel;
	UIScrollView* _scrollView;
	BOOL _isInErrorState;
	UIButton* _showHidePasswordButton;
	NSString* _password;

}

@property (nonatomic,retain) NSString * password;                   //@synthesize password=_password - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)initScrollView;
-(void)hideInput;
-(void)shiftViewUpWithKeyboard:(double)arg1 ;
-(void)refreshContinueButtonEnabledState;
-(void)initErrorLabel;
-(void)setFieldsEnabled:(BOOL)arg1 ;
-(void)initPasswordLabel;
-(BOOL)isInputIncomplete;
-(void)initPasswordTitle;
-(void)initPasswordDescription;
-(void)initPasswordField;
-(void)showOrHidePassword;
-(BOOL)becomeFirstResponder;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textViewShouldReturn:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)setError:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
@end
