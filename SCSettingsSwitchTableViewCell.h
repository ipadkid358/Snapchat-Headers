/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <Snapchat/TTTAttributedLabelDelegate.h>

@protocol SCSettingsSwitchTableViewCellDelegate;
@class UIStackView, UISwitch, UILabel, TTTAttributedLabel, UIColor, NSString;

@interface SCSettingsSwitchTableViewCell : UITableViewCell <TTTAttributedLabelDelegate> {

	UIStackView* _verticalStack;
	UISwitch* _switchView;
	UILabel* _primaryTextLabel;
	TTTAttributedLabel* _secondaryTextLabel;
	BOOL _isSendingEvent;
	id<SCSettingsSwitchTableViewCellDelegate> _cellDelegate;

}

@property (assign,nonatomic,__weak) id<SCSettingsSwitchTableViewCellDelegate> cellDelegate;              //@synthesize cellDelegate=_cellDelegate - In the implementation block
@property (nonatomic,retain) UIColor * switchOnTintColor; 
@property (assign,getter=isSwitchOn,nonatomic) BOOL switchOn; 
@property (assign,getter=isSwitchEnabled,nonatomic) BOOL switchEnabled; 
@property (nonatomic,copy) NSString * switchAccessibilityLabel; 
@property (nonatomic,copy) NSString * switchAccessibilityIdentifier; 
@property (nonatomic,copy) NSString * primaryText; 
@property (assign,getter=isPrimaryTextEnabled,nonatomic) BOOL primaryTextEnabled; 
@property (nonatomic,copy) NSString * primaryTextAccessibilityIdentifier; 
@property (nonatomic,copy) NSString * secondaryText; 
@property (nonatomic,copy) NSString * secondaryTextAccessibilityIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2 ;
-(UIColor *)switchOnTintColor;
-(void)setSwitchOnTintColor:(UIColor *)arg1 ;
-(void)setSwitchOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isSwitchEnabled;
-(void)setSwitchEnabled:(BOOL)arg1 ;
-(NSString *)switchAccessibilityLabel;
-(void)setSwitchAccessibilityLabel:(NSString *)arg1 ;
-(NSString *)switchAccessibilityIdentifier;
-(void)setSwitchAccessibilityIdentifier:(NSString *)arg1 ;
-(NSString *)primaryTextAccessibilityIdentifier;
-(void)setPrimaryTextAccessibilityIdentifier:(NSString *)arg1 ;
-(BOOL)isPrimaryTextEnabled;
-(void)setPrimaryTextEnabled:(BOOL)arg1 ;
-(NSString *)secondaryTextAccessibilityIdentifier;
-(void)setSecondaryTextAccessibilityIdentifier:(NSString *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)didMoveToWindow;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)secondaryText;
-(id<SCSettingsSwitchTableViewCellDelegate>)cellDelegate;
-(void)setCellDelegate:(id<SCSettingsSwitchTableViewCellDelegate>)arg1 ;
-(void)setPrimaryText:(NSString *)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(void)_switchChanged:(id)arg1 ;
-(id)primaryTextColor;
-(void)setPrimaryTextColor:(id)arg1 ;
-(void)setSecondaryTextColor:(id)arg1 ;
-(void)setSwitchOn:(BOOL)arg1 ;
-(BOOL)isSwitchOn;
-(NSString *)primaryText;
@end

