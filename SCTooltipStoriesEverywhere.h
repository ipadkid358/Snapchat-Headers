/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCCheetahTooltip.h>

@class SCMiniProfileBaseViewController, SCFeatureSettingsManager;

@interface SCTooltipStoriesEverywhere : SCCheetahTooltip {

	SCMiniProfileBaseViewController* _miniProfileViewController;
	SCFeatureSettingsManager* _featureSettingsManager;
	CGRect _miniProfileCellFrame;

}

@property (assign,nonatomic,__weak) SCMiniProfileBaseViewController * miniProfileViewController;              //@synthesize miniProfileViewController=_miniProfileViewController - In the implementation block
@property (assign,nonatomic,__weak) SCFeatureSettingsManager * featureSettingsManager;                        //@synthesize featureSettingsManager=_featureSettingsManager - In the implementation block
@property (assign,nonatomic) CGRect miniProfileCellFrame;                                                     //@synthesize miniProfileCellFrame=_miniProfileCellFrame - In the implementation block
-(SCFeatureSettingsManager *)featureSettingsManager;
-(SCMiniProfileBaseViewController *)miniProfileViewController;
-(void)_updatePosition;
-(void)markCompleted;
-(BOOL)needsToBeCompleted;
-(void)setFeatureSettingsManager:(SCFeatureSettingsManager *)arg1 ;
-(id)initWithMiniProfileViewController:(id)arg1 userSession:(id)arg2 ;
-(void)setMiniProfileCellFrame:(CGRect)arg1 ;
-(void)setMiniProfileViewController:(SCMiniProfileBaseViewController *)arg1 ;
-(CGRect)miniProfileCellFrame;
-(void)refresh;
-(BOOL)shouldShow;
-(void)willShow;
@end
