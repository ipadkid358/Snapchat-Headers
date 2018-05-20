/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class SCTV3Dimensions;

@interface SCTV3FullscreenDragStage : NSObject {

	CGRect _initialRect;
	double _initialRadius;
	SCTV3Dimensions* _width;
	SCTV3Dimensions* _height;
	SCTV3Dimensions* _x;
	SCTV3Dimensions* _y;
	SCTV3Dimensions* _radius;

}
-(CGPoint)coordinatesForNormalizedProgress:(double)arg1 ;
-(CGSize)sizeForNormalizedProgress:(double)arg1 ;
-(void)setTargetCoordinates:(CGPoint)arg1 ;
-(void)setTargetRadius:(double)arg1 ;
-(id)initWithRect:(CGRect)arg1 radius:(double)arg2 ;
-(double)targetRadius;
-(double)radiusForNormalizedProgress:(double)arg1 ;
-(void)setTargetSize:(CGSize)arg1 ;
-(CGRect)targetRect;
@end
