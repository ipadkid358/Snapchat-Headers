/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@protocol SCAutofillSuggestion;
@class UIImageView, UILabel, UITextView, UIView;

@interface SCOperaRemoteWebAutofillSuggestionBar : UIView {

	UIImageView* _iconImageView;
	UILabel* _doneLabel;
	UILabel* _autofillLabel;
	UILabel* _autofillSuggestionKeyText;
	UILabel* _autofillSuggestionValueText;
	UITextView* _pillStyleSuggestionButton;
	UIView* _topSuggestionTopSeparator;
	UIView* _bottomSuggestionBar;
	UIView* _leftSeparator;
	UIView* _rightSeparator;
	UIView* _topSuggestionBar;
	BOOL _hideBottomSuggestionBar;
	long long _onEditAutofillType;
	id<SCAutofillSuggestion> _delegate;

}

@property (assign,nonatomic,__weak) id<SCAutofillSuggestion> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 onEditAutofillType:(long long)arg2 ;
-(void)setAutofillSuggestionKey:(id)arg1 suggestionValue:(id)arg2 ;
-(void)hideBottomSuggestionBar;
-(void)initSuggestionBarForStyle:(long long)arg1 ;
-(void)initSCPillStyleSuggestionBar;
-(void)initDefaultStyleSuggestionBar;
-(void)doneLabelTapped:(id)arg1 ;
-(void)autofillLabelTapped:(id)arg1 ;
-(void)autofillValueSuggestionTapped:(id)arg1 ;
-(void)layoutSubviewsForPillStyle;
-(void)layoutSubviewsForDefaultStyle;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCAutofillSuggestion>)arg1 ;
-(id<SCAutofillSuggestion>)delegate;
@end

