/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:03 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAUserTrackedEvent.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCAAppApplicationLoginOdlvFailure : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	long long otpType;
	long long actionType;
	NSString* loginFlowSessionId;

}
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(id)getLoginFlowSessionId;
-(void)setLoginFlowSessionId:(id)arg1 ;
-(long long)getOtpType;
-(void)setOtpType:(long long)arg1 ;
-(long long)getActionType;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActionType:(long long)arg1 ;
-(id)asDictionary;
@end

