/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/BaseCraftMetalModel.h>

@protocol MTLDevice, MTLCommandQueue, MTLLibrary;
@class MPSImageDescriptor, ConvolutionLayer, LowRankConvolutionLayer, DeconvolutionLayer, InstanceNormLayer, MPSCNNNeuronReLU, MPSCNNNeuronTanH, MPSCNNNeuronLinear, MPSImagesCombineLayer, MPSImageUpsampleLayer, MPSImageMirrorPadder, NSString;

@interface SnapprettyMetalModel : NSObject <BaseCraftMetalModel> {

	BOOL _useSoftplus;
	BOOL _useInstanceNormalization;
	BOOL _useTanhActivation;
	BOOL _addBias;
	id<MTLDevice> _device;
	id<MTLCommandQueue> _queue;
	id<MTLLibrary> _library;
	MPSImageDescriptor* _iid;
	MPSImageDescriptor* _conv11id;
	MPSImageDescriptor* _conv12id;
	MPSImageDescriptor* _conv13id;
	MPSImageDescriptor* _up1id;
	MPSImageDescriptor* _conv21id;
	MPSImageDescriptor* _up2id;
	MPSImageDescriptor* _conv22id;
	MPSImageDescriptor* _conv23id;
	ConvolutionLayer* _conv11;
	ConvolutionLayer* _conv12;
	ConvolutionLayer* _conv13;
	vector<ConvolutionLayer *, std::__1::allocator<ConvolutionLayer *> >* _resi_1;
	vector<ConvolutionLayer *, std::__1::allocator<ConvolutionLayer *> >* _resi_2;
	ConvolutionLayer* _conv21_full;
	LowRankConvolutionLayer* _conv21;
	DeconvolutionLayer* _deconv21;
	ConvolutionLayer* _conv22_full;
	LowRankConvolutionLayer* _conv22;
	DeconvolutionLayer* _deconv22;
	ConvolutionLayer* _conv23;
	InstanceNormLayer* _conv11_norm;
	InstanceNormLayer* _conv12_norm;
	InstanceNormLayer* _conv13_norm;
	vector<InstanceNormLayer *, std::__1::allocator<InstanceNormLayer *> >* _resi_1_norm;
	vector<InstanceNormLayer *, std::__1::allocator<InstanceNormLayer *> >* _resi_2_norm;
	InstanceNormLayer* _conv21_norm;
	InstanceNormLayer* _conv22_norm;
	InstanceNormLayer* _conv1_norm_debug;
	InstanceNormLayer* _conv2_norm_debug;
	InstanceNormLayer* _conv3_norm_debug;
	double _filterMultiplier;
	unsigned long long _conv11FilterSize;
	unsigned long long _conv23FilterSize;
	unsigned long long _numResidualBlocks;
	unsigned long long _conv11Rank;
	unsigned long long _downSamplingRank;
	unsigned long long _residualRank;
	unsigned long long _upSamplingRank;
	unsigned long long _conv23Rank;
	MPSCNNNeuronReLU* _relu;
	MPSCNNNeuronTanH* _tanh;
	MPSCNNNeuronLinear* _linear;
	MPSImagesCombineLayer* _element_wise_add;
	MPSImageUpsampleLayer* _up_sampling;
	MPSImageMirrorPadder* _mirrorPadder;
	unsigned long long _width;
	unsigned long long _height;

}

