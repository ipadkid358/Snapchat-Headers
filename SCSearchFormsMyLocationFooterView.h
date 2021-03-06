/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UITableViewHeaderFooterView.h>

@class MKMapView;

@interface SCSearchFormsMyLocationFooterView : UITableViewHeaderFooterView {

	MKMapView* _mapView;
	CLLocationCoordinate2D _lastLocationCoordinate;

}
-(void)_updateMapRegionToCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)_updateMapViewCurrentLocationAnnotation:(CLLocationCoordinate2D)arg1 ;
-(void)updateLastLocationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

