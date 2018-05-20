/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSwipeTransitionCoordinatorDelegate.h>
#import <Snapchat/SCSwipeTransitionCoordinatorDataSource.h>
#import <Snapchat/SCStoryManagementViewControllerDelegate.h>

@protocol SCOperaViewProvider, SCStoryManagementMediaProvider, SCSearchActionHandling, SCStoryManagementViewCoordinatorDelegate;
@class SCStoryManagementDataSource, SCSwipeTransitionCoordinator, SCStoryManagementViewController, UINavigationController, UIViewController, SCOperaEventListenerAnnouncer, NSString;

@interface SCStoryManagementViewCoordinator : NSObject <SCSwipeTransitionCoordinatorDelegate, SCSwipeTransitionCoordinatorDataSource, SCStoryManagementViewControllerDelegate> {

	SCStoryManagementDataSource* _dataSource;
	id<SCOperaViewProvider> _viewerAvatarProvider;
	SCSwipeTransitionCoordinator* _storyManagementViewTransitionCoordinator;
	SCStoryManagementViewController* _storyManagementViewController;
	UINavigationController* _storyManagementNavigationController;
	UIViewController* _presentingViewController;
	SCOperaEventListenerAnnouncer* _eventAnnouncer;
	id<SCStoryManagementMediaProvider> _storyMediaProvider;
	id<SCSearchActionHandling> _actionHandler;
	id<SCStoryManagementViewCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCStoryManagementViewCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)presentedViewControllerWithSwipeTransitionCoordinator:(id)arg1 ;
-(void)transitionCoordinator:(id)arg1 willFailWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3 ;
-(BOOL)transitionCoordinator:(id)arg1 shouldBeginTransitionType:(unsigned long long)arg2 viewController:(id)arg3 ;
-(void)transitionCoordinator:(id)arg1 willBeginWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3 ;
-(void)transitionCoordinator:(id)arg1 didFinishWithTransitionType:(unsigned long long)arg2 success:(BOOL)arg3 viewController:(id)arg4 ;
-(void)transitionCoordinator:(id)arg1 didBeginWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3 ;
-(id)transitionCoordinator:(id)arg1 presentationControllerForPresentedViewController:(id)arg2 presentingViewController:(id)arg3 ;
-(id)presentingViewControllerWithSwipeTransitionCoordinator:(id)arg1 ;
-(void)wireInteractivePresentationToView:(id)arg1 eventAnnouncer:(id)arg2 ;
-(void)setCurrentDataModel:(id)arg1 ;
-(void)presentStoryManagementView;
-(void)dismissStoryManagementViewController:(id)arg1 ;
-(void)scrollToSnapDataModel:(id)arg1 ;
-(void)_setUpStoryManagementViewControllerIfNotInitialized;
-(void)dismissStoryManagementView;
-(id)initWithDataSource:(id)arg1 viewerAvatarProvider:(id)arg2 storyMediaProvider:(id)arg3 actionHandler:(id)arg4 ;
-(id)viewControllerForPresentation;
-(void)setDelegate:(id<SCStoryManagementViewCoordinatorDelegate>)arg1 ;
-(id<SCStoryManagementViewCoordinatorDelegate>)delegate;
-(void)setPresentingViewController:(id)arg1 ;
-(BOOL)isPresenting;
@end
