/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAudioCaptureSession.h>

@protocol SCAudioCaptureSessionDelegate;
@class SCQueuePerformer, SCSentinel, NSURL, NSString;

@interface SCFileAudioCaptureSession : NSObject <SCAudioCaptureSession> {

	SCQueuePerformer* _performer;
	SCSentinel* _sentinel;
	NSURL* _fileURL;
	OpaqueAudioFileIDRef _audioFile;
	AudioStreamBasicDescription _asbd;
	opaqueCMFormatDescriptionRef _formatDescription;
	long long _readCurPacket;
	unsigned _readNumPackets;
	unsigned _readNumBytes;
	void* _readBuffer;
	id<SCAudioCaptureSessionDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCAudioCaptureSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)disposeAudioRecordingSynchronouslyWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)beginAudioRecordingAsynchronouslyWithSampleRate:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_read;
-(id)init;
-(void)setDelegate:(id<SCAudioCaptureSessionDelegate>)arg1 ;
-(void)dealloc;
-(id<SCAudioCaptureSessionDelegate>)delegate;
-(void)_teardown;
-(BOOL)_setup;
-(void)setFileURL:(id)arg1 ;
@end
