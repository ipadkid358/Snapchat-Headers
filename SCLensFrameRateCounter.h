/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCManagedLensProcessorStateListener.h>

@class SCFrameRateCounter, SCManagedLensProcessorState, SCLensFrameRateCounterListenerAnnouncer, NSString;

@interface SCLensFrameRateCounter : NSObject <SCManagedLensProcessorStateListener> {

	SCFrameRateCounter* _frameRateCounter;
	double _frameProcessingStartTime;
	double _frameProcessingTime;
	SCManagedLensProcessorState* _managedLensProcessorState;
	double _fps;
	SCLensFrameRateCounterListenerAnnouncer* _listenerAnnouncer;

}

@property (nonatomic,retain) SCLensFrameRateCounterListenerAnnouncer * listenerAnnouncer;              //@synthesize listenerAnnouncer=_listenerAnnouncer - In the implementation block
@property (nonatomic,readonly) double fps;                                                             //@synthesize fps=_fps - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCLensFrameRateCounterListenerAnnouncer *)listenerAnnouncer;
-(void)managedLensProcessor:(id)arg1 didChangeState:(id)arg2 ;
-(void)_updateFrameRate;
-(void)onFrameProcessingStarted;
-(void)onFrameProcessingFinished;
-(double)fps;
-(void)setListenerAnnouncer:(SCLensFrameRateCounterListenerAnnouncer *)arg1 ;
-(id)init;
-(BOOL)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
