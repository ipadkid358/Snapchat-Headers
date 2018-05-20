/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/MGLShape.h>
#import <Snapchat/MGLOverlay.h>

@class NSArray, NSString;

@interface MGLMultiPolygon : MGLShape <MGLOverlay> {

	MGLCoordinateBounds _overlayBounds;
	NSArray* _polygons;

}

@property (nonatomic,copy) NSArray * polygons;                                 //@synthesize polygons=_polygons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) MGLCoordinateBounds overlayBounds;              //@synthesize overlayBounds=_overlayBounds - In the implementation block
+(id)multiPolygonWithPolygons:(id)arg1 ;
-(id)geoJSONDictionary;
-(geometry<double>)geometryObject;
-(MGLCoordinateBounds)overlayBounds;
-(BOOL)intersectsOverlayBounds:(MGLCoordinateBounds)arg1 ;
-(id)initWithPolygons:(id)arg1 ;
-(multi_polygon<double, std::vector>*)multiPolygon;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSArray *)polygons;
-(void)setPolygons:(NSArray *)arg1 ;
-(CLLocationCoordinate2D)coordinate;
@end

