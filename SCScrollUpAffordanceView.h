/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIImageView, SCAffordanceArrowView, UIColor, NSString;

@interface SCScrollUpAffordanceView : UIView {

	UILabel* _label;
	UIImageView* _gradientView;
	SCAffordanceArrowView* _arrowView;
	UIColor* _primaryColor;
	BOOL _shouldShowGradientBackground;
	NSString* _affordanceText;

}

@property (assign,nonatomic) BOOL shouldShowGradientBackground;              //@synthesize shouldShowGradientBackground=_shouldShowGradientBackground - In the implementation block
@property (nonatomic,copy) NSString * affordanceText;                        //@synthesize affordanceText=_affordanceText - In the implementation block
-(void)_setupArrowViewWithPrimaryPublisherColor:(id)arg1 secondaryPublisherColor:(id)arg2 ;
-(void)_setupLabelWithTextColor:(id)arg1 ;
-(void)_setupGradientView;
-(NSString *)affordanceText;
-(BOOL)shouldShowGradientBackground;
-(void)_showArrowIndividually;
-(id)initWithPrimaryColor:(id)arg1 secondaryColor:(id)arg2 ;
-(void)setAffordanceText:(NSString *)arg1 ;
-(void)showArrow;
-(void)slideInFromBottom;
-(void)stopArrowAnimation;
-(void)setShouldShowGradientBackground:(BOOL)arg1 ;
-(double)textWidth;
-(void)flipVertically;
@end

