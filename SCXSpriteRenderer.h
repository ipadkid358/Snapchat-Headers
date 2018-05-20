/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCXSpriteRenderer : NSObject {

	unsigned _program;
	unsigned _vertexShader;
	unsigned _fragShader;
	unsigned _vbo;
	unsigned _ebo;
	int _positionAttributeLocation;
	int _scaleUniformLocation;
	int _translateUniformLocation;
	int _anchorPointUniformLocation;
	int _rotateUniformLocation;
	int _alphaUniformLocation;
	int _spriteTextureUniformLocation;
	int _drawDebugGridUniformLocation;
	BOOL _readyToRender;

}
-(void)_prepareRender;
-(void)render:(id)arg1 context:(id)arg2 ;
-(void)_validateEAGLContext:(id)arg1 ;
-(void)_renderSingleSprite:(id)arg1 context:(id)arg2 layerOpacity:(float)arg3 ;
-(void)renderClusters:(id)arg1 context:(id)arg2 ;
-(id)init;
-(void)prepare;
-(void)complete;
@end

