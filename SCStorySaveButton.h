/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView, SCSunburstView, CAShapeLayer, NSTimer, UIColor;

@interface SCStorySaveButton : UIButton {

	UIImageView* _saveImageView;
	UIImageView* _cancelView;
	UIImageView* _successView;
	SCSunburstView* _sunburstView;
	CAShapeLayer* _progressLayer;
	double _progress;
	BOOL _animationStarted;
	BOOL _animationCompleted;
	NSTimer* _loadingTimerForSunburstView;
	UIColor* _tintColor;

}
-(id)initWithFrame:(CGRect)arg1 saveImage:(id)arg2 tintColor:(id)arg3 ;
-(void)_saveAnimationStartedSettings;
-(id)cancelView;
-(void)updateProgressBarAnimations:(double)arg1 ;
-(id)successView;
-(void)_loadingTimerForSunburstViewDidFire;
-(void)_saveAnimationFinishedSettings;
-(void)showStartSavingAnimation;
-(void)showSavingSuccessAnimation;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isComplete;
-(void)resetProgress;
-(BOOL)hasProgress;
@end

