/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCUserSession;

@interface SCTweaks : NSObject {

	SCUserSession* _userSession;

}

@property (assign,nonatomic,__weak) SCUserSession * userSession;              //@synthesize userSession=_userSession - In the implementation block
+(id)sharedInstance;
-(void)tweaks;
-(BOOL)shouldUpdateMasterOnWifiOnly;
-(id)init;
-(SCUserSession *)userSession;
-(void)setUserSession:(SCUserSession *)arg1 ;
@end

