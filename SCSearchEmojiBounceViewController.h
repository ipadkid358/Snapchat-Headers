/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollisionBehaviorDelegate.h>
#import <UIKit/UIDynamicAnimatorDelegate.h>
#import <Snapchat/SCSearchContentViewControlling.h>

@class NSString, UIDynamicAnimator, UIGravityBehavior, UICollisionBehavior, NSArray, SCSearchContentViewControllerContext;

@interface SCSearchEmojiBounceViewController : UIViewController <UICollisionBehaviorDelegate, UIDynamicAnimatorDelegate, SCSearchContentViewControlling> {

	BOOL _isFirstLayout;
	unsigned long long _score;
	NSString* _emoji;
	UIDynamicAnimator* _animator;
	UIGravityBehavior* _gravity;
	UICollisionBehavior* _collision;
	NSArray* _emojiLabels;
	SCSearchContentViewControllerContext* _searchContentViewControllerContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SCSearchContentViewControllerContext * searchContentViewControllerContext;              //@synthesize searchContentViewControllerContext=_searchContentViewControllerContext - In the implementation block
-(SCSearchContentViewControllerContext *)searchContentViewControllerContext;
-(void)setSearchContentViewControllerContext:(SCSearchContentViewControllerContext *)arg1 ;
-(void)_didTap:(id)arg1 ;
-(void)_removeBehavior:(id)arg1 ;
-(id)initWithEmoji:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withItem:(id)arg3 atPoint:(CGPoint)arg4 ;
@end
