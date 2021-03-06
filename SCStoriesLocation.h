/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:02 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SCStoriesLocation : NSObject <NSCopying> {

	double _longitude;
	double _latitude;
	double _altitude;
	double _horizontalAccuracy;
	double _verticalAccuracy;
	double _course;
	double _speed;
	double _timestamp;

}

@property (nonatomic,readonly) double longitude;                       //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double latitude;                        //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double altitude;                        //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,readonly) double horizontalAccuracy;              //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
@property (nonatomic,readonly) double verticalAccuracy;                //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (nonatomic,readonly) double course;                          //@synthesize course=_course - In the implementation block
@property (nonatomic,readonly) double speed;                           //@synthesize speed=_speed - In the implementation block
@property (nonatomic,readonly) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
-(id)initWithLongitude:(double)arg1 latitude:(double)arg2 altitude:(double)arg3 horizontalAccuracy:(double)arg4 verticalAccuracy:(double)arg5 course:(double)arg6 speed:(double)arg7 timestamp:(double)arg8 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)speed;
-(double)altitude;
-(double)course;
-(double)verticalAccuracy;
-(double)horizontalAccuracy;
-(double)latitude;
-(double)longitude;
@end

