/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCSnapAirEventLogger
@required
+(void)logShakeErrorEvent:(id)arg1 message:(id)arg2 failStep:(long long)arg3 isV2:(BOOL)arg4 isAutoShake:(BOOL)arg5;
+(void)logShakeCreateEvent:(id)arg1 fromFeature:(id)arg2 isVideo:(BOOL)arg3 isV2:(BOOL)arg4;
+(void)logShakeSendEvent:(id)arg1 retryCount:(long long)arg2 isV2:(BOOL)arg3 isAutoShake:(BOOL)arg4;
+(void)logShakeUploadEvent:(id)arg1 retryCout:(long long)arg2 totalFileSize:(long long)arg3 individualFileSize:(id)arg4 isV2:(BOOL)arg5 isAutoShake:(BOOL)arg6;

@end
