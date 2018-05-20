/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:46 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@interface BCOVVideo360ViewProjection : NSObject {

	double _pan;
	double _tilt;
	double _zoom;
	double _roll;
	double _xOffset;
	double _yOffset;
	long long _sourceFormat;
	long long _projectionStyle;

}

@property (assign,nonatomic) double pan;                             //@synthesize pan=_pan - In the implementation block
@property (assign,nonatomic) double tilt;                            //@synthesize tilt=_tilt - In the implementation block
@property (assign,nonatomic) double zoom;                            //@synthesize zoom=_zoom - In the implementation block
@property (assign,nonatomic) double roll;                            //@synthesize roll=_roll - In the implementation block
@property (assign,nonatomic) double xOffset;                         //@synthesize xOffset=_xOffset - In the implementation block
@property (assign,nonatomic) double yOffset;                         //@synthesize yOffset=_yOffset - In the implementation block
@property (assign,nonatomic) long long sourceFormat;                 //@synthesize sourceFormat=_sourceFormat - In the implementation block
@property (assign,nonatomic) long long projectionStyle;              //@synthesize projectionStyle=_projectionStyle - In the implementation block
+(id)viewProjection;
-(void)setXOffset:(double)arg1 ;
-(void)setSourceFormat:(long long)arg1 ;
-(long long)projectionStyle;
-(void)setProjectionStyle:(long long)arg1 ;
-(double)xOffset;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)zoom;
-(void)setZoom:(double)arg1 ;
-(double)yOffset;
-(void)setYOffset:(double)arg1 ;
-(void)setPan:(double)arg1 ;
-(double)pan;
-(double)tilt;
-(double)roll;
-(void)setTilt:(double)arg1 ;
-(long long)sourceFormat;
-(void)setRoll:(double)arg1 ;
@end

