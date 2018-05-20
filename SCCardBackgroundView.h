/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UIImageView, CAShapeLayer;

@interface SCCardBackgroundView : UIView {

	unsigned long long _shadowEdges;
	UIColor* _backgroundFillColor;
	UIImageView* _topShadowImageView;
	UIImageView* _leftShadowImageView;
	UIImageView* _rightShadowImageView;
	CGSize _previousBoundsSize;

}

@property (nonatomic,readonly) CAShapeLayer * shapeLayer; 
@property (assign,nonatomic) CGSize previousBoundsSize;                       //@synthesize previousBoundsSize=_previousBoundsSize - In the implementation block
@property (nonatomic,retain) UIImageView * topShadowImageView;                //@synthesize topShadowImageView=_topShadowImageView - In the implementation block
@property (nonatomic,retain) UIImageView * leftShadowImageView;               //@synthesize leftShadowImageView=_leftShadowImageView - In the implementation block
@property (nonatomic,retain) UIImageView * rightShadowImageView;              //@synthesize rightShadowImageView=_rightShadowImageView - In the implementation block
@property (assign,nonatomic) unsigned long long shadowEdges;                  //@synthesize shadowEdges=_shadowEdges - In the implementation block
@property (nonatomic,retain) UIColor * backgroundFillColor;                   //@synthesize backgroundFillColor=_backgroundFillColor - In the implementation block
+(Class)layerClass;
-(unsigned long long)shadowEdges;
-(UIImageView *)topShadowImageView;
-(UIImageView *)leftShadowImageView;
-(UIImageView *)rightShadowImageView;
-(void)setShadowEdges:(unsigned long long)arg1 ;
-(void)setBackgroundFillColor:(UIColor *)arg1 ;
-(UIColor *)backgroundFillColor;
-(void)setTopShadowImageView:(UIImageView *)arg1 ;
-(void)setLeftShadowImageView:(UIImageView *)arg1 ;
-(void)setRightShadowImageView:(UIImageView *)arg1 ;
-(CGSize)previousBoundsSize;
-(void)setPreviousBoundsSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CAShapeLayer *)shapeLayer;
@end

