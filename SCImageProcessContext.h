/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:14 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class EAGLContext, NSMutableDictionary, NSString, EAGLSharegroup;

@interface SCImageProcessContext : NSObject {

	EAGLContext* _glContext;
	BOOL _isOpenGLES3;
	NSMutableDictionary* _intermediateTextureCache;
	NSString* _contextId;
	CVOpenGLESTextureCacheRef _textureCache;
	CGSize _outputSize;

}

@property (nonatomic,readonly) NSString * contextId;                                //@synthesize contextId=_contextId - In the implementation block
@property (nonatomic,readonly) CVOpenGLESTextureCacheRef textureCache;              //@synthesize textureCache=_textureCache - In the implementation block
@property (nonatomic,readonly) EAGLSharegroup * sharegroup; 
@property (nonatomic,readonly) unsigned long long apiVersion; 
@property (assign,nonatomic) CGSize outputSize;                                     //@synthesize outputSize=_outputSize - In the implementation block
-(unsigned)createTextureWithData:(const void*)arg1 pixelWidth:(unsigned)arg2 pixelHeight:(unsigned)arg3 textureUnit:(unsigned)arg4 pixelFormat:(unsigned)arg5 minFilterType:(unsigned)arg6 magFilterType:(unsigned)arg7 enableMipmaping:(BOOL)arg8 ;
-(unsigned)namedIntermediateTexture:(id)arg1 pixelWidth:(unsigned)arg2 pixelHeight:(unsigned)arg3 textureUnit:(unsigned)arg4 data:(const void*)arg5 ;
-(void)useAsCurrentContext;
-(void)invalidateIntermediateTextureCache;
-(unsigned)namedIntermediateTexture:(id)arg1 pixelWidth:(unsigned)arg2 pixelHeight:(unsigned)arg3 textureUnit:(unsigned)arg4 ;
-(unsigned)createTextureWithImage:(CGImageRef)arg1 textureUnit:(unsigned)arg2 ;
-(void)clearColorWithTransparent:(BOOL)arg1 ;
-(CVOpenGLESTextureCacheRef)textureCache;
-(id)init;
-(void)clearColor;
-(void)dealloc;
-(NSString *)contextId;
-(void)setOutputSize:(CGSize)arg1 ;
-(CGSize)outputSize;
-(unsigned long long)apiVersion;
-(void)renderbufferStorage:(unsigned long long)arg1 fromDrawable:(id)arg2 ;
-(void)presentRenderbuffer:(unsigned long long)arg1 ;
-(EAGLSharegroup *)sharegroup;
@end

