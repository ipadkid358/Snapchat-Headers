/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLLibrary;
@class MPSImage, MPSImageDescriptor;

@interface InstanceNormLayer : NSObject {

	BOOL _debug;
	BOOL _noop;
	id<MTLDevice> _device;
	id<MTLLibrary> _library;
	unsigned long long _channels;
	MPSImage* _gamma;
	MPSImage* _beta;
	MPSImageDescriptor* _desc;
	 * _out_avg;
	 * _out_var;
	 * _in_gamma;
	 * _in_beta;

}

@property (assign,nonatomic,__weak) id<MTLDevice> device;                //@synthesize device=_device - In the implementation block
@property (assign,nonatomic,__weak) id<MTLLibrary> library;              //@synthesize library=_library - In the implementation block
@property (assign,nonatomic) BOOL debug;                                 //@synthesize debug=_debug - In the implementation block
@property (assign,nonatomic) BOOL noop;                                  //@synthesize noop=_noop - In the implementation block
@property (assign,nonatomic) unsigned long long channels;                //@synthesize channels=_channels - In the implementation block
@property (nonatomic,retain) MPSImage * gamma;                           //@synthesize gamma=_gamma - In the implementation block
@property (nonatomic,retain) MPSImage * beta;                            //@synthesize beta=_beta - In the implementation block
@property (nonatomic,retain) MPSImageDescriptor * desc;                  //@synthesize desc=_desc - In the implementation block
@property (assign,nonatomic) * out_avg;                                  //@synthesize out_avg=_out_avg - In the implementation block
@property (assign,nonatomic) * out_var;                                  //@synthesize out_var=_out_var - In the implementation block
@property (assign,nonatomic) * in_gamma;                                 //@synthesize in_gamma=_in_gamma - In the implementation block
@property (assign,nonatomic) * in_beta;                                  //@synthesize in_beta=_in_beta - In the implementation block
-(id)initWithDevice:(id)arg1 library:(id)arg2 channels:(unsigned long long)arg3 gamma:(float*)arg4 beta:(float*)arg5 ;
-(id)initWithDevice:(id)arg1 library:(id)arg2 channels:(unsigned long long)arg3 gamma:(float*)arg4 beta:(float*)arg5 debug:(BOOL)arg6 noop:(BOOL)arg7 ;
-(void)setNoop:(BOOL)arg1 ;
-(*)out_avg;
-(void)setOut_avg:(*)arg1 ;
-(*)out_var;
-(void)setOut_var:(*)arg1 ;
-(*)in_gamma;
-(void)setIn_gamma:(*)arg1 ;
-(*)in_beta;
-(void)setIn_beta:(*)arg1 ;
-(MPSImage *)beta;
-(void)setBeta:(MPSImage *)arg1 ;
-(unsigned long long)channels;
-(BOOL)debug;
-(id<MTLLibrary>)library;
-(void)setLibrary:(id<MTLLibrary>)arg1 ;
-(void)setChannels:(unsigned long long)arg1 ;
-(BOOL)noop;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3 ;
-(MPSImageDescriptor *)desc;
-(void)setDesc:(MPSImageDescriptor *)arg1 ;
-(id<MTLDevice>)device;
-(void)setDevice:(id<MTLDevice>)arg1 ;
-(MPSImage *)gamma;
-(void)setGamma:(MPSImage *)arg1 ;
-(void)setDebug:(BOOL)arg1 ;
@end

