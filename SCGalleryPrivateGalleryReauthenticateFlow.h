/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGalleryInformationWebViewControllerDelegate.h>

@protocol SCGalleryPrivateGalleryReauthenticateFlowDelegate;
@class SCUserSession, UIViewController, UIView, SCGalleryPrivateGalleryReauthenticateView, NSString;

@interface SCGalleryPrivateGalleryReauthenticateFlow : NSObject <SCGalleryInformationWebViewControllerDelegate> {

	SCUserSession* _userSession;
	UIViewController* _fromViewController;
	UIView* _containerView;
	UIView* _overlayView;
	SCGalleryPrivateGalleryReauthenticateView* _reauthenticateView;
	NSString* _defaultMessage;
	double _keyboardHeight;
	BOOL _followsKeyboardHeight;
	BOOL _showingErrorMessage;
	id<SCGalleryPrivateGalleryReauthenticateFlowDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCGalleryPrivateGalleryReauthenticateFlowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_textFieldDidChange;
-(void)_didPressCancelButton;
-(id)initWithUserSession:(id)arg1 fromViewController:(id)arg2 ;
-(void)galleryInformationWebViewControllerDidPressBack:(id)arg1 ;
-(void)_showWithPresentationAnimationType:(unsigned long long)arg1 ;
-(void)_didPressQuestionMarkButton;
-(void)_didPressNextButton;
-(void)_updateReauthenticateViewLayoutConstraints;
-(void)_dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)_clearErrorMessage;
-(void)_reauthenticateWithPassword:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)startWithPresentationAnimationType:(unsigned long long)arg1 ;
-(void)setDelegate:(id<SCGalleryPrivateGalleryReauthenticateFlowDelegate>)arg1 ;
-(void)dealloc;
-(id<SCGalleryPrivateGalleryReauthenticateFlowDelegate>)delegate;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(void)_teardown;
-(void)_showErrorMessage:(id)arg1 ;
-(void)_setup;
@end

