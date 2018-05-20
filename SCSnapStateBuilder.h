/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSDate;

@interface SCSnapStateBuilder : NSObject {

	NSDictionary* _viewedTimestamps;
	NSDictionary* _screenshotState;
	NSDictionary* _screenCaptureShotState;
	NSDictionary* _screenCaptureRecordingState;
	NSDictionary* _replayState;
	NSString* _stackId;
	BOOL _isFirstSnapInStack;
	long long _playbackState;
	long long _replayAnimationState;
	BOOL _canBeReplayed;
	NSDate* _lastOpenedTimestamp;

}
+(id)withSnapState:(id)arg1 ;
-(id)setStackId:(id)arg1 ;
-(id)setViewedTimestamps:(id)arg1 ;
-(id)setReplayState:(id)arg1 ;
-(id)setScreenCaptureRecordingState:(id)arg1 ;
-(id)setScreenshotState:(id)arg1 ;
-(id)setScreenCaptureShotState:(id)arg1 ;
-(id)setCanBeReplayed:(BOOL)arg1 ;
-(id)setLastOpenedTimestamp:(id)arg1 ;
-(id)setIsFirstSnapInStack:(BOOL)arg1 ;
-(id)setReplayAnimationState:(long long)arg1 ;
-(id)build;
-(id)setPlaybackState:(long long)arg1 ;
@end

