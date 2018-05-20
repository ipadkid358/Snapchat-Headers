/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCDeepLinkingUrlInterceptor.h>

@class SCAlertViewCoordinator;

@interface SCKhaleesiUrlInterceptor : SCDeepLinkingUrlInterceptor {

	SCAlertViewCoordinator* _alertViewCoordinator;

}
-(BOOL)interceptURL:(id)arg1 isWebViewFullyAppeared:(BOOL)arg2 isWebViewLoadedSuccessfully:(BOOL)arg3 allowAlertView:(BOOL)arg4 allowUniversalDeepLink:(BOOL)arg5 bypassNavigationRestriction:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(BOOL)shouldInterceptURL:(id)arg1 ;
-(id)initWithAlertViewCoordinator:(id)arg1 navigationDelegate:(id)arg2 ;
@end

