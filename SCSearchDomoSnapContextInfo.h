/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:03 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCSearchGeoLocation, SCSearchGeoPolygon, NSString;

@interface SCSearchDomoSnapContextInfo : NSObject <NSCopying> {

	SCSearchGeoLocation* _location;
	SCSearchGeoPolygon* _placePolygon;
	NSString* _placeType;
	NSString* _taskTitle;

}

@property (nonatomic,copy,readonly) SCSearchGeoLocation * location;                 //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) SCSearchGeoPolygon * placePolygon;              //@synthesize placePolygon=_placePolygon - In the implementation block
@property (nonatomic,copy,readonly) NSString * placeType;                           //@synthesize placeType=_placeType - In the implementation block
@property (nonatomic,copy,readonly) NSString * taskTitle;                           //@synthesize taskTitle=_taskTitle - In the implementation block
-(id)initWithLocation:(id)arg1 placePolygon:(id)arg2 placeType:(id)arg3 taskTitle:(id)arg4 ;
-(SCSearchGeoPolygon *)placePolygon;
-(NSString *)taskTitle;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCSearchGeoLocation *)location;
-(NSString *)placeType;
@end
