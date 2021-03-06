/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, SCGradientView, UIImageView;

@interface SCGradientColorPickerView : UIView {

	NSArray* _defaultColors;
	NSArray* _defaultCGColors;
	SCGradientView* _gradientView;
	NSArray* _gradientPickerNames;
	long long _currentPageIndex;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(void)updateGradientPicker:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)borderPath;
@end

