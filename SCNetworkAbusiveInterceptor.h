/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCNetworkInterceptor.h>
#import <Snapchat/SCCaptchaDelegate.h>

@class SCUserSession, UINavigationController, NSString;

@interface SCNetworkAbusiveInterceptor : NSObject <SCNetworkInterceptor, SCCaptchaDelegate> {

	SCUserSession* _userSession;
	UINavigationController* _navigationController;
	BOOL _isTestingAbusiveUser;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)interceptWithRequest:(id)arg1 response:(id)arg2 data:(id)arg3 error:(id)arg4 ;
-(id)initWithUserSession:(id)arg1 navigationController:(id)arg2 ;
-(void)succeedVerifyCaptcha:(id)arg1 ;
-(void)failVerifyCaptcha:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

