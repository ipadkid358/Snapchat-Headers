/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Snapchat/SCAlertViewActionController.h>

@class UIView, UITextField, NSString;

@interface SCAlertViewActionStoryNameFieldController : NSObject <UITextFieldDelegate, SCAlertViewActionController> {

	UIView* _textFieldContainer;
	UITextField* _textField;

}

@property (nonatomic,readonly) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)actionViewSize;
-(unsigned long long)alertViewActionType;
-(BOOL)adjustsSizeToMatchStandard;
-(BOOL)requiresAdditionalPaddingIfLastItem;
-(void)becomeFirstResponder;
-(UIEdgeInsets)edgeInsets;
-(id)initWithTitle:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(UITextField *)textField;
-(id)actionView;
@end
