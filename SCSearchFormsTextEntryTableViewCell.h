/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SCSearchFormsTextEntryTableViewCellDelegate;
@class UILabel, NSString, UITextField;

@interface SCSearchFormsTextEntryTableViewCell : UITableViewCell <UITextFieldDelegate> {

	UILabel* _titleLabel;
	BOOL _isEditable;
	id<SCSearchFormsTextEntryTableViewCellDelegate> _delegate;
	NSString* _titleLabelText;
	NSString* _identifier;
	UITextField* _textField;

}

@property (assign,nonatomic,__weak) id<SCSearchFormsTextEntryTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isEditable;                                                              //@synthesize isEditable=_isEditable - In the implementation block
@property (nonatomic,retain) NSString * titleLabelText;                                                    //@synthesize titleLabelText=_titleLabelText - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) UITextField * textField;                                                    //@synthesize textField=_textField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)titleLabelText;
-(void)_textFieldFinished:(id)arg1 ;
-(void)setTitleLabelText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCSearchFormsTextEntryTableViewCellDelegate>)arg1 ;
-(id<SCSearchFormsTextEntryTableViewCellDelegate>)delegate;
-(NSString *)identifier;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)isEditable;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(UITextField *)textField;
-(void)setIsEditable:(BOOL)arg1 ;
-(void)_textFieldDidChange:(id)arg1 ;
@end

