/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class CAEAGLLayer, EAGLContext, CADisplayLink, POPSpringAnimation;

@interface SCPullToRefreshBackgroundRenderView : UIView {

	CAEAGLLayer* _eaglLayer;
	EAGLContext* _context;
	CADisplayLink* _displayLink;
	unsigned _projectionUniform;
	unsigned _modelViewUniform;
	unsigned _textureUniform;
	unsigned _textureFBOUniform;
	unsigned _amplitudeUniform;
	unsigned _shouldColorBlendUniform;
	unsigned _colorBlendUniform;
	unsigned _vertexShaderBase;
	unsigned _fragmentShaderBase;
	unsigned _fragmentShaderWave;
	unsigned _fragmentShaderActivity;
	unsigned _positionSlot;
	unsigned _texCoordSlot;
	unsigned _textureFBO;
	unsigned _textureGradientGray;
	unsigned _textureGradientGrayDimmed;
	unsigned _textureGradientBlue;
	unsigned _textureGradientPurple;
	unsigned _vertexBuffer;
	unsigned _indexBuffer;
	unsigned _colorRenderBuffer;
	unsigned _frameBuffers[2];
	unsigned _programs[3];
	double _wavePosition;
	double _waveInitialOpacity;
	double _secondsSinceAnimation;
	long long _theme;
	long long _renderMode;
	POPSpringAnimation* _springAnimation;
	BOOL _shouldUpdateWaveOffset;
	double _topContentInset;
	long long _pullToRefreshState;

}

@property (assign,nonatomic) double topContentInset;                    //@synthesize topContentInset=_topContentInset - In the implementation block
@property (assign,nonatomic) long long pullToRefreshState;              //@synthesize pullToRefreshState=_pullToRefreshState - In the implementation block
+(Class)layerClass;
-(unsigned)_compileShader:(id)arg1 withType:(unsigned)arg2 ;
-(void)_useProgram:(long long)arg1 ;
-(void)_translateGeometry;
-(id)_colorForTime:(double)arg1 ;
-(void)_setupLayerAndContext;
-(void)_setupTextures;
-(void)_setupRenderAndFrameBuffers;
-(void)_compileShaders;
-(void)_setupVertexAndIndexBuffers;
-(void)_render:(id)arg1 ;
-(void)_didBeginBackgroundLoading;
-(void)_didFinishBackgroundLoading;
-(id)_interpolateOriginalColor:(id)arg1 withNewColor:(id)arg2 progress:(double)arg3 ;
-(void)_endPullToRefreshAnimationWithDuration:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 theme:(long long)arg2 ;
-(void)viewDidFullyAppear;
-(void)viewDidPartiallyDisappear;
-(void)viewDidFullyDisappear;
-(void)pullToRefreshScrollViewWillBeginScrolling:(id)arg1 ;
-(void)pullToRefreshScrollViewDidScroll:(id)arg1 ;
-(void)pullToRefreshScrollViewDidEndScrolling:(id)arg1 ;
-(void)pullToRefreshScrollViewDataSourceDidFinishLoading:(id)arg1 ;
-(void)endPullToRefreshAnimation;
-(long long)pullToRefreshState;
-(void)setPullToRefreshState:(long long)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_setupDisplayLink;
-(void)setTopContentInset:(double)arg1 ;
-(double)topContentInset;
@end

