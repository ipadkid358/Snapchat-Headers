/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <QuartzCore/CALayer.h>

@class SVGRenderer;

@interface SVGRendererLayer : CALayer {

	BOOL _beTransparent;
	SVGRenderer* _renderer;

}

@property (nonatomic,retain) SVGRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (assign,nonatomic) BOOL beTransparent;                  //@synthesize beTransparent=_beTransparent - In the implementation block
-(id)findRenderableObject:(CGPoint)arg1 ;
-(CGRect)makeDrawingRect;
-(BOOL)beTransparent;
-(void)setBeTransparent:(BOOL)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(SVGRenderer *)renderer;
-(void)setRenderer:(SVGRenderer *)arg1 ;
@end

