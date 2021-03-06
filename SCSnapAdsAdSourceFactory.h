/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCSnapAdsNetworkAdapter, SCSnapAdsPersistedDataAdapter, SCSnapAdsMetricAdapter, SCSnapAdsExperimentsAdapter, SCSnapAdsApplicationInfoAdapter, SCSnapAdsDeviceAdapter;
@class SCSnapAdsUser, SCSnapAdsEventBus, SCSnapAdsNetworkUserAgent, SCSnapAdsAdMediaRenditionSelector, SCSnapAdsAdInteractionTracker, SCCheetahPromotedStoriesAdResponseTracker, SCSnapAdsAdResponseTracker, SCSnapAdsDeviceTargetingManager;

@interface SCSnapAdsAdSourceFactory : NSObject {

	id<SCSnapAdsNetworkAdapter> _networkAdapter;
	SCSnapAdsUser* _snapAdsUser;
	SCSnapAdsEventBus* _eventBus;
	SCSnapAdsNetworkUserAgent* _userAgent;
	SCSnapAdsAdMediaRenditionSelector* _adMediaRenditionSelector;
	SCSnapAdsAdInteractionTracker* _adInteractionTracker;
	SCCheetahPromotedStoriesAdResponseTracker* _cheetahPromotedStoriesAdResponseTracker;
	SCSnapAdsAdResponseTracker* _primaryAdResponseTracker;
	SCSnapAdsAdResponseTracker* _shadowAdResponseTracker;
	id<SCSnapAdsPersistedDataAdapter> _persistedDataAdapter;
	SCSnapAdsDeviceTargetingManager* _deviceTargetingManager;
	id<SCSnapAdsMetricAdapter> _adsMetricAdapter;
	id<SCSnapAdsExperimentsAdapter> _adsExperimentsAdapter;
	id<SCSnapAdsApplicationInfoAdapter> _adsApplicationInfoAdapter;
	id<SCSnapAdsDeviceAdapter> _adsDeviceAdapter;

}

