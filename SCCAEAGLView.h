/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class CAEAGLLayer;

@interface SCCAEAGLView : UIView {

	unsigned long long _videoPlaybackQuality;

}

@property (assign,nonatomic) unsigned long long videoPlaybackQuality;              //@synthesize videoPlaybackQuality=_videoPlaybackQuality - In the implementation block
@property (nonatomic,readonly) CAEAGLLayer * glLayer; 
+(Class)layerClass;
-(void)setVideoPlaybackQuality:(unsigned long long)arg1 ;
-(unsigned long long)videoPlaybackQuality;
-(void)renderInContext:(CGContextRef)arg1 ;
-(CAEAGLLayer *)glLayer;
@end
