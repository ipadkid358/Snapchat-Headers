/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSString, SCNetworkingLogger;

@interface SCCrNetFrameworkController : NSObject {

	BOOL _isCrNetInstalled;
	BOOL _quicHostWhitelisted;
	BOOL _isCertPinningInstallSuccess;
	/*^block*/id _finalRequestFilerBlock;
	NSSet* _blackListedEndpoints;
	NSSet* _whitelistedHosts;
	NSSet* _blackListedURLs;
	NSString* _quicWhitelistedHostString;
	SCNetworkingLogger* logger;

}
+(id)sharedInstance;
-(void)installCronet;
-(void)enableCrNetForSCAPIURLSession:(id)arg1 withNSURLSessionConfiguration:(id)arg2 ;
-(BOOL)isServedByCrNet:(id)arg1 ;
-(id)getQuicWhitelistOptions;
-(void)_setupFinalFilterBlock;
-(void)_enableCertPinning;
-(void)updateConfiguration;
-(id)init;
@end
