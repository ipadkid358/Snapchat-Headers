/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:03 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface SCSearchGeoLocation : NSObject <NSCopying, NSCoding> {

	double _latitude;
	double _longitude;
	double _altitude;
	double _radiusInMeters;

}

@property (nonatomic,readonly) double latitude;                    //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                   //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double altitude;                    //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,readonly) double radiusInMeters;              //@synthesize radiusInMeters=_radiusInMeters - In the implementation block
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 altitude:(double)arg3 radiusInMeters:(double)arg4 ;
-(double)radiusInMeters;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)altitude;
-(double)latitude;
-(double)longitude;
@end

