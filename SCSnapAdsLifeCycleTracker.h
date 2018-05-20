/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCSnapAdsMetricAdapter, SCSnapAdsDeviceAdapter;
@class SCSnapAdsEventBus, NSMutableDictionary;

@interface SCSnapAdsLifeCycleTracker : NSObject {

	SCSnapAdsEventBus* _eventBus;
	id<SCSnapAdsMetricAdapter> _adsMetricAdapter;
	id<SCSnapAdsDeviceAdapter> _adsDeviceAdapter;
	NSMutableDictionary* _requestLatencyMap;
	NSMutableDictionary* _mediaDownloadMap;

}

@property (nonatomic,retain) NSMutableDictionary * requestLatencyMap;              //@synthesize requestLatencyMap=_requestLatencyMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mediaDownloadMap;               //@synthesize mediaDownloadMap=_mediaDownloadMap - In the implementation block
-(NSMutableDictionary *)requestLatencyMap;
-(NSMutableDictionary *)mediaDownloadMap;
-(id)initWithEventBus:(id)arg1 metricAdapter:(id)arg2 deviceAdapter:(id)arg3 ;
-(void)setRequestLatencyMap:(NSMutableDictionary *)arg1 ;
-(void)setMediaDownloadMap:(NSMutableDictionary *)arg1 ;
@end
