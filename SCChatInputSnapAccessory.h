/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SendSnapNavigationControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Snapchat/SCTimeProfilable.h>
#import <Snapchat/SCChatInputAccessory.h>
#import <Snapchat/SCChatQuickCaptionDelegate.h>

@protocol SCChatInputProvider, UINavigationControllerDelegate, SCChatInputSnapAccessoryDelegate, SCSnapSendPreparer;
@class SCUserSession, UIViewController, UIView, UIButton, UINavigationController, NSString;

@interface SCChatInputSnapAccessory : NSObject <SendSnapNavigationControllerDelegate, UINavigationControllerDelegate, SCTimeProfilable, SCChatInputAccessory, SCChatQuickCaptionDelegate> {

	id<SCChatInputProvider> _inputProvider;
	SCUserSession* _userSession;
	UIViewController* _parentViewController;
	UIView* _miniatureView;
	UIButton* _snapButton;
	id<UINavigationControllerDelegate> _oldNavigationDelegate;
	BOOL _fullscreenImageUsed;
	double _viewFrameHeight;
	UINavigationController* _navigationController;
	id<SCChatInputSnapAccessoryDelegate> _delegate;
	id<SCSnapSendPreparer> _snapSendPreparer;

}

@property (assign,nonatomic,__weak) id<SCChatInputSnapAccessoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCSnapSendPreparer> snapSendPreparer;                    //@synthesize snapSendPreparer=_snapSendPreparer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL fullscreenImageUsed;                                          //@synthesize fullscreenImageUsed=_fullscreenImageUsed - In the implementation block
+(int)context;
-(void)didSendSnaps:(id)arg1 ;
-(void)_dismissPreviewIfPresented;
-(void)didCancelFromPreview:(id)arg1 ;
-(void)didComeFromCameraWithoutSendingSnap;
-(void)didSendChatMessage;
-(void)didSendToGallery;
-(void)didPostStory;
-(void)viewFrameHeightDidChange:(id)arg1 ;
-(void)setSnapSendPreparer:(id<SCSnapSendPreparer>)arg1 ;
-(void)captionUpdatedWithText:(id)arg1 ;
-(id<SCSnapSendPreparer>)snapSendPreparer;
-(void)resetMiniatureViewImageForNormalControlState;
-(void)accessoryPressed;
-(BOOL)fullscreenImageUsed;
-(id)miniatureView;
-(void)setFullscreenImageUsed:(BOOL)arg1 ;
-(void)_didSendSnapOrChatMessage;
-(id)initWithInputProvider:(id)arg1 userSession:(id)arg2 parentViewController:(id)arg3 ;
-(void)presentPreviewforInChatImage:(id)arg1 ;
-(void)_didPressSnapButton:(id)arg1 ;
-(BOOL)_quickCaptionIsEnabled;
-(void)_popCameraIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)_presentInChatSnapWithRecipient:(id)arg1 ;
-(void)setDelegate:(id<SCChatInputSnapAccessoryDelegate>)arg1 ;
-(void)dealloc;
-(id<SCChatInputSnapAccessoryDelegate>)delegate;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)_navigationController;
@end

