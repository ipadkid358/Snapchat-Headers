/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:30 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <Snapchat/SCFeedIconBaseView.h>

@class UIImageView, SCFriendsFeedIcon, NSCache, SCLazy, UIColor;

@interface SCCheetahFeedSimplifiedSublabelIconView : UIView <SCFeedIconBaseView> {

	UIImageView* _iconImageView;
	SCFriendsFeedIcon* _friendsFeedIcon;
	NSCache* _feedIconCache;
	SCLazy* _storyTimerPie;
	SCLazy* _activityIndicator;
	UIColor* _defaultActivityIndicatorColor;

}
-(BOOL)isStoryTimerVisible;
-(BOOL)isFeedIconVisible;
-(void)updateWithFeedIcon:(id)arg1 ;
-(void)_updateIconImageViewWithImageName:(id)arg1 ;
-(void)_updateStoryTimerWithLatestPostedStoryTimestamp:(id)arg1 ;
-(void)_updateActivityIndicatorWithTintColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentMode:(long long)arg1 ;
-(void)_hideActivityIndicator;
-(id)iconImageView;
@end
