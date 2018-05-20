/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class UIView, NSArray, SCAlertViewConfig, SCAlertViewFlow;

@interface SCBaseAlertView : UIView {

	UIView* _contentView;
	UIView* _separatorView;
	NSArray* _contentItems;
	SCAlertViewConfig* _configuration;
	NSArray* _actions;
	UIView* _accessoryView;
	UIView* _rightAccessoryView;
	double _accessoryViewOverlapRatio;
	SCAlertViewFlow* _alertViewFlow;
	/*^block*/id _dismissHandler;
	UIEdgeInsets _rightAccessoryViewInsets;

}

@property (nonatomic,retain) UIView * contentView;                                //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contentItems;                       //@synthesize contentItems=_contentItems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                            //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actionViews; 
@property (nonatomic,retain) UIView * accessoryView;                              //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,retain) UIView * rightAccessoryView;                         //@synthesize rightAccessoryView=_rightAccessoryView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets rightAccessoryViewInsets;               //@synthesize rightAccessoryViewInsets=_rightAccessoryViewInsets - In the implementation block
@property (assign,nonatomic) double accessoryViewOverlapRatio;                    //@synthesize accessoryViewOverlapRatio=_accessoryViewOverlapRatio - In the implementation block
@property (nonatomic,readonly) SCAlertViewConfig * configuration;                 //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) SCAlertViewFlow * alertViewFlow;              //@synthesize alertViewFlow=_alertViewFlow - In the implementation block
@property (nonatomic,copy,readonly) id dismissHandler;                            //@synthesize dismissHandler=_dismissHandler - In the implementation block
+(id)alertViewWithTitle:(id)arg1 description:(id)arg2 lensIcon:(id)arg3 actions:(id)arg4 configuration:(/*^block*/id)arg5 dismissHandler:(/*^block*/id)arg6 ;
+(id)_shareLocationDialogWithTitle:(id)arg1 hasSeparator:(BOOL)arg2 contentViews:(id)arg3 actions:(id)arg4 openSettingsAction:(/*^block*/id)arg5 ;
+(id)_descriptionForLeavingGhostModeWithAudience:(int)arg1 friendName:(id)arg2 ;
+(id)_onboardingDialogWithActions:(id)arg1 userSession:(id)arg2 sourceType:(long long)arg3 linkDelegate:(id)arg4 openSettingsAction:(/*^block*/id)arg5 ;
+(id)_descriptionForLeavingGhostModeToShareWithGroupWithAudience:(int)arg1 ;
+(id)shareLocationDialogForFriendName:(id)arg1 audienceType:(int)arg2 audiencePreview:(id)arg3 actions:(id)arg4 openSettingsAction:(/*^block*/id)arg5 ;
+(id)exitGhostModeAndShareLocationDialogForFriendName:(id)arg1 audienceType:(int)arg2 audiencePreview:(id)arg3 actions:(id)arg4 openSettingsAction:(/*^block*/id)arg5 ;
+(id)onboardToShareLocationDialogWithFriendName:(id)arg1 actions:(id)arg2 userSession:(id)arg3 sourceType:(long long)arg4 linkDelegate:(id)arg5 openSettingsAction:(/*^block*/id)arg6 ;
+(id)requestLocationConfirmationDialogWithFriendName:(id)arg1 actions:(id)arg2 ;
+(id)shareLocationDialogForGroupName:(id)arg1 audienceType:(int)arg2 audiencePreview:(id)arg3 actions:(id)arg4 openSettingsAction:(/*^block*/id)arg5 ;
+(id)exitGhostModeAndShareLocationDialogForGroupName:(id)arg1 audienceType:(int)arg2 audiencePreview:(id)arg3 actions:(id)arg4 openSettingsAction:(/*^block*/id)arg5 ;
+(id)onboardToShareLocationDialogWithGroupName:(id)arg1 actions:(id)arg2 userSession:(id)arg3 sourceType:(long long)arg4 linkDelegate:(id)arg5 openSettingsAction:(/*^block*/id)arg6 ;
+(id)cannotShareBecauseNotFriendsWithEntireGroupDialogWithGroupName:(id)arg1 actions:(id)arg2 ;
+(unsigned long long)buttonStateWithSubscribeState:(unsigned long long)arg1 ;
-(UIView *)rightAccessoryView;
-(void)setRightAccessoryView:(UIView *)arg1 ;
-(id)initWithContentItems:(id)arg1 actions:(id)arg2 configuration:(/*^block*/id)arg3 dismissHandler:(/*^block*/id)arg4 ;
-(NSArray *)actionViews;
-(void)setAlertViewFlow:(SCAlertViewFlow *)arg1 ;
-(CGSize)getContentItemSize:(CGSize)arg1 contentItemSize:(CGSize)arg2 contentItem:(id)arg3 ;
-(double)getStandardWidth;
-(void)layoutButtons:(id)arg1 contentItems:(id)arg2 contentView:(id)arg3 textButtonPadding:(double)arg4 standardWidth:(double)arg5 ;
-(double)getViewSizeWidth;
-(double)incrementAlertViewSizeHeightForActions:(id)arg1 ;
-(UIEdgeInsets)rightAccessoryViewInsets;
-(void)setRightAccessoryViewInsets:(UIEdgeInsets)arg1 ;
-(double)accessoryViewOverlapRatio;
-(void)setAccessoryViewOverlapRatio:(double)arg1 ;
-(SCAlertViewFlow *)alertViewFlow;
-(NSArray *)contentItems;
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSArray *)actions;
-(BOOL)becomeFirstResponder;
-(SCAlertViewConfig *)configuration;
-(UIView *)accessoryView;
-(void)setAccessoryView:(UIView *)arg1 ;
-(id)dismissHandler;
@end
