/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SCXSpriteLocation : NSObject <NSCopying> {

	BOOL _isRelativeToWidth;
	BOOL _isRelativeToHeight;
	CLLocationCoordinate2D _latLng;
	CGPoint _screenPoint;
	CGPoint _offset;
	CGPoint _relativeWidthOffset;
	CGPoint _relativeHeightOffset;

}

@property (nonatomic,readonly) CLLocationCoordinate2D latLng;              //@synthesize latLng=_latLng - In the implementation block
@property (nonatomic,readonly) CGPoint screenPoint;                        //@synthesize screenPoint=_screenPoint - In the implementation block
@property (nonatomic,readonly) CGPoint offset;                             //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) BOOL isRelativeToWidth;                     //@synthesize isRelativeToWidth=_isRelativeToWidth - In the implementation block
@property (nonatomic,readonly) CGPoint relativeWidthOffset;                //@synthesize relativeWidthOffset=_relativeWidthOffset - In the implementation block
@property (nonatomic,readonly) BOOL isRelativeToHeight;                    //@synthesize isRelativeToHeight=_isRelativeToHeight - In the implementation block
@property (nonatomic,readonly) CGPoint relativeHeightOffset;               //@synthesize relativeHeightOffset=_relativeHeightOffset - In the implementation block
-(id)initWithLatLngCoord:(CLLocationCoordinate2D)arg1 screenPointOffset:(CGPoint)arg2 ;
-(CGPoint)screenCoordInMapView:(id)arg1 ;
-(CGPoint)relativeWidthOffset;
-(id)initWithLatLngCoord:(CLLocationCoordinate2D)arg1 ;
-(id)initWithLatLngCoord:(CLLocationCoordinate2D)arg1 relativeWidthOffset:(CGPoint)arg2 ;
-(id)initWithLatLngCoord:(CLLocationCoordinate2D)arg1 relativeHeightOffset:(CGPoint)arg2 ;
-(id)initWithLatLngCoord:(CLLocationCoordinate2D)arg1 relativeWidthOffset:(CGPoint)arg2 relativeHeightOffset:(CGPoint)arg3 ;
-(CGPoint)screenCoordInMapView:(id)arg1 forWidth:(double)arg2 ;
-(CGPoint)screenCoordInMapView:(id)arg1 forHeight:(double)arg2 ;
-(CGPoint)screenCoordInMapView:(id)arg1 forWidth:(double)arg2 height:(double)arg3 ;
-(CGPoint)screenPoint;
-(BOOL)isRelativeToWidth;
-(BOOL)isRelativeToHeight;
-(CGPoint)relativeHeightOffset;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)offset;
-(CLLocationCoordinate2D)latLng;
@end

