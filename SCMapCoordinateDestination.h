/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:41 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCMapDestination.h>

@class NSString, SCMapPinDescriptor;

@interface SCMapCoordinateDestination : NSObject <SCMapDestination> {

	double _zoomLevel;
	NSString* _displayText;
	SCMapPinDescriptor* _pinDescriptor;
	CLLocationCoordinate2D _center;

}

@property (assign,nonatomic) CLLocationCoordinate2D center;                 //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) double zoomLevel;                              //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,copy) NSString * displayText;                          //@synthesize displayText=_displayText - In the implementation block
@property (nonatomic,copy) SCMapPinDescriptor * pinDescriptor;              //@synthesize pinDescriptor=_pinDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPinDescriptor:(SCMapPinDescriptor *)arg1 ;
-(SCMapPinDescriptor *)pinDescriptor;
-(id)init;
-(CLLocationCoordinate2D)center;
-(void)setCenter:(CLLocationCoordinate2D)arg1 ;
-(NSString *)displayText;
-(void)setDisplayText:(NSString *)arg1 ;
-(void)setZoomLevel:(double)arg1 ;
-(double)zoomLevel;
-(void)acceptVisitor:(id)arg1 ;
@end

