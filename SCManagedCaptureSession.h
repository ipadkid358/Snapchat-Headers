/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCBlackCameraDetector, AVCaptureSession;

@interface SCManagedCaptureSession : NSObject {

	SCBlackCameraDetector* _blackCameraDetector;
	AVCaptureSession* _avSession;

}

@property (nonatomic,readonly) AVCaptureSession * avSession;              //@synthesize avSession=_avSession - In the implementation block
@property (nonatomic,readonly) BOOL isRunning; 
-(AVCaptureSession *)avSession;
-(id)initWithBlackCameraDetector:(id)arg1 ;
-(void)performConfiguration:(/*^block*/id)arg1 ;
-(BOOL)isRunning;
-(void)stopRunning;
-(void)startRunning;
-(void)beginConfiguration;
-(void)commitConfiguration;
@end

