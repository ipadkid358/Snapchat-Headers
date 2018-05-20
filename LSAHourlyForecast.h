/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString;

@interface LSAHourlyForecast : NSObject {

	NSNumber* _celsius;
	NSNumber* _fahrenheit;
	NSString* _weatherCondition;
	NSString* _displayTime;

}

@property (nonatomic,readonly) NSNumber * celsius;                            //@synthesize celsius=_celsius - In the implementation block
@property (nonatomic,readonly) NSNumber * fahrenheit;                         //@synthesize fahrenheit=_fahrenheit - In the implementation block
@property (nonatomic,copy,readonly) NSString * weatherCondition;              //@synthesize weatherCondition=_weatherCondition - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayTime;                   //@synthesize displayTime=_displayTime - In the implementation block
-(id)initWithCelsius:(id)arg1 fahrenheit:(id)arg2 weatherCondition:(id)arg3 displayTime:(id)arg4 ;
-(NSString *)weatherCondition;
-(NSNumber *)celsius;
-(NSNumber *)fahrenheit;
-(NSString *)displayTime;
@end

