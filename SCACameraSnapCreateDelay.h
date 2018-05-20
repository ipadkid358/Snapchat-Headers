/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:04 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAUserTrackedEvent.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface SCACameraSnapCreateDelay : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* latencyMillis;
	NSNumber* contentDurationMillis;
	long long lowLightStatus;
	long long mediaType;
	NSString* analyticsVersion;
	NSString* powerMode;
	NSString* filterLensId;
	NSString* captureSessionId;
	NSString* cameraApi;
	NSString* cameraPosition;
	NSString* cameraOpenSource;
	NSString* cameraLevel;
	NSString* splits;
	NSString* startType;
	NSString* startSubType;

}
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(long long)getMediaType;
-(id)getCameraApi;
-(void)setCameraApi:(id)arg1 ;
-(id)getCaptureSessionId;
-(void)setCaptureSessionId:(id)arg1 ;
-(long long)getLatencyMillis;
-(void)setLatencyMillis:(long long)arg1 ;
-(void)setPowerMode:(id)arg1 ;
-(id)getSplits;
-(void)setSplits:(id)arg1 ;
-(id)getStartType;
-(void)setStartType:(id)arg1 ;
-(id)getStartSubType;
-(void)setStartSubType:(id)arg1 ;
-(id)getAnalyticsVersion;
-(void)setAnalyticsVersion:(id)arg1 ;
-(long long)getContentDurationMillis;
-(void)setContentDurationMillis:(long long)arg1 ;
-(long long)getLowLightStatus;
-(void)setLowLightStatus:(long long)arg1 ;
-(id)getFilterLensId;
-(void)setFilterLensId:(id)arg1 ;
-(id)getCameraPosition;
-(id)getCameraOpenSource;
-(void)setCameraOpenSource:(id)arg1 ;
-(id)getCameraLevel;
-(void)setCameraLevel:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)getPowerMode;
-(void)setCameraPosition:(id)arg1 ;
-(void)setMediaType:(long long)arg1 ;
-(id)asDictionary;
@end

