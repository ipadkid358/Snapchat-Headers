/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class SCQueuePerformer, NSDictionary;

@interface SCBatterySummaryLogger : NSObject {

	double _gpsOffStartTime;
	double _totalGpsOffTime;
	SCQueuePerformer* _performer;
	NSDictionary* _batteryStats;
	double _lastEnergyUsedUpdateTime;
	double _energyUsed;
	BOOL _foregrounded;
	BOOL _gpsOn;
	void* _handle;
	unsigned* _defaultPort;
	/*function pointer*/void* regEntrMakeProps;
	/*function pointer*/void* servGetMatchServ;
	/*function pointer*/void* servMatch;
	CFDictionaryRef _powerSourceService;
	unsigned _platformExpertDevice;
	BOOL _foundSymbols;

}
+(id)shared;
-(void)_poll;
-(id)_batteryStats;
-(void)_gpsDidStart;
-(void)_gpsDidStop;
-(void)gpsDidStart;
-(void)gpsDidStop;
-(id)init;
-(void)dealloc;
-(void)willEnterForeground;
-(void)didEnterBackground;
@end

