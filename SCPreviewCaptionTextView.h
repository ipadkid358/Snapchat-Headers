/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UITextView.h>

@class UIColor;

@interface SCPreviewCaptionTextView : UITextView {

	BOOL _showCaptionStyleOptions;
	UIColor* _textBackgroundColor;
	double _textBackgroundCornerRadius;
	double _scale;

}

@property (nonatomic,copy) UIColor * textBackgroundColor;                    //@synthesize textBackgroundColor=_textBackgroundColor - In the implementation block
@property (assign,nonatomic) double textBackgroundCornerRadius;              //@synthesize textBackgroundCornerRadius=_textBackgroundCornerRadius - In the implementation block
@property (assign,nonatomic) double scale;                                   //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) BOOL showCaptionStyleOptions;                   //@synthesize showCaptionStyleOptions=_showCaptionStyleOptions - In the implementation block
-(void)setShowCaptionStyleOptions:(BOOL)arg1 ;
-(void)setLeading:(double)arg1 withScale:(double)arg2 ;
-(void)setTextBackgroundCornerRadius:(double)arg1 ;
-(void)_setLeadingForBackground;
-(void)_drawBackgroundWithRoundedCorner;
-(void)_drawBackgroundWithIntersects;
-(double)textBackgroundCornerRadius;
-(BOOL)showCaptionStyleOptions;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(void)paste:(id)arg1 ;
-(CGRect)textRect;
-(void)setTextBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)textBackgroundColor;
@end
