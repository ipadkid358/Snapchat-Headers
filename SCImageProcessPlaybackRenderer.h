/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:14 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAEAGLLayer;

@interface SCImageProcessPlaybackRenderer : NSObject {

	CAEAGLLayer* _layer;
	BOOL _buffersAvaiable;
	unsigned _framebuffer;
	unsigned _colorRenderbuffer;
	int _outputWidth;
	int _outputHeight;

}

@property (nonatomic,readonly) unsigned framebuffer;                    //@synthesize framebuffer=_framebuffer - In the implementation block
@property (nonatomic,readonly) unsigned colorRenderbuffer;              //@synthesize colorRenderbuffer=_colorRenderbuffer - In the implementation block
@property (nonatomic,readonly) int outputWidth;                         //@synthesize outputWidth=_outputWidth - In the implementation block
@property (nonatomic,readonly) int outputHeight;                        //@synthesize outputHeight=_outputHeight - In the implementation block
@property (nonatomic,readonly) BOOL buffersAvaiable;                    //@synthesize buffersAvaiable=_buffersAvaiable - In the implementation block
-(void)genBuffersWithContext:(id)arg1 ;
-(unsigned)colorRenderbuffer;
-(BOOL)buffersAvaiable;
-(id)initWithLayer:(id)arg1 ;
-(int)outputWidth;
-(int)outputHeight;
-(void)deleteBuffers;
-(unsigned)framebuffer;
@end

