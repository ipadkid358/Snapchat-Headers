/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCUserInitiateLoadLatencyLogger : NSObject
+(void)logUserInitiatedRequestLoadLatencyWithTask:(id)arg1 userInitiatedTime:(double)arg2 taskFinishTime:(double)arg3 ;
+(void)logUserConsumeContentWithRequestId:(id)arg1 isUIAsset:(BOOL)arg2 contexts:(id)arg3 trackingType:(id)arg4 ;
@end

