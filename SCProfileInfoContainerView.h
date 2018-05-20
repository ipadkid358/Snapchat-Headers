/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Snapchat/SCProfilePictureContainerDelegate.h>

@protocol SCProfileInfoContainerViewDelegate, SCProfilePictureDelegate;
@class UITapGestureRecognizer, NSString, UIView, UIButton, SCProfileUserInfoView, SCUserSentReceivedCountView, SCSnapcodeView;

@interface SCProfileInfoContainerView : UIView <SCProfilePictureContainerDelegate> {

	BOOL _shouldShareSnapcodeOnPress;
	BOOL _lightColor;
	UITapGestureRecognizer* _tapGesture;
	NSString* _username;
	UIView* _snapcodeAndNamesContainer;
	UIView* _snapcodePlaceholder;
	UIButton* _snapcodeButton;
	UIButton* _displayNameButton;
	SCProfileUserInfoView* _userInfoView;
	SCUserSentReceivedCountView* _userSentReceivedCountView;
	UIView* _buttonContainer;
	UIButton* _shareUsernameButton;
	SCSnapcodeView* _userSnapcodeView;
	id<SCProfileInfoContainerViewDelegate> _delegate;
	id<SCProfilePictureDelegate> _profilePictureDelegate;

}

@property (nonatomic,retain) NSString * username;                                                     //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) UIView * snapcodeAndNamesContainer;                                      //@synthesize snapcodeAndNamesContainer=_snapcodeAndNamesContainer - In the implementation block
@property (nonatomic,retain) UIView * snapcodePlaceholder;                                            //@synthesize snapcodePlaceholder=_snapcodePlaceholder - In the implementation block
@property (nonatomic,retain) UIButton * snapcodeButton;                                               //@synthesize snapcodeButton=_snapcodeButton - In the implementation block
@property (nonatomic,retain) UIButton * displayNameButton;                                            //@synthesize displayNameButton=_displayNameButton - In the implementation block
@property (nonatomic,retain) SCProfileUserInfoView * userInfoView;                                    //@synthesize userInfoView=_userInfoView - In the implementation block
@property (nonatomic,retain) SCUserSentReceivedCountView * userSentReceivedCountView;                 //@synthesize userSentReceivedCountView=_userSentReceivedCountView - In the implementation block
@property (nonatomic,retain) UIView * buttonContainer;                                                //@synthesize buttonContainer=_buttonContainer - In the implementation block
@property (nonatomic,retain) UIButton * shareUsernameButton;                                          //@synthesize shareUsernameButton=_shareUsernameButton - In the implementation block
@property (nonatomic,retain) SCSnapcodeView * userSnapcodeView;                                       //@synthesize userSnapcodeView=_userSnapcodeView - In the implementation block
@property (assign,nonatomic,__weak) id<SCProfileInfoContainerViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCProfilePictureDelegate> profilePictureDelegate;              //@synthesize profilePictureDelegate=_profilePictureDelegate - In the implementation block
+(double)snapcodeWidth;
+(double)snapcodeWidthFactor;
+(double)spacerHeight;
+(double)buttonSpacerHeight;
+(double)buttonFontPointSize;
+(double)displayNameAndUserInfoHeight;
+(double)buttonHeight;
+(double)buttonFontSize;
-(void)renderProfileImages:(id)arg1 bitmojiAvatarId:(id)arg2 bitmojiSelfieId:(id)arg3 contexts:(id)arg4 userSession:(id)arg5 ;
-(void)setSnapcodeAndNamesContainer:(UIView *)arg1 ;
-(UIView *)snapcodeAndNamesContainer;
-(void)initPersonalInfoViews;
-(double)snapcodeAndNameContainerTopPadding;
-(double)displayNameButtonHeight;
-(double)displayNameButtonTopPadding;
-(double)userInfoViewHeight;
-(double)buttonContainerTopPadding;
-(void)setSnapcodePlaceholder:(UIView *)arg1 ;
-(UIView *)snapcodePlaceholder;
-(void)setSnapcodeButton:(UIButton *)arg1 ;
-(UIButton *)snapcodeButton;
-(void)snapCodeButtonPressed;
-(void)_snapcodeButtonShrink;
-(void)_snapcodeButtonUnshrink;
-(void)setUserSnapcodeView:(SCSnapcodeView *)arg1 ;
-(SCSnapcodeView *)userSnapcodeView;
-(void)setDisplayNameButton:(UIButton *)arg1 ;
-(UIButton *)displayNameButton;
-(void)displayNamePressed;
-(void)setShareUsernameButton:(UIButton *)arg1 ;
-(UIButton *)shareUsernameButton;
-(void)shareUsernameButtonPressed;
-(void)setUserInfoView:(SCProfileUserInfoView *)arg1 ;
-(SCProfileUserInfoView *)userInfoView;
-(void)usernamePressed;
-(SCUserSentReceivedCountView *)userSentReceivedCountView;
-(id<SCProfilePictureDelegate>)profilePictureDelegate;
-(void)configDisplayNameButton:(id)arg1 ;
-(id)initWithLightColor:(BOOL)arg1 shouldShareSnapcodeOnPress:(BOOL)arg2 ;
-(void)setUserName:(id)arg1 andDisplayName:(id)arg2 andScore:(unsigned long long)arg3 andAstrologicalSign:(id)arg4 isBirthdayPartyEnabled:(BOOL)arg5 ;
-(id)_newButtonViewsSeparator;
-(void)setUserSentReceivedCountView:(SCUserSentReceivedCountView *)arg1 ;
-(void)setProfilePictureDelegate:(id<SCProfilePictureDelegate>)arg1 ;
-(void)setDelegate:(id<SCProfileInfoContainerViewDelegate>)arg1 ;
-(void)dealloc;
-(id<SCProfileInfoContainerViewDelegate>)delegate;
-(void)setDisplayName:(id)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(UIView *)buttonContainer;
-(void)setButtonContainer:(UIView *)arg1 ;
@end
