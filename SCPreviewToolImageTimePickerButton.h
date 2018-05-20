/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCPreviewToolButtonBase.h>
#import <Snapchat/SCPreviewToolbarTimerButton.h>

@class NSNumber, UIImageView, UILabel, NSString;

@interface SCPreviewToolImageTimePickerButton : SCPreviewToolButtonBase <SCPreviewToolbarTimerButton> {

	long long _mode;
	NSNumber* _time;
	UIImageView* _imageView;
	UIImageView* _fillView;
	UIImageView* _fillViewMask;
	UIImageView* _subImageView;
	UILabel* _subTitleView;

}

@property (nonatomic,retain) UIImageView * imageView;                 //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * fillView;                  //@synthesize fillView=_fillView - In the implementation block
@property (nonatomic,retain) UIImageView * fillViewMask;              //@synthesize fillViewMask=_fillViewMask - In the implementation block
@property (nonatomic,retain) UIImageView * subImageView;              //@synthesize subImageView=_subImageView - In the implementation block
@property (nonatomic,retain) UILabel * subTitleView;                  //@synthesize subTitleView=_subTitleView - In the implementation block
@property (nonatomic,readonly) BOOL isTimeInfinite; 
@property (assign,nonatomic) long long mode;                          //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSNumber * time;                         //@synthesize time=_time - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_animateView:(id)arg1 toScale:(double)arg2 withDuration:(double)arg3 delay:(double)arg4 highlighted:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)setShowingHighlighted:(BOOL)arg1 ;
-(UIImageView *)fillView;
-(void)setFillView:(UIImageView *)arg1 ;
-(UIImageView *)fillViewMask;
-(UILabel *)subTitleView;
-(BOOL)isTimeInfinite;
-(UIImageView *)subImageView;
-(void)_updateTimeLabel;
-(void)setFillViewMask:(UIImageView *)arg1 ;
-(void)setSubImageView:(UIImageView *)arg1 ;
-(void)setSubTitleView:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(id)_maskImage;
-(void)setImageView:(UIImageView *)arg1 ;
-(NSNumber *)time;
-(void)setTime:(NSNumber *)arg1 ;
-(void)_updateButtonState;
@end

