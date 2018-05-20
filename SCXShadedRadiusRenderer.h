/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCXRenderer.h>

@class NSString;

@interface SCXShadedRadiusRenderer : NSObject <SCXRenderer> {

	unsigned _program;
	unsigned _vertexShader;
	unsigned _fragShader;
	unsigned _vbo;
	unsigned _ebo;
	int _scaleUniformLocation;
	int _translateUniformLocation;
	int _positionAttributeLocation;
	int _alphaUniformLocation;
	int _innerCircleRadiusUniformLocation;
	int _outerCircleRadiusUniformLocation;
	int _shadowRadiusUniformLocation;
	BOOL _readyToRender;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_renderCircle:(id)arg1 inView:(id)arg2 ;
-(id)init;
-(void)prepare;
-(void)complete;
-(void)render:(id)arg1 ;
@end

