/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCChatInputAccessory.h>
#import <Snapchat/SCTimeProfilable.h>

@protocol SCChatInputProvider;
@class UIViewController, UIView, UITextView, NSString;

@interface SCChatInputKeyboardAccessory : NSObject <SCChatInputAccessory, SCTimeProfilable> {

	id<SCChatInputProvider> _inputProvider;
	UIViewController* _parentViewController;
	CGRect _visibleKeyboardFrame;
	long long _inputReadyForPanning;
	double _drawerHeight;
	UIView* _keyboardView;
	BOOL _resigningKeyboard;
	BOOL _forcedResignedKeyboardOnce;
	UITextView* _textView;

}

@property (nonatomic,retain) UITextView * textView;                 //@synthesize textView=_textView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL fullscreenImageUsed; 
+(int)context;
-(double)drawerHeight;
-(double)maximumDrawerHeight;
-(id)miniatureView;
-(void)resignFromActive;
-(double)defaultDrawerHeight;
-(void)setDrawerHeight:(double)arg1 resignWhenCollapsed:(BOOL)arg2 animated:(BOOL)arg3 deltaContentOffset:(double)arg4 ;
-(BOOL)shouldBeginDragging;
-(id)initWithInputProvider:(id)arg1 parentViewController:(id)arg2 ;
-(void)_keyboardViewWithVisibility:(id)arg1 source:(id)arg2 ;
-(void)_adjustKeyboardFrameYToDrawerHeight;
-(void)_updateVisibleKeyboardFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setTextView:(UITextView *)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(BOOL)textViewShouldEndEditing:(id)arg1 ;
-(void)_keyboardDidChangeFrame:(id)arg1 ;
-(UITextView *)textView;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
@end

