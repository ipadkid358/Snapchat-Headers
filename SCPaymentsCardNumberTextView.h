/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:43 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCTextView.h>

@class BTUICardType, NSMutableString;

@interface SCPaymentsCardNumberTextView : SCTextView {

	BTUICardType* _defaultCardType;
	NSMutableString* _hiddenText;
	BOOL _isSecureEntry;
	BOOL _needsToUpdateCardType;
	BTUICardType* _cardType;
	NSRange _mostRecentChangeRange;
	BOOL _shouldResignFirstResponderWhenComplete;

}

@property (assign,nonatomic) BOOL shouldResignFirstResponderWhenComplete;              //@synthesize shouldResignFirstResponderWhenComplete=_shouldResignFirstResponderWhenComplete - In the implementation block
-(long long)cardNetwork;
-(BOOL)shouldResignFirstResponderWhenComplete;
-(void)setShouldResignFirstResponderWhenComplete:(BOOL)arg1 ;
-(unsigned long long)cardNumberMaxLength;
-(void)formatTextField;
-(BOOL)isCompleteAndShouldResign;
-(unsigned long long)status:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(BOOL)isSecureTextEntry;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)clear;
-(unsigned long long)status;
-(id)cardType;
@end

