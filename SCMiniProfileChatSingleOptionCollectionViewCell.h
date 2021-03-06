/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel;

@interface SCMiniProfileChatSingleOptionCollectionViewCell : UICollectionViewCell {

	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	unsigned long long _alignment;

}

@property (nonatomic,retain) UIImageView * iconImageView;               //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) unsigned long long alignment;              //@synthesize alignment=_alignment - In the implementation block
-(void)populateCellWithIcon:(id)arg1 title:(id)arg2 alignment:(unsigned long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAlignment:(unsigned long long)arg1 ;
-(UILabel *)titleLabel;
-(unsigned long long)alignment;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)_setupUI;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
@end