@property (assign,nonatomic,__weak) id<MTLDevice> device;                           //@synthesize device=_device - In the implementation block
@property (assign,nonatomic,__weak) id<MTLCommandQueue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<MTLLibrary> library;                         //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) MPSImageDescriptor * iid;                              //@synthesize iid=_iid - In the implementation block
@property (nonatomic,retain) MPSImageDescriptor * conv11id;                         //@synthesize conv11id=_conv11id - In the implementation block
@property (nonatomic,retain) MPSImageDescriptor * conv12id;                         //@synthesize conv12id=_conv12id - In the implementation block
@property (nonatomic,retain) MPSImageDescriptor * conv13id;                         //@synthesize conv13id=_conv13id - In the implementation block
@property (nonatomic,retain) MPSImageDescriptor * up1id;                            //@synthesize up1id=_up1id - In the implementation block
@property (nonatomic,retain) MPSImageDescriptor * conv21id;                         //@synthesize conv21id=_conv21id - In the implementation block
@property (nonatomic,retain) MPSImageDescriptor * up2id;                            //@synthesize up2id=_up2id - In the implementation block
@property (nonatomic,retain) MPSImageDescriptor * conv22id;                         //@synthesize conv22id=_conv22id - In the implementation block
@property (nonatomic,retain) MPSImageDescriptor * conv23id;                         //@synthesize conv23id=_conv23id - In the implementation block
@property (nonatomic,retain) ConvolutionLayer * conv11;                             //@synthesize conv11=_conv11 - In the implementation block
@property (nonatomic,retain) ConvolutionLayer * conv12;                             //@synthesize conv12=_conv12 - In the implementation block
@property (nonatomic,retain) ConvolutionLayer * conv13;                             //@synthesize conv13=_conv13 - In the implementation block
@property (assign,nonatomic) vector<ConvolutionLayer ** resi_1;                     //@synthesize resi_1=_resi_1 - In the implementation block
@property (assign,nonatomic) vector<ConvolutionLayer ** resi_2;                     //@synthesize resi_2=_resi_2 - In the implementation block
@property (nonatomic,retain) ConvolutionLayer * conv21_full;                        //@synthesize conv21_full=_conv21_full - In the implementation block
@property (nonatomic,retain) LowRankConvolutionLayer * conv21;                      //@synthesize conv21=_conv21 - In the implementation block
@property (nonatomic,retain) DeconvolutionLayer * deconv21;                         //@synthesize deconv21=_deconv21 - In the implementation block
@property (nonatomic,retain) ConvolutionLayer * conv22_full;                        //@synthesize conv22_full=_conv22_full - In the implementation block
@property (nonatomic,retain) LowRankConvolutionLayer * conv22;                      //@synthesize conv22=_conv22 - In the implementation block
@property (nonatomic,retain) DeconvolutionLayer * deconv22;                         //@synthesize deconv22=_deconv22 - In the implementation block
@property (nonatomic,retain) ConvolutionLayer * conv23;                             //@synthesize conv23=_conv23 - In the implementation block
@property (nonatomic,retain) InstanceNormLayer * conv11_norm;                       //@synthesize conv11_norm=_conv11_norm - In the implementation block
@property (nonatomic,retain) InstanceNormLayer * conv12_norm;                       //@synthesize conv12_norm=_conv12_norm - In the implementation block
@property (nonatomic,retain) InstanceNormLayer * conv13_norm;                       //@synthesize conv13_norm=_conv13_norm - In the implementation block
@property (assign,nonatomic) vector<InstanceNormLayer ** resi_1_norm;               //@synthesize resi_1_norm=_resi_1_norm - In the implementation block
@property (assign,nonatomic) vector<InstanceNormLayer ** resi_2_norm;               //@synthesize resi_2_norm=_resi_2_norm - In the implementation block
@property (nonatomic,retain) InstanceNormLayer * conv21_norm;                       //@synthesize conv21_norm=_conv21_norm - In the implementation block
@property (nonatomic,retain) InstanceNormLayer * conv22_norm;                       //@synthesize conv22_norm=_conv22_norm - In the implementation block
@property (nonatomic,retain) InstanceNormLayer * conv1_norm_debug;                  //@synthesize conv1_norm_debug=_conv1_norm_debug - In the implementation block
@property (nonatomic,retain) InstanceNormLayer * conv2_norm_debug;                  //@synthesize conv2_norm_debug=_conv2_norm_debug - In the implementation block
@property (nonatomic,retain) InstanceNormLayer * conv3_norm_debug;                  //@synthesize conv3_norm_debug=_conv3_norm_debug - In the implementation block
@property (assign,nonatomic) double filterMultiplier;                               //@synthesize filterMultiplier=_filterMultiplier - In the implementation block
@property (assign,nonatomic) unsigned long long conv11FilterSize;                   //@synthesize conv11FilterSize=_conv11FilterSize - In the implementation block
@property (assign,nonatomic) unsigned long long conv23FilterSize;                   //@synthesize conv23FilterSize=_conv23FilterSize - In the implementation block
@property (assign,nonatomic) unsigned long long numResidualBlocks;                  //@synthesize numResidualBlocks=_numResidualBlocks - In the implementation block
@property (assign,nonatomic) unsigned long long conv11Rank;                         //@synthesize conv11Rank=_conv11Rank - In the implementation block
@property (assign,nonatomic) unsigned long long downSamplingRank;                   //@synthesize downSamplingRank=_downSamplingRank - In the implementation block
@property (assign,nonatomic) unsigned long long residualRank;                       //@synthesize residualRank=_residualRank - In the implementation block
@property (assign,nonatomic) unsigned long long upSamplingRank;                     //@synthesize upSamplingRank=_upSamplingRank - In the implementation block
@property (assign,nonatomic) unsigned long long conv23Rank;                         //@synthesize conv23Rank=_conv23Rank - In the implementation block
@property (assign,nonatomic) BOOL useSoftplus;                                      //@synthesize useSoftplus=_useSoftplus - In the implementation block
@property (assign,nonatomic) BOOL useInstanceNormalization;                         //@synthesize useInstanceNormalization=_useInstanceNormalization - In the implementation block
@property (assign,nonatomic) BOOL useTanhActivation;                                //@synthesize useTanhActivation=_useTanhActivation - In the implementation block
@property (assign,nonatomic) BOOL addBias;                                          //@synthesize addBias=_addBias - In the implementation block
@property (nonatomic,retain) MPSCNNNeuronReLU * relu;                               //@synthesize relu=_relu - In the implementation block
@property (nonatomic,retain) MPSCNNNeuronTanH * tanh;                               //@synthesize tanh=_tanh - In the implementation block
@property (nonatomic,retain) MPSCNNNeuronLinear * linear;                           //@synthesize linear=_linear - In the implementation block
@property (nonatomic,retain) MPSImagesCombineLayer * element_wise_add;              //@synthesize element_wise_add=_element_wise_add - In the implementation block
@property (nonatomic,retain) MPSImageUpsampleLayer * up_sampling;                   //@synthesize up_sampling=_up_sampling - In the implementation block
@property (nonatomic,retain) MPSImageMirrorPadder * mirrorPadder;                   //@synthesize mirrorPadder=_mirrorPadder - In the implementation block
@property (assign,nonatomic) unsigned long long width;                              //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;                             //@synthesize height=_height - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)forwardWithCommandBuffer:(id)arg1 inputImage:(id)arg2 outputImage:(id)arg3 ;
-(unsigned long long)conv11FilterSize;
-(BOOL)addBias;
-(BOOL)useInstanceNormalization;
-(unsigned long long)numResidualBlocks;
-(id)float16ImgIdWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 depth:(unsigned long long)arg3 ;
-(double)filterMultiplier;
-(BOOL)useTanhActivation;
-(BOOL)initModelWithModelFile:(GraphDef*)arg1 ;
-(id)getComposeOutputPipelineState:(BOOL)arg1 ;
-(void)composeOutputImage:(id)arg1 src:(id)arg2 dst:(id)arg3 tanh:(BOOL)arg4 ;
-(id)forwardWithCommandBufferUIImage:(id)arg1 inputImage:(id)arg2 device:(id)arg3 ;
-(MPSImageDescriptor *)iid;
-(void)setIid:(MPSImageDescriptor *)arg1 ;
-(vector<ConvolutionLayer **)resi_1;
-(void)setResi_1:(vector<ConvolutionLayer **)arg1 ;
-(vector<ConvolutionLayer **)resi_2;
-(void)setResi_2:(vector<ConvolutionLayer **)arg1 ;
-(vector<InstanceNormLayer **)resi_1_norm;
-(void)setResi_1_norm:(vector<InstanceNormLayer **)arg1 ;
-(vector<InstanceNormLayer **)resi_2_norm;
-(void)setResi_2_norm:(vector<InstanceNormLayer **)arg1 ;
-(MPSCNNNeuronReLU *)relu;
-(void)setRelu:(MPSCNNNeuronReLU *)arg1 ;
-(MPSCNNNeuronTanH *)tanh;
-(void)setTanh:(MPSCNNNeuronTanH *)arg1 ;
-(MPSImagesCombineLayer *)element_wise_add;
-(void)setElement_wise_add:(MPSImagesCombineLayer *)arg1 ;
-(MPSImageUpsampleLayer *)up_sampling;
-(void)setUp_sampling:(MPSImageUpsampleLayer *)arg1 ;
-(MPSImageMirrorPadder *)mirrorPadder;
-(void)setMirrorPadder:(MPSImageMirrorPadder *)arg1 ;
-(MPSImageDescriptor *)conv11id;
-(void)setConv11id:(MPSImageDescriptor *)arg1 ;
-(MPSImageDescriptor *)conv12id;
-(void)setConv12id:(MPSImageDescriptor *)arg1 ;
-(MPSImageDescriptor *)conv13id;
-(void)setConv13id:(MPSImageDescriptor *)arg1 ;
-(MPSImageDescriptor *)up1id;
-(void)setUp1id:(MPSImageDescriptor *)arg1 ;
-(MPSImageDescriptor *)conv21id;
-(void)setConv21id:(MPSImageDescriptor *)arg1 ;
-(MPSImageDescriptor *)up2id;
-(void)setUp2id:(MPSImageDescriptor *)arg1 ;
-(MPSImageDescriptor *)conv22id;
-(void)setConv22id:(MPSImageDescriptor *)arg1 ;
-(MPSImageDescriptor *)conv23id;
-(void)setConv23id:(MPSImageDescriptor *)arg1 ;
-(ConvolutionLayer *)conv11;
-(void)setConv11:(ConvolutionLayer *)arg1 ;
-(ConvolutionLayer *)conv12;
-(void)setConv12:(ConvolutionLayer *)arg1 ;
-(ConvolutionLayer *)conv13;
-(void)setConv13:(ConvolutionLayer *)arg1 ;
-(LowRankConvolutionLayer *)conv21;
-(void)setConv21:(LowRankConvolutionLayer *)arg1 ;
-(LowRankConvolutionLayer *)conv22;
-(void)setConv22:(LowRankConvolutionLayer *)arg1 ;
-(ConvolutionLayer *)conv23;
-(void)setConv23:(ConvolutionLayer *)arg1 ;
-(id)initWithDevice:(id)arg1 library:(id)arg2 commandQueue:(id)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 tensorflow_graph:(GraphDef*)arg6 filterMultiplier:(double)arg7 conv11FilterSize:(unsigned long long)arg8 conv23FilterSize:(unsigned long long)arg9 numResidualBlocks:(unsigned long long)arg10 conv11Rank:(unsigned long long)arg11 downSamplingRank:(unsigned long long)arg12 residualRank:(unsigned long long)arg13 upSamplingRank:(unsigned long long)arg14 conv23Rank:(unsigned long long)arg15 useSoftplus:(BOOL)arg16 useInstanceNormalization:(BOOL)arg17 useTanhActivation:(BOOL)arg18 ;
-(ConvolutionLayer *)conv21_full;
-(void)setConv21_full:(ConvolutionLayer *)arg1 ;
-(DeconvolutionLayer *)deconv21;
-(void)setDeconv21:(DeconvolutionLayer *)arg1 ;
-(ConvolutionLayer *)conv22_full;
-(void)setConv22_full:(ConvolutionLayer *)arg1 ;
-(DeconvolutionLayer *)deconv22;
-(void)setDeconv22:(DeconvolutionLayer *)arg1 ;
-(InstanceNormLayer *)conv11_norm;
-(void)setConv11_norm:(InstanceNormLayer *)arg1 ;
-(InstanceNormLayer *)conv12_norm;
-(void)setConv12_norm:(InstanceNormLayer *)arg1 ;
-(InstanceNormLayer *)conv13_norm;
-(void)setConv13_norm:(InstanceNormLayer *)arg1 ;
-(InstanceNormLayer *)conv21_norm;
-(void)setConv21_norm:(InstanceNormLayer *)arg1 ;
-(InstanceNormLayer *)conv22_norm;
-(void)setConv22_norm:(InstanceNormLayer *)arg1 ;
-(InstanceNormLayer *)conv1_norm_debug;
-(void)setConv1_norm_debug:(InstanceNormLayer *)arg1 ;
-(InstanceNormLayer *)conv2_norm_debug;
-(void)setConv2_norm_debug:(InstanceNormLayer *)arg1 ;
-(InstanceNormLayer *)conv3_norm_debug;
-(void)setConv3_norm_debug:(InstanceNormLayer *)arg1 ;
-(void)setFilterMultiplier:(double)arg1 ;
-(void)setConv11FilterSize:(unsigned long long)arg1 ;
-(unsigned long long)conv23FilterSize;
-(void)setConv23FilterSize:(unsigned long long)arg1 ;
-(void)setNumResidualBlocks:(unsigned long long)arg1 ;
-(unsigned long long)conv11Rank;
-(void)setConv11Rank:(unsigned long long)arg1 ;
-(unsigned long long)downSamplingRank;
-(void)setDownSamplingRank:(unsigned long long)arg1 ;
-(unsigned long long)residualRank;
-(void)setResidualRank:(unsigned long long)arg1 ;
-(unsigned long long)upSamplingRank;
-(void)setUpSamplingRank:(unsigned long long)arg1 ;
-(unsigned long long)conv23Rank;
-(void)setConv23Rank:(unsigned long long)arg1 ;
-(BOOL)useSoftplus;
-(void)setUseSoftplus:(BOOL)arg1 ;
-(void)setUseInstanceNormalization:(BOOL)arg1 ;
-(void)setUseTanhActivation:(BOOL)arg1 ;
-(void)setAddBias:(BOOL)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(void)setWidth:(unsigned long long)arg1 ;
-(MPSCNNNeuronLinear *)linear;
-(void)setLinear:(MPSCNNNeuronLinear *)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(id<MTLCommandQueue>)queue;
-(void)setQueue:(id<MTLCommandQueue>)arg1 ;
-(id<MTLLibrary>)library;
-(void)setLibrary:(id<MTLLibrary>)arg1 ;
-(id<MTLDevice>)device;
-(void)setDevice:(id<MTLDevice>)arg1 ;
@end
