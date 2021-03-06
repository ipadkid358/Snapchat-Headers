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

@interface SCAAdStoryOpportunity : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* autoAdvanceIndex;
	NSNumber* storySessionId;
	NSNumber* playbackVolume;
	NSNumber* meanStoryViewTime;
	NSNumber* stdDevStoryViewTime;
	long long adProductSourceType;
	long long adSkipReason;
	long long playbackAudio;
	long long storyType;
	NSString* adUnitId;
	NSString* adId;
	NSString* adsnapId;
	NSString* adsnapPlacementId;
	NSString* adsnapLineItemId;

}
-(void)setPlaybackAudio:(long long)arg1 ;
-(void)setAdId:(id)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(id)getAdId;
-(long long)getAutoAdvanceIndex;
-(void)setAutoAdvanceIndex:(long long)arg1 ;
-(long long)getStoryType;
-(id)getAdsnapId;
-(void)setAdsnapId:(id)arg1 ;
-(double)getPlaybackVolume;
-(long long)getPlaybackAudio;
-(id)getAdsnapPlacementId;
-(void)setAdsnapPlacementId:(id)arg1 ;
-(id)getAdsnapLineItemId;
-(void)setAdsnapLineItemId:(id)arg1 ;
-(id)getAdUnitId;
-(void)setAdUnitId:(id)arg1 ;
-(long long)getStorySessionId;
-(void)setStorySessionId:(long long)arg1 ;
-(long long)getAdProductSourceType;
-(void)setAdProductSourceType:(long long)arg1 ;
-(double)getMeanStoryViewTime;
-(void)setMeanStoryViewTime:(double)arg1 ;
-(double)getStdDevStoryViewTime;
-(void)setStdDevStoryViewTime:(double)arg1 ;
-(long long)getAdSkipReason;
-(void)setAdSkipReason:(long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)asDictionary;
-(void)setPlaybackVolume:(double)arg1 ;
-(void)setStoryType:(long long)arg1 ;
@end

