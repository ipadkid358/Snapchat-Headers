/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaPresenterDelegate.h>

@protocol SCMapDiscoverPresenterDelegate;
@class SCUserSession, SCXRenderLockManager, SCOperaPresenter, SCOperaPlaylistEditionsPlugin, SCXRenderLock, UIView, UIViewController, NSString;

@interface SCMapDiscoverPresenter : NSObject <SCOperaPresenterDelegate> {

	SCUserSession* _userSession;
	SCXRenderLockManager* _renderLockManager;
	SCOperaPresenter* _operaPresenter;
	SCOperaPlaylistEditionsPlugin* _editionsPlugin;
	SCXRenderLock* _renderLock;
	UIView* _baseView;
	BOOL _didAlreadyDismiss;
	BOOL _didCleanupAfterDismissal;
	BOOL _didCancelPresentation;
	id<SCMapDiscoverPresenterDelegate> _delegate;
	UIViewController* _presentingViewController;

}

@property (assign,nonatomic,__weak) id<SCMapDiscoverPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;                     //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(void)cancelPresentingIfNecessary;
-(void)_setupOperaPresenter;
-(void)_cleanupAfterDismissal;
-(void)_releaseRenderLock;
-(void)_acquireRenderLock;
-(id)initWithUserSession:(id)arg1 renderLockManager:(id)arg2 ;
-(void)presentDiscoverEdition:(id)arg1 loadBeforePresenting:(BOOL)arg2 baseView:(id)arg3 ;
-(void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 ;
-(void)setDelegate:(id<SCMapDiscoverPresenterDelegate>)arg1 ;
-(id<SCMapDiscoverPresenterDelegate>)delegate;
-(UIViewController *)presentingViewController;
-(void)dismiss;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
@end

