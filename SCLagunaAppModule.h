/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCSessionRequestManager;

@interface SCLagunaAppModule : NSObject {

	SCSessionRequestManager* _requestManager;

}

@property (assign,nonatomic,__weak) SCSessionRequestManager * requestManager;              //@synthesize requestManager=_requestManager - In the implementation block
+(id)sharedModule;
-(id)newLagunaSettingUIViewControllerWithUserSession:(id)arg1 delegate:(id)arg2 ;
-(id)newLagunaPairingViewControllerWithUserSession:(id)arg1 delegate:(id)arg2 source:(unsigned long long)arg3 ;
-(void)clearLagunaCacheExceptUserId:(id)arg1 ;
-(SCSessionRequestManager *)requestManager;
-(void)setRequestManager:(SCSessionRequestManager *)arg1 ;
@end

