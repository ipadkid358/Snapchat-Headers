/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:05 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCASpectaclesTrackedEvent.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface SCASpectaclesPairingEventBase : SCASpectaclesTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* retryCount;
	NSNumber* durationSec;
	long long pairingType;
	long long pairingSource;
	long long bleState;
	long long btcState;
	NSString* pairingSessionId;

}
-(void)setPairingSessionId:(id)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(long long)getRetryCount;
-(double)getDurationSec;
-(void)setDurationSec:(double)arg1 ;
-(id)getPairingSessionId;
-(long long)getPairingType;
-(long long)getPairingSource;
-(void)setPairingSource:(long long)arg1 ;
-(long long)getBleState;
-(void)setBleState:(long long)arg1 ;
-(long long)getBtcState;
-(void)setBtcState:(long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRetryCount:(long long)arg1 ;
-(void)setPairingType:(long long)arg1 ;
-(id)asDictionary;
@end

