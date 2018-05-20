/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSnapcodeTabCardView.h>
#import <Snapchat/SCTextViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSString, SCScannableInfo, SCTextView, UILabel, SCPreviewTooltipBalloon;

@interface SCSnapcodeWebTabCardView : SCSnapcodeTabCardView <SCTextViewDelegate, UIGestureRecognizerDelegate> {

	NSString* _inputUrl;
	NSString* _inputTitle;
	NSString* _editUrl;
	int itemFetchAttempt;
	double _mainPageSnapcodeViewOffset;
	double _textViewErrorOffset;
	SCScannableInfo* _scannableInfo;
	double _keyboardOffset;
	SCTextView* _textView;
	UILabel* _fieldInfoLabel;
	SCPreviewTooltipBalloon* _imageEditTooltip;

}

@property (nonatomic,retain) SCTextView * textView;                                   //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UILabel * fieldInfoLabel;                                //@synthesize fieldInfoLabel=_fieldInfoLabel - In the implementation block
@property (nonatomic,retain) SCPreviewTooltipBalloon * imageEditTooltip;              //@synthesize imageEditTooltip=_imageEditTooltip - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 buttonTitle:(id)arg2 snapcodeViewOffset:(double)arg3 ;
-(void)viewDidSelect;
-(void)viewDidUnSelect;
-(void)updateScannableInfo:(id)arg1 ;
-(void)updateViewKeyboardWillChangeFrame:(id)arg1 showing:(BOOL)arg2 ;
-(void)continueButtonPressedAction;
-(void)resetInput;
-(UILabel *)fieldInfoLabel;
-(SCPreviewTooltipBalloon *)imageEditTooltip;
-(void)setInputError:(id)arg1 ;
-(BOOL)_hasLink:(id)arg1 ;
-(void)continueButtonBarPressed:(id)arg1 ;
-(void)_updateEntry;
-(void)setLabelHidden:(BOOL)arg1 ;
-(void)setFieldInfoLabel:(UILabel *)arg1 ;
-(void)setImageEditTooltip:(SCPreviewTooltipBalloon *)arg1 ;
-(void)setTextView:(SCTextView *)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(SCTextView *)textView;
-(id)_titleColor;
@end

