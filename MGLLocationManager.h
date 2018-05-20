/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol MGLLocationManagerDelegate;
@class CLLocationManager, NSDate, NSTimer, NSString;

@interface MGLLocationManager : NSObject <CLLocationManagerDelegate> {

	BOOL _hostAppHasBackgroundCapability;
	BOOL _updatingLocation;
	id<MGLLocationManagerDelegate> _delegate;
	CLLocationManager* _standardLocationManager;
	NSDate* _backgroundLocationServiceTimeoutAllowedDate;
	NSTimer* _backgroundLocationServiceTimeoutTimer;

}

@property (nonatomic,retain) CLLocationManager * standardLocationManager;                       //@synthesize standardLocationManager=_standardLocationManager - In the implementation block
@property (assign,nonatomic) BOOL hostAppHasBackgroundCapability;                               //@synthesize hostAppHasBackgroundCapability=_hostAppHasBackgroundCapability - In the implementation block
@property (assign,getter=isUpdatingLocation,nonatomic) BOOL updatingLocation;                   //@synthesize updatingLocation=_updatingLocation - In the implementation block
@property (nonatomic,retain) NSDate * backgroundLocationServiceTimeoutAllowedDate;              //@synthesize backgroundLocationServiceTimeoutAllowedDate=_backgroundLocationServiceTimeoutAllowedDate - In the implementation block
@property (nonatomic,retain) NSTimer * backgroundLocationServiceTimeoutTimer;                   //@synthesize backgroundLocationServiceTimeoutTimer=_backgroundLocationServiceTimeoutTimer - In the implementation block
@property (assign,nonatomic,__weak) id<MGLLocationManagerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isUpdatingLocation;
-(void)configurePassiveStandardLocationManager;
-(void)startLocationServices;
-(CLLocationManager *)standardLocationManager;
-(void)setUpdatingLocation:(BOOL)arg1 ;
-(void)setStandardLocationManager:(CLLocationManager *)arg1 ;
-(NSDate *)backgroundLocationServiceTimeoutAllowedDate;
-(void)startBackgroundTimeoutTimer;
-(void)setBackgroundLocationServiceTimeoutAllowedDate:(NSDate *)arg1 ;
-(NSTimer *)backgroundLocationServiceTimeoutTimer;
-(void)timeoutAllowedCheck;
-(void)setBackgroundLocationServiceTimeoutTimer:(NSTimer *)arg1 ;
-(void)establishRegionMonitoringForLocation:(id)arg1 ;
-(BOOL)hostAppHasBackgroundCapability;
-(void)setHostAppHasBackgroundCapability:(BOOL)arg1 ;
-(void)setDelegate:(id<MGLLocationManagerDelegate>)arg1 ;
-(id<MGLLocationManagerDelegate>)delegate;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
@end
