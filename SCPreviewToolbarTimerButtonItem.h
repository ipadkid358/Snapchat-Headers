/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCPreviewToolBarButtonItem.h>

@protocol SCPreviewToolbarTimerButton;
@class SCTimePickerItem, UIControl, SCBounceVideoToolView;

@interface SCPreviewToolbarTimerButtonItem : SCPreviewToolBarButtonItem {

	BOOL _toolButtonLoaded;
	SCTimePickerItem* _timeItem;
	long long _timerType;
	UIControl* _toolButton;
	UIControl*<SCPreviewToolbarTimerButton> _timerButton;
	SCBounceVideoToolView* _bounceView;

}

@property (nonatomic,retain) UIControl * toolButton;                                           //@synthesize toolButton=_toolButton - In the implementation block
@property (assign,getter=isToolButtonLoaded,nonatomic) BOOL toolButtonLoaded;                  //@synthesize toolButtonLoaded=_toolButtonLoaded - In the implementation block
@property (nonatomic,retain) UIControl*<SCPreviewToolbarTimerButton> timerButton;              //@synthesize timerButton=_timerButton - In the implementation block
@property (nonatomic,retain) SCBounceVideoToolView * bounceView;                               //@synthesize bounceView=_bounceView - In the implementation block
@property (nonatomic,retain) SCTimePickerItem * timeItem;                                      //@synthesize timeItem=_timeItem - In the implementation block
@property (assign,nonatomic) long long mode; 
@property (assign,nonatomic) long long timerType;                                              //@synthesize timerType=_timerType - In the implementation block
-(BOOL)isToolButtonLoaded;
-(UIControl *)toolButton;
-(void)setToolButtonLoaded:(BOOL)arg1 ;
-(void)setToolButton:(UIControl *)arg1 ;
-(id)initWithTimerType:(long long)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)setTimeItem:(SCTimePickerItem *)arg1 ;
-(SCTimePickerItem *)timeItem;
-(void)setTimerType:(long long)arg1 ;
-(long long)timerType;
-(BOOL)isBounceVisible;
-(void)dismissBounceView;
-(void)presentBounceViewFromView:(id)arg1 withState:(id)arg2 seekHandler:(/*^block*/id)arg3 ;
-(SCBounceVideoToolView *)bounceView;
-(void)setBounceView:(SCBounceVideoToolView *)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(void)setTimerButton:(UIControl*<SCPreviewToolbarTimerButton>)arg1 ;
-(UIControl*<SCPreviewToolbarTimerButton>)timerButton;
@end

