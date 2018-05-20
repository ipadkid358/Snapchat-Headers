/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class CALayer, SCManagedCapturePreviewViewDebugView, AVCaptureVideoPreviewLayer, LSAGLView;

@interface SCManagedCapturePreviewView : UIView {

	double _aspectRatio;
	CALayer* _containerLayer;
	CALayer* _metalLayer;
	SCManagedCapturePreviewViewDebugView* _debugView;
	AVCaptureVideoPreviewLayer* _videoPreviewLayer;
	LSAGLView* _videoPreviewGLView;

}

@property (nonatomic,retain) AVCaptureVideoPreviewLayer * videoPreviewLayer;              //@synthesize videoPreviewLayer=_videoPreviewLayer - In the implementation block
@property (nonatomic,retain) LSAGLView * videoPreviewGLView;                              //@synthesize videoPreviewGLView=_videoPreviewGLView - In the implementation block
-(LSAGLView *)videoPreviewGLView;
-(void)setVideoPreviewGLView:(LSAGLView *)arg1 ;
-(void)setupMetalLayer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 aspectRatio:(double)arg2 metalLayer:(id)arg3 ;
-(CGRect)_layerFrame;
-(BOOL)_shouldShowDebugView;
-(void)_layoutVideoPreviewLayer;
-(void)_layoutVideoPreviewGLView;
-(void)_layoutDebugViewIfNeeded;
-(void)layoutSubviews;
-(void)setHidden:(BOOL)arg1 ;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
-(void)setVideoPreviewLayer:(AVCaptureVideoPreviewLayer *)arg1 ;
@end
