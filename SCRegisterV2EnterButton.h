/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCButton.h>

@protocol SCRegisterEnterButtonDelegate;
@class UIColor, SCLoadingIndicatorView;

@interface SCRegisterV2EnterButton : SCButton {

	id<SCRegisterEnterButtonDelegate> _delegate;
	UIColor* _backgroundColor;
	BOOL _interactionEnabled;
	SCLoadingIndicatorView* _indicator;

}

@property (nonatomic,retain) SCLoadingIndicatorView * indicator;              //@synthesize indicator=_indicator - In the implementation block
@property (assign,nonatomic) BOOL interactionEnabled;                         //@synthesize interactionEnabled=_interactionEnabled - In the implementation block
-(void)setActivityIndicatorHidden:(BOOL)arg1 alignment:(long long)arg2 ;
-(void)continueButtonClicked;
-(id)initWithTitle:(id)arg1 delegate:(id)arg2 baseColorPalette:(unsigned long long)arg3 ;
-(BOOL)interactionEnabled;
-(void)setBackgroundColor:(id)arg1 ;
-(void)_updateBackgroundColor;
-(void)setIndicator:(SCLoadingIndicatorView *)arg1 ;
-(SCLoadingIndicatorView *)indicator;
-(void)setInteractionEnabled:(BOOL)arg1 ;
@end

