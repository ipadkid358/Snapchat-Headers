/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:06 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCAPIAuth : NSObject
+(id)sha2:(id)arg1 ;
+(id)requestTokenForUserToken:(id)arg1 timestamp:(id)arg2 ;
+(id)authenticationParametersForUserWithToken:(id)arg1 username:(id)arg2 withDeviceInfo:(BOOL)arg3 deviceIdManager:(id)arg4 ;
+(id)versionName;
+(id)schemeName;
+(id)authenticationParametersForEndpoint:(id)arg1 authToken:(id)arg2 username:(id)arg3 parameters:(id)arg4 deviceIdManager:(id)arg5 ;
+(id)appName;
+(id)userAgentHeader;
+(id)appVersion;
@end

