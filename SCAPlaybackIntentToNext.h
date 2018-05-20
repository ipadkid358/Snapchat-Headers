/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:05 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAUserTrackedEvent.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface SCAPlaybackIntentToNext : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* waitMs;
	NSNumber* bufferingTimeMs;
	NSNumber* intentToVideoPreparationStartTimeMs;
	NSNumber* videoPrepareTimeMs;
	NSNumber* intentToPlaylistStartSetupViewModelsTimeMs;
	NSNumber* playlistSetupViewModelsTimeMs;
	NSNumber* playerSessionTs;
	NSNumber* itemLoaded;
	NSNumber* mediaSizeByte;
	NSNumber* snapTimeSec;
	NSNumber* bandwidthMean;
	NSNumber* bandwidthMedian;
	NSNumber* bandwidthSampleSize;
	NSNumber* deviceScore;
	NSNumber* itemLoadedCount;
	NSNumber* withStreamingEnabled;
	long long playbackMode;
	long long playbackLoadPhase;
	long long playSource;
	long long entryEvent;
	long long featureMajorName;
	long long featureMinorName;
	long long itemType;
	long long viewSource;
	long long mediaType;
	long long itemLoadState;
	long long connectionClass;
	long long streamingFailureCode;
	NSString* itemId;
	NSString* itemGroupId;
	NSString* mediaResolution;

}
-(void)setDeviceScore:(long long)arg1 ;
-(void)setConnectionClass:(long long)arg1 ;
-(void)setStreamingFailureCode:(long long)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(long long)getViewSource;
-(void)setViewSource:(long long)arg1 ;
-(long long)getMediaType;
-(id)getItemId;
-(double)getSnapTimeSec;
-(void)setSnapTimeSec:(double)arg1 ;
-(long long)getEntryEvent;
-(void)setEntryEvent:(long long)arg1 ;
-(long long)getDeviceScore;
-(double)getBandwidthMean;
-(double)getBandwidthMedian;
-(void)setBandwidthMedian:(double)arg1 ;
-(long long)getBandwidthSampleSize;
-(void)setBandwidthSampleSize:(long long)arg1 ;
-(long long)getConnectionClass;
-(long long)getItemType;
-(long long)getPlaybackMode;
-(long long)getWaitMs;
-(void)setWaitMs:(long long)arg1 ;
-(long long)getBufferingTimeMs;
-(void)setBufferingTimeMs:(long long)arg1 ;
-(long long)getIntentToVideoPreparationStartTimeMs;
-(void)setIntentToVideoPreparationStartTimeMs:(long long)arg1 ;
-(long long)getVideoPrepareTimeMs;
-(void)setVideoPrepareTimeMs:(long long)arg1 ;
-(long long)getIntentToPlaylistStartSetupViewModelsTimeMs;
-(void)setIntentToPlaylistStartSetupViewModelsTimeMs:(long long)arg1 ;
-(long long)getPlaylistSetupViewModelsTimeMs;
-(void)setPlaylistSetupViewModelsTimeMs:(long long)arg1 ;
-(long long)getPlayerSessionTs;
-(void)setPlayerSessionTs:(long long)arg1 ;
-(BOOL)getItemLoaded;
-(void)setItemLoaded:(BOOL)arg1 ;
-(long long)getMediaSizeByte;
-(void)setMediaSizeByte:(long long)arg1 ;
-(long long)getItemLoadedCount;
-(void)setItemLoadedCount:(long long)arg1 ;
-(BOOL)getWithStreamingEnabled;
-(void)setWithStreamingEnabled:(BOOL)arg1 ;
-(long long)getPlaybackLoadPhase;
-(void)setPlaybackLoadPhase:(long long)arg1 ;
-(long long)getPlaySource;
-(void)setPlaySource:(long long)arg1 ;
-(long long)getFeatureMajorName;
-(void)setFeatureMajorName:(long long)arg1 ;
-(long long)getFeatureMinorName;
-(void)setFeatureMinorName:(long long)arg1 ;
-(long long)getItemLoadState;
-(void)setItemLoadState:(long long)arg1 ;
-(long long)getStreamingFailureCode;
-(id)getItemGroupId;
-(void)setItemGroupId:(id)arg1 ;
-(id)getMediaResolution;
-(void)setMediaResolution:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlaybackMode:(long long)arg1 ;
-(void)setItemType:(long long)arg1 ;
-(void)setMediaType:(long long)arg1 ;
-(void)setItemId:(id)arg1 ;
-(void)setBandwidthMean:(double)arg1 ;
-(id)asDictionary;
@end
