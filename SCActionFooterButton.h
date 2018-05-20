/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIControl.h>

@class UIImage, NSString, UILabel, UIImageView, UIView;

@interface SCActionFooterButton : UIControl {

	BOOL _badged;
	UIImage* _image;
	NSString* _title;
	long long _interfaceStyle;
	UILabel* _titleLabel;
	UILabel* _selectedTitleLabel;
	UIImageView* _imageView;
	UIView* _badgeView;

}

@property (nonatomic,retain) UILabel * titleLabel;                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * selectedTitleLabel;              //@synthesize selectedTitleLabel=_selectedTitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * badgeView;                        //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) UIImage * image;                           //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long interfaceStyle;                  //@synthesize interfaceStyle=_interfaceStyle - In the implementation block
@property (assign,getter=isBadged,nonatomic) BOOL badged;               //@synthesize badged=_badged - In the implementation block
-(long long)interfaceStyle;
-(void)setInterfaceStyle:(long long)arg1 ;
-(UILabel *)selectedTitleLabel;
-(void)_updateSelectionLabel;
-(BOOL)isBadged;
-(void)setBadged:(BOOL)arg1 ;
-(void)setSelectedTitleLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(void)tintColorDidChange;
-(void)setHighlighted:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(void)setSelected:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(UIView *)badgeView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)_updateTitleLabel;
-(void)setBadgeView:(UIView *)arg1 ;
@end
