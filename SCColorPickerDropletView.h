/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCDrawingDropletView.h>

@class UIColor, SCShapeView;

@interface SCColorPickerDropletView : SCDrawingDropletView {

	UIColor* _color;
	SCShapeView* _borderView;

}

@property (nonatomic,retain) SCShapeView * borderView;              //@synthesize borderView=_borderView - In the implementation block
@property (nonatomic,retain) UIColor * color;                       //@synthesize color=_color - In the implementation block
-(SCShapeView *)borderView;
-(void)setBorderView:(SCShapeView *)arg1 ;
-(id)initWithFrameForDropletV2:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setCurrentPath:(id)arg1 ;
-(void)_setupContentView;
@end

