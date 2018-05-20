/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Snapchat/Snapchat-Structs.h>
@class AVAssetWriterInput, NSMutableArray, NSObject, NSDictionary, AVAssetWriter, AVAssetWriterInputPixelBufferAdaptor;

@interface LSAVideoWriter : NSObject {

	AVAssetWriterInput* _audioInput;
	AVAssetWriterInput* _pixelInput;
	NSMutableArray* _enqueuedPixelData;
	NSMutableArray* _enqueuedAudioData;
	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _started;
	BOOL _finished;
	CGSize _size;
	NSDictionary* _pixelBufferAttributes;
	BOOL _writerCreationFailed;
	AVAssetWriter* _assetWriter;
	AVAssetWriterInputPixelBufferAdaptor* _pixelAdapter;

}

@property (assign) BOOL writerCreationFailed;                                        //@synthesize writerCreationFailed=_writerCreationFailed - In the implementation block
@property (retain) AVAssetWriter * assetWriter;                                      //@synthesize assetWriter=_assetWriter - In the implementation block
@property (retain) AVAssetWriterInputPixelBufferAdaptor * pixelAdapter;              //@synthesize pixelAdapter=_pixelAdapter - In the implementation block
-(id)initWithURL:(id)arg1 outputSize:(CGSize)arg2 ;
-(void)startSessionAtTimeIfRequired:(SCD_Struct_LS191)arg1 ;
-(CVBufferRef)createPixelBufferForWriting;
-(void)writePixelBuffer:(CVBufferRef)arg1 forTime:(SCD_Struct_LS191)arg2 ;
-(BOOL)finishWritingAtTime:(SCD_Struct_LS191)arg1 error:(id*)arg2 ;
-(void)createWriterAsync:(id)arg1 ;
-(void)setWriterCreationFailed:(BOOL)arg1 ;
-(void)setPixelAdapter:(AVAssetWriterInputPixelBufferAdaptor *)arg1 ;
-(BOOL)writerCreationFailed;
-(AVAssetWriterInputPixelBufferAdaptor *)pixelAdapter;
-(BOOL)_flushEnqueuedPixelData;
-(opaqueCMSampleBufferRef)_createCMSampleBufferFrom:(CVBufferRef)arg1 time:(SCD_Struct_LS191)arg2 ;
-(BOOL)_flushEnqueuedAudioData;
-(void)_finalizeEnqueuedSamples;
-(opaqueCMSampleBufferRef)_popNextEnqueuedSampleBuffer:(id)arg1 ;
-(void)writeAudioBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
-(AVAssetWriter *)assetWriter;
-(void)setAssetWriter:(AVAssetWriter *)arg1 ;
@end

