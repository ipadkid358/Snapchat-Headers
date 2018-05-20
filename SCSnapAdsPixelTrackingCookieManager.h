/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCSnapAdsNetworkAdapter;
@class SCSnapAdsNetworkUserAgent;

@interface SCSnapAdsPixelTrackingCookieManager : NSObject {

	id<SCSnapAdsNetworkAdapter> _networkAdapter;
	SCSnapAdsNetworkUserAgent* _userAgent;
	BOOL _isLoadingCookie;

}
+(void)setClientTTLCookie:(id)arg1 ;
-(void)_loadPixelTrackingCookieIfNecessary;
-(BOOL)isCookieSetWithCookieName:(id)arg1 cookieDomain:(id)arg2 ;
-(id)initWithEventBus:(id)arg1 networkAdapter:(id)arg2 userAgent:(id)arg3 ;
-(id)cookieStorage;
@end

