/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCMGLMapViewListener.h>

@protocol SCMapTimeAndWeatherControllerDelegate, SCDownloadableContentManaging;
@class SCMapTimeAndWeatherView, SCMapboxView, SCXRenderLayer, SCThrottleTimer, NSDateFormatter, NSMutableDictionary, NSString, SCXWeather;

@interface SCMapTimeAndWeatherController : NSObject <SCMGLMapViewListener> {

	SCMapTimeAndWeatherView* _timeAndWeatherView;
	SCMapboxView* _mapboxView;
	SCXRenderLayer* _mapRenderLayer;
	BOOL _usesMetricSystem;
	id<SCMapTimeAndWeatherControllerDelegate> _delegate;
	SCThrottleTimer* _throttleTimer;
	NSDateFormatter* _dateFormatter;
	id<SCDownloadableContentManaging> _downloadableContentManager;
	NSMutableDictionary* _worldEffectIdsBySource;
	NSString* _currentWorldEffectId;
	SCXWeather* _currentWorldEffect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mapViewRegionIsChanging:(id)arg1 ;
-(void)_scheduleRepeatingSystemClockMinuteChangeUpdates;
-(void)_updateTimeAndWeatherViewWithTileMetadata:(id)arg1 ;
-(id)_worldEffectIdFromTileMetadata:(id)arg1 ;
-(void)_setWorldEffectId:(id)arg1 fromSource:(long long)arg2 ;
-(void)_activateHighestPriorityWorldEffect;
-(void)_systemClockMinuteDidChange;
-(id)initWithTimeAndWeatherView:(id)arg1 mapboxView:(id)arg2 mapRenderLayer:(id)arg3 usesMetricSystem:(BOOL)arg4 mapViewListenerAnnouncer:(id)arg5 downloadableContentManager:(id)arg6 delegate:(id)arg7 ;
-(void)showBirthdayEffect;
-(void)update;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
@end

