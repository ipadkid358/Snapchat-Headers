/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIImageView.h>

@class FLAnimatedImage, UIImage, CADisplayLink;

@interface FLAnimatedImageView : UIImageView {

	BOOL _shouldAnimate;
	BOOL _needsDisplayWhenImageBecomesAvailable;
	FLAnimatedImage* _animatedImage;
	UIImage* _currentFrame;
	unsigned long long _currentFrameIndex;
	unsigned long long _loopCountdown;
	double _accumulator;
	CADisplayLink* _displayLink;

}

@property (nonatomic,retain) UIImage * currentFrame;                                  //@synthesize currentFrame=_currentFrame - In the implementation block
@property (assign,nonatomic) unsigned long long currentFrameIndex;                    //@synthesize currentFrameIndex=_currentFrameIndex - In the implementation block
@property (assign,nonatomic) unsigned long long loopCountdown;                        //@synthesize loopCountdown=_loopCountdown - In the implementation block
@property (assign,nonatomic) double accumulator;                                      //@synthesize accumulator=_accumulator - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                             //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimate;                                      //@synthesize shouldAnimate=_shouldAnimate - In the implementation block
@property (assign,nonatomic) BOOL needsDisplayWhenImageBecomesAvailable;              //@synthesize needsDisplayWhenImageBecomesAvailable=_needsDisplayWhenImageBecomesAvailable - In the implementation block
@property (nonatomic,retain) FLAnimatedImage * animatedImage;                         //@synthesize animatedImage=_animatedImage - In the implementation block
-(void)setCurrentFrame:(UIImage *)arg1 ;
-(void)setLoopCountdown:(unsigned long long)arg1 ;
-(void)updateShouldAnimate;
-(BOOL)needsDisplayWhenImageBecomesAvailable;
-(void)setNeedsDisplayWhenImageBecomesAvailable:(BOOL)arg1 ;
-(unsigned long long)loopCountdown;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setAlpha:(double)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(BOOL)shouldAnimate;
-(id)image;
-(void)displayLayer:(id)arg1 ;
-(void)didMoveToSuperview;
-(CGSize)intrinsicContentSize;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(UIImage *)currentFrame;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(double)accumulator;
-(void)setAccumulator:(double)arg1 ;
-(void)displayDidRefresh:(id)arg1 ;
-(void)setShouldAnimate:(BOOL)arg1 ;
-(void)setCurrentFrameIndex:(unsigned long long)arg1 ;
-(unsigned long long)currentFrameIndex;
-(void)setAnimatedImage:(FLAnimatedImage *)arg1 ;
-(FLAnimatedImage *)animatedImage;
@end
