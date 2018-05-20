/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@interface SCXThumbnailRenderer : NSObject {

	unsigned _program;
	unsigned _vertexShader;
	unsigned _fragShader;
	unsigned _vbo;
	unsigned _ebo;
	int _positionAttributeLocation;
	int _scaleUniformLocation;
	int _translateUniformLocation;
	int _alphaUniformLocation;
	int _thumbnailTextureLocation;
	int _borderScaleUniformLocation;
	int _unitBorderWidthUniformLocation;
	int _labelCutCircleStretchUniformLocation;
	int _labelCutCircleTranslateUniformLocation;
	int _circleRadiusUniformLocation;
	int _labelTextureLocation;
	int _shouldDrawLabelUniformLocation;
	int _shouldDrawThumbnailUniformLocation;
	int _loadingRadarRadiansUniformLocation;
	int _loadingSpinnerAlphaUniformLocation;
	int _shouldDrawBaseShadowUniformLocation;
	int _isDirectRenderUniformLocation;
	BOOL _readyToRender;

}
-(void)renderThumbs:(id)arg1 context:(id)arg2 ;
-(void)_renderLabel:(id)arg1 inView:(id)arg2 withPOIWidth:(float)arg3 atPoint:(CGPoint)arg4 layerOpacity:(float)arg5 ;
-(void)_prepareRender:(id)arg1 ;
-(void)_renderViewState:(id)arg1 inView:(id)arg2 maxRenderWidth:(float)arg3 layerOpacity:(float)arg4 ;
-(id)init;
-(void)prepare;
-(void)complete;
@end

