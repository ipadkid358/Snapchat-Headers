/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Snapchat/SCRecipientTextFieldDelegate.h>

@protocol SCNamedFriend, SCRecipientBarDelegate;
@class NSString, NSMutableArray, UILabel, SCRecipientTextField, UIScrollView, CALayer;

@interface SCRecipientBar : UIView <UITextFieldDelegate, SCRecipientTextFieldDelegate> {

	unsigned long long _state;
	unsigned long long _creationType;
	int _selectedIndex;
	NSString* _currentSuggestion;
	id<SCNamedFriend> _currentFriendSuggestion;
	NSString* _currentText;
	BOOL _keyboadShowing;
	NSMutableArray* _recipients;
	int _toLabelWidth;
	int _previousHeight;
	UILabel* _toLabel;
	SCRecipientTextField* _textField;
	UIScrollView* _scrollView;
	CALayer* _bottomBorder;
	BOOL _needsRecipientLayout;
	BOOL _enteredText;
	int _windowWidth;
	id<SCRecipientBarDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCRecipientBarDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<SCNamedFriend> currentFriendSuggestion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)initToLabel;
-(void)initScrollView;
-(void)initTextField;
-(void)initBottomBorder;
-(void)initGestureAndKeyboard;
-(BOOL)_isGroupCreationFromFeed;
-(void)didRecognizeTapGesture:(id)arg1 ;
-(BOOL)_shouldShowCursorForState:(unsigned long long)arg1 ;
-(void)_setUserText:(id)arg1 suggestion:(id)arg2 ;
-(void)setNeedsRecipientLayout;
-(BOOL)_recipientExits:(id)arg1 ;
-(void)_addPill:(id)arg1 ;
-(id)_setUserTextAndSuggest:(id)arg1 ;
-(void)_removePillByFriend:(id)arg1 ;
-(void)_resetCursorPosition;
-(void)_deselectAllPills;
-(BOOL)_attemptRemovePill:(id)arg1 ;
-(void)_updateReturnOrDoneButton;
-(BOOL)_attemptAddPill:(id)arg1 ;
-(id)_calculateRecipientFramesForState:(unsigned long long)arg1 lines:(int*)arg2 ;
-(void)_updateTextFieldPlaceholderIfNecessary;
-(double)_calculateHeightForLines:(long long)arg1 ;
-(void)_scrollToBottom;
-(unsigned long long)_recipientPillStateForState:(unsigned long long)arg1 ;
-(CGRect)_calculateFrameForRecipient:(id)arg1 recipientState:(unsigned long long)arg2 previousFrame:(CGRect)arg3 lines:(int*)arg4 ;
-(void)_removePill:(id)arg1 ;
-(void)didTapPill:(id)arg1 ;
-(void)_selectPill:(id)arg1 ;
-(id)initWithCreationType:(unsigned long long)arg1 ;
-(BOOL)_shouldCursorListenForState:(unsigned long long)arg1 ;
-(id)currentFilterText;
-(id<SCNamedFriend>)currentFriendSuggestion;
-(void)_applyState:(unsigned long long)arg1 ;
-(void)didPressDeleteWithEmptyString;
-(BOOL)shouldGestureRecognizerBeginOnTextField:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCRecipientBarDelegate>)arg1 ;
-(void)dealloc;
-(id<SCRecipientBarDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setTintColor:(id)arg1 ;
-(BOOL)isFirstResponder;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)removeRecipient:(id)arg1 ;
-(void)addRecipient:(id)arg1 ;
-(void)clearRecipients;
@end
