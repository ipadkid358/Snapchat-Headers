/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, SOJUAdTargeting, NSArray, SOJUAdAdPreferences;

@interface SOJUAdRequestBuilder : NSObject {

	NSString* _userAdId;
	NSNumber* _canTrack;
	NSString* _rawUserData;
	SOJUAdTargeting* _targeting;
	NSString* _sessionId;
	NSArray* _unusedAds;
	NSNumber* _debug;
	NSNumber* _replayTime;
	SOJUAdAdPreferences* _adPreferences;

}
+(id)withJUAdRequest:(id)arg1 ;
-(id)setRawUserData:(id)arg1 ;
-(id)setUserAdId:(id)arg1 ;
-(id)setCanTrackValue:(BOOL)arg1 ;
-(id)setDebugValue:(BOOL)arg1 ;
-(id)setReplayTimeValue:(long long)arg1 ;
-(id)setCanTrack:(id)arg1 ;
-(id)setTargeting:(id)arg1 ;
-(id)setUnusedAds:(id)arg1 ;
-(id)setReplayTime:(id)arg1 ;
-(id)setAdPreferences:(id)arg1 ;
-(id)setSessionId:(id)arg1 ;
-(id)build;
-(id)setDebug:(id)arg1 ;
@end

