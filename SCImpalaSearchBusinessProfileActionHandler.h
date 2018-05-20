/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchActionHandling.h>

@protocol NavigationDelegate;
@class SCSearchSession, UIViewController, NSString;

@interface SCImpalaSearchBusinessProfileActionHandler : NSObject <SCSearchActionHandling> {

	SCSearchSession* _session;
	id<NavigationDelegate> _navigationDelegate;
	UIViewController* _presentingViewController;

}

@property (assign,nonatomic,__weak) id<NavigationDelegate> navigationDelegate;                //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3 ;
-(void)_playBusinessProfileStoryWithId:(id)arg1 baseView:(id)arg2 ;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(id<NavigationDelegate>)navigationDelegate;
-(id)initWithSession:(id)arg1 ;
-(void)setNavigationDelegate:(id<NavigationDelegate>)arg1 ;
@end

