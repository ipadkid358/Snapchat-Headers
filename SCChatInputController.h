/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCPlaceholderTextViewPasteMediaDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <Snapchat/SCChatInputProvider.h>
#import <Snapchat/SCChatInputAVStreamAccessoryDelegate.h>
#import <Snapchat/SCChatTextInputCashTagManagerDelegate.h>
#import <Snapchat/SCTimeProfilable.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Snapchat/SCChatKeyboardManagerDataSource.h>
#import <Snapchat/SCBitmojiPasteDelegate.h>
#import <Snapchat/SCChatInputRemixAccessoryDelegate.h>
#import <Snapchat/SCChatInputMediaAccessoryDelegate.h>
#import <Snapchat/SCChatInputStickerAccessoryDelegate.h>
#import <Snapchat/SCPlaceholderTextViewVisibilityDelegate.h>
#import <Snapchat/SCChatInputViewSafeAreaDelegate.h>
#import <Snapchat/SCChatInputSnapAccessoryDelegate.h>
#import <Snapchat/SCChatViewLifeCycleListener.h>
#import <Snapchat/SCBubbleChatKeyboardDelegate.h>
#import <Snapchat/SCChatConversationUpdaterListener.h>

@protocol SCChatDrawerSender, SCChatInputAccessory, SCChatInputControllerDelegate;
@class NSString, SCUserSession, UIViewController, UIView, SCChatInputViewGradientView, MASConstraint, NSTextStorage, NSMutableArray, SCExpandedButton, UIButton, UILabel, SCChatInputMediaAccessory, SCChatInputAudioStreamAccessory, SCChatInputVideoStreamAccessory, SCChatInputSnapAccessory, SCChatInputStickerAccessory, SCChatInputRemixAccessory, SCChatInputKeyboardAccessory, UIPanGestureRecognizer, UIScrollView, SCChatTextInputCashTagManager, SCPurpleTooltipBalloon, SCPreviewTooltipBalloon, SCChatKeyboardManager, SCChatStickerFuzzySearch, SCChatStickerAutocompleteViewControllerV2, SCBitmojiPasteManager, SCChatCallingAccessoryListenerAnnouncer, UILongPressGestureRecognizer, NSDate, SCChatDraft, UIColor, NSArray, SCPlaceholderTextView, SCTDrawerHeightListenerAnnouncer, SCTV3CallTrack;

@interface SCChatInputController : NSObject <SCPlaceholderTextViewPasteMediaDelegate, UITextViewDelegate, SCChatInputProvider, SCChatInputAVStreamAccessoryDelegate, SCChatTextInputCashTagManagerDelegate, SCTimeProfilable, UIGestureRecognizerDelegate, SCChatKeyboardManagerDataSource, SCBitmojiPasteDelegate, SCChatInputRemixAccessoryDelegate, SCChatInputMediaAccessoryDelegate, SCChatInputStickerAccessoryDelegate, SCPlaceholderTextViewVisibilityDelegate, SCChatInputViewSafeAreaDelegate, SCChatInputSnapAccessoryDelegate, SCChatViewLifeCycleListener, SCBubbleChatKeyboardDelegate, SCChatConversationUpdaterListener> {

