/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSwipeTransitionCoordinator.h>
#import <Snapchat/SCSwipeTransitionCoordinatorDataSource.h>
#import <Snapchat/SCGalleryReturnButtonControlDelegate.h>

@class SCGalleryViewController, MainViewController, SCUserSession, NSString;

@interface SCCameraToGallerySwipeTransitionCoordinator : SCSwipeTransitionCoordinator <SCSwipeTransitionCoordinatorDataSource, SCGalleryReturnButtonControlDelegate> {

	BOOL _didInitializeCloudSync;
	SCGalleryViewController* _galleryViewController;
	MainViewController* _mainViewController;
	SCUserSession* _userSession;

}

@property (assign,nonatomic,__weak) MainViewController * mainViewController;               //@synthesize mainViewController=_mainViewController - In the implementation block
@property (assign,nonatomic,__weak) SCUserSession * userSession;                           //@synthesize userSession=_userSession - In the implementation block
@property (assign,nonatomic) BOOL didInitializeCloudSync;                                  //@synthesize didInitializeCloudSync=_didInitializeCloudSync - In the implementation block
@property (nonatomic,retain) SCGalleryViewController * galleryViewController;              //@synthesize galleryViewController=_galleryViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)present:(BOOL)arg1 ;
-(id)presentedViewControllerWithSwipeTransitionCoordinator:(id)arg1 ;
-(id)transitionCoordinator:(id)arg1 presentationControllerForPresentedViewController:(id)arg2 presentingViewController:(id)arg3 ;
-(id)presentingViewControllerWithSwipeTransitionCoordinator:(id)arg1 ;
-(void)scrollToGalleryLagunaWithPairingSessionInfo:(id)arg1 ;
-(void)setPressingCameraButton:(BOOL)arg1 ;
-(void)dismiss:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithMainViewController:(id)arg1 userSession:(id)arg2 ;
-(void)scrollToLaguna;
-(void)scrollToFeatured;
-(void)setGalleryViewController:(SCGalleryViewController *)arg1 ;
-(void)_initCloudSync;
-(void)galleryReturnButtonControlDidUpdate:(id)arg1 ;
-(BOOL)didInitializeCloudSync;
-(void)setDidInitializeCloudSync:(BOOL)arg1 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(id)passthroughViews;
-(MainViewController *)mainViewController;
-(void)setMainViewController:(MainViewController *)arg1 ;
-(SCUserSession *)userSession;
-(void)setUserSession:(SCUserSession *)arg1 ;
-(SCGalleryViewController *)galleryViewController;
@end

