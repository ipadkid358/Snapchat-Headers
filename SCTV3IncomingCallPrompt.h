/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCTV3CallPrompt.h>
#import <Snapchat/SCTV3MediaViewMediaChangeListener.h>

@protocol SCTV3IncomingCallPromptDelegate;
@class UILabel, NSString, NSArray, SCTV3IncomingCallPromptAccessory, SCTV3MediaView, SCTV3RoundCornerView, UIImageView;

@interface SCTV3IncomingCallPrompt : SCTV3CallPrompt <SCTV3MediaViewMediaChangeListener> {

	id<SCTV3IncomingCallPromptDelegate> _delegate;
	UILabel* _messageLabel;
	NSString* _messageText;
	NSArray* _currentDisplayNames;
	SCTV3IncomingCallPromptAccessory* _dismissAccessory;
	SCTV3IncomingCallPromptAccessory* _joinAccessory;
	SCTV3MediaView* _localMediaView;
	SCTV3RoundCornerView* _onboardingIconPane;
	UIImageView* _onboardingIconView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_createMessageLabel;
-(id)_createDismissAccessory;
-(id)_createJoinAccessory;
-(void)_updateMessageLabelSizeConstraints;
-(void)callPromptWillShow;
-(void)_setupLocalMediaView;
-(void)_setupOnboardingView;
-(void)callPromptDidShow;
-(void)_setAccessoriesEnabled:(BOOL)arg1 ;
-(void)callPromptWillHide;
-(void)callPromptDidHide;
-(void)_setJoinAccessoryEnabled:(BOOL)arg1 ;
-(void)mediaChangedInMediaView:(id)arg1 ;
-(void)_setDismissAccessoryEnabled:(BOOL)arg1 ;
-(void)_dismissButtonPressed;
-(void)_joinButtonPressed;
-(void)updateActiveCallDisplayNames:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setExtendedMessage:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setMessage:(id)arg1 ;
-(double)desiredHeight;
@end

