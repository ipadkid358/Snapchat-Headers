/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCOperaContextLongformViewLogger : NSObject
+(id)sharedInstance;
-(void)logLocalWebpageViewWithContext:(id)arg1 params:(id)arg2 inlineVideosTotalTimeViewedSec:(double)arg3 inlineVideosViewedCount:(double)arg4 logger:(id)arg5 currentViewingSession:(id)arg6 ;
-(void)logRemoteWebpageViewWithContext:(id)arg1 params:(id)arg2 logger:(id)arg3 currentViewingSession:(id)arg4 ;
-(void)logLongformCameraViewWithContext:(id)arg1 params:(id)arg2 logger:(id)arg3 currentViewingSession:(id)arg4 ;
-(void)logLongformVideoViewWithContext:(id)arg1 params:(id)arg2 startedWithCaptionOn:(BOOL)arg3 videoWithCaptionOnTimeViewedSeconds:(double)arg4 videoInLandscapeModeTimeViewedSeconds:(double)arg5 logger:(id)arg6 currentViewingSession:(id)arg7 videoRotationEnabled:(BOOL)arg8 videoRollMinDegree:(double)arg9 videoRollMaxDegree:(double)arg10 ;
-(void)logStoreViewWithContext:(id)arg1 params:(id)arg2 logger:(id)arg3 currentViewingSession:(id)arg4 ;
-(void)logAdSubscriptionLongformWithContext:(id)arg1 params:(id)arg2 logger:(id)arg3 currentViewingSession:(id)arg4 isSubscribed:(BOOL)arg5 ;
-(void)logSubscriptionLongformWithContext:(id)arg1 params:(id)arg2 logger:(id)arg3 currentViewingSession:(id)arg4 ;
-(void)logProductViewWithContext:(id)arg1 params:(id)arg2 logger:(id)arg3 currentViewingSession:(id)arg4 ;
@end

