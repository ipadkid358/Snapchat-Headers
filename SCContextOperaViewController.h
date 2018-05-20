/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCContextViewController.h>

@protocol SCContextOperaProxy;
@class UIView;

@interface SCContextOperaViewController : SCContextViewController {

	UIView* _presetHeaderView;
	id<SCContextOperaProxy> _proxy;

}

@property (nonatomic,readonly) id<SCContextOperaProxy> proxy;              //@synthesize proxy=_proxy - In the implementation block
-(void)_registerNotificationObservers;
-(void)_deregisterNotificationObservers;
-(id)initWithContextSession:(id)arg1 presetHeader:(id)arg2 style:(unsigned long long)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id<SCContextOperaProxy>)proxy;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)prepareForPresentation;
@end
