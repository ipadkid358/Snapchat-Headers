/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCRequestConcurrencyController : NSObject
-(BOOL)_shouldRunTask:(id)arg1 withConcurrencyCounter:(id)arg2 networkManagerContexts:(id)arg3 ;
-(BOOL)_shouldRunUploadTask:(id)arg1 ;
-(BOOL)_shouldRunAnalyticTask:(id)arg1 withConcurrencyCounter:(id)arg2 ;
-(BOOL)_shouldRunAnalyticsV2Task:(id)arg1 ;
-(BOOL)_shouldRunMetadataTask:(id)arg1 ;
-(BOOL)_shouldRunDownloadTask:(id)arg1 withConcurrencyCounter:(id)arg2 networkManagerContexts:(id)arg3 ;
-(unsigned long long)_maxSmallRequestCountWithNetworkManagerContexts:(id)arg1 ;
-(id)tasksToRunWithRankedTasks:(id)arg1 runningTasks:(id)arg2 networkManagerContexts:(id)arg3 ;
@end

