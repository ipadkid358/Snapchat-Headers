/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, NSArray;

@interface LSAWeatherData : NSObject {

	NSNumber* _celsius;
	NSNumber* _fahrenheit;
	NSString* _locationName;
	NSArray* _hourlyForecast;

}

@property (nonatomic,readonly) NSNumber * celsius;                         //@synthesize celsius=_celsius - In the implementation block
@property (nonatomic,readonly) NSNumber * fahrenheit;                      //@synthesize fahrenheit=_fahrenheit - In the implementation block
@property (nonatomic,copy,readonly) NSString * locationName;               //@synthesize locationName=_locationName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * hourlyForecast;              //@synthesize hourlyForecast=_hourlyForecast - In the implementation block
-(id)initWithCelsius:(id)arg1 fahrenheit:(id)arg2 locationName:(id)arg3 hourlyForecast:(id)arg4 ;
-(NSNumber *)celsius;
-(NSNumber *)fahrenheit;
-(NSString *)locationName;
-(NSArray *)hourlyForecast;
@end