	SCUserSession* _userSession;
	id<SCChatDrawerSender> _sender;
	UIViewController* _parentViewController;
	long long _displayStyle;
	UIView* _containerView;
	SCChatInputViewGradientView* _inputView;
	MASConstraint* _inputViewHeightConstraint;
	UIView* _separator;
	id<SCChatInputAccessory> _presentingAccessory;
	id<SCChatInputAccessory> _previousAccessory;
	NSTextStorage* _textInputTextStorage;
	NSMutableArray* _accessoryItems;
	SCExpandedButton* _emojiSendButton;
	SCExpandedButton* _cashSendButton;
	UIButton* _cancelNote;
	BOOL _isCancellingNote;
	UILabel* _teachNote;
	BOOL _isAnimating;
	BOOL _missedAnimation;
	BOOL _shouldShowEmojiSendButton;
	BOOL _shouldShowEmojiSendButtonChanged;
	BOOL _shouldShowCashSendButton;
	BOOL _shouldHighlightText;
	BOOL _isRTL;
	BOOL _isTextLengthBlockingVideo;
	BOOL _accessoriesHidden;
	double _initialInputViewHeight;
	double _startPanOffset;
	double _startInputHeight;
	SCChatInputMediaAccessory* _mediaAccessory;
	SCChatInputAudioStreamAccessory* _audioAccessory;
	SCChatInputVideoStreamAccessory* _videoAccessory;
	SCChatInputSnapAccessory* _snapAccessory;
	SCChatInputStickerAccessory* _stickerAccessory;
	SCChatInputRemixAccessory* _remixAccessory;
	SCChatInputKeyboardAccessory* _keyboardAccessory;
	UIPanGestureRecognizer* _panGestureRecognizer;
	CGPoint _startDraggingLocation;
	double _startDraggingHeight;
	UIScrollView* _scrollViewUnderHandling;
	BOOL _scrollViewPanningBegan;
	unsigned long long _panningInitiator;
	SCChatTextInputCashTagManager* _textInputCashTagManager;
	SCPurpleTooltipBalloon* _tooltip;
	SCPreviewTooltipBalloon* _stickerAutosuggestTooltip;
	BOOL _keyboardWasShown;
	SCChatKeyboardManager* _keyboardManager;
	NSString* _lastSentText;
	BOOL _isStickerTypeSearchEnabledOnThisDevice;
	/*^block*/id _stickerSearchBlock;
	SCChatStickerFuzzySearch* _chatStickerSearch;
	SCChatStickerAutocompleteViewControllerV2* _stickerAutocompleteViewControllerV2;
	SCBitmojiPasteManager* _bitmojiPasteManager;
	SCChatCallingAccessoryListenerAnnouncer* _callingAccessoryListenerAnnouncer;
	UIPanGestureRecognizer* _stickerPanRecognizer;
	UILongPressGestureRecognizer* _stickerLongPressRecognizer;
	UIView* _fullscreenInputWhiteBackgroundView;
	NSDate* _inputActivityMarkedTime;
	SCChatDraft* _chatDraft;
	UIColor* _cursorColor;
	double _currentInputViewHeight;
	double _currentPlaceholderTextViewBottomOffset;
	NSArray* _accessoryViewBottomConstraints;
	UIView* _joinCallPane;
	BOOL _isFullScreenMode;
	BOOL _shouldStopPanning;
	BOOL _textInputEnabled;
	BOOL _isDragging;
	id<SCChatInputControllerDelegate> _delegate;
	SCPlaceholderTextView* _placeholderTextView;
	SCTDrawerHeightListenerAnnouncer* _drawerHeightAnnouncer;
	SCTV3CallTrack* _callTrack;
	CGSize _keyboardAndInputBarSize;

}

