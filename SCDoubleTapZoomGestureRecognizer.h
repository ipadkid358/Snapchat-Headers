/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class NSTimer;

@interface SCDoubleTapZoomGestureRecognizer : UIGestureRecognizer {

	CGPoint _startingLocation;
	CGPoint _doubleTapStartingLocation;
	NSTimer* _doubleTapFailureTimer;
	double _zoom;

}

@property (assign,nonatomic) double zoom;              //@synthesize zoom=_zoom - In the implementation block
-(void)_setZoomInternal:(double)arg1 ;
-(void)_onDoubleTapFailure:(id)arg1 ;
-(void)supportPreInitializationTouch:(id)arg1 ;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setState:(long long)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(double)zoom;
-(void)setZoom:(double)arg1 ;
@end
