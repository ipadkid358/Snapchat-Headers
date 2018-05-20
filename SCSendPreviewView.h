/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol SCSendPreviewViewDelegate, SCSendPreviewViewModel, SCSendPreviewMediaView;
@class UITextView, SCShapeView, UIView, UILabel, NSString;

@interface SCSendPreviewView : UIView <UITextViewDelegate> {

	BOOL _wantsMediaPlay;
	BOOL _shouldBeGrayedOut;
	id<SCSendPreviewViewDelegate> _delegate;
	UITextView* _textView;
	SCShapeView* _horizontalContainerView;
	id<SCSendPreviewViewModel> _model;
	UIView* _topDividerView;
	UIView*<SCSendPreviewMediaView> _mediaView;
	UIView* _bottomDividerView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) id<SCSendPreviewViewModel> model;                           //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) UIView * topDividerView;                                    //@synthesize topDividerView=_topDividerView - In the implementation block
@property (nonatomic,retain) UIView*<SCSendPreviewMediaView> mediaView;                  //@synthesize mediaView=_mediaView - In the implementation block
@property (nonatomic,retain) UITextView * textView;                                      //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIView * bottomDividerView;                                 //@synthesize bottomDividerView=_bottomDividerView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic,__weak) id<SCSendPreviewViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SCShapeView * horizontalContainerView;                      //@synthesize horizontalContainerView=_horizontalContainerView - In the implementation block
@property (assign,nonatomic) BOOL shouldBeGrayedOut;                                     //@synthesize shouldBeGrayedOut=_shouldBeGrayedOut - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithViewModel:(id)arg1 ;
-(void)setBottomDividerView:(UIView *)arg1 ;
-(UIView *)bottomDividerView;
-(SCShapeView *)horizontalContainerView;
-(void)setHorizontalContainerView:(SCShapeView *)arg1 ;
-(id)placeholderTextView;
-(BOOL)shouldBeGrayedOut;
-(void)_updateFontColor;
-(void)setShouldBeGrayedOut:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCSendPreviewViewDelegate>)arg1 ;
-(id<SCSendPreviewViewDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(id)text;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(CGSize)intrinsicContentSize;
-(UILabel *)titleLabel;
-(void)setTextView:(UITextView *)arg1 ;
-(BOOL)canResignFirstResponder;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(id<SCSendPreviewViewModel>)model;
-(UITextView *)textView;
-(void)play;
-(void)pause;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(UIView*<SCSendPreviewMediaView>)mediaView;
-(void)setViewModel:(id)arg1 ;
-(void)setModel:(id<SCSendPreviewViewModel>)arg1 ;
-(void)setTopDividerView:(UIView *)arg1 ;
-(UIView *)topDividerView;
-(void)setMediaView:(UIView*<SCSendPreviewMediaView>)arg1 ;
@end
