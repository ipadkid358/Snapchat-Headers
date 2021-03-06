/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchSectionCreating.h>

@protocol NavigationDelegate, SCSearchCameraDismissing;
@class SCSearchSession, SCSearchNavigationCoordinator, UIViewController, NSString;

@interface SCSearchUniversalSearchSectionCreator : NSObject <SCSearchSectionCreating> {

	SCSearchSession* _searchSession;
	SCSearchNavigationCoordinator* _searchNavigationCoordinator;
	id<NavigationDelegate> _navigationDelegate;
	id<SCSearchCameraDismissing> _cameraDelegate;
	UIViewController* _presentingViewController;

}

@property (assign,nonatomic,__weak) SCSearchNavigationCoordinator * searchNavigationCoordinator;              //@synthesize searchNavigationCoordinator=_searchNavigationCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<NavigationDelegate> navigationDelegate;                                //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCSearchCameraDismissing> cameraDelegate;                              //@synthesize cameraDelegate=_cameraDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCSearchNavigationCoordinator *)searchNavigationCoordinator;
-(id)sectionForDescriptor:(id)arg1 ;
-(void)setSearchNavigationCoordinator:(SCSearchNavigationCoordinator *)arg1 ;
-(id)initWithSearchSession:(id)arg1 ;
-(void)setCameraDelegate:(id<SCSearchCameraDismissing>)arg1 ;
-(id<SCSearchCameraDismissing>)cameraDelegate;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(id<NavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<NavigationDelegate>)arg1 ;
@end

