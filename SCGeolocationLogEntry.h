/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CLLocation;

@interface SCGeolocationLogEntry : NSObject {

	NSString* _geocell;
	CLLocation* _location;
	unsigned long long _duration;

}

@property (nonatomic,readonly) NSString * geocell;                     //@synthesize geocell=_geocell - In the implementation block
@property (nonatomic,readonly) CLLocation * location;                  //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) unsigned long long duration;              //@synthesize duration=_duration - In the implementation block
+(id)fromLocation:(id)arg1 ;
-(NSString *)geocell;
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(CLLocation *)location;
-(id)initWithLocation:(id)arg1 ;
-(id)logString;
@end

