/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSearchRoundedCornerView.h>

@class SCShapeView, UIImage, UIImageView;

@interface SCSearchRoundedCornerImageView : SCSearchRoundedCornerView {

	double _borderWidth;
	SCShapeView* _imageBorderShapeView;
	CGRect _lastLayoutBounds;
	UIImage* _image;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImage * image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(id)initWithCornerRadius:(double)arg1 rectCorner:(unsigned long long)arg2 cornerColor:(id)arg3 ;
-(void)setBorderWidth:(double)arg1 borderColor:(id)arg2 ;
-(void)layoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(UIImageView *)imageView;
@end
