/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:39 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@interface JPMBoundingCoordinates : NSObject {

	double latitudeRad;
	double longitudeRad;

}
+(MGLCoordinateBounds)boundsFromCoordinate:(CLLocationCoordinate2D)arg1 distance:(double)arg2 ;
+(id)fromCoordinate:(CLLocationCoordinate2D)arg1 ;
-(MGLCoordinateBounds)boundsWithDistance:(double)arg1 ;
-(id)initWithCenterCoordinate:(CLLocationCoordinate2D)arg1 ;
-(MGLCoordinateBounds)boundsWithDistance:(double)arg1 radius:(double)arg2 ;
@end

