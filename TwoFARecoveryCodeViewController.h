/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGenericSettingsViewController.h>

@protocol TwoFARecoveryCodeViewBackDelegate;
@class NSString, SCButton, SCUserSession;

@interface TwoFARecoveryCodeViewController : SCGenericSettingsViewController {

	BOOL _showSkip;
	BOOL _showBack;
	id<TwoFARecoveryCodeViewBackDelegate> _delegate;
	NSString* _pageViewName;
	NSString* _infoText;
	SCButton* _continueButton;
	SCUserSession* _userSession;

}

@property (nonatomic,retain) NSString * pageViewName;                                            //@synthesize pageViewName=_pageViewName - In the implementation block
@property (nonatomic,retain) NSString * infoText;                                                //@synthesize infoText=_infoText - In the implementation block
@property (nonatomic,retain) SCButton * continueButton;                                          //@synthesize continueButton=_continueButton - In the implementation block
@property (assign,nonatomic) BOOL showSkip;                                                      //@synthesize showSkip=_showSkip - In the implementation block
@property (assign,nonatomic) BOOL showBack;                                                      //@synthesize showBack=_showBack - In the implementation block
@property (nonatomic,retain) SCUserSession * userSession;                                        //@synthesize userSession=_userSession - In the implementation block
@property (assign,nonatomic,__weak) id<TwoFARecoveryCodeViewBackDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)leftButtonPressed;
-(void)rightButtonPressed;
-(BOOL)disableLeftSwipe;
-(void)setPageViewName:(NSString *)arg1 ;
-(NSString *)pageViewName;
-(id)getTitle;
-(id)getPageViewName;
-(void)createLabel;
-(void)setIsWorking:(BOOL)arg1 ;
-(void)createContinueButton;
-(id)initWithPageViewName:(id)arg1 title:(id)arg2 showSkip:(BOOL)arg3 showBack:(BOOL)arg4 userSession:(id)arg5 ;
-(void)createHeaderRightButton;
-(void)setShowBack:(BOOL)arg1 ;
-(BOOL)showBack;
-(void)setShowSkip:(BOOL)arg1 ;
-(BOOL)showSkip;
-(void)createBackgroundImageView;
-(void)showTwoFARecoveryCodeGeneratedVC:(id)arg1 ;
-(void)setDelegate:(id<TwoFARecoveryCodeViewBackDelegate>)arg1 ;
-(void)dealloc;
-(id<TwoFARecoveryCodeViewBackDelegate>)delegate;
-(void)loadView;
-(SCUserSession *)userSession;
-(void)setUserSession:(SCUserSession *)arg1 ;
-(void)continueButtonPressed;
-(void)setInfoText:(NSString *)arg1 ;
-(NSString *)infoText;
-(SCButton *)continueButton;
-(void)setContinueButton:(SCButton *)arg1 ;
@end

