/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:24 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCOperaPlaylistFetcherDelegate.h>
#import <Snapchat/SCOperaPlaylistViewCoordinatorDelegate.h>
#import <Snapchat/SCOperaSession.h>

@protocol SCOperaPlaylistFetcher, SCOperaPresenterDelegate;
@class UIViewController, UIView, SCOperaPlaylistViewCoordinator, SCOperaPlaylistPluginsManager, SCOperaConfiguration, SCOperaViewController, SCOperaEventListenerAnnouncer, SCUserSession, SCLoadingIndicatorView, SCOperaViewModel, NSString;

@interface SCOperaPresenter : NSObject <SCOperaPlaylistFetcherDelegate, SCOperaPlaylistViewCoordinatorDelegate, SCOperaSession> {

	UIViewController* _presentingViewController;
	UIView* _baseView;
	BOOL _startWithAttachment;
	unsigned long long _groupDisplaySequence;
	SCOperaPlaylistViewCoordinator* _playlistViewCoordinator;
	SCOperaPlaylistPluginsManager* _playlistPluginManager;
	SCOperaConfiguration* _configuration;
	SCOperaViewController* _operaVC;
	SCOperaEventListenerAnnouncer* _eventAnnouncer;
	SCUserSession* _userSession;
	BOOL _didFinishPresenting;
	BOOL _presentingIsCanceled;
	SCLoadingIndicatorView* _baseViewLoadingIndicatorView;
	BOOL _didFinishPreparingPageForDisplay;
	id<SCOperaPlaylistFetcher> _playlistFetcher;
	SCOperaViewModel* _loadingViewModelForPlaylistFetcher;
	id<SCOperaPresenterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCOperaPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateBaseView:(id)arg1 ;
-(void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3 ;
-(id)registeredEventsForOperaSession;
-(id)transitionAnimator;
-(void)playlistViewCoordinator:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3 ;
-(void)playlistViewCoordinator:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2 ;
-(void)updatePlaylistWithGroupDataModels:(id)arg1 ;
-(void)pauseOpera;
-(void)resumeOpera;
-(void)_didFailToPresent;
-(void)presentViewingSessionWithDataModels:(id)arg1 firstDisplayGroupDataModel:(id)arg2 groupDisplaySequence:(unsigned long long)arg3 playlistPlugins:(id)arg4 downloadBeforePresenting:(BOOL)arg5 unarchiveBeforePresenting:(BOOL)arg6 fallBackOnLoadingView:(BOOL)arg7 baseView:(id)arg8 animationStyle:(unsigned long long)arg9 startWithAttachment:(BOOL)arg10 ;
-(BOOL)isPresentingViewingSession;
-(BOOL)_playlistFetcherIsInProcess;
-(id)_setupPlaylistViewCoordinatorWithItemGroupDataModels:(id)arg1 firstDisplayGroupDataModel:(id)arg2 ;
-(void)_removeLoadingIndicator;
-(void)_setupDefaultOperaConfigurationWithInitialViewModel:(id)arg1 ;
-(void)_didStartToWaitForFirstPlaylistItemToDisplay;
-(void)_updateLoadingViewModelForPlaylistFetcher;
-(void)_sendDidFinishPresentingCallbackIfNecessary;
-(void)_addLoadingIndicatorToView:(id)arg1 ;
-(void)loadingStateChanged:(id)arg1 ;
-(id)initWithPresentingViewController:(id)arg1 userSession:(id)arg2 ;
-(void)presentViewingSessionWithPlaylistFetcher:(id)arg1 groupDisplaySequence:(unsigned long long)arg2 playlistPlugins:(id)arg3 baseView:(id)arg4 animationStyle:(unsigned long long)arg5 startWithAttachment:(BOOL)arg6 ;
-(void)updateBaseViewFrame:(CGRect)arg1 ;
-(void)cancelPresentingIfNecessary;
-(id)currentPlaylistItemGroupDataModel;
-(id)firstPlaylistItemGroupDataModel;
-(unsigned long long)numberOfGroupsRemainingInPlaylistAfterGroupId:(id)arg1 ;
-(void)dismissWithAnimation:(BOOL)arg1 ;
-(void)setDelegate:(id<SCOperaPresenterDelegate>)arg1 ;
-(void)dealloc;
-(id<SCOperaPresenterDelegate>)delegate;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)_teardown;
-(BOOL)isPresenting;
@end

