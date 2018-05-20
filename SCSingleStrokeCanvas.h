/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCStrokeDrawer;
#import <Snapchat/Snapchat-Structs.h>
@class NSMutableArray, UIColor, NSString;

@interface SCSingleStrokeCanvas : NSObject {

	NSMutableArray* _points;
	double _lineWidth;
	UIColor* _lineColor;
	NSString* _emoji;
	id<SCStrokeDrawer> _solidStrokeDrawer;
	id<SCStrokeDrawer> _emojiStrokeDrawer;
	id<SCStrokeDrawer> _currentActivateDrawer;
	long long _drawerType;
	long long _smoothingAlgorithmVersion;

}

@property (nonatomic,readonly) long long drawerType;                           //@synthesize drawerType=_drawerType - In the implementation block
@property (assign,nonatomic) long long smoothingAlgorithmVersion;              //@synthesize smoothingAlgorithmVersion=_smoothingAlgorithmVersion - In the implementation block
-(long long)drawerType;
-(void)setSmoothingAlgorithmVersion:(long long)arg1 ;
-(void)updateWithStroke:(id)arg1 ;
-(void)drawStrokeToContext:(CGContextRef)arg1 drawRect:(CGRect)arg2 ;
-(long long)smoothingAlgorithmVersion;
-(void)_updateDrawingData:(id)arg1 emoji:(id)arg2 lineWidth:(double)arg3 drawerType:(long long)arg4 ;
-(id)init;
@end

