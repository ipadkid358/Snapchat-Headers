/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:25 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCLowpassFilter : NSObject {

	double _filterConstant;
	double _x;
	double _y;
	double _z;

}

@property (x,nonatomic,readonly) double x;              //@synthesize x=_x - In the implementation block
@property (y,nonatomic,readonly) double y;              //@synthesize y=_y - In the implementation block
@property (z,nonatomic,readonly) double z;              //@synthesize z=_z - In the implementation block
-(id)initWithSampleRate:(double)arg1 cutoffFrequency:(double)arg2 ;
-(void)addAcceleration:(id)arg1 ;
-(double)x;
-(double)y;
-(double)z;
@end

