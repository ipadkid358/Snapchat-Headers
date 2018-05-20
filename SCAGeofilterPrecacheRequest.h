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

@interface SCAGeofilterPrecacheRequest : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* isPrecacheEnabled;
	NSNumber* precacheCellCount;
	NSNumber* geofilterCount;
	NSNumber* sponsorsedGeofilterCount;
	NSNumber* locationAccuracyInMeters;
	long long precacheStatus;
	NSString* precacheKeyList;
	NSString* precacheHashList;

}
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(long long)getPrecacheStatus;
-(void)setPrecacheStatus:(long long)arg1 ;
-(id)getPrecacheKeyList;
-(void)setPrecacheKeyList:(id)arg1 ;
-(id)getPrecacheHashList;
-(void)setPrecacheHashList:(id)arg1 ;
-(long long)getGeofilterCount;
-(void)setGeofilterCount:(long long)arg1 ;
-(BOOL)getIsPrecacheEnabled;
-(void)setIsPrecacheEnabled:(BOOL)arg1 ;
-(long long)getPrecacheCellCount;
-(void)setPrecacheCellCount:(long long)arg1 ;
-(long long)getSponsorsedGeofilterCount;
-(void)setSponsorsedGeofilterCount:(long long)arg1 ;
-(long long)getLocationAccuracyInMeters;
-(void)setLocationAccuracyInMeters:(long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)asDictionary;
@end
