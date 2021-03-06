/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/MGLAnnotationView.h>

@class MGLCoordinateFormatter, MGLMapView, MGLUserLocation, CALayer;

@interface MGLUserLocationAnnotationView : MGLAnnotationView {

	MGLCoordinateFormatter* _accessibilityCoordinateFormatter;
	MGLMapView* _mapView;
	MGLUserLocation* _userLocation;
	CALayer* _hitTestLayer;

}

@property (assign,nonatomic,__weak) MGLMapView * mapView;                        //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic,__weak) MGLUserLocation * userLocation;              //@synthesize userLocation=_userLocation - In the implementation block
@property (assign,nonatomic,__weak) CALayer * hitTestLayer;                      //@synthesize hitTestLayer=_hitTestLayer - In the implementation block
-(void)setHitTestLayer:(CALayer *)arg1 ;
-(CALayer *)hitTestLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)update;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(BOOL)isAccessibilityElement;
-(id)accessibilityPath;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(void)setUserLocation:(MGLUserLocation *)arg1 ;
-(void)setMapView:(MGLMapView *)arg1 ;
-(MGLUserLocation *)userLocation;
-(MGLMapView *)mapView;
@end

