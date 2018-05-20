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

@class NSNumber;

@interface SCAGroupStoryCreate : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* isSuccessful;
	NSNumber* viewTimeSec;
	NSNumber* withDisplayName;
	NSNumber* failedCount;
	NSNumber* hasSeenSelectViewers;
	NSNumber* posterCount;
	NSNumber* viewerCount;
	NSNumber* withMap;
	NSNumber* withGeocodeDisplay;
	NSNumber* withGeoPrivacy;
	NSNumber* withAutosave;
	NSNumber* readGeoPrivacy;
	NSNumber* geoToggleCount;
	NSNumber* reverseGeocodeMs;
	long long source;
	long long createType;

}
-(void)setViewTimeSec:(double)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(double)getViewTimeSec;
-(long long)getSource;
-(BOOL)getIsSuccessful;
-(void)setIsSuccessful:(BOOL)arg1 ;
-(BOOL)getWithDisplayName;
-(void)setWithDisplayName:(BOOL)arg1 ;
-(long long)getFailedCount;
-(void)setFailedCount:(long long)arg1 ;
-(BOOL)getHasSeenSelectViewers;
-(void)setHasSeenSelectViewers:(BOOL)arg1 ;
-(long long)getPosterCount;
-(void)setPosterCount:(long long)arg1 ;
-(long long)getViewerCount;
-(void)setViewerCount:(long long)arg1 ;
-(BOOL)getWithMap;
-(void)setWithMap:(BOOL)arg1 ;
-(BOOL)getWithGeocodeDisplay;
-(void)setWithGeocodeDisplay:(BOOL)arg1 ;
-(BOOL)getWithGeoPrivacy;
-(void)setWithGeoPrivacy:(BOOL)arg1 ;
-(BOOL)getWithAutosave;
-(void)setWithAutosave:(BOOL)arg1 ;
-(BOOL)getReadGeoPrivacy;
-(void)setReadGeoPrivacy:(BOOL)arg1 ;
-(long long)getGeoToggleCount;
-(void)setGeoToggleCount:(long long)arg1 ;
-(double)getReverseGeocodeMs;
-(void)setReverseGeocodeMs:(double)arg1 ;
-(long long)getCreateType;
-(void)setCreateType:(long long)arg1 ;
-(id)init;
-(void)setSource:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)asDictionary;
@end
