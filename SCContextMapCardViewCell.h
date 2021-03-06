/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCContextCardViewCell.h>

@class SCUserSession, SCEmbeddedMapView, SCMapPinDescriptor;

@interface SCContextMapCardViewCell : SCContextCardViewCell {

	SCUserSession* _userSession;
	SCEmbeddedMapView* _embeddedMapView;
	CLLocationCoordinate2D _centerCoordinate;
	double _zoomLevel;
	SCMapPinDescriptor* _pinDescriptor;

}

@property (nonatomic,retain) SCMapPinDescriptor * pinDescriptor;              //@synthesize pinDescriptor=_pinDescriptor - In the implementation block
-(void)setPinDescriptor:(SCMapPinDescriptor *)arg1 ;
-(SCMapPinDescriptor *)pinDescriptor;
-(void)setUserSession:(id)arg1 centerCoordinate:(CLLocationCoordinate2D)arg2 zoomLevel:(double)arg3 showAttribution:(BOOL)arg4 ;
-(void)_moveCameraToCenterCoordinate;
-(void)_showPinIfNeeded;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

