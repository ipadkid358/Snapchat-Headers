/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:41 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCMapSearchTileSetIdProviding;
#import <Snapchat/Snapchat-Structs.h>
@interface SCMapSearchContext : NSObject {

	id<SCMapSearchTileSetIdProviding> _tileSetIdProvider;
	double _zoomLevel;
	SCD_Struct_SC573 _visibleCoordinateRegion;

}

@property (nonatomic,__weak,readonly) id<SCMapSearchTileSetIdProviding> tileSetIdProvider;              //@synthesize tileSetIdProvider=_tileSetIdProvider - In the implementation block
@property (nonatomic,readonly) SCD_Struct_SC507 visibleCoordinateRegion;                                //@synthesize visibleCoordinateRegion=_visibleCoordinateRegion - In the implementation block
@property (nonatomic,readonly) double zoomLevel;                                                        //@synthesize zoomLevel=_zoomLevel - In the implementation block
-(SCD_Struct_SC507)visibleCoordinateRegion;
-(id<SCMapSearchTileSetIdProviding>)tileSetIdProvider;
-(id)initWithTileSetIdProvider:(id)arg1 visibleCoordinateRegion:(SCD_Struct_SC507)arg2 zoomLevel:(double)arg3 ;
-(double)zoomLevel;
@end

