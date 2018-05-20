/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol SCGalleryLagunaHomeWifiInstructionsViewDelegate;
@class UILabel, UIButton;

@interface SCGalleryLagunaHomeWifiInstructionsView : UIView {

	id<SCGalleryLagunaHomeWifiInstructionsViewDelegate> _delegate;
	UILabel* _instructionsLabel;
	UIButton* _addButton;

}

@property (assign,nonatomic,__weak) id<SCGalleryLagunaHomeWifiInstructionsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * instructionsLabel;                                                      //@synthesize instructionsLabel=_instructionsLabel - In the implementation block
@property (nonatomic,retain) UIButton * addButton;                                                             //@synthesize addButton=_addButton - In the implementation block
-(void)_didPressAddButton;
-(void)setWifiStrings;
-(void)setDelegate:(id<SCGalleryLagunaHomeWifiInstructionsViewDelegate>)arg1 ;
-(id<SCGalleryLagunaHomeWifiInstructionsViewDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)setAddButton:(UIButton *)arg1 ;
-(double)heightForWidth:(double)arg1 ;
-(UIButton *)addButton;
-(void)setInstructionsLabel:(UILabel *)arg1 ;
-(UILabel *)instructionsLabel;
@end