@property (assign,nonatomic,__weak) id<SCChatInputControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCSnapSendPreparer> snapSendPreparer; 
@property (assign,nonatomic) long long displayStyle; 
@property (nonatomic,copy) NSString * inputText; 
@property (assign,nonatomic) BOOL inputAccessoriesHidden; 
@property (assign,nonatomic) BOOL snapAccessoryHidden; 
@property (assign,nonatomic) BOOL inputViewTransparent; 
@property (assign,nonatomic) BOOL isFullScreenMode;                                                   //@synthesize isFullScreenMode=_isFullScreenMode - In the implementation block
@property (assign,nonatomic) BOOL shouldStopPanning;                                                  //@synthesize shouldStopPanning=_shouldStopPanning - In the implementation block
@property (assign,nonatomic) CGSize keyboardAndInputBarSize;                                          //@synthesize keyboardAndInputBarSize=_keyboardAndInputBarSize - In the implementation block
@property (assign,nonatomic) BOOL textInputEnabled;                                                   //@synthesize textInputEnabled=_textInputEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isDragging;                                                       //@synthesize isDragging=_isDragging - In the implementation block
@property (nonatomic,readonly) SCPlaceholderTextView * placeholderTextView;                           //@synthesize placeholderTextView=_placeholderTextView - In the implementation block
@property (nonatomic,readonly) SCTDrawerHeightListenerAnnouncer * drawerHeightAnnouncer;              //@synthesize drawerHeightAnnouncer=_drawerHeightAnnouncer - In the implementation block
@property (nonatomic,readonly) SCTV3CallTrack * callTrack;                                            //@synthesize callTrack=_callTrack - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_animateTransitionOutForButton:(id)arg1 ;
+(id)cashTagColorAttributes;
+(void)_animateTransitionInForButton:(id)arg1 ;
+(id)sendButtonFont;
+(id)emojiSendButtonColor;
+(id)cashSendButtonColor;
+(id)textInputDefaultFont;
+(int)context;
+(id)placeholderFont;
-(BOOL)isPartiallyVisible;
-(void)pasteGif:(id)arg1 ;
-(void)pasteImage:(id)arg1 ;
-(long long)drawerActionType;
-(void)bitmojiKeyboardDidPasteBitmojiSticker:(id)arg1 ;
-(void)_pan:(id)arg1 ;
-(void)didConversationViewModelChange:(id)arg1 ;
-(id)chatDraft;
-(SCPlaceholderTextView *)placeholderTextView;
-(id)replyParameters;
-(void)setSnapSendPreparer:(id<SCSnapSendPreparer>)arg1 ;
-(void)viewDidSwipeIn;
-(void)viewDidSwipeOut;
-(id<SCSnapSendPreparer>)snapSendPreparer;
-(void)dismissKeyboardIfNecessary;
-(void)bringBackKeyboardIfNecessary;
-(BOOL)hasPresentingAccessory;
-(void)textInputCashTagManagerDidChangeInsertionPointContext:(id)arg1 ;
-(void)textInputCashTagManagerDidChangeHighlightedCashTagRanges:(id)arg1 ;
-(void)textInputCashTagManagerDidChangeSwipeToSendMarkerEntered:(id)arg1 ;
-(id)textOfTextInputViewForTextInputCashTagManager:(id)arg1 ;
-(BOOL)changeTextOfTextInputViewInRange:(NSRange)arg1 replacementText:(id)arg2 forTextInputCashTagManager:(id)arg3 ;
-(BOOL)changeSelectionOfTextInputView:(NSRange)arg1 forTextInputCashTagManager:(id)arg2 ;
-(BOOL)swipeToSendMarkerEntered;
-(NSRange)selectedRangeOfTextInputViewForTextInputCashTagManager:(id)arg1 ;
-(id)markedTextRangeOfTextInputViewForTextInputCashTagManager:(id)arg1 ;
-(void)highlightCashTagAtInsertionPoint;
-(NSDictionary*)conversationStickerUsageHistory;
-(double)_drawerHeight;
-(void)clearStickerSearchLastSentText;
-(void)attachDrawerForAccessory:(id)arg1 ;
-(void)detachDrawerForAccessory:(id)arg1 ;
-(void)disableCallingAccessariesForDesignatedTime;
-(void)drawerScrollViewWillBeginDragging:(id)arg1 ;
-(void)drawerScrollViewDidScroll:(id)arg1 ;
-(void)drawerScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)handleDraggingDownPanWithGestureRecognizer:(id)arg1 ;
-(BOOL)isPresentingAccessory:(id)arg1 ;
-(void)requestInputAccessory:(id)arg1 drawerHeight:(double)arg2 animated:(BOOL)arg3 ;
-(void)clearInputText;
-(void)mediaAccessoryDidSendMessageFromPreview:(id)arg1 ;
-(long long)drawerMode;
-(BOOL)isKeyboardSnapshotVisible;
-(id)textInputViewForChatKeyboardManager;
-(BOOL)isTextInputEnabled;
-(void)startAudio;
-(void)pressCamera;
-(void)addKeyboardSnapshot;
-(void)restoreFromChatDraft:(id)arg1 ;
-(void)updateCursorColor:(id)arg1 ;
-(BOOL)isFullScreenMode;
-(id)initWithUserSession:(id)arg1 parentViewController:(id)arg2 drawerSender:(id)arg3 displayStyle:(long long)arg4 ;
-(void)addCallingAccessoryListener:(id)arg1 ;
-(void)handleBubbleChatPanWithGestureRecognizer:(id)arg1 ;
-(void)disableKeyboardIfNecessary;
-(void)enableKeyboardIfNecessary;
-(void)didAttemptToSendMessage;
-(void)enableKeyboard:(BOOL)arg1 ;
-(void)disableKeyboard;
-(CGSize)keyboardAndInputBarSize;
-(void)chatScrollViewDidScroll:(id)arg1 ;
-(void)chatScrollViewWillBeginDragging:(id)arg1 ;
-(void)chatScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(BOOL)textInputEnabled;
-(void)setTextInputEnabled:(BOOL)arg1 ;
-(void)showTeachNoteWithMedia:(unsigned long long)arg1 ;
-(void)setCallingAccessorySelection:(unsigned long long)arg1 ;
-(BOOL)isQuickSnapEnabled;
-(void)didPressSnapAccessoryButton;
-(void)didReturnFromCameraWithoutSendingSnap;
-(BOOL)supports4GCalling;
-(BOOL)showAvatarPickerWithBitmojiUsers:(id)arg1 targetView:(id)arg2 delegate:(id)arg3 ;
-(BOOL)showFriendmojiHintWithTargetView:(id)arg1 delegate:(id)arg2 ;
-(void)friendmojiAvatarPickerClosedWithFriendmojiType:(long long)arg1 selectedStickerId:(id)arg2 ;
-(void)didPressRemixAccessoryButton;
-(void)didAttemptToSendRemix;
-(void)bringBackPreviousAccessory;
-(void)cancelAudioVideoNoteMaybeWithCompletion:(/*^block*/id)arg1 ;
-(void)showTooltipForTypeOfCall:(long long)arg1 ;
-(void)dismissTooltip;
-(void)panInputAccessoriesWithGestureRecognizer:(id)arg1 dragToHide:(BOOL)arg2 ;
-(BOOL)inputAccessoriesHidden;
-(void)setInputAccessoriesHidden:(BOOL)arg1 ;
-(BOOL)inputViewTransparent;
-(void)setInputViewTransparent:(BOOL)arg1 ;
-(void)setIsFullScreenMode:(BOOL)arg1 ;
-(BOOL)isTextLengthBlockingVideo;
-(void)populateChatStickerPickerWithBitmojiSuggestedReplies:(id)arg1 stickerId:(id)arg2 ;
-(void)showGreetingStickers;
-(void)resignActiveIfNecessary;
-(double)maximumInputHeight;
-(void)inputAVStreamAccessoryPressed:(id)arg1 ;
-(BOOL)isAnyAVAccessoryActive;
-(BOOL)isDraggingPointWithinCancel:(CGPoint)arg1 ;
-(void)showCancelNoteButton;
-(void)disableAccessoryViewInteractionBeforeChatNotesRecording;
-(void)removeCanceNoteButton;
-(void)enableAccessoryViewInteractionAfterChatNotesRecording;
-(void)safeAreaBottomInsetDidChange:(double)arg1 ;
-(void)_addAccessory:(id)arg1 ;
-(void)_longPressStickerAccessory:(id)arg1 ;
-(void)shouldHighlightText;
-(void)_initInputView;
-(void)_initSeparatorView;
-(void)_initPlaceholderTextView;
-(void)_adjustTextInputViewAnimated:(BOOL)arg1 ;
-(void)_reattachDrawerViewIfNecessary;
-(void)addVideoNoteUIAutomationHelper:(id)arg1 ;
-(double)_presentingAccessoryDefaultDrawerHeight;
-(id)_presentingAccessoryDrawerView;
-(void)dismissCurrentAccessoryAnimated:(BOOL)arg1 ;
-(void)_requestInputAccessory:(id)arg1 drawerHeight:(double)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)resignFirstResponder:(BOOL)arg1 ;
-(void)dismissKeyboardIfNecessaryWithAnimation:(BOOL)arg1 ;
-(void)_updateInputViewWithHeight:(double)arg1 ;
-(void)_hideTeachNote:(/*^block*/id)arg1 ;
-(void)setAttributedInputText:(id)arg1 ;
-(void)resetTypingAttributes;
-(BOOL)_cashButtonShown;
-(id)cashSendButton;
-(id)attributesOfTextInTextInputView;
-(void)setPlaceholder:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateInputViewHeight:(double)arg1 ;
-(void)_animateAccessoriesVisibility:(BOOL)arg1 withTargetInputHeight:(double)arg2 ;
-(void)_updatePlaceholderTextViewBottomOffset:(double)arg1 ;
-(void)collapsePresentingDrawer;
-(id)placeholderTextColorWithAlpha:(double)arg1 ;
-(id)inputViewBackgroundColor;
-(id)inputViewSeparatorBackgroundColor;
-(id)inputViewPlaceholderTextViewBackgroundColor;
-(void)_setCursorColor:(id)arg1 ;
-(id)inputTextColor;
-(BOOL)_shouldAnimateJoinCallPaneIn;
-(id)_joinCallPaneAnimationWithDirection:(id)arg1 ;
-(void)detachJoinCallPane;
-(void)cancelRecordingNote;
-(void)setNormalCancelNoteImage;
-(void)setSnapAccessoryHidden:(BOOL)arg1 ;
-(void)setPressedCancelNoteImage;
-(void)fadeOutActiveAcccessoyNoteImage;
-(void)fadeInActiveAcccessoyNoteImage;
-(void)shrinkCancelButton;
-(void)growCancelButton;
-(void)_setAccessoryViewInteractionEnabled:(BOOL)arg1 ;
-(void)removeDrawerForAccessory:(id)arg1 ;
-(void)logDrawerActionType:(long long)arg1 accessory:(id)arg2 ;
-(double)_presentingAccessoryDrawerHeight;
-(void)_updateDrawerAndInputViewHeight:(double)arg1 ;
-(void)_updateDrawerViewWithHeight:(double)arg1 ;
-(void)_markInputActivity;
-(void)presentPreviewForStory:(id)arg1 ;
-(void)_updateTextSelection:(id)arg1 ;
-(void)_sendMessage;
-(void)resizeLocalVideoPreviewMaybe:(id)arg1 ;
-(BOOL)_showEmojiSendForText:(id)arg1 textInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(id)textInputCashTagManager;
-(void)_stopStickerSearch;
-(void)_startStickerSearch:(id)arg1 ;
-(void)updateTextOfTextInputViewWithHighlightedCashTagRanges:(id)arg1 ;
-(id)textColorAttributes;
-(void)updateChatActionButtonState;
-(BOOL)isInCashState;
-(BOOL)_hasEnoughSpaceForCashSendButton;
-(void)_refreshBitmojiSmartReplies:(id)arg1 message:(id)arg2 ;
-(BOOL)_inputActivityDetectedWithinCallDisableTime;
-(unsigned long long)_currentCallingAccessorySelection;
-(BOOL)shouldStopPanning;
-(BOOL)_beginPanningWithLocation:(CGPoint)arg1 panningInitiator:(unsigned long long)arg2 ;
-(void)_updatePanningWithLocation:(CGPoint)arg1 panningInitiator:(unsigned long long)arg2 ;
-(void)_endPanningWithGestureRecognizer:(id)arg1 panningInitiator:(unsigned long long)arg2 ;
-(void)_outSidePanningWithGestureRecognizer:(id)arg1 panningInitiator:(unsigned long long)arg2 ;
-(void)_scrollViewDidScroll:(id)arg1 panningInitiator:(unsigned long long)arg2 startPanningCheckBlock:(/*^block*/id)arg3 ;
-(void)_scrollViewDidEndDragging:(id)arg1 panningInitiator:(unsigned long long)arg2 ;
-(double)_flexibleConstraintsForDrawerY:(double)arg1 panningInitiator:(unsigned long long)arg2 ;
-(double)_finalPostionWithFinalYVelocity:(double)arg1 updatedDrawerY:(double)arg2 ;
-(void)_emojiSendButtonPressed:(id)arg1 ;
-(void)_initEmojiSendButton;
-(id)emojiSendButton;
-(id)attributedInputText;
-(void)_cashSendButtonPressed:(id)arg1 ;
-(void)_initCashSendButton;
-(CGSize)_placeholderSizeThatFits;
-(BOOL)_hasEnoughSpaceForButton:(id)arg1 textSize:(CGSize)arg2 ;
-(void)_updateEmojiSendButton;
-(double)_inputViewChromeHeight;
-(BOOL)_emojiSendButtonShown;
-(id)chatDraftUserInfo;
-(void)_resetEmojiSendButton;
-(void)_restoreInputTextFromChatDraft:(id)arg1 ;
-(void)_restoreCashTagsFromChatDraft:(id)arg1 ;
-(void)_restoreCashSendButton;
-(void)_prepareTeachLabelForMedia:(unsigned long long)arg1 ;
-(void)_doStickerSearch:(id)arg1 ;
-(id)previousText;
-(void)attachKeyboardIfPossible;
-(void)stickerAccessory:(id)arg1 didReceiveAutosuggestStickers:(id)arg2 ;
-(void)resetCallingAccessoriesAssets;
-(void)pressAudio;
-(void)pressVideo;
-(void)repositionPresentingAccessory;
-(void)dismissCurrentAccessory;
-(void)removeCallingAccessoryListener:(id)arg1 ;
-(void)setCallingAccessoryUserInteractionEnabled:(BOOL)arg1 ;
-(void)setInputAccessoriesVisiblityFactor:(double)arg1 ;
-(BOOL)snapAccessoryHidden;
-(void)cancelAudioVideoNoteMaybe;
-(id)createJoinCallPaneAnimation:(unsigned long long)arg1 publishedMedia:(unsigned long long)arg2 inCall:(BOOL)arg3 ;
-(void)attachJoinCallPane:(id)arg1 ;
-(BOOL)isPresentingStickerAccessory;
-(BOOL)_expandableAccessory;
-(id)anchorViewForTooltip:(unsigned long long)arg1 ;
-(void)setShouldStopPanning:(BOOL)arg1 ;
-(void)setKeyboardAndInputBarSize:(CGSize)arg1 ;
-(SCTDrawerHeightListenerAnnouncer *)drawerHeightAnnouncer;
-(SCTV3CallTrack *)callTrack;
-(void)videoNoteForUIAutomation:(id)arg1 ;
-(void)setDelegate:(id<SCChatInputControllerDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isDragging;
-(void)reload;
-(id<SCChatInputControllerDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)resignFirstResponder;
-(void)becomeFirstResponder;
-(BOOL)isFirstResponder;
-(id)inputView;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(BOOL)textViewShouldEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(NSString *)inputText;
-(void)setPlaceholder:(id)arg1 ;
-(void)setInputText:(NSString *)arg1 ;
-(void)_scrollViewWillBeginDragging:(id)arg1 ;
-(long long)displayStyle;
-(void)setDisplayStyle:(long long)arg1 ;
-(void)resignActive;
-(void)_updateColors;
-(id)recipient;
-(void)startVideo;
-(void)presentInView:(id)arg1 ;
-(BOOL)isGroupConversation;
@end

