/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCSessionRequestManager, SCGetCaptchaResponseParser, SCSolveCaptchaResponseParser;

@interface SCAuthenticatedCaptchaService : NSObject {

	SCSessionRequestManager* _requestManager;
	SCGetCaptchaResponseParser* _getCaptchaResponseParser;
	SCSolveCaptchaResponseParser* _solveCaptchaResponseParser;

}
-(void)getCaptchaSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)solveCaptchaWithId:(id)arg1 solution:(id)arg2 deepLinkRequestJson:(id)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(id)initWithRequestManager:(id)arg1 ;
@end

