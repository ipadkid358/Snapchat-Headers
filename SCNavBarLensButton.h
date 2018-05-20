/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:25 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCGrowingButton.h>

@class SCLens, UIView;

@interface SCNavBarLensButton : SCGrowingButton {

	BOOL _hasLoggedShownEvent;
	BOOL _badged;
	BOOL _active;
	SCLens* _flaggedLens;
	UIView* _badgeView;

}

@property (nonatomic,retain) UIView * badgeView;                       //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) SCLens * flaggedLens;                     //@synthesize flaggedLens=_flaggedLens - In the implementation block
@property (assign,nonatomic) BOOL badged;                              //@synthesize badged=_badged - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
-(void)setBadged:(BOOL)arg1 ;
-(void)_updateImageViewInsets;
-(void)setFlaggedLens:(SCLens *)arg1 ;
-(SCLens *)flaggedLens;
-(BOOL)badged;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isActive;
-(UIView *)badgeView;
-(void)setActive:(BOOL)arg1 ;
-(void)setBadgeView:(UIView *)arg1 ;
@end
