/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:14 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class NSMutableArray, AVAsset;

@interface SCBounceVideoState : NSObject {

	long long _bounceMode;
	float _frameRateModifier;
	NSMutableArray* _originalTimestamps;
	float _bounceVideoFrameRate;
	float _bounceDuration;
	BOOL _highOutputFramerate;
	BOOL _removeDuplicateKeyFrames;
	BOOL _removeDuplicateEndFrames;
	BOOL _useCustomBezierCurve;
	double _videoDuration;
	double _bounceOffset;
	AVAsset* _bounceAsset;
	AVAsset* _originalAsset;
	double _outputSpeedFactor;
	/*^block*/id _bounceProcessingBlock;
	CGPoint _customBezierControlPoint1;
	CGPoint _customBezierControlPoint2;

}

@property (nonatomic,copy) id bounceProcessingBlock;                         //@synthesize bounceProcessingBlock=_bounceProcessingBlock - In the implementation block
@property (nonatomic,readonly) double videoDuration;                         //@synthesize videoDuration=_videoDuration - In the implementation block
@property (nonatomic,readonly) double bounceOffset;                          //@synthesize bounceOffset=_bounceOffset - In the implementation block
@property (nonatomic,readonly) AVAsset * bounceAsset;                        //@synthesize bounceAsset=_bounceAsset - In the implementation block
@property (nonatomic,readonly) AVAsset * originalAsset;                      //@synthesize originalAsset=_originalAsset - In the implementation block
@property (assign,nonatomic) BOOL highOutputFramerate;                       //@synthesize highOutputFramerate=_highOutputFramerate - In the implementation block
@property (assign,nonatomic) double outputSpeedFactor;                       //@synthesize outputSpeedFactor=_outputSpeedFactor - In the implementation block
@property (assign,nonatomic) BOOL removeDuplicateKeyFrames;                  //@synthesize removeDuplicateKeyFrames=_removeDuplicateKeyFrames - In the implementation block
@property (assign,nonatomic) BOOL removeDuplicateEndFrames;                  //@synthesize removeDuplicateEndFrames=_removeDuplicateEndFrames - In the implementation block
@property (assign,nonatomic) BOOL useCustomBezierCurve;                      //@synthesize useCustomBezierCurve=_useCustomBezierCurve - In the implementation block
@property (assign,nonatomic) CGPoint customBezierControlPoint1;              //@synthesize customBezierControlPoint1=_customBezierControlPoint1 - In the implementation block
@property (assign,nonatomic) CGPoint customBezierControlPoint2;              //@synthesize customBezierControlPoint2=_customBezierControlPoint2 - In the implementation block
+(id)bounceVideoPerformer;
-(id)bounceProcessingBlock;
-(void)setBounceProcessingBlock:(id)arg1 ;
-(id)_bounceKeyFrames;
-(id)_bounceAssetWithAsset:(id)arg1 keyFrames:(id)arg2 timeOffset:(double)arg3 ;
-(id)_bezierYValuesWithPointA:(CGPoint)arg1 pointB:(CGPoint)arg2 xCount:(int)arg3 ;
-(id)initWithVideoAsset:(id)arg1 bounceMode:(long long)arg2 ;
-(void)removeBounceVideoIfNeeded;
-(void)setHighOutputFramerate:(BOOL)arg1 ;
-(void)generateBounceVideoWithOffset:(double)arg1 completion:(/*^block*/id)arg2 ;
-(SCD_Struct_LS191)timestampOfOriginalVideoForBounceVideoTimestamp:(SCD_Struct_LS191)arg1 ;
-(AVAsset *)bounceAsset;
-(BOOL)highOutputFramerate;
-(double)outputSpeedFactor;
-(void)setOutputSpeedFactor:(double)arg1 ;
-(BOOL)removeDuplicateKeyFrames;
-(void)setRemoveDuplicateKeyFrames:(BOOL)arg1 ;
-(BOOL)removeDuplicateEndFrames;
-(void)setRemoveDuplicateEndFrames:(BOOL)arg1 ;
-(BOOL)useCustomBezierCurve;
-(void)setUseCustomBezierCurve:(BOOL)arg1 ;
-(CGPoint)customBezierControlPoint1;
-(void)setCustomBezierControlPoint1:(CGPoint)arg1 ;
-(CGPoint)customBezierControlPoint2;
-(void)setCustomBezierControlPoint2:(CGPoint)arg1 ;
-(double)bounceOffset;
-(AVAsset *)originalAsset;
-(double)videoDuration;
@end

