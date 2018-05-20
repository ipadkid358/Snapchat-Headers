/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <Snapchat/SCTV3SpeechActivityListener.h>

@class SCTV3SpeechActivityListenerAnnouncer, NSString, CADisplayLink, UIColor;

@interface SCTV3WaveformView : UIView <SCTV3SpeechActivityListener> {

	SCTV3SpeechActivityListenerAnnouncer* _speechActivityAnnouncer;
	NSString* _username;
	CADisplayLink* _displayLink;
	double _elapsedTime;
	double _baseAmplitude[10];
	double _currentAmplitude[10];
	double _targetAmplitude[10];
	double _lastTargetAmplitude;
	double _targetUpdatedTime;
	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;                       //@synthesize color=_color - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onSpeechActivity:(id)arg1 ;
-(void)_cleanUpDisplayLink;
-(double)randomizeTargetAmplitude;
-(double)_randomFloatFrom:(double)arg1 to:(double)arg2 ;
-(void)updateTargetAmplitude:(double)arg1 ;
-(void)_randomizeWaveformAmplitude:(double*)arg1 maxFactor:(double)arg2 ;
-(double)_randomFloat;
-(id)initWithUsername:(id)arg1 color:(id)arg2 speechActivityAnnouncer:(id)arg3 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)removeFromSuperview;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)didMoveToSuperview;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)animating;
-(void)_stopAnimating;
-(void)_startAnimating;
-(void)_displayDidRefresh:(id)arg1 ;
@end

