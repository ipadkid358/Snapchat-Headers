/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <Snapchat/TTTAttributedLabelDelegate.h>

@protocol SCSettingsTextTableViewCellDelegate;
@class UIStackView, UIImageView, UILabel, TTTAttributedLabel, NSString, UIImage, NSAttributedString;

@interface SCSettingsTextTableViewCell : UITableViewCell <TTTAttributedLabelDelegate> {

	UIStackView* _horizontalStackView;
	UIStackView* _textVerticalStackView;
	UIImageView* _leadingImageView;
	UILabel* _leadingTextLabel;
	UIImageView* _detailImageView;
	UILabel* _detailTextLabel;
	UILabel* _primaryTextLabel;
	TTTAttributedLabel* _secondaryTextLabel;
	UIImageView* _disclosureImageView;
	UILabel* _callToActionLabel;
	BOOL _showingErrorState;
	long long _disclosureIndicator;
	id<SCSettingsTextTableViewCellDelegate> _cellDelegate;
	NSString* _detailViewAccessibilityIdentifier;
	UIImage* _leadingImage;
	NSAttributedString* _leadingText;
	NSString* _leadingViewAccessibilityIdentifier;
	NSString* _callToActionText;
	NSString* _callToActionAccessibilityIdentifier;

}

@property (assign,nonatomic,__weak) id<SCSettingsTextTableViewCellDelegate> cellDelegate;              //@synthesize cellDelegate=_cellDelegate - In the implementation block
@property (assign,nonatomic) long long disclosureIndicator;                                            //@synthesize disclosureIndicator=_disclosureIndicator - In the implementation block
@property (assign,getter=isShowingErrorState,nonatomic) BOOL showingErrorState;                        //@synthesize showingErrorState=_showingErrorState - In the implementation block
@property (nonatomic,copy) NSString * primaryText; 
@property (assign,getter=isPrimaryTextEnabled,nonatomic) BOOL primaryTextEnabled; 
@property (nonatomic,copy) NSString * primaryTextAccessibilityLabel; 
@property (nonatomic,copy) NSString * primaryTextAccessibilityIdentifier; 
@property (nonatomic,copy) NSString * secondaryText; 
@property (nonatomic,copy) NSString * secondaryTextAccessibilityIdentifier; 
@property (nonatomic,copy) NSString * detailText; 
@property (nonatomic,copy) UIImage * detailImage; 
@property (nonatomic,copy) NSString * detailViewAccessibilityIdentifier;                               //@synthesize detailViewAccessibilityIdentifier=_detailViewAccessibilityIdentifier - In the implementation block
@property (nonatomic,copy) UIImage * leadingImage;                                                     //@synthesize leadingImage=_leadingImage - In the implementation block
@property (nonatomic,copy) NSAttributedString * leadingText;                                           //@synthesize leadingText=_leadingText - In the implementation block
@property (nonatomic,copy) NSString * leadingViewAccessibilityIdentifier;                              //@synthesize leadingViewAccessibilityIdentifier=_leadingViewAccessibilityIdentifier - In the implementation block
@property (nonatomic,copy) NSString * callToActionText;                                                //@synthesize callToActionText=_callToActionText - In the implementation block
@property (nonatomic,copy) NSString * callToActionAccessibilityIdentifier;                             //@synthesize callToActionAccessibilityIdentifier=_callToActionAccessibilityIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2 ;
-(NSString *)primaryTextAccessibilityIdentifier;
-(void)setPrimaryTextAccessibilityIdentifier:(NSString *)arg1 ;
-(BOOL)isPrimaryTextEnabled;
-(void)setPrimaryTextEnabled:(BOOL)arg1 ;
-(NSString *)secondaryTextAccessibilityIdentifier;
-(void)setSecondaryTextAccessibilityIdentifier:(NSString *)arg1 ;
-(void)setPrimaryTextAccessibilityLabel:(NSString *)arg1 ;
-(void)_updateDisclosureUI;
-(BOOL)isShowingErrorState;
-(NSString *)primaryTextAccessibilityLabel;
-(void)setDetailImage:(UIImage *)arg1 ;
-(void)setDisclosureIndicator:(long long)arg1 ;
-(void)setShowingErrorState:(BOOL)arg1 ;
-(long long)disclosureIndicator;
-(NSString *)detailViewAccessibilityIdentifier;
-(void)setDetailViewAccessibilityIdentifier:(NSString *)arg1 ;
-(NSString *)leadingViewAccessibilityIdentifier;
-(void)setLeadingViewAccessibilityIdentifier:(NSString *)arg1 ;
-(NSString *)callToActionText;
-(void)setCallToActionText:(NSString *)arg1 ;
-(NSString *)callToActionAccessibilityIdentifier;
-(void)setCallToActionAccessibilityIdentifier:(NSString *)arg1 ;
-(NSAttributedString *)leadingText;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_updateTextColors;
-(void)setLeadingImage:(UIImage *)arg1 ;
-(UIImage *)leadingImage;
-(NSString *)detailText;
-(void)setDetailText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(id<SCSettingsTextTableViewCellDelegate>)cellDelegate;
-(void)setCellDelegate:(id<SCSettingsTextTableViewCellDelegate>)arg1 ;
-(void)setPrimaryText:(NSString *)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(id)primaryTextColor;
-(void)setPrimaryTextColor:(id)arg1 ;
-(void)setLeadingText:(NSAttributedString *)arg1 ;
-(UIImage *)detailImage;
-(NSString *)primaryText;
@end

