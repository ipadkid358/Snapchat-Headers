/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UITextField.h>

@class UIButton, UIView, UILabel;

@interface SCTextField : UITextField {

	BOOL _isHighlighted;
	BOOL _justBeganEditing;
	UIButton* _xButton;
	UIView* _separator;
	UILabel* _errorLabel;
	CGRect _initialTextRect;

}

@property (assign,nonatomic) BOOL isHighlighted;                                   //@synthesize isHighlighted=_isHighlighted - In the implementation block
@property (nonatomic,retain) UIButton * xButton;                                   //@synthesize xButton=_xButton - In the implementation block
@property (nonatomic,retain) UIView * separator;                                   //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) UILabel * errorLabel;                                 //@synthesize errorLabel=_errorLabel - In the implementation block
@property (assign,nonatomic) BOOL justBeganEditing;                                //@synthesize justBeganEditing=_justBeganEditing - In the implementation block
@property (assign,nonatomic) CGRect initialTextRect;                               //@synthesize initialTextRect=_initialTextRect - In the implementation block
@property (assign,nonatomic,__weak) id<SCTextFieldDelegate> delegate; 
-(void)setXButton:(UIButton *)arg1 ;
-(UIButton *)xButton;
-(BOOL)isInErrorState;
-(void)setIsHighlighted:(BOOL)arg1 ;
-(void)setXButtonHidden:(BOOL)arg1 ;
-(void)setInitialTextRect:(CGRect)arg1 ;
-(void)setHighlightedState:(BOOL)arg1 ;
-(void)setJustBeganEditing:(BOOL)arg1 ;
-(void)textDidBeginEditing;
-(CGRect)initialTextRect;
-(BOOL)justBeganEditing;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(BOOL)isHighlighted;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(void)clearInput;
-(void)textDidChange;
-(void)setSeparator:(UIView *)arg1 ;
-(UIView *)separator;
-(void)drawPlaceholderInRect:(CGRect)arg1 ;
-(void)setError:(id)arg1 ;
-(UILabel *)errorLabel;
-(void)setErrorLabel:(UILabel *)arg1 ;
@end

