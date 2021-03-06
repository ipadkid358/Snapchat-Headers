/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCGrowingButton.h>

@class UIView, UIImageView, UILabel, NSString, UIColor;

@interface SCMapExplorerButton : SCGrowingButton {

	UIView* _containerView;
	UIView* _iconContainerView;
	UIImageView* _defaultIconImageView;
	UILabel* _emojiIconLabel;
	UIView* _labelContainerView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	BOOL _expanded;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIColor * titleColor; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) UIColor * subtitleColor; 
@property (nonatomic,copy) NSString * emoji; 
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;              //@synthesize expanded=_expanded - In the implementation block
+(id)_emojiFont;
+(id)_subtitleFont;
-(void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setBackgroundColor:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)emoji;
-(void)setEmoji:(NSString *)arg1 ;
-(NSString *)title;
-(BOOL)isExpanded;
-(void)setExpanded:(BOOL)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(id)_titleFont;
-(void)setSubtitleColor:(UIColor *)arg1 ;
-(UIColor *)subtitleColor;
@end

