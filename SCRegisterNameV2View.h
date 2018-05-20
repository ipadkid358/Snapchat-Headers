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

@class UILabel, UIButton, SCTextView, UIScrollView, NSString;

@interface SCRegisterNameV2View : SCRegisterV2BaseView <SCTextViewDelegate> {

	UIEdgeInsets _horizontalInsets;
	UILabel* _titleLabel;
	UIButton* _loginInsteadButton;
	UILabel* _firstNameLabel;
	UILabel* _lastNameLabel;
	SCTextView* _firstNameTextView;
	SCTextView* _lastNameTextView;
	UILabel* _errorLabel;
	UIScrollView* _scrollView;
	BOOL _includeLoginOption;
	NSString* _firstName;
	NSString* _lastName;

}

@property (nonatomic,retain) NSString * firstName;                  //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                   //@synthesize lastName=_lastName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)initScrollView;
-(void)hideInput;
-(void)shiftViewUpWithKeyboard:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 loginOptionButton:(BOOL)arg3 ;
-(void)refreshContinueButtonEnabledState;
-(void)initErrorLabel;
-(BOOL)isInputIncomplete;
-(void)initNameTitle;
-(void)initLoginInsteadButton;
-(void)initFirstNameLabel;
-(void)initFirstNameField;
-(void)initLastNameLabel;
-(void)initLastNameField;
-(void)initUserAgreementLabel;
-(BOOL)becomeFirstResponder;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(BOOL)textViewShouldReturn:(id)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)setError:(id)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
@end

