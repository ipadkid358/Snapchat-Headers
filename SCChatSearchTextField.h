/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UITextField.h>

@protocol SCChatSearchTextFieldDelegate;
@interface SCChatSearchTextField : UITextField {

	id<SCChatSearchTextFieldDelegate> _scChatSearchTextFieldDelegate;

}

@property (assign,nonatomic,__weak) id<SCChatSearchTextFieldDelegate> scChatSearchTextFieldDelegate;              //@synthesize scChatSearchTextFieldDelegate=_scChatSearchTextFieldDelegate - In the implementation block
-(void)setScChatSearchTextFieldDelegate:(id<SCChatSearchTextFieldDelegate>)arg1 ;
-(id<SCChatSearchTextFieldDelegate>)scChatSearchTextFieldDelegate;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(void)deleteBackward;
@end

