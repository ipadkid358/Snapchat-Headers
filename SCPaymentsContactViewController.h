/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:43 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCGenericPaymentsSettingsViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Snapchat/SCCommerceLoggerPageMetricsDataSource.h>

@protocol SCPaymentsContactViewControllerDelegate;
@class NSArray, NSString, UIColor, UIFont, UIVisualEffectView, SCLoadingIndicatorView, SCPaymentsContactDetails, SCPaymentsPageLogger, SCUserSession, UILabel, NSMutableDictionary, SCFloatLabeledTextField;

@interface SCPaymentsContactViewController : SCGenericPaymentsSettingsViewController <UITextFieldDelegate, SCCommerceLoggerPageMetricsDataSource> {

	NSArray* _allTextFields;
	NSString* _pageName;
	UIColor* _textFieldDefaultColor;
	UIColor* _backgroundDefaultColor;
	UIFont* _errorLabelFont;
	UIFont* _deleteAddressButtonFont;
	UIVisualEffectView* _loadingBackgroundView;
	SCLoadingIndicatorView* _loadingIndicatorView;
	NSString* _metricsDisplayId;
	SCPaymentsContactDetails* _editingContactDetails;
	NSString* _sessionId;
	SCPaymentsPageLogger* _logger;
	unsigned long long _theme;
	id<SCPaymentsContactViewControllerDelegate> _delegate;
	SCUserSession* _userSession;
	UILabel* _errorLabel;
	NSMutableDictionary* _errorMsgForFields;
	SCFloatLabeledTextField* _emailField;
	SCFloatLabeledTextField* _phoneNumField;

}

@property (nonatomic,retain) UILabel * errorLabel;                                                     //@synthesize errorLabel=_errorLabel - In the implementation block
@property (retain) NSMutableDictionary * errorMsgForFields;                                            //@synthesize errorMsgForFields=_errorMsgForFields - In the implementation block
@property (retain) SCFloatLabeledTextField * emailField;                                               //@synthesize emailField=_emailField - In the implementation block
@property (retain) SCFloatLabeledTextField * phoneNumField;                                            //@synthesize phoneNumField=_phoneNumField - In the implementation block
@property (nonatomic,readonly) SCPaymentsContactDetails * editingContactDetails;                       //@synthesize editingContactDetails=_editingContactDetails - In the implementation block
@property (nonatomic,retain) NSString * sessionId;                                                     //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,retain) SCPaymentsPageLogger * logger;                                            //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic) unsigned long long theme;                                                 //@synthesize theme=_theme - In the implementation block
@property (assign,nonatomic,__weak) id<SCPaymentsContactViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) SCUserSession * userSession;                                     //@synthesize userSession=_userSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)headerContentViewAdditionalHorizontalPadding;
-(void)leftButtonPressed;
-(id)imageForLeftButtonInState:(unsigned long long)arg1 ;
-(void)rightButtonPressed;
-(id)titleForHeader:(id)arg1 ;
-(id)textColorForHeader:(id)arg1 ;
-(double)preferredRightButtonWidth;
-(void)leftSwipeSucceed;
-(id)initWithUserSession:(id)arg1 ;
-(void)_showBlurView;
-(void)_hideBlurView;
-(BOOL)shouldPopToRootViewControllerLater;
-(void)_didTapSaveButton;
-(id)_pagenameForPageView;
-(id)initWithContactDetails:(id)arg1 withUserSession:(id)arg2 ;
-(void)_initSaveButton;
-(BOOL)_areAllFieldsValid;
-(void)_updateErrorLabelsWithPreemptiveChecking:(BOOL)arg1 ;
-(id)_textFieldRelatedToErrorCode:(long long)arg1 ;
-(void)_setErrorLabelAndTextFieldColors;
-(void)_resignAnyFirstResponder;
-(void)_updateTextFieldTextColor:(id)arg1 hasError:(BOOL)arg2 ;
-(BOOL)_isFieldValid:(id)arg1 ;
-(BOOL)_isFieldCompleteAndInvalid:(id)arg1 ;
-(id)_getErrorMessageForField:(id)arg1 ;
-(void)_initTextFields;
-(void)_initErrorLabel;
-(void)_initPrivacyLink;
-(void)_setupExistingContactDetails;
-(void)_loadContactInfo;
-(void)_prefillContactInfoIfPossibleAndNeeded;
-(SCFloatLabeledTextField *)emailField;
-(SCFloatLabeledTextField *)phoneNumField;
-(void)_initTextField:(id)arg1 ;
-(BOOL)_shouldEnableSaveButton;
-(BOOL)_isEmailValid:(id)arg1 ;
-(BOOL)_isPhoneNumValid:(id)arg1 ;
-(BOOL)_contactDetailsFieldsUpdated:(id)arg1 ;
-(SCPaymentsContactDetails *)editingContactDetails;
-(NSMutableDictionary *)errorMsgForFields;
-(void)setErrorMsgForFields:(NSMutableDictionary *)arg1 ;
-(void)setEmailField:(SCFloatLabeledTextField *)arg1 ;
-(void)setPhoneNumField:(SCFloatLabeledTextField *)arg1 ;
-(void)setDelegate:(id<SCPaymentsContactViewControllerDelegate>)arg1 ;
-(id<SCPaymentsContactViewControllerDelegate>)delegate;
-(id)displayId;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)textFieldDidEndEditing:(id)arg1 reason:(long long)arg2 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(SCUserSession *)userSession;
-(unsigned long long)theme;
-(void)setTheme:(unsigned long long)arg1 ;
-(void)_updateUI;
-(SCPaymentsPageLogger *)logger;
-(void)setLogger:(SCPaymentsPageLogger *)arg1 ;
-(UILabel *)errorLabel;
-(void)setErrorLabel:(UILabel *)arg1 ;
@end
