/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIWindow.h>
#import <Snapchat/FBTweakViewControllerDelegate.h>

@class NSString;

@interface FBTweakShakeWindow : UIWindow <FBTweakViewControllerDelegate> {

	BOOL _shaking;
	BOOL _active;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_applicationWillResignActiveWithNotification:(id)arg1 ;
-(void)_applicationDidBecomeActiveWithNotification:(id)arg1 ;
-(BOOL)_shouldPresentTweaks;
-(void)_presentTweaks;
-(void)tweakViewControllerPressedDone:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)motionBegan:(long long)arg1 withEvent:(id)arg2 ;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
@end

