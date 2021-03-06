/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCCaptureFaceDetector.h>
#import <Snapchat/SCManagedVideoDataSourceListener.h>

@class SCCaptureFaceDetectorTrigger, SCCaptureFaceDetectionParser, CIDetector, SCCaptureResource, CIContext, SCQueuePerformer, NSString;

@interface SCCaptureCoreImageFaceDetector : NSObject <SCCaptureFaceDetector, SCManagedVideoDataSourceListener> {

	CIDetector* _detector;
	SCCaptureResource* _captureResource;
	BOOL _isDetecting;
	BOOL _hasDetectedFaces;
	long long _numberOfSequentialOutputSampleBuffer;
	unsigned long long _detectionFrequency;
	unsigned long long _devicePosition;
	CIContext* _context;
	SCQueuePerformer* _callbackPerformer;
	SCQueuePerformer* _processPerformer;
	SCCaptureFaceDetectionParser* _parser;
	SCCaptureFaceDetectorTrigger* _trigger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCCaptureFaceDetectorTrigger * trigger;              //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,readonly) SCCaptureFaceDetectionParser * parser;               //@synthesize parser=_parser - In the implementation block
-(void)managedVideoDataSource:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 devicePosition:(unsigned long long)arg3 ;
-(id)initWithCaptureResource:(id)arg1 ;
-(void)_setupDetectionIfNeeded;
-(id)detectionPerformer;
-(void)_resetDetection;
-(id)_detectFaceFeaturesInImage:(id)arg1 withOrientation:(unsigned)arg2 ;
-(void)startDetection;
-(void)stopDetection;
-(SCCaptureFaceDetectorTrigger *)trigger;
-(SCCaptureFaceDetectionParser *)parser;
@end

