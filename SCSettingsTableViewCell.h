/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class SCLoadingIndicatorView, UILabel, UIView, UIImageView;

@interface SCSettingsTableViewCell : UITableViewCell {

	SCLoadingIndicatorView* _loadingIndicator;
	unsigned long long _previousIndicatorType;
	UILabel* _currentInfo;
	UIView* _customAccessoryView;
	UIImageView* _bangView;
	UIImageView* _coloredArrow;

}

@property (nonatomic,retain) UIImageView * coloredArrow;                //@synthesize coloredArrow=_coloredArrow - In the implementation block
@property (nonatomic,retain) UIImageView * bangView;                    //@synthesize bangView=_bangView - In the implementation block
@property (nonatomic,retain) UILabel * currentInfo;                     //@synthesize currentInfo=_currentInfo - In the implementation block
@property (nonatomic,retain) UIView * customAccessoryView;              //@synthesize customAccessoryView=_customAccessoryView - In the implementation block
-(void)resetCellState:(BOOL)arg1 ;
-(void)resetCellState:(BOOL)arg1 hasError:(BOOL)arg2 ;
-(void)setCellStyle:(unsigned long long)arg1 indicatorType:(unsigned long long)arg2 ;
-(void)setCellStyle:(unsigned long long)arg1 indicatorType:(unsigned long long)arg2 exclamation:(BOOL)arg3 ;
-(UIImageView *)bangView;
-(void)setColoredArrow:(UIImageView *)arg1 ;
-(void)setBangView:(UIImageView *)arg1 ;
-(void)setCellState:(BOOL)arg1 hasError:(BOOL)arg2 ;
-(UIImageView *)coloredArrow;
-(void)_hidePreviousIndicator;
-(void)_updateBangViewOffset;
-(void)updateCellStyle:(unsigned long long)arg1 ;
-(void)_resetCellTextStyle;
-(UILabel *)currentInfo;
-(void)setCurrentInfo:(UILabel *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setDetailText:(id)arg1 ;
-(id)loadingIndicator;
-(void)setCustomAccessoryView:(UIView *)arg1 ;
-(UIView *)customAccessoryView;
@end

