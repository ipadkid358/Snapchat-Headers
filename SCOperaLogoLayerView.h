/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <Snapchat/SCOperaLayerView.h>

@class UIView, UIImageView, NSString;

@interface SCOperaLogoLayerView : UIView <SCOperaLayerView> {

	UIView* _backgroundColorView;
	UIImageView* _logoImageView;

}

@property (nonatomic,retain) UIImageView * logoImageView;              //@synthesize logoImageView=_logoImageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layerViewWithFrame:(CGRect)arg1 ;
-(void)_setupLogoImageViewWithLogoWidthRatio:(double)arg1 ;
-(void)setupViewForLayer:(id)arg1 isPartiallyVisible:(BOOL)arg2 ;
-(void)didFinishHiding;
-(UIImageView *)logoImageView;
-(void)setLogoImageView:(UIImageView *)arg1 ;
@end
