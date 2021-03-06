/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, SOJUAdTopsnapVolumes;

@interface SOJUAdLongformVideoImpressionTrackBuilder : NSObject {

	NSNumber* _topsnapTimeViewedSeconds;
	NSNumber* _longformTimeViewedSeconds;
	NSNumber* _topsnapMediaDurationSeconds;
	NSNumber* _longformMediaDurationSeconds;
	NSNumber* _swiped;
	NSNumber* _renderedTimestampInMilliSeconds;
	NSNumber* _deltaBetweenReceiveAndRenderMillis;
	NSNumber* _swipeCount;
	NSString* _creativeId;
	NSNumber* _topsnapAudioPlaybackVolume;
	NSNumber* _longformAudioPlaybackVolume;
	NSNumber* _topsnapTimeViewedBeforeInteractionSeconds;
	SOJUAdTopsnapVolumes* _topsnapVolumes;
	NSNumber* _topsnapMaxContinuousTimeViewedSeconds;
	NSNumber* _topsnapAudibleTimeViewedSeconds;
	NSString* _topsnapMediaType;

}
+(id)withJUAdLongformVideoImpressionTrack:(id)arg1 ;
-(id)setTopsnapTimeViewedSecondsValue:(float)arg1 ;
-(id)setTopsnapMediaDurationSecondsValue:(float)arg1 ;
-(id)setSwipedValue:(BOOL)arg1 ;
-(id)setRenderedTimestampInMilliSecondsValue:(long long)arg1 ;
-(id)setDeltaBetweenReceiveAndRenderMillisValue:(long long)arg1 ;
-(id)setSwipeCountValue:(int)arg1 ;
-(id)setTopsnapAudioPlaybackVolumeValue:(float)arg1 ;
-(id)setLongformAudioPlaybackVolumeValue:(float)arg1 ;
-(id)setTopsnapTimeViewedBeforeInteractionSecondsValue:(float)arg1 ;
-(id)setTopsnapMaxContinuousTimeViewedSecondsValue:(float)arg1 ;
-(id)setTopsnapAudibleTimeViewedSecondsValue:(float)arg1 ;
-(id)setTopsnapMediaTypeEnum:(long long)arg1 ;
-(id)setLongformTimeViewedSecondsValue:(float)arg1 ;
-(id)setTopsnapTimeViewedSeconds:(id)arg1 ;
-(id)setTopsnapMediaDurationSeconds:(id)arg1 ;
-(id)setLongformTimeViewedSeconds:(id)arg1 ;
-(id)setSwiped:(id)arg1 ;
-(id)setRenderedTimestampInMilliSeconds:(id)arg1 ;
-(id)setDeltaBetweenReceiveAndRenderMillis:(id)arg1 ;
-(id)setSwipeCount:(id)arg1 ;
-(id)setTopsnapAudioPlaybackVolume:(id)arg1 ;
-(id)setLongformAudioPlaybackVolume:(id)arg1 ;
-(id)setTopsnapTimeViewedBeforeInteractionSeconds:(id)arg1 ;
-(id)setTopsnapVolumes:(id)arg1 ;
-(id)setTopsnapMaxContinuousTimeViewedSeconds:(id)arg1 ;
-(id)setTopsnapAudibleTimeViewedSeconds:(id)arg1 ;
-(id)setTopsnapMediaType:(id)arg1 ;
-(id)setLongformMediaDurationSecondsValue:(float)arg1 ;
-(id)setLongformMediaDurationSeconds:(id)arg1 ;
-(id)build;
-(id)setCreativeId:(id)arg1 ;
@end

