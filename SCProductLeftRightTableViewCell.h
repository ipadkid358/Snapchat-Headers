/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, NSString;

@interface SCProductLeftRightTableViewCell : UITableViewCell {

	UILabel* _optionTitleLabel;
	UILabel* _optionValueLabel;
	NSString* _titleText;
	NSString* _valueText;
	unsigned long long _valueLabelStyle;

}

@property (nonatomic,retain) NSString * titleText;                            //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) NSString * valueText;                            //@synthesize valueText=_valueText - In the implementation block
@property (assign,nonatomic) unsigned long long valueLabelStyle;              //@synthesize valueLabelStyle=_valueLabelStyle - In the implementation block
-(void)setValueLabelStyle:(unsigned long long)arg1 ;
-(unsigned long long)valueLabelStyle;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(NSString *)valueText;
-(void)setValueText:(NSString *)arg1 ;
@end

