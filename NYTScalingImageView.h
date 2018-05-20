/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIImageView;

@interface NYTScalingImageView : UIScrollView {

	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(id)initWithImage:(id)arg1 frame:(CGRect)arg2 ;
-(void)commonInitWithImage:(id)arg1 imageData:(id)arg2 ;
-(void)centerScrollViewContents;
-(void)updateZoomScale;
-(void)setupInternalImageViewWithImage:(id)arg1 imageData:(id)arg2 ;
-(void)setupImageScrollView;
-(void)updateImage:(id)arg1 imageData:(id)arg2 ;
-(id)initWithImageData:(id)arg1 frame:(CGRect)arg2 ;
-(void)updateImage:(id)arg1 ;
-(void)updateImageData:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
@end

