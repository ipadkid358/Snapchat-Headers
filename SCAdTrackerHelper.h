/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCAdTrackerHelper : NSObject
+(void)trackOpenViewLoadedEventWithAdRequestClientId:(id)arg1 context:(id)arg2 lastInteraction:(id)arg3 snapIndex:(long long)arg4 ;
+(void)trackLongPressEventwithAdRequestClientId:(id)arg1 context:(id)arg2 snapIndex:(long long)arg3 ;
+(BOOL)trackCloseViewEventWithContext:(id)arg1 adViewContext:(id)arg2 params:(id)arg3 adRequestClientId:(id)arg4 lastInteraction:(id)arg5 snapIndex:(long long)arg6 adSessionId:(id)arg7 adProductType:(unsigned long long)arg8 ;
+(long long)adSkipReasonToLogForAdSkipReason:(unsigned long long)arg1 ;
+(long long)adPanelForContext:(id)arg1 ;
+(BOOL)shouldHandleEvent:(id)arg1 context:(id)arg2 params:(id)arg3 adChunks:(id)arg4 ;
+(void)didSwipeUpOnCard:(id)arg1 snapIndex:(long long)arg2 ;
@end

