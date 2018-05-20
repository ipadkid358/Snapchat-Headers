/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCAdSource, SCSnapAdsPersistedDataAdapter, SCSnapAdsMetricAdapter;
@class SCSnapAdsEventBus, SCSnapAdsNetworkUserAgent, SCSnapAdsAdSourceFactory, SCSnapAdsAdMediaRenditionSelector, SCSnapAdsAdInteractionTracker, SCCheetahPromotedStoriesAdResponseTracker, SCSnapAdsUser, SCSnapAdsAppStateAwareExecutor, SCSnapAdsDeviceTargetingManager, SCSnapAdsAdThirdPartyTrackingManager, SCSnapAdsDebugSettingsManager, SCSnapAdsUnusedAdTracker, SCSnapAdsExperimentsManager, SCSnapAdsLifeCycleTracker, SCSnapAdsBusinessMetricsReporter, SCSnapAdsDebugLogger, SCSnapAdsAdProductsConfigManager, SCSnapAdsShutOffManager, SCSnapAdsPixelTrackingCookieManager, SCSnapAdsAdResponseTracker;

@interface SCSnapAdsV2 : NSObject {

	SCSnapAdsEventBus* _eventBus;
	SCSnapAdsNetworkUserAgent* _userAgent;
	id<SCAdSource> _adSource;
	SCSnapAdsAdSourceFactory* _adSourceFactory;
	SCSnapAdsAdMediaRenditionSelector* _adMediaRenditionSelector;
	SCSnapAdsAdInteractionTracker* _adInteractionTracker;
	SCCheetahPromotedStoriesAdResponseTracker* _cheetahPromotedStoriesAdResponseTracker;
	SCSnapAdsUser* _snapAdsUser;
	id<SCSnapAdsPersistedDataAdapter> _persistedDataAdapter;
	SCSnapAdsAppStateAwareExecutor* _appStateAwareExecutor;
	SCSnapAdsDeviceTargetingManager* _deviceTargetingManager;
	SCSnapAdsAdThirdPartyTrackingManager* _adThirdPartyTrackingManager;
	SCSnapAdsDebugSettingsManager* _debugSettingsManager;
	SCSnapAdsUnusedAdTracker* _unusedAdTracker;
	SCSnapAdsExperimentsManager* _adsExperimentsManager;
	id<SCSnapAdsMetricAdapter> _adsMetricAdapter;
	SCSnapAdsLifeCycleTracker* _adLifeCycleTracker;
	SCSnapAdsBusinessMetricsReporter* _metricsReporter;
	SCSnapAdsDebugLogger* _snapAdsDebugLogger;
	SCSnapAdsAdProductsConfigManager* _adProductsConfigManager;
	SCSnapAdsShutOffManager* _adShutOffManager;
	SCSnapAdsPixelTrackingCookieManager* _pixelTrackingCookieManager;
	SCSnapAdsAdResponseTracker* _primaryAdResponseTracker;
	SCSnapAdsAdResponseTracker* _shadowAdResponseTracker;

}
+(id)shared;
-(id)adSourceConfigName;
-(id)adResponseForAdRequestClientId:(id)arg1 ;
-(id)getPixelToken;
-(void)updateAdsUser:(id)arg1 ;
-(void)updateAdSources:(id)arg1 ;
-(void)initializeAdSource;
-(void)initializeWithNetworkAdapter:(id)arg1 deviceAdapter:(id)arg2 persistedDataAdapter:(id)arg3 applicationInfoAdapter:(id)arg4 debugSettingsAdapter:(id)arg5 experimentsAdapter:(id)arg6 metricAdapter:(id)arg7 loggingAdapter:(id)arg8 ;
-(id)getAdProductsConfigManager;
-(id)getSceId;
-(id)getSnapAdsUser;
-(id)init;
-(id)description;
@end

