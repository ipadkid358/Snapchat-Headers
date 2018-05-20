/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaPresenterDelegate.h>
#import <Snapchat/SCMiniProfileViewControllerDelegate.h>

@protocol NavigationDelegate;
@class SCUserSession, SCOperaPresenter, SCOperaPlaylistStoriesPlugin, SCOperaPlaylistEditionsPlugin, SCDiscoverDeeplinkHandler, SCStoryDeeplinkHandler, SCContextOperaPlaylistPlugin, SCOperaPlaylistCommercePlugin, UIViewController, NSString;

@interface SCCheetahStoriesDeeplinkHandler : NSObject <SCOperaPresenterDelegate, SCMiniProfileViewControllerDelegate> {

	SCUserSession* _userSession;
	SCOperaPresenter* _operaPresenter;
	SCOperaPlaylistStoriesPlugin* _storiesPlugin;
	SCOperaPlaylistEditionsPlugin* _editionsPlugin;
	SCDiscoverDeeplinkHandler* _discoverDeeplinkHandler;
	SCStoryDeeplinkHandler* _storyDeeplinkHandler;
	SCContextOperaPlaylistPlugin* _contextPlugin;
	SCOperaPlaylistCommercePlugin* _commercePlugin;
	id<NavigationDelegate> _navigationDelegate;
	UIViewController* _presentingViewController;

}

@property (assign,nonatomic,__weak) id<NavigationDelegate> navigationDelegate;                //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2 ;
-(void)operaPresenterDidFailToPresent:(id)arg1 ;
-(void)operaPresenterWillBeginPresenting:(id)arg1 transitionAnimator:(id)arg2 ;
-(void)operaPresenterWillBeginDismissing:(id)arg1 transitionAnimator:(id)arg2 ;
-(void)operaPresenterWillBeginAnimatingToDismiss:(id)arg1 ;
-(void)operaPresenterDidFinishDismissing:(id)arg1 ;
-(void)operaPresenterDidCancelDismissing:(id)arg1 ;
-(void)operaPresenterDidFinishPresenting:(id)arg1 transitionAnimator:(id)arg2 ;
-(void)operaPresenterDidTearDown:(id)arg1 ;
-(void)operaPresenter:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2 ;
-(void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3 ;
-(id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 ;
-(BOOL)isPresentingStory;
-(BOOL)_isDeepLinkForLiveStories:(id)arg1 additionalInfo:(id)arg2 ;
-(void)_processLiveStoriesDeepLinkWithURL:(id)arg1 additionalInfo:(id)arg2 ;
-(BOOL)_isDeepLinkForEdition:(id)arg1 additionalInfo:(id)arg2 ;
-(void)_processEditionDeepLinkWithURL:(id)arg1 additionalInfo:(id)arg2 ;
-(BOOL)_isDeepLinkForAddFriend:(id)arg1 additionalInfo:(id)arg2 ;
-(void)_processAddFriendDeepLinkWithURL:(id)arg1 additionalInfo:(id)arg2 ;
-(void)presentDeeplinkURL:(id)arg1 additionalInfo:(id)arg2 ;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(id<NavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<NavigationDelegate>)arg1 ;
@end
