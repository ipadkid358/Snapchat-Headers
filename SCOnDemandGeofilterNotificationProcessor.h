/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:43 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCAppNotificationProcessor.h>

@class SCUserSession;

@interface SCOnDemandGeofilterNotificationProcessor : NSObject <SCAppNotificationProcessor> {

	SCUserSession* _userSession;

}
-(id)initWithUserSession:(id)arg1 ;
-(long long)shouldFilterNotification:(id)arg1 ;
-(void)onNotificationDeferred:(id)arg1 ;
-(void)processNotification:(id)arg1 ;
@end

