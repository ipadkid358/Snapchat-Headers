/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class UIView, SCShapeView;

@interface SCPagingDotView : UIView {

	UIView* _shadowView;
	SCShapeView* _borderView;
	SCShapeView* _fillView;
	double _percentSelected;
	CGSize _previousBoundsSize;

}

@property (nonatomic,retain) UIView * shadowView;                    //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,retain) SCShapeView * borderView;               //@synthesize borderView=_borderView - In the implementation block
@property (nonatomic,retain) SCShapeView * fillView;                 //@synthesize fillView=_fillView - In the implementation block
@property (assign,nonatomic) double percentSelected;                 //@synthesize percentSelected=_percentSelected - In the implementation block
@property (assign,nonatomic) CGSize previousBoundsSize;              //@synthesize previousBoundsSize=_previousBoundsSize - In the implementation block
-(CGSize)previousBoundsSize;
-(void)setPreviousBoundsSize:(CGSize)arg1 ;
-(SCShapeView *)borderView;
-(void)setBorderView:(SCShapeView *)arg1 ;
-(void)setPercentSelected:(double)arg1 ;
-(double)percentSelected;
-(SCShapeView *)fillView;
-(void)setFillView:(SCShapeView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)shadowView;
-(void)setShadowView:(UIView *)arg1 ;
@end

