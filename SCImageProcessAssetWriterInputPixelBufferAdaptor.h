/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class AVAssetWriterInputPixelBufferAdaptor;

@interface SCImageProcessAssetWriterInputPixelBufferAdaptor : NSObject {

	CVPixelBufferPoolRef _pixelBufferPool;
	AVAssetWriterInputPixelBufferAdaptor* _assetWriterInputPixelBufferAdaptor;
	CGSize _outputSize;

}

@property (nonatomic,readonly) CGSize outputSize;              //@synthesize outputSize=_outputSize - In the implementation block
-(void)_checkSourcePixelBufferAttributes:(id)arg1 ;
-(CVBufferRef)createAssetWriterInputPixelBuffer;
-(id)initWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2 outputSize:(CGSize)arg3 ;
-(id)initLagunaWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2 outputSize:(CGSize)arg3 ;
-(CVBufferRef)createPixelBuffer;
-(void)dealloc;
-(CGSize)outputSize;
-(BOOL)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_LS191)arg2 ;
@end

