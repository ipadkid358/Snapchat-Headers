/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCXRenderer.h>

@class NSString;

@interface SCXTapCircleRenderer : NSObject <SCXRenderer> {

	unsigned _intermediateRenderProgram;
	unsigned _intermediateVertexShader;
	unsigned _intermediateFragShader;
	unsigned _tapTextureLocation;
	int _intermediatePositionAttributeLocation;
	int _scaleUniformLocation;
	int _translateUniformLocation;
	int _alphaUniformLocation;
	int _borderScaleUniformLocation;
	unsigned _finalRenderProgram;
	unsigned _finalVertexShader;
	unsigned _finalFragShader;
	int _finalPositionAttributeLocation;
	int _intermediateTextureUniformLocation;
	unsigned _vbo;
	unsigned _ebo;
	unsigned _fbo;
	int _oldFBO;
	BOOL _readyToRender;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_prepareIntermediateRender;
-(void)_prepareFinalRender;
-(void)_lazyPrepareRendererIfNeeded;
-(void)_prepareRenderIteration;
-(void)_renderCircle:(id)arg1 inView:(id)arg2 ;
-(void)_drawToMainFBO;
-(id)init;
-(void)prepare;
-(void)complete;
-(void)render:(id)arg1 ;
@end
