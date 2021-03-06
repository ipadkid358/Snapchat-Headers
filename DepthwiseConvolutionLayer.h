/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLLibrary;
@class MPSCNNConvolutionDescriptor, MPSImage;

@interface DepthwiseConvolutionLayer : NSObject {

	MPSCNNConvolutionDescriptor* _convolutionDescriptor;
	id<MTLDevice> _device;
	id<MTLLibrary> _library;
	unsigned long long _inputChannel;
	unsigned long long _outputChannel;
	unsigned long long _cardinality;
	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;
	unsigned long long _strideX;
	unsigned long long _strideY;
	MPSImage* _weights;
	MPSImage* _bias;

}

@property (assign,nonatomic,__weak) id<MTLDevice> device;                   //@synthesize device=_device - In the implementation block
@property (assign,nonatomic,__weak) id<MTLLibrary> library;                 //@synthesize library=_library - In the implementation block
@property (assign,nonatomic) unsigned long long inputChannel;               //@synthesize inputChannel=_inputChannel - In the implementation block
@property (assign,nonatomic) unsigned long long outputChannel;              //@synthesize outputChannel=_outputChannel - In the implementation block
@property (assign,nonatomic) unsigned long long cardinality;                //@synthesize cardinality=_cardinality - In the implementation block
@property (assign,nonatomic) unsigned long long kernelWidth;                //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (assign,nonatomic) unsigned long long kernelHeight;               //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (assign,nonatomic) unsigned long long strideX;                    //@synthesize strideX=_strideX - In the implementation block
@property (assign,nonatomic) unsigned long long strideY;                    //@synthesize strideY=_strideY - In the implementation block
@property (nonatomic,retain) MPSImage * weights;                            //@synthesize weights=_weights - In the implementation block
@property (nonatomic,retain) MPSImage * bias;                               //@synthesize bias=_bias - In the implementation block
-(id)initWithDevice:(id)arg1 library:(id)arg2 inputChannel:(unsigned long long)arg3 kernelWidth:(unsigned long long)arg4 kernelHeight:(unsigned long long)arg5 cardinality:(unsigned long long)arg6 activation:(id)arg7 strideX:(unsigned long long)arg8 strideY:(unsigned long long)arg9 weights:(float*)arg10 bias:(float*)arg11 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3 imagePadder:(id)arg4 ;
-(unsigned long long)inputChannel;
-(void)setInputChannel:(unsigned long long)arg1 ;
-(unsigned long long)outputChannel;
-(void)setOutputChannel:(unsigned long long)arg1 ;
-(unsigned long long)strideX;
-(void)setStrideX:(unsigned long long)arg1 ;
-(unsigned long long)strideY;
-(void)setStrideY:(unsigned long long)arg1 ;
-(void)setCardinality:(unsigned long long)arg1 ;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
-(MPSImage *)bias;
-(id<MTLLibrary>)library;
-(void)setLibrary:(id<MTLLibrary>)arg1 ;
-(void)setKernelWidth:(unsigned long long)arg1 ;
-(void)setKernelHeight:(unsigned long long)arg1 ;
-(void)setWeights:(MPSImage *)arg1 ;
-(MPSImage *)weights;
-(id<MTLDevice>)device;
-(void)setDevice:(id<MTLDevice>)arg1 ;
-(unsigned long long)cardinality;
-(void)setBias:(MPSImage *)arg1 ;
@end

