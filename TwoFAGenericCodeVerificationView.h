/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Snapchat/SCHeaderDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Snapchat/SCTextViewDelegate.h>

@protocol TwoFAGenericCodeVerificationDelegate;
@class UIScrollView, SCHeader, TTTAttributedLabel, SCTextView, NSString, SCButton, NSTimer;

@interface TwoFAGenericCodeVerificationView : UIView <SCHeaderDelegate, UIScrollViewDelegate, SCTextViewDelegate> {

	BOOL _couldResendCode;
	UIScrollView* _scrollView;
	SCHeader* _header;
	TTTAttributedLabel* _infoLabel;
	SCTextView* _verificationCodeField;
	id<TwoFAGenericCodeVerificationDelegate> _delegate;
	NSString* _infoText;
	unsigned long long _type;
	SCButton* _continueButton;
	NSTimer* _timerForResendCode;
	NSString* _timerCountdownString;
	long long _resendCodeTimeLimit;

}

@property (nonatomic,retain) NSString * infoText;                                                   //@synthesize infoText=_infoText - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                             //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) TTTAttributedLabel * infoLabel;                                        //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) SCTextView * verificationCodeField;                                    //@synthesize verificationCodeField=_verificationCodeField - In the implementation block
@property (nonatomic,retain) SCHeader * header;                                                     //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) SCButton * continueButton;                                             //@synthesize continueButton=_continueButton - In the implementation block
@property (assign,nonatomic) BOOL couldResendCode;                                                  //@synthesize couldResendCode=_couldResendCode - In the implementation block
@property (nonatomic,retain) NSTimer * timerForResendCode;                                          //@synthesize timerForResendCode=_timerForResendCode - In the implementation block
@property (nonatomic,retain) NSString * timerCountdownString;                                       //@synthesize timerCountdownString=_timerCountdownString - In the implementation block
@property (assign,nonatomic) long long resendCodeTimeLimit;                                         //@synthesize resendCodeTimeLimit=_resendCodeTimeLimit - In the implementation block
@property (assign,nonatomic,__weak) id<TwoFAGenericCodeVerificationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)leftButtonPressed;
-(void)initHeader;
-(void)setIsWorking:(BOOL)arg1 ;
-(void)createContinueButton;
-(id)initWithInfoText:(id)arg1 type:(unsigned long long)arg2 ;
-(id)backgroundColorForView;
-(void)createInfoLabel;
-(void)createVerificationCodeTextField;
-(id)textColorForView;
-(void)setVerificationCodeField:(SCTextView *)arg1 ;
-(SCTextView *)verificationCodeField;
-(BOOL)isSMSCodeType;
-(BOOL)couldResendCode;
-(void)resetTimerCountdownText;
-(void)setcontinueButtonTitleForStates:(id)arg1 ;
-(void)setCouldResendCode:(BOOL)arg1 ;
-(NSString *)timerCountdownString;
-(long long)resendCodeTimeLimit;
-(BOOL)isOTPCodeType;
-(NSTimer *)timerForResendCode;
-(void)updateCountdownLabel:(id)arg1 ;
-(void)setTimerForResendCode:(NSTimer *)arg1 ;
-(void)setResendCodeTimeLimit:(long long)arg1 ;
-(void)setTimerCountdownString:(NSString *)arg1 ;
-(void)setDelegate:(id<TwoFAGenericCodeVerificationDelegate>)arg1 ;
-(id<TwoFAGenericCodeVerificationDelegate>)delegate;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)setErrorMessage:(id)arg1 ;
-(BOOL)textViewShouldReturn:(id)arg1 ;
-(SCHeader *)header;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)continueButtonPressed;
-(void)setInfoText:(NSString *)arg1 ;
-(NSString *)infoText;
-(void)setHeader:(SCHeader *)arg1 ;
-(TTTAttributedLabel *)infoLabel;
-(void)setInfoLabel:(TTTAttributedLabel *)arg1 ;
-(SCButton *)continueButton;
-(void)setContinueButton:(SCButton *)arg1 ;
@end
