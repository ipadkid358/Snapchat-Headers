/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@protocol SCHeaderPromptViewDelegate;
@class SCShapeView, SCHeaderPromptViewModel, UILabel, UIButton;

@interface SCHeaderPromptView : UIButton {

	SCShapeView* _backgroundView;
	SCHeaderPromptViewModel* _viewModel;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UILabel* _emojiLabel;
	UIButton* _dismissIcon;
	id<SCHeaderPromptViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCHeaderPromptViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)_widthConstraint;
+(double)_heightWithViewModel:(id)arg1 ;
+(double)_textWidthConstraint;
+(double)_heightConstraint;
-(id)initWithViewModel:(id)arg1 ;
-(void)_didTap;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCHeaderPromptViewDelegate>)arg1 ;
-(id<SCHeaderPromptViewDelegate>)delegate;
-(void)_didDismiss;
-(void)_setupSubviews;
@end

