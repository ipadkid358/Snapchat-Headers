/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCUserProperties_DEPRECATED.h>

@class SCUserToolTipStatus;

@interface SCDiscoverUserProperties : SCUserProperties_DEPRECATED {

	BOOL _legacyHasSeenDiscoverNewUserOverlay;
	SCUserToolTipStatus* _toolTipStatus;

}

@property (nonatomic,retain) SCUserToolTipStatus * toolTipStatus;                   //@synthesize toolTipStatus=_toolTipStatus - In the implementation block
@property (assign,nonatomic) BOOL legacyHasSeenDiscoverNewUserOverlay;              //@synthesize legacyHasSeenDiscoverNewUserOverlay=_legacyHasSeenDiscoverNewUserOverlay - In the implementation block
-(SCUserToolTipStatus *)toolTipStatus;
-(BOOL)legacyHasSeenDiscoverNewUserOverlay;
-(void)setSeenOnboardingOverlay;
-(id)initWithUsername:(id)arg1 userToolTipStatus:(id)arg2 legacyHasSeenDiscoverNewUserOverlay:(BOOL)arg3 ;
-(BOOL)hasSeenOnboardingOverlay;
-(BOOL)hasSeenTapToolTipsOverlayEnough;
-(void)setSeenTapToolTipsOverlay;
-(void)setToolTipStatus:(SCUserToolTipStatus *)arg1 ;
-(void)setLegacyHasSeenDiscoverNewUserOverlay:(BOOL)arg1 ;
@end

