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

@interface SCAGeofilterGeofilterAction : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* actionSequenceCount;
	NSNumber* actionIndex;
	NSNumber* viewTimeSec;
	NSNumber* withGeofilterTransition;
	long long actionType;
	long long geofilterGeofilterType;
	NSString* filterVenueId;
	NSString* filterGeofenceId;
	NSString* filterGeofilterId;
	NSString* geocell;
	NSString* snapSessionId;
	NSString* encGeoData;

}
-(void)setSnapSessionId:(id)arg1 ;
-(void)setEncGeoData:(id)arg1 ;
-(void)setViewTimeSec:(long long)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(long long)getViewTimeSec;
-(long long)getActionType;
-(id)getFilterVenueId;
-(void)setFilterVenueId:(id)arg1 ;
-(id)getSnapSessionId;
-(id)getFilterGeofilterId;
-(void)setFilterGeofilterId:(id)arg1 ;
-(id)getEncGeoData;
-(BOOL)getWithGeofilterTransition;
-(void)setWithGeofilterTransition:(BOOL)arg1 ;
-(long long)getActionSequenceCount;
-(void)setActionSequenceCount:(long long)arg1 ;
-(long long)getActionIndex;
-(long long)getGeofilterGeofilterType;
-(void)setGeofilterGeofilterType:(long long)arg1 ;
-(id)getFilterGeofenceId;
-(void)setFilterGeofenceId:(id)arg1 ;
-(id)getGeocell;
-(void)setGeocell:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActionType:(long long)arg1 ;
-(void)setActionIndex:(long long)arg1 ;
-(id)asDictionary;
@end

