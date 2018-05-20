/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class NSString, SCXAnimation;

@interface SCXTapAnimationViewState : NSObject {

	float _totalRadius;
	float _overallOpacity;
	int _pulsesPerInterval;
	NSString* _uuid;
	double _startTime;
	/*^block*/id _scaleInterpolation;
	/*^block*/id _opacityInterpolation;
	SCXAnimation* _overallOpacityAnimation;
	double _pulseInterval;
	double _circleGenInterval;
	double _circleLifetime;
	SCXAnimation* _shrinkAnimation;
	CLLocationCoordinate2D _coord;

}

@property (retain) NSString * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (assign) CLLocationCoordinate2D coord;                        //@synthesize coord=_coord - In the implementation block
@property (assign) double startTime;                                    //@synthesize startTime=_startTime - In the implementation block
@property (assign) float totalRadius;                                   //@synthesize totalRadius=_totalRadius - In the implementation block
@property (copy) id scaleInterpolation;                                 //@synthesize scaleInterpolation=_scaleInterpolation - In the implementation block
@property (copy) id opacityInterpolation;                               //@synthesize opacityInterpolation=_opacityInterpolation - In the implementation block
@property (assign) float overallOpacity;                                //@synthesize overallOpacity=_overallOpacity - In the implementation block
@property (retain) SCXAnimation * overallOpacityAnimation;              //@synthesize overallOpacityAnimation=_overallOpacityAnimation - In the implementation block
@property (assign) double pulseInterval;                                //@synthesize pulseInterval=_pulseInterval - In the implementation block
@property (assign) int pulsesPerInterval;                               //@synthesize pulsesPerInterval=_pulsesPerInterval - In the implementation block
@property (assign) double circleGenInterval;                            //@synthesize circleGenInterval=_circleGenInterval - In the implementation block
@property (assign) double circleLifetime;                               //@synthesize circleLifetime=_circleLifetime - In the implementation block
@property (retain) SCXAnimation * shrinkAnimation;                      //@synthesize shrinkAnimation=_shrinkAnimation - In the implementation block
-(void)endCompletedAnimations;
-(float)overallOpacityAtTime:(double)arg1 ;
-(id)progressAtTime:(double)arg1 ;
-(float)scaleForProgress:(float)arg1 time:(double)arg2 ;
-(float)opacityForProgress:(float)arg1 time:(double)arg2 ;
-(void)setCoord:(CLLocationCoordinate2D)arg1 ;
-(float)totalRadius;
-(void)setTotalRadius:(float)arg1 ;
-(id)scaleInterpolation;
-(void)setScaleInterpolation:(id)arg1 ;
-(id)opacityInterpolation;
-(void)setOpacityInterpolation:(id)arg1 ;
-(float)overallOpacity;
-(void)setOverallOpacity:(float)arg1 ;
-(SCXAnimation *)overallOpacityAnimation;
-(void)setOverallOpacityAnimation:(SCXAnimation *)arg1 ;
-(double)pulseInterval;
-(void)setPulseInterval:(double)arg1 ;
-(int)pulsesPerInterval;
-(void)setPulsesPerInterval:(int)arg1 ;
-(double)circleGenInterval;
-(void)setCircleGenInterval:(double)arg1 ;
-(double)circleLifetime;
-(void)setCircleLifetime:(double)arg1 ;
-(SCXAnimation *)shrinkAnimation;
-(void)setShrinkAnimation:(SCXAnimation *)arg1 ;
-(id)init;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(CLLocationCoordinate2D)coord;
@end
