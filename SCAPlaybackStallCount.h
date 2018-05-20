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

@class NSNumber, NSString, SCANetworkCondition;

@interface SCAPlaybackStallCount : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* stallCount;
	NSNumber* withStreamingEnabled;
	NSNumber* deviceScore;
	NSNumber* initialBufferingTimeMs;
	NSNumber* totalStallDurationMs;
	NSNumber* firstStallDurationMs;
	NSNumber* firstStallMediaTimeMs;
	NSNumber* exitedDuringStall;
	long long playbackMode;
	long long viewSource;
	long long itemType;
	NSString* mediaResolution;
	SCANetworkCondition* networkCondition;

}
-(void)setDeviceScore:(long long)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(long long)getViewSource;
-(void)setViewSource:(long long)arg1 ;
-(long long)getDeviceScore;
-(long long)getItemType;
-(long long)getPlaybackMode;
-(id)getNetworkCondition;
-(void)setNetworkCondition:(id)arg1 ;
-(BOOL)getWithStreamingEnabled;
-(void)setWithStreamingEnabled:(BOOL)arg1 ;
-(id)getMediaResolution;
-(void)setMediaResolution:(id)arg1 ;
-(long long)getStallCount;
-(long long)getInitialBufferingTimeMs;
-(void)setInitialBufferingTimeMs:(long long)arg1 ;
-(long long)getTotalStallDurationMs;
-(void)setTotalStallDurationMs:(long long)arg1 ;
-(long long)getFirstStallDurationMs;
-(void)setFirstStallDurationMs:(long long)arg1 ;
-(long long)getFirstStallMediaTimeMs;
-(void)setFirstStallMediaTimeMs:(long long)arg1 ;
-(BOOL)getExitedDuringStall;
-(void)setExitedDuringStall:(BOOL)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlaybackMode:(long long)arg1 ;
-(void)setItemType:(long long)arg1 ;
-(void)setStallCount:(long long)arg1 ;
-(id)asDictionary;
@end

