/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:26 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCTimeProfilable.h>

@protocol SCChatKeyboardManagerDataSource;
@class NSMutableDictionary, UIView, UITextInputMode, NSString;

@interface SCChatKeyboardManager : NSObject <SCTimeProfilable> {

	NSMutableDictionary* _inputModesSnapshotMapping;
	BOOL _isShowingKeyboard;
	id<SCChatKeyboardManagerDataSource> _dataSource;
	double _keyboardHeight;
	UIView* _keyboardSnapshotView;
	UITextInputMode* _lastKnownInputMode;

}

@property (nonatomic,retain) UIView * keyboardSnapshotView;                                                //@synthesize keyboardSnapshotView=_keyboardSnapshotView - In the implementation block
@property (assign,nonatomic) BOOL isShowingKeyboard;                                                       //@synthesize isShowingKeyboard=_isShowingKeyboard - In the implementation block
@property (nonatomic,retain) UITextInputMode * lastKnownInputMode;                                         //@synthesize lastKnownInputMode=_lastKnownInputMode - In the implementation block
@property (assign,nonatomic,__weak) id<SCChatKeyboardManagerDataSource> dataSource;                        //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) double keyboardSnapshotHeight; 
@property (nonatomic,readonly) double keyboardHeight;                                                      //@synthesize keyboardHeight=_keyboardHeight - In the implementation block
@property (getter=isKeyboardSnapshotVisible,nonatomic,readonly) BOOL keyboardSnapshotVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(int)context;
-(void)textInputCurrentInputModeDidChange:(id)arg1 ;
-(UIView *)keyboardSnapshotView;
-(void)snapshotKeyboardIfNeeded;
-(id)_snapshotForCurrentInputModeIfAvailableAllowsEmoji:(BOOL)arg1 ;
-(void)setKeyboardSnapshotView:(UIView *)arg1 ;
-(void)setIsShowingKeyboard:(BOOL)arg1 ;
-(BOOL)isShowingKeyboard;
-(BOOL)isKeyboardSnapshotVisible;
-(id)_getCurrentInputModeForTextField:(id)arg1 ;
-(UITextInputMode *)lastKnownInputMode;
-(id)keyboardViewWithTextInputView:(id)arg1 ;
-(BOOL)canSnapshotTextInputView:(id)arg1 ;
-(void)setLastKnownInputMode:(UITextInputMode *)arg1 ;
-(BOOL)addKeyboardSnapshotToView:(id)arg1 isExiting:(BOOL)arg2 ;
-(void)removeKeyboardSnapshot;
-(double)keyboardSnapshotHeight;
-(id)init;
-(void)setDataSource:(id<SCChatKeyboardManagerDataSource>)arg1 ;
-(void)dealloc;
-(id<SCChatKeyboardManagerDataSource>)dataSource;
-(void)keyboardWillShow:(id)arg1 ;
-(double)keyboardHeight;
@end

