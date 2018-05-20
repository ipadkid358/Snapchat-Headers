/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCMiniProfileBaseViewController.h>
#import <Snapchat/SCMiniProfileStoryIdentitySectionControllerDelegate.h>
#import <Snapchat/SCOperaPresenterDelegate.h>
#import <Snapchat/SCSendViewControllerSendingDelegate.h>
#import <Snapchat/SCSendViewControllerNavigationDelegate.h>
#import <Snapchat/SCMiniProfileStoryOptionsSectionControllerDelegate.h>

@protocol SCMapPOIMiniProfileViewControllerDelegate;
@class SCMapTapToPlayPOIMediaFetcher, SCOperaPresenter, SCUserSession, SCMTPointOfInterest, SCMapStoryViewModel, SCSendToTransitionProvider, SCMapLoggerSession, NSString;

@interface SCMapPOIMiniProfileViewController : SCMiniProfileBaseViewController <SCMiniProfileStoryIdentitySectionControllerDelegate, SCOperaPresenterDelegate, SCSendViewControllerSendingDelegate, SCSendViewControllerNavigationDelegate, SCMiniProfileStoryOptionsSectionControllerDelegate> {

	SCMapTapToPlayPOIMediaFetcher* _mediaFetcher;
	SCOperaPresenter* _operaPresenter;
	SCUserSession* _userSession;
	SCMTPointOfInterest* _poi;
	SCMapStoryViewModel* _storyViewModel;
	SCSendToTransitionProvider* _sendToTransitionProvider;
	SCMapLoggerSession* _mapLoggerSession;
	id<SCMapPOIMiniProfileViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCMapPOIMiniProfileViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_logURLShareForStoryType:(long long)arg1 mapSessionId:(unsigned long long)arg2 ;
-(void)dismissSendViewController:(id)arg1 ;
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
-(void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 invitedRecipients:(id)arg3 postToMyStory:(BOOL)arg4 myStoryPrivacyOverride:(id)arg5 officialStories:(id)arg6 sharedStories:(id)arg7 businessIds:(id)arg8 mobStories:(id)arg9 newMobStories:(id)arg10 mischiefs:(id)arg11 businessProfiles:(id)arg12 gallery:(BOOL)arg13 inviteRecipientShown:(long long)arg14 additionalText:(id)arg15 ;
-(id)initWithUserSession:(id)arg1 POI:(id)arg2 mapZoomLevel:(double)arg3 mapLoggerSession:(id)arg4 ;
-(void)storyIdentitySectionController:(id)arg1 didTapThumbnailView:(id)arg2 ;
-(void)storyOptionsSectionController:(id)arg1 didSelectOption:(long long)arg2 ;
-(void)_setupWithPOI:(id)arg1 mapZoomLevel:(double)arg2 mapLoggerSession:(id)arg3 ;
-(void)_presentLeadEditor;
-(void)_logMiniProfileView;
-(void)_beginStoryPlaybackWithThumbnailView:(id)arg1 ;
-(void)_sendStory;
-(void)_shareWebURL;
-(id)_selectRecipientsConfiguration;
-(id)_sendPreviewViewModel;
-(void)setDelegate:(id<SCMapPOIMiniProfileViewControllerDelegate>)arg1 ;
-(id<SCMapPOIMiniProfileViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end
