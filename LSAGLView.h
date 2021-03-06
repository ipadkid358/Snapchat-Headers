/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <Snapchat/LSRenderInContext.h>

@protocol OS_dispatch_semaphore;
@class LSATexture, EAGLContext, NSObject, NSString;

@interface LSAGLView : UIView <LSRenderInContext> {

	unsigned _defaultFramebuffer;
	unsigned _defaultRenderbuffer;
	CGSize _inputImageSize;
	long long _inputImageBytesPerRow;
	float _imageVertices[8];
	CGSize _boundsSizeAtFrameBufferEpoch;
	LSDrawTexture* _shDrawTexture;
	CGSize _sizeInPixels;
	BOOL _isGPUAllowed;
	LSATexture* _textureToDraw;
	EAGLContext* _context;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	long long _fillMode;
	long long _rotationMode;

}

@property (assign,nonatomic) long long fillMode;                    //@synthesize fillMode=_fillMode - In the implementation block
@property (assign,nonatomic) long long rotationMode;                //@synthesize rotationMode=_rotationMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const float*)_textureCoordinatesForRotation:(long long)arg1 ;
+(Class)layerClass;
-(void)_deleteDrawTexture;
-(void)_deleteGLBuffers;
-(void)_recalculateViewGeometry;
-(void)_createGLBuffers;
-(void)_prepareFramebuffer;
-(void)_correctTextureCoordsForBytesPerRow:(float*)arg1 ;
-(void)_createDrawTexture;
-(void)_setInputSize:(CGSize)arg1 bytesPerRow:(long long)arg2 ;
-(void)_drawRawTexture:(unsigned)arg1 ;
-(void)drawTexture:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setFillMode:(long long)arg1 ;
-(void)renderInContext:(CGContextRef)arg1 ;
-(void)commonInit;
-(void)didEnterBackground:(id)arg1 ;
-(void)willEnterForeground:(id)arg1 ;
-(long long)rotationMode;
-(void)setRotationMode:(long long)arg1 ;
-(long long)fillMode;
-(void)_presentFramebuffer;
-(void)didBecomeActive:(id)arg1 ;
@end

