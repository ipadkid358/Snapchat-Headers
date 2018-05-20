/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCStatusView.h>

@protocol SCSnapReplayConfig;
@class UILabel, SCSnapReplayAnimationView;

@interface SCSnapStatusView : SCStatusView {

	UILabel* _timerLabel;
	SCSnapReplayAnimationView* _replayAnimationView;
	UILabel* _subLabel;
	id<SCSnapReplayConfig> _viewModel;

}

@property (nonatomic,retain) id<SCSnapReplayConfig> viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
+(id)timerFont;
+(id)subLabelTextColor;
+(id)subLabelFont;
-(void)setSubLabelText:(id)arg1 ;
-(void)showTimerText:(id)arg1 ;
-(void)hideTimerText;
-(void)startSnapReplayAnimationIfNecessary;
-(id)init;
-(void)prepareForReuse;
-(id<SCSnapReplayConfig>)viewModel;
-(void)setViewModel:(id<SCSnapReplayConfig>)arg1 ;
-(id)subLabel;
@end
