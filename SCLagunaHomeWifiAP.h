/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SCLagunaHomeWifiAP : NSObject {

	unsigned long long _state;
	NSString* _ssid;

}

@property (nonatomic,readonly) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) NSString * ssid;                  //@synthesize ssid=_ssid - In the implementation block
+(id)homeWifiAPStateToString:(unsigned long long)arg1 ;
-(id)initWithState:(unsigned long long)arg1 ssid:(id)arg2 ;
-(id)description;
-(unsigned long long)state;
-(NSString *)ssid;
@end

