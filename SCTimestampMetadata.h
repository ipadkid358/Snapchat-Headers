/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSLocale, NSTimeZone;

@interface SCTimestampMetadata : NSObject {

	BOOL _hasAmPmModifier;
	BOOL _isAm;
	long long _hour;
	long long _minute;
	long long _hourToDisplay;
	long long _day;
	long long _month;
	long long _year;
	NSDate* _date;
	NSLocale* _locale;
	NSTimeZone* _timeZone;
	long long _type;

}

@property (nonatomic,readonly) BOOL hasAmPmModifier;                 //@synthesize hasAmPmModifier=_hasAmPmModifier - In the implementation block
@property (nonatomic,readonly) BOOL isAm;                            //@synthesize isAm=_isAm - In the implementation block
@property (nonatomic,readonly) long long hourToDisplay;              //@synthesize hourToDisplay=_hourToDisplay - In the implementation block
@property (nonatomic,readonly) long long hour;                       //@synthesize hour=_hour - In the implementation block
@property (nonatomic,readonly) long long minute;                     //@synthesize minute=_minute - In the implementation block
@property (nonatomic,readonly) long long day;                        //@synthesize day=_day - In the implementation block
@property (nonatomic,readonly) long long month;                      //@synthesize month=_month - In the implementation block
@property (nonatomic,readonly) long long year;                       //@synthesize year=_year - In the implementation block
@property (nonatomic,readonly) NSDate * date;                        //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                    //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone;                //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) long long type;                         //@synthesize type=_type - In the implementation block
-(id)initWithDate:(id)arg1 locale:(id)arg2 timeZone:(id)arg3 ;
-(BOOL)hasAmPmModifier;
-(long long)hourToDisplay;
-(BOOL)isAm;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSDate *)date;
-(long long)hour;
-(NSTimeZone *)timeZone;
-(NSLocale *)locale;
-(long long)minute;
-(long long)year;
-(long long)month;
-(long long)day;
@end
