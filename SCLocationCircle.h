/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:39 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLLocation, SCS2Polygon, NSArray, SCS2CellUnion;

@interface SCLocationCircle : NSObject {

	CLLocation* _location;
	SCS2Polygon* _polygon;
	NSArray* _s2Cover;
	SCS2CellUnion* _s2CoverUnion;

}

@property (nonatomic,retain) CLLocation * location;                     //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) SCS2Polygon * polygon;                     //@synthesize polygon=_polygon - In the implementation block
@property (nonatomic,copy) NSArray * s2Cover;                           //@synthesize s2Cover=_s2Cover - In the implementation block
@property (nonatomic,retain) SCS2CellUnion * s2CoverUnion;              //@synthesize s2CoverUnion=_s2CoverUnion - In the implementation block
+(id)approximateCircleWithPolygonForRadius:(double)arg1 latitude:(double)arg2 longitude:(double)arg3 ;
-(NSArray *)s2Cover;
-(SCS2CellUnion *)s2CoverUnion;
-(BOOL)containsLocationCircle:(id)arg1 ;
-(void)setS2Cover:(NSArray *)arg1 ;
-(void)setS2CoverUnion:(SCS2CellUnion *)arg1 ;
-(void)setPolygon:(SCS2Polygon *)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)initWithLocation:(id)arg1 ;
-(SCS2Polygon *)polygon;
@end
