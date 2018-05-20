/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCFPSCounter : NSObject {

	double _startFrameTime;
	double _lastFrameTime;
	double _factor;
	double _frameTime;

}

@property (nonatomic,readonly) double frameTime;              //@synthesize frameTime=_frameTime - In the implementation block
@property (nonatomic,readonly) double frameRate; 
-(void)onFrame;
-(id)init;
-(void)reset;
-(id)initWithFactor:(double)arg1 ;
-(double)frameTime;
-(double)frameRate;
@end

