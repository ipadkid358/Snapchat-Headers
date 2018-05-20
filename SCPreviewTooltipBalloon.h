/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel, NSString, NSAttributedString, UIColor, UIFont;

@interface SCPreviewTooltipBalloon : UIView {

	UIView* _triangle;
	UILabel* _textLabel;
	BOOL _triangleHidden;
	UIView* _contentView;
	double _verticalPadding;
	double _horizontalPadding;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (assign,nonatomic) long long textNumberOfLines; 
@property (nonatomic,retain) UIView * contentView;                           //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,copy) UIColor * textColor; 
@property (nonatomic,copy) UIColor * triangleColor; 
@property (nonatomic,copy) UIFont * textFont; 
@property (assign,nonatomic) double verticalPadding;                         //@synthesize verticalPadding=_verticalPadding - In the implementation block
@property (assign,nonatomic) double horizontalPadding;                       //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
-(void)setTextFont:(UIFont *)arg1 ;
-(void)setTrianglePosition:(long long)arg1 withOffset:(double)arg2 ;
-(void)setTriangleColor:(UIColor *)arg1 ;
-(long long)textNumberOfLines;
-(void)setTextNumberOfLines:(long long)arg1 ;
-(UIColor *)triangleColor;
-(void)setTriangleHidden:(BOOL)arg1 ;
-(void)runPopupAnimation;
-(void)fadeInAndOutWithDuration:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIColor *)textColor;
-(NSAttributedString *)attributedText;
-(long long)textAlignment;
-(void)setShadowOpacity:(double)arg1 ;
-(void)setHorizontalPadding:(double)arg1 ;
-(double)horizontalPadding;
-(UIFont *)textFont;
-(double)verticalPadding;
-(void)setVerticalPadding:(double)arg1 ;
@end
