/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:14 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCImageProcessRequest.h>

@class NSArray, NSData, NSString;

@interface SCImageProcessPixelRequest : NSObject <SCImageProcessRequest> {

	NSArray* _commands;
	long long _orientation;
	CGAffineTransform _viewportTransform;
	/*^block*/id _completionHandler;
	unsigned _texture;
	unsigned _framebuffer;
	unsigned _colorRenderbuffer;
	unsigned _intermediateTexture[2];
	SCD_Struct_LS191 _presentationTime;
	BOOL _useTransparentBackground;
	unsigned long long _status;
	NSData* _data;
	unsigned long long _pixelWidth;
	unsigned long long _pixelHeight;

}

@property (nonatomic,copy,readonly) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelWidth;               //@synthesize pixelWidth=_pixelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelHeight;              //@synthesize pixelHeight=_pixelHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long status;                   //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL GPURequired; 
-(void)runProgramsWithContext:(id)arg1 GPUAvailable:(BOOL)arg2 ;
-(BOOL)GPURequired;
-(id)initWithData:(id)arg1 pixelWidth:(unsigned long long)arg2 pixelHeight:(unsigned long long)arg3 presentationTime:(SCD_Struct_LS191)arg4 commands:(id)arg5 orientation:(long long)arg6 viewportTransform:(CGAffineTransform)arg7 useTransparentBackground:(BOOL)arg8 completionHandler:(/*^block*/id)arg9 ;
-(void)setupInputTextureWithContext:(id)arg1 ;
-(void)setupOutputFrameBufferWithContext:(id)arg1 ;
-(void)setupIntermediateTextureWithContext:(id)arg1 intermediatePasses:(int)arg2 pixelWidth:(unsigned)arg3 pixelHeight:(unsigned)arg4 ;
-(void)setupOutputRendererWithContext:(id)arg1 ;
-(void)cancel;
-(NSData *)data;
-(void)cleanup;
-(unsigned long long)status;
-(unsigned long long)pixelWidth;
-(unsigned long long)pixelHeight;
@end

