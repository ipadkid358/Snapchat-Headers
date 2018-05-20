/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIWindow.h>

@class UILabel;

@interface SCStatusBarOverlayLabelWindow : UIWindow {

	UILabel* _label;
	CGRect _labelFrameHidden;
	CGRect _labelFrameVisible;

}

@property (nonatomic,retain) UILabel * label;                       //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) CGRect labelFrameHidden;               //@synthesize labelFrameHidden=_labelFrameHidden - In the implementation block
@property (assign,nonatomic) CGRect labelFrameVisible;              //@synthesize labelFrameVisible=_labelFrameVisible - In the implementation block
+(id)messageBackgroundColor;
+(void)showMessageWithText:(id)arg1 backgroundColor:(id)arg2 ;
+(void)showMessageWithText:(id)arg1 backgroundColor:(id)arg2 textColor:(id)arg3 ;
+(void)showMessageWithText:(id)arg1 backgroundColor:(id)arg2 textColor:(id)arg3 duration:(double)arg4 ;
+(void)showMessageWithText:(id)arg1 ;
+(void)showErrorWithText:(id)arg1 ;
+(void)showDireErrorWithText:(id)arg1 ;
+(void)showMessageWithText:(id)arg1 backgroundColor:(id)arg2 duration:(double)arg3 ;
-(CGRect)labelFrameVisible;
-(CGRect)labelFrameHidden;
-(void)showAnimated:(BOOL)arg1 hideInSeconds:(double)arg2 ;
-(void)setLabelFrameHidden:(CGRect)arg1 ;
-(void)setLabelFrameVisible:(CGRect)arg1 ;
-(id)init;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)hideAnimated:(BOOL)arg1 ;
-(void)showAnimated:(BOOL)arg1 ;
@end

