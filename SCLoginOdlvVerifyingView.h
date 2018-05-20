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

@protocol SCRegisterV2ViewDelegate, SCLoginOdlvVerifyingViewDelegate;
@class UIScrollView, UIView, UILabel, UIButton, UITextField, NSString;

@interface SCLoginOdlvVerifyingView : SCRegisterV2BaseView <UITextFieldDelegate> {

	UIScrollView* _scrollView;
	UIView* _keyboardSeparator;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UILabel* _errorMessageLabel;
	UIButton* _havingTroubleButton;
	UILabel* _codeLabel;
	UITextField* _codeField;
	id<SCRegisterV2ViewDelegate> _registerDelegate;
	id<SCLoginOdlvVerifyingViewDelegate> _verifyingViewDelegate;
	UIEdgeInsets _horizontalInsets;

}

@property (nonatomic,readonly) UIEdgeInsets horizontalInsets;                                                  //@synthesize horizontalInsets=_horizontalInsets - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                                      //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) UIView * keyboardSeparator;                                                     //@synthesize keyboardSeparator=_keyboardSeparator - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * descriptionLabel;                                                     //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,readonly) UILabel * errorMessageLabel;                                                    //@synthesize errorMessageLabel=_errorMessageLabel - In the implementation block
@property (nonatomic,readonly) UIButton * havingTroubleButton;                                                 //@synthesize havingTroubleButton=_havingTroubleButton - In the implementation block
@property (nonatomic,readonly) UILabel * codeLabel;                                                            //@synthesize codeLabel=_codeLabel - In the implementation block
@property (nonatomic,readonly) UITextField * codeField;                                                        //@synthesize codeField=_codeField - In the implementation block
@property (nonatomic,__weak,readonly) id<SCRegisterV2ViewDelegate> registerDelegate;                           //@synthesize registerDelegate=_registerDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<SCLoginOdlvVerifyingViewDelegate> verifyingViewDelegate;              //@synthesize verifyingViewDelegate=_verifyingViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 obfuscatedContact:(id)arg2 registerDelegate:(id)arg3 verifyingViewDelegate:(id)arg4 ;
-(void)shiftViewUpWithKeyboard:(double)arg1 ;
-(id)getConfirmationCode;
-(void)clearConfirmationCode;
-(void)updateButtonTitle:(id)arg1 enabled:(BOOL)arg2 ;
-(void)_initScrollView;
-(void)_initTitle;
-(UIEdgeInsets)horizontalInsets;
-(void)_initKeyboardSeparator;
-(void)_initDescription:(id)arg1 ;
-(void)_initCodeLabel;
-(void)_initCodeField;
-(void)_initContinueButton;
-(void)_initErrorMessageLabel;
-(void)_initHavingTroubleButton;
-(double)_getAppropriateButtonWidth;
-(UIView *)keyboardSeparator;
-(UILabel *)errorMessageLabel;
-(UIButton *)havingTroubleButton;
-(UILabel *)codeLabel;
-(UITextField *)codeField;
-(id<SCRegisterV2ViewDelegate>)registerDelegate;
-(id<SCLoginOdlvVerifyingViewDelegate>)verifyingViewDelegate;
-(UILabel *)titleLabel;
-(UIScrollView *)scrollView;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)setError:(id)arg1 ;
-(UILabel *)descriptionLabel;
@end
