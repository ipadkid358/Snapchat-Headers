/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCOperaSession.h>

@class SCDiscoverLogger, SCStopwatch, NSString;

@interface SCDiscoverRemoteVideoSession : NSObject <SCOperaSession> {

	SCDiscoverLogger* _logger;
	SCStopwatch* _inlineTimer;
	SCStopwatch* _inlineFullscreenTimer;
	SCStopwatch* _inlineInlineTimer;
	SCStopwatch* _videoLandscapeTimer;
	SCStopwatch* _captionTimer;
	BOOL _isPaused;
	BOOL _isRequestingPlayback;
	NSString* _videoSessionID;
	BOOL _startedWithCaptionOn;
	unsigned long long _inlineVideosViewedCount;
	double _inlineVideosTotalTimeViewedSec;

}

@property (nonatomic,readonly) BOOL startedWithCaptionOn;                                 //@synthesize startedWithCaptionOn=_startedWithCaptionOn - In the implementation block
@property (nonatomic,readonly) double videoWithCaptionOnTimeViewedSeconds; 
@property (nonatomic,readonly) double videoInLandscapeModeTimeViewedSeconds; 
@property (assign,nonatomic) unsigned long long inlineVideosViewedCount;                  //@synthesize inlineVideosViewedCount=_inlineVideosViewedCount - In the implementation block
@property (assign,nonatomic) double inlineVideosTotalTimeViewedSec;                       //@synthesize inlineVideosTotalTimeViewedSec=_inlineVideosTotalTimeViewedSec - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLogger:(id)arg1 ;
-(void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3 ;
-(id)registeredEventsForOperaSession;
-(void)_updateVideoTimers:(id)arg1 ;
-(CGSize)_videoSizeForParams:(id)arg1 ;
-(double)videoWithCaptionOnTimeViewedSeconds;
-(double)videoInLandscapeModeTimeViewedSeconds;
-(BOOL)startedWithCaptionOn;
-(unsigned long long)inlineVideosViewedCount;
-(void)setInlineVideosViewedCount:(unsigned long long)arg1 ;
-(double)inlineVideosTotalTimeViewedSec;
-(void)setInlineVideosTotalTimeViewedSec:(double)arg1 ;
-(id)init;
-(void)_reset;
@end

