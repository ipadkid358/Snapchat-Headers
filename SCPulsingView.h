/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@interface SCPulsingView : UIView {

	BOOL _wantsAnimating;
	double _startingAlpha;
	double _alternatingAlpha;
	double _pulseDuration;
	CGAffineTransform _startingTransform;
	CGAffineTransform _alternatingTransform;

}

@property (assign,nonatomic) double startingAlpha;                                //@synthesize startingAlpha=_startingAlpha - In the implementation block
@property (assign,nonatomic) double alternatingAlpha;                             //@synthesize alternatingAlpha=_alternatingAlpha - In the implementation block
@property (assign,nonatomic) CGAffineTransform startingTransform;                 //@synthesize startingTransform=_startingTransform - In the implementation block
@property (assign,nonatomic) CGAffineTransform alternatingTransform;              //@synthesize alternatingTransform=_alternatingTransform - In the implementation block
@property (assign,nonatomic) double pulseDuration;                                //@synthesize pulseDuration=_pulseDuration - In the implementation block
-(void)setStartingAlpha:(double)arg1 ;
-(void)setStartingTransform:(CGAffineTransform)arg1 ;
-(void)setAlternatingTransform:(CGAffineTransform)arg1 ;
-(void)stopAnimatingImmediately;
-(void)stopAnimatingWithComplete:(/*^block*/id)arg1 ;
-(void)_performAnimationTickIfNecessary;
-(double)startingAlpha;
-(CGAffineTransform)startingTransform;
-(double)alternatingAlpha;
-(CGAffineTransform)alternatingTransform;
-(void)setAlternatingAlpha:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setHidden:(BOOL)arg1 ;
-(void)didMoveToSuperview;
-(BOOL)isAnimating;
-(void)startAnimating;
-(void)setPulseDuration:(double)arg1 ;
-(double)pulseDuration;
@end

