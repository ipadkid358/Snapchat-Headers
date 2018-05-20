/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UILongPressGestureRecognizer.h>

@interface SCPreviewToolbarLongPressGestureRecognizer : UILongPressGestureRecognizer {

	double _sc_touchDuration;
	double _beginTouchTimestamp;
	double _touchTimestamp;
	CGPoint _sc_velocity;
	CGPoint _sc_translation;
	CGPoint _beginLocation;
	CGPoint _touchLocation;

}

@property (assign,nonatomic) CGPoint beginLocation;                   //@synthesize beginLocation=_beginLocation - In the implementation block
@property (assign,nonatomic) double beginTouchTimestamp;              //@synthesize beginTouchTimestamp=_beginTouchTimestamp - In the implementation block
@property (assign,nonatomic) CGPoint touchLocation;                   //@synthesize touchLocation=_touchLocation - In the implementation block
@property (assign,nonatomic) double touchTimestamp;                   //@synthesize touchTimestamp=_touchTimestamp - In the implementation block
@property (assign,nonatomic) CGPoint sc_translation;                  //@synthesize sc_translation=_sc_translation - In the implementation block
@property (assign,nonatomic) CGPoint sc_velocity;                     //@synthesize sc_velocity=_sc_velocity - In the implementation block
@property (assign,nonatomic) double sc_touchDuration;                 //@synthesize sc_touchDuration=_sc_touchDuration - In the implementation block
-(double)sc_touchDuration;
-(CGPoint)sc_velocity;
-(void)setSc_velocity:(CGPoint)arg1 ;
-(void)setBeginLocation:(CGPoint)arg1 ;
-(CGPoint)beginLocation;
-(void)setTouchLocation:(CGPoint)arg1 ;
-(void)setTouchTimestamp:(double)arg1 ;
-(void)setBeginTouchTimestamp:(double)arg1 ;
-(double)touchTimestamp;
-(double)beginTouchTimestamp;
-(void)setSc_touchDuration:(double)arg1 ;
-(void)setSc_translation:(CGPoint)arg1 ;
-(CGPoint)sc_translation;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)touchLocation;
@end
