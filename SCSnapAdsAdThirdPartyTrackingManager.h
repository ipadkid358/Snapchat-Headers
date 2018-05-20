/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCSnapAdsNetworkAdapter, SCSnapAdsMetricAdapter;
@class SCSnapAdsEventBus, SCSnapAdsAdInteractionTracker, SCSnapAdsAdThirdPartyTrackUrlCreator, SCSnapAdsNetworkUserAgent, NSMutableDictionary;

@interface SCSnapAdsAdThirdPartyTrackingManager : NSObject {

	SCSnapAdsEventBus* _snapAdsEventBus;
	SCSnapAdsAdInteractionTracker* _adInteractionTracker;
	id<SCSnapAdsNetworkAdapter> _networkAdapter;
	SCSnapAdsAdThirdPartyTrackUrlCreator* _adThirdPartyTrackUrlCreator;
	SCSnapAdsNetworkUserAgent* _userAgent;
	id<SCSnapAdsMetricAdapter> _adsMetricAdapter;
	NSMutableDictionary* _impressionTrackingURLs;
	NSMutableDictionary* _clickTrackingURLs;

}

@property (nonatomic,retain) SCSnapAdsEventBus * snapAdsEventBus;                                             //@synthesize snapAdsEventBus=_snapAdsEventBus - In the implementation block
@property (nonatomic,retain) SCSnapAdsAdInteractionTracker * adInteractionTracker;                            //@synthesize adInteractionTracker=_adInteractionTracker - In the implementation block
@property (nonatomic,retain) id<SCSnapAdsNetworkAdapter> networkAdapter;                                      //@synthesize networkAdapter=_networkAdapter - In the implementation block
@property (nonatomic,retain) SCSnapAdsAdThirdPartyTrackUrlCreator * adThirdPartyTrackUrlCreator;              //@synthesize adThirdPartyTrackUrlCreator=_adThirdPartyTrackUrlCreator - In the implementation block
@property (nonatomic,retain) SCSnapAdsNetworkUserAgent * userAgent;                                           //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,retain) id<SCSnapAdsMetricAdapter> adsMetricAdapter;                                     //@synthesize adsMetricAdapter=_adsMetricAdapter - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * impressionTrackingURLs;                                    //@synthesize impressionTrackingURLs=_impressionTrackingURLs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * clickTrackingURLs;                                         //@synthesize clickTrackingURLs=_clickTrackingURLs - In the implementation block
-(id<SCSnapAdsNetworkAdapter>)networkAdapter;
-(SCSnapAdsAdInteractionTracker *)adInteractionTracker;
-(id<SCSnapAdsMetricAdapter>)adsMetricAdapter;
-(void)onAdResolvedEvent:(id)arg1 ;
-(void)onAdPanelChangedEvent:(id)arg1 ;
-(void)onExitAdUnitEvent:(id)arg1 ;
-(void)onAdExpiredEvent:(id)arg1 ;
-(void)_onCheetahPromotedStoriesAdResolvedEvent:(id)arg1 ;
-(void)_onCheetahPromotedStoriesAdTrackEvent:(id)arg1 ;
-(id)_recordPromotedStoriesThirdPartyInteractionHelper:(id)arg1 ;
-(id)recordThirdPartyInteractionHelper:(id)arg1 ;
-(void)recordThirdPartyClickHelper:(id)arg1 ;
-(id)_recordPromotedStoriesImpressionByUrl:(id)arg1 impressionUrl:(id)arg2 ;
-(id)recordImpressionByUrl:(id)arg1 impressionUrl:(id)arg2 ;
-(BOOL)_shouldRecordImpressionUrl:(id)arg1 ;
-(void)_trackImpressionUrl:(id)arg1 originalImpressionUrl:(id)arg2 ;
-(void)handleNetworkCompletion:(id)arg1 responseCode:(long long)arg2 ;
-(id)initWithEventBus:(id)arg1 adInteractionTracker:(id)arg2 networkAdapter:(id)arg3 userAgent:(id)arg4 adThirdPartyTrackUrlCreator:(id)arg5 adsMetricAdapter:(id)arg6 ;
-(id)getImpressionTrackingURLs:(id)arg1 ;
-(id)getClickTrackingURLs:(id)arg1 ;
-(void)setAdInteractionTracker:(SCSnapAdsAdInteractionTracker *)arg1 ;
-(void)setNetworkAdapter:(id<SCSnapAdsNetworkAdapter>)arg1 ;
-(SCSnapAdsAdThirdPartyTrackUrlCreator *)adThirdPartyTrackUrlCreator;
-(void)setAdThirdPartyTrackUrlCreator:(SCSnapAdsAdThirdPartyTrackUrlCreator *)arg1 ;
-(void)setAdsMetricAdapter:(id<SCSnapAdsMetricAdapter>)arg1 ;
-(NSMutableDictionary *)impressionTrackingURLs;
-(void)setImpressionTrackingURLs:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)clickTrackingURLs;
-(void)setClickTrackingURLs:(NSMutableDictionary *)arg1 ;
-(SCSnapAdsEventBus *)snapAdsEventBus;
-(void)setSnapAdsEventBus:(SCSnapAdsEventBus *)arg1 ;
-(void)onAdTrackEvent:(id)arg1 ;
-(void)registerSnapAdsEvents;
-(void)onAdTrackAndGetEvent:(id)arg1 ;
-(SCSnapAdsNetworkUserAgent *)userAgent;
-(void)setUserAgent:(SCSnapAdsNetworkUserAgent *)arg1 ;
-(void)cleanup:(id)arg1 ;
@end
