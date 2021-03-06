/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController, SCSwipeTransitionCoordinator;

@interface _SCNavigationStackItem : NSObject {

	UIViewController* _viewController;
	SCSwipeTransitionCoordinator* _transitionCoordinator;
	unsigned long long _direction;
	unsigned long long _zIndex;

}

@property (nonatomic,readonly) UIViewController * viewController;                                 //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) SCSwipeTransitionCoordinator * transitionCoordinator;              //@synthesize transitionCoordinator=_transitionCoordinator - In the implementation block
@property (nonatomic,readonly) unsigned long long direction;                                      //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) unsigned long long zIndex;                                         //@synthesize zIndex=_zIndex - In the implementation block
+(id)stackItemWithViewController:(id)arg1 transitionCoordinator:(id)arg2 direction:(unsigned long long)arg3 zIndex:(unsigned long long)arg4 ;
-(id)initWithViewController:(id)arg1 transitionCoordinator:(id)arg2 direction:(unsigned long long)arg3 zIndex:(unsigned long long)arg4 ;
-(unsigned long long)direction;
-(UIViewController *)viewController;
-(SCSwipeTransitionCoordinator *)transitionCoordinator;
-(unsigned long long)zIndex;
@end

