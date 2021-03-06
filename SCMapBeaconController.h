/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCLocationObserver.h>

@class NSArray, NSDictionary, NSString;

@interface SCMapBeaconController : NSObject <SCLocationObserver> {

	NSArray* _beaconRegions;
	NSDictionary* _nearbyBeaconsMap;

}

@property (copy) NSDictionary * nearbyBeaconsMap;                   //@synthesize nearbyBeaconsMap=_nearbyBeaconsMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)locationObserverWantsActiveLocationMonitoring;
-(id)locationObserverDispatchQueue;
-(double)locationObserverDesiredAccuracy;
-(id)locationObserverIdentifier;
-(id)locationObserverWantsToMonitorBeaconRegions;
-(void)onLocationMonitoredBeaconRegionsUpdated;
-(id)nearbyBeaconIds;
-(NSDictionary *)nearbyBeaconsMap;
-(void)setNearbyBeaconsMap:(NSDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
@end

