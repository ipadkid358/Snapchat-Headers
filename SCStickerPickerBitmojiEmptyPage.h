/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, UILabel, SCLoadingIndicatorView, NSString;

@interface SCStickerPickerBitmojiEmptyPage : UIView <UIGestureRecognizerDelegate> {

	UIView* _textContainer;
	UILabel* _linkButton;
	UILabel* _subtitleLabel;
	BOOL _enabled;
	unsigned long long _sourceType;
	SCLoadingIndicatorView* _loadingIndicator;
	BOOL _displayed;

}

@property (assign,getter=isDisplayed,nonatomic) BOOL displayed;              //@synthesize displayed=_displayed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_getBitmojiLinkPage:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 sourceType:(unsigned long long)arg2 ;
-(void)_bitmojiLinkSucceeded;
-(void)_handleServerError;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)isDisplayed;
-(void)setDisplayed:(BOOL)arg1 ;
-(void)_linkButtonTapped:(id)arg1 ;
@end

