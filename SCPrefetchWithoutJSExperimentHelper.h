/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCPrefetchWithoutJSExperimentHelper : NSObject
+(BOOL)_enablePrefetchingWithoutJSForPreloadingOptOut:(id)arg1 ;
+(BOOL)_enableBlockImagePreloadingWithPreloadingOptOut:(id)arg1 ;
+(BOOL)_enablePrefetchingWithoutJSForPreloadingOptIn:(id)arg1 ;
+(BOOL)_enableBlockImagePreloadingForPreloadingOptIn:(id)arg1 ;
+(BOOL)_getEnableValueFromTweakAndExperiment:(unsigned long long)arg1 abTestingValue:(BOOL)arg2 ;
+(id)getPropertiesForPrefetchWithoutJSExperiment:(id)arg1 item:(id)arg2 blockWebviewPreloadingByAdServer:(BOOL)arg3 ;
@end

