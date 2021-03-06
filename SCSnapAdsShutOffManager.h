/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCSnapAdsMetricAdapter;
@class SCSnapAdsEventBus, NSString, NSMutableSet;

@interface SCSnapAdsShutOffManager : NSObject {

	SCSnapAdsEventBus* _snapAdsEventBus;
	id<SCSnapAdsMetricAdapter> _adMetricAdapter;
	NSString* _appVersion;
	NSMutableSet* _blockedTypes;

}
-(BOOL)shouldTurnOffAdsForType:(unsigned long long)arg1 ;
-(id)initWithSnapAdsEventBus:(id)arg1 appVersion:(id)arg2 metricAdapter:(id)arg3 ;
-(void)onShutOffRulesUpdated:(id)arg1 ;
@end

