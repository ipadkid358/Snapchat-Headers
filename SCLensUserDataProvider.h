/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/LSAUserDataComponentListener.h>

@class LSAUserDataComponent, SCUserSession, NSString;

@interface SCLensUserDataProvider : NSObject <LSAUserDataComponentListener> {

	LSAUserDataComponent* _userDataComponent;
	SCUserSession* _userSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)userDataComponentDidRequestUserData:(id)arg1 ;
-(id)initWithUserDataComponent:(id)arg1 userSession:(id)arg2 ;
-(id)getUserCountryCode;
-(id)actionListJson;
-(void)dealloc;
-(id)userData;
@end