@property (nonatomic,retain) id<SCSnapAdsNetworkAdapter> networkAdapter;                                                       //@synthesize networkAdapter=_networkAdapter - In the implementation block
@property (nonatomic,retain) SCSnapAdsUser * snapAdsUser;                                                                      //@synthesize snapAdsUser=_snapAdsUser - In the implementation block
@property (nonatomic,retain) SCSnapAdsEventBus * eventBus;                                                                     //@synthesize eventBus=_eventBus - In the implementation block
@property (nonatomic,retain) SCSnapAdsNetworkUserAgent * userAgent;                                                            //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,retain) SCSnapAdsAdMediaRenditionSelector * adMediaRenditionSelector;                                     //@synthesize adMediaRenditionSelector=_adMediaRenditionSelector - In the implementation block
@property (nonatomic,retain) SCSnapAdsAdInteractionTracker * adInteractionTracker;                                             //@synthesize adInteractionTracker=_adInteractionTracker - In the implementation block
@property (nonatomic,retain) SCCheetahPromotedStoriesAdResponseTracker * cheetahPromotedStoriesAdResponseTracker;              //@synthesize cheetahPromotedStoriesAdResponseTracker=_cheetahPromotedStoriesAdResponseTracker - In the implementation block
@property (nonatomic,retain) SCSnapAdsAdResponseTracker * primaryAdResponseTracker;                                            //@synthesize primaryAdResponseTracker=_primaryAdResponseTracker - In the implementation block
@property (nonatomic,retain) SCSnapAdsAdResponseTracker * shadowAdResponseTracker;                                             //@synthesize shadowAdResponseTracker=_shadowAdResponseTracker - In the implementation block
@property (nonatomic,retain) id<SCSnapAdsPersistedDataAdapter> persistedDataAdapter;                                           //@synthesize persistedDataAdapter=_persistedDataAdapter - In the implementation block
@property (nonatomic,retain) SCSnapAdsDeviceTargetingManager * deviceTargetingManager;                                         //@synthesize deviceTargetingManager=_deviceTargetingManager - In the implementation block
@property (nonatomic,retain) id<SCSnapAdsMetricAdapter> adsMetricAdapter;                                                      //@synthesize adsMetricAdapter=_adsMetricAdapter - In the implementation block
@property (nonatomic,__weak,readonly) id<SCSnapAdsExperimentsAdapter> adsExperimentsAdapter;                                   //@synthesize adsExperimentsAdapter=_adsExperimentsAdapter - In the implementation block
@property (nonatomic,__weak,readonly) id<SCSnapAdsApplicationInfoAdapter> adsApplicationInfoAdapter;                           //@synthesize adsApplicationInfoAdapter=_adsApplicationInfoAdapter - In the implementation block
@property (nonatomic,__weak,readonly) id<SCSnapAdsDeviceAdapter> adsDeviceAdapter;                                             //@synthesize adsDeviceAdapter=_adsDeviceAdapter - In the implementation block
-(id<SCSnapAdsNetworkAdapter>)networkAdapter;
-(SCSnapAdsEventBus *)eventBus;
-(SCSnapAdsAdInteractionTracker *)adInteractionTracker;
-(id<SCSnapAdsMetricAdapter>)adsMetricAdapter;
-(id<SCSnapAdsExperimentsAdapter>)adsExperimentsAdapter;
-(id<SCSnapAdsApplicationInfoAdapter>)adsApplicationInfoAdapter;
-(id<SCSnapAdsDeviceAdapter>)adsDeviceAdapter;
-(SCSnapAdsDeviceTargetingManager *)deviceTargetingManager;
-(id)adSourceForConfig:(id)arg1 ;
-(id)build:(id)arg1 ;
-(id)initWithNetworkAdapter:(id)arg1 snapAdsUser:(id)arg2 eventBus:(id)arg3 userAgent:(id)arg4 renditionSelector:(id)arg5 adInteractionTracker:(id)arg6 cheetahPromotedStoriesResponseTracker:(id)arg7 primaryAdResponseTracker:(id)arg8 shadowAdResponseTracker:(id)arg9 persistedDataAdapter:(id)arg10 deviceTargetingManager:(id)arg11 adsMetricAdapter:(id)arg12 snapAdsExperimentsAdapter:(id)arg13 adsApplicationInfoAdapter:(id)arg14 adsDeviceAdapter:(id)arg15 ;
-(id)defaultAdSource;
-(void)setEventBus:(SCSnapAdsEventBus *)arg1 ;
-(void)setAdMediaRenditionSelector:(SCSnapAdsAdMediaRenditionSelector *)arg1 ;
-(SCCheetahPromotedStoriesAdResponseTracker *)cheetahPromotedStoriesAdResponseTracker;
-(void)setCheetahPromotedStoriesAdResponseTracker:(SCCheetahPromotedStoriesAdResponseTracker *)arg1 ;
-(SCSnapAdsAdResponseTracker *)primaryAdResponseTracker;
-(void)setPrimaryAdResponseTracker:(SCSnapAdsAdResponseTracker *)arg1 ;
-(SCSnapAdsAdResponseTracker *)shadowAdResponseTracker;
-(void)setShadowAdResponseTracker:(SCSnapAdsAdResponseTracker *)arg1 ;
-(void)setDeviceTargetingManager:(SCSnapAdsDeviceTargetingManager *)arg1 ;
-(SCSnapAdsUser *)snapAdsUser;
-(void)setSnapAdsUser:(SCSnapAdsUser *)arg1 ;
-(void)setAdInteractionTracker:(SCSnapAdsAdInteractionTracker *)arg1 ;
-(void)setNetworkAdapter:(id<SCSnapAdsNetworkAdapter>)arg1 ;
-(void)setAdsMetricAdapter:(id<SCSnapAdsMetricAdapter>)arg1 ;
-(SCSnapAdsAdMediaRenditionSelector *)adMediaRenditionSelector;
-(id<SCSnapAdsPersistedDataAdapter>)persistedDataAdapter;
-(void)setPersistedDataAdapter:(id<SCSnapAdsPersistedDataAdapter>)arg1 ;
-(SCSnapAdsNetworkUserAgent *)userAgent;
-(void)setUserAgent:(SCSnapAdsNetworkUserAgent *)arg1 ;
@end

