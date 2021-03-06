/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:26 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <Snapchat/SCOperaLayerView.h>

@protocol SCSnapReplayOperaLayerViewDelegate;
@class UIVisualEffectView, UILabel, UIButton, NSDictionary, NSString;

@interface SCSnapReplayOperaLayerView : UIView <SCOperaLayerView> {

	UIVisualEffectView* _blurView;
	UILabel* _hourGlassLabel;
	UILabel* _snapExpiredLabel;
	UILabel* _tapReplayLabel;
	UIButton* _replayButton;
	NSDictionary* _tapReplayLabelTextAttributes;
	BOOL _isReplayable;
	id<SCSnapReplayOperaLayerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCSnapReplayOperaLayerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isReplayable;                                                   //@synthesize isReplayable=_isReplayable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layerViewWithFrame:(CGRect)arg1 ;
-(id)_createBlurView;
-(id)_createHourGlassLabel;
-(id)_createSnapExpiredLabel;
-(id)_createTapReplayLabel;
-(id)_createReplayButton;
-(void)_replayButtonTapped:(id)arg1 ;
-(void)setIsReplayable:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCSnapReplayOperaLayerViewDelegate>)arg1 ;
-(id<SCSnapReplayOperaLayerViewDelegate>)delegate;
-(BOOL)isReplayable;
@end

