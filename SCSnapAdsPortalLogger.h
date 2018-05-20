/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, SCSnapAdsPortalPageViewEvent, NSDate;

@interface SCSnapAdsPortalLogger : NSObject {

	NSMutableDictionary* _loggedNetworkEvents;
	long long _initialSourcePageViewEventType;
	long long _sourcePageViewEventType;
	SCSnapAdsPortalPageViewEvent* _currentPageViewEvent;
	long long _rejectedReasonViewCount;
	NSDate* _startTime;

}
+(id)shared;
-(void)setupLoggingForPageViewEventType:(long long)arg1 params:(id)arg2 ;
-(void)logChatSendEventWithAdAccountId:(id)arg1 adId:(id)arg2 ;
-(void)logNetworkEventWithRequestUUID:(id)arg1 andParams:(id)arg2 ;
-(void)setInitialSourcePageViewEventType:(long long)arg1 ;
-(void)logPageViewEvent;
-(void)logExitEvent;
-(id)getPageViewEventTypeString:(long long)arg1 ;
-(id)networkEventTypeToString:(long long)arg1 ;
-(long long)getPageTypeOfPageViewEventType:(long long)arg1 ;
-(long long)getSourceTypeOfPageViewEvent:(long long)arg1 ;
-(long long)getTimeRangeOfTimeRangeType:(long long)arg1 ;
-(id)setupLoggingForNetworkEventType:(long long)arg1 ;
-(void)logDateRangeSelectEventWithAdAccountId:(id)arg1 adId:(id)arg2 timeRange:(long long)arg3 ;
-(id)init;
-(void)dealloc;
-(void)didEnterBackground:(id)arg1 ;
@end

