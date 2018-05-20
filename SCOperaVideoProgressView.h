/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class SCOperaProgressBarView, UILabel, SCGradientView, NSString;

@interface SCOperaVideoProgressView : UIView {

	SCOperaProgressBarView* _progressBarView;
	UILabel* _progressLabel;
	SCGradientView* _progressBarGradientView;
	long long _timeLeft;
	NSString* _progressText;
	BOOL _progressLabelEnabled;

}
-(double)_progressBarHeight;
-(void)_setProgressBarHeight:(double)arg1 ;
-(void)showDefaultProgressView;
-(void)setProgressLabelWithText:(id)arg1 ;
-(void)updateProgressLabelWithTimeLeft:(double)arg1 ;
-(BOOL)toggleProgressView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 ;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end
