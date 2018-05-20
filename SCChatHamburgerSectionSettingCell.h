/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:29 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCChatHamburgerRoundedCornerCell.h>

@protocol SCChatSCChatHamburgerSectionSettingCellDelegate;
@class SCChatHamburgerSectionSettingCellViewModel, UILabel, UIImageView, UISwitch, SCLoadingIndicatorView;

@interface SCChatHamburgerSectionSettingCell : SCChatHamburgerRoundedCornerCell {

	id<SCChatSCChatHamburgerSectionSettingCellDelegate> _delegate;
	BOOL _grayedOut;
	SCChatHamburgerSectionSettingCellViewModel* _viewModel;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _rightSubtitleLabel;
	UIImageView* _iconImageView;
	UISwitch* _switchButton;
	UIImageView* _caretImageView;
	SCLoadingIndicatorView* _loadingIndicatorView;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                          //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * rightSubtitleLabel;                                                     //@synthesize rightSubtitleLabel=_rightSubtitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                                                      //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UISwitch * switchButton;                                                          //@synthesize switchButton=_switchButton - In the implementation block
@property (nonatomic,retain) UIImageView * caretImageView;                                                     //@synthesize caretImageView=_caretImageView - In the implementation block
@property (nonatomic,retain) SCLoadingIndicatorView * loadingIndicatorView;                                    //@synthesize loadingIndicatorView=_loadingIndicatorView - In the implementation block
@property (assign,nonatomic) BOOL grayedOut;                                                                   //@synthesize grayedOut=_grayedOut - In the implementation block
@property (nonatomic,retain) SCChatHamburgerSectionSettingCellViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<SCChatSCChatHamburgerSectionSettingCellDelegate> delegate; 
-(void)setSwitchEnabled:(BOOL)arg1 ;
-(BOOL)grayedOut;
-(void)setGrayedOut:(BOOL)arg1 ;
-(void)handleSwitch:(id)arg1 ;
-(UILabel *)rightSubtitleLabel;
-(UIImageView *)caretImageView;
-(void)setRightSubtitleLabel:(UILabel *)arg1 ;
-(void)setCaretImageView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(SCChatHamburgerSectionSettingCellViewModel *)viewModel;
-(void)setViewModel:(SCChatHamburgerSectionSettingCellViewModel *)arg1 ;
-(void)_setup;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setSwitchOn:(BOOL)arg1 ;
-(void)setLoadingIndicatorView:(SCLoadingIndicatorView *)arg1 ;
-(SCLoadingIndicatorView *)loadingIndicatorView;
-(void)setSwitchButton:(UISwitch *)arg1 ;
-(UISwitch *)switchButton;
@end

