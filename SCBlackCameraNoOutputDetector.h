/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCManagedVideoDataSourceListener.h>
#import <Snapchat/SCManagedCapturerListener.h>

@protocol SCBlackCameraDetectorDelegate;
@class SCQueuePerformer, NSString;

@interface SCBlackCameraNoOutputDetector : NSObject <SCManagedVideoDataSourceListener, SCManagedCapturerListener> {

	BOOL _sampleBufferReceived;
	BOOL _blackCameraDetected;
	BOOL _blackCameraRecovered;
	BOOL _checkingScheduled;
	BOOL _sessionStoppedRunning;
	id<SCBlackCameraDetectorDelegate> _delegate;
	SCQueuePerformer* _queuePerformer;

}

@property (nonatomic,retain) SCQueuePerformer * queuePerformer;                              //@synthesize queuePerformer=_queuePerformer - In the implementation block
@property (assign,nonatomic,__weak) id<SCBlackCameraDetectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCQueuePerformer *)queuePerformer;
-(void)setQueuePerformer:(SCQueuePerformer *)arg1 ;
-(void)managedVideoDataSource:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 devicePosition:(unsigned long long)arg3 ;
-(void)managedCapturer:(id)arg1 didStartRunning:(id)arg2 ;
-(void)managedCapturer:(id)arg1 didStopRunning:(id)arg2 ;
-(void)setDelegate:(id<SCBlackCameraDetectorDelegate>)arg1 ;
-(id<SCBlackCameraDetectorDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end

