/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCCameraCardViewController.h>
#import <Snapchat/SCScanCardProviderDelegate.h>
#import <Snapchat/SCCameraCardViewControllerDelegate.h>
#import <Snapchat/SCScanCardDeepLinkDelegate.h>
#import <Snapchat/SCScanCardShazamDelegate.h>
#import <Snapchat/SCScanCardOpenUrlDelegate.h>
#import <Snapchat/SCOperaPresenterDelegate.h>
#import <Snapchat/SCScanCardAdPreviewDelegate.h>
#import <Snapchat/SCScanCardUnlockLensDelegate.h>
#import <Snapchat/SCMiniProfileViewControllerDelegate.h>
#import <Snapchat/SCStoryPresenterDelegate.h>
#import <Snapchat/SCCreativePreviewScanResultProtocol.h>
#import <Snapchat/SCScanCardMomentsOptInDelegate.h>
#import <Snapchat/SCScanCardProductDelegate.h>
#import <Snapchat/SCScanCardSearchVPResultsDelegate.h>
#import <Snapchat/SCShakeToReportDelegate.h>
#import <Snapchat/SCDeepLinkableView.h>

@protocol SCScanCardDeepLinkProtocol, SCScanCardAdPreviewProtocol, SCLensRemoverProtocol, SCScanResultViewControllerDelegate, NavigationDelegate, SendSnapNavigationControllerDelegate, SCStartChatDelegate, SCHydraReplySnapDelegate;
@class NSArray, NSDictionary, NSString, NSMutableArray, SCScanCardProvider, Sound, SCScanCardTableViewCell, SCUserSession, UITapGestureRecognizer, SCOperaPresenter, SCOperaPlaylistCommercePlugin, SCStoryPresenter_DEPRECATED, SCLens;

@interface SCScanResultViewController : SCCameraCardViewController <SCScanCardProviderDelegate, SCCameraCardViewControllerDelegate, SCScanCardDeepLinkDelegate, SCScanCardShazamDelegate, SCScanCardOpenUrlDelegate, SCOperaPresenterDelegate, SCScanCardAdPreviewDelegate, SCScanCardUnlockLensDelegate, SCMiniProfileViewControllerDelegate, SCStoryPresenterDelegate, SCCreativePreviewScanResultProtocol, SCScanCardMomentsOptInDelegate, SCScanCardProductDelegate, SCScanCardSearchVPResultsDelegate, SCShakeToReportDelegate, SCDeepLinkableView> {

	NSArray* _scanResults;
	NSDictionary* _scanActionResponse;
	NSArray* _scannableAction;
	NSString* _scanData;
	NSString* _scannableId;
	int _codeType;
	int _version;
	NSMutableArray* _stagedScanCards;
	SCScanCardProvider* _scanCardProvider;
	Sound* _scanSound;
	SCScanCardTableViewCell*<SCScanCardDeepLinkProtocol> _deepLinkScanCard;
	BOOL _firstCardLoaded;
	SCUserSession* _userSession;
	UITapGestureRecognizer* _tapGestureRecognizer;
	SCScanCardTableViewCell* _initialLoadingCard;
	double _initialLoadingCardHeight;
	BOOL _overrideInitialCardHeight;
	long long _pageSource;
	SCOperaPresenter* _operaPresenter;
	SCOperaPlaylistCommercePlugin* _commercePlugin;
	BOOL _statusBarHiddenPrevious;
	SCStoryPresenter_DEPRECATED* _storyPresenter;
	SCScanCardTableViewCell*<SCScanCardAdPreviewProtocol> _adPreviewOpenedCard;
	SCLens* _infoLens;
	BOOL _openFromPreview;
	BOOL _skipRecordInScanHistory;
	BOOL _openFromCameraRoll;
	BOOL _relaunchFromInformationIcon;
	id<SCLensRemoverProtocol> _lensRemover;
	id<SCScanResultViewControllerDelegate> _delegate;
	id<NavigationDelegate> _navigationDelegate;
	id<SendSnapNavigationControllerDelegate> _sendSnapNavigationControllerDelegate;
	id<SCStartChatDelegate> _startChatDelegate;
	id<SCHydraReplySnapDelegate> _scanReplySnapDelegate;
	long long _deeplinkSourceType;
	long long _scanSource;

}

@property (assign,nonatomic,__weak) id<SCScanResultViewControllerDelegate> delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<NavigationDelegate> navigationDelegate;                                                  //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SendSnapNavigationControllerDelegate> sendSnapNavigationControllerDelegate;              //@synthesize sendSnapNavigationControllerDelegate=_sendSnapNavigationControllerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCStartChatDelegate> startChatDelegate;                                                  //@synthesize startChatDelegate=_startChatDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCHydraReplySnapDelegate> scanReplySnapDelegate;                                         //@synthesize scanReplySnapDelegate=_scanReplySnapDelegate - In the implementation block
@property (assign,nonatomic) long long deeplinkSourceType;                                                                      //@synthesize deeplinkSourceType=_deeplinkSourceType - In the implementation block
@property (assign,nonatomic) long long scanSource;                                                                              //@synthesize scanSource=_scanSource - In the implementation block
@property (assign,nonatomic) BOOL openFromPreview;                                                                              //@synthesize openFromPreview=_openFromPreview - In the implementation block
@property (assign,nonatomic) BOOL skipRecordInScanHistory;                                                                      //@synthesize skipRecordInScanHistory=_skipRecordInScanHistory - In the implementation block
@property (assign,nonatomic) BOOL openFromCameraRoll;                                                                           //@synthesize openFromCameraRoll=_openFromCameraRoll - In the implementation block
@property (assign,nonatomic) BOOL relaunchFromInformationIcon;                                                                  //@synthesize relaunchFromInformationIcon=_relaunchFromInformationIcon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<SCLensRemoverProtocol> lensRemover;                                                    //@synthesize lensRemover=_lensRemover - In the implementation block
+(id)scanResultViewControllerForScanResults:(id)arg1 navigationController:(id)arg2 startChatDelegate:(id)arg3 userSession:(id)arg4 scanSource:(long long)arg5 pageSource:(long long)arg6 skipScanHistory:(BOOL)arg7 ;
+(id)scanResultViewControllerScannableActions:(id)arg1 responseDictionary:(id)arg2 scanData:(id)arg3 scannableId:(id)arg4 scanSource:(long long)arg5 codeType:(int)arg6 version:(int)arg7 navigationController:(id)arg8 startChatDelegate:(id)arg9 userSession:(id)arg10 ;
+(id)scanResultViewControllerForLens:(id)arg1 userSession:(id)arg2 scanSource:(long long)arg3 pageSource:(long long)arg4 ;
+(id)scanResultViewControllerForScanResults:(id)arg1 navigationController:(id)arg2 startChatDelegate:(id)arg3 userSession:(id)arg4 scanSource:(long long)arg5 pageSource:(long long)arg6 skipScanHistory:(BOOL)arg7 lensRemover:(id)arg8 ;
-(id)jiraMetaInfo;
-(long long)deeplinkSourceType;
-(void)resumePlayback;
-(BOOL)shouldDismissViewControllerLater;
-(void)setOpenFromCameraRoll:(BOOL)arg1 ;
-(void)setSendSnapNavigationControllerDelegate:(id<SendSnapNavigationControllerDelegate>)arg1 ;
-(void)setStartChatDelegate:(id<SCStartChatDelegate>)arg1 ;
-(void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2 ;
-(void)miniProfileViewControllerDidPressSnapButton:(id)arg1 ;
-(void)miniProfileViewControllerWasDismissed:(id)arg1 ;
-(id<SCStartChatDelegate>)startChatDelegate;
-(id<SendSnapNavigationControllerDelegate>)sendSnapNavigationControllerDelegate;
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
-(void)setScanReplySnapDelegate:(id<SCHydraReplySnapDelegate>)arg1 ;
-(void)setOpenFromPreview:(BOOL)arg1 ;
-(void)setRelaunchFromInformationIcon:(BOOL)arg1 ;
-(id)presentingVC;
-(void)storyPresenter:(id)arg1 didDismissFriendStories:(id)arg2 becameFullyViewed:(BOOL)arg3 succeededToPresent:(BOOL)arg4 viewingType:(long long)arg5 ;
-(void)storyPresenter:(id)arg1 beginDismissFriendStories:(id)arg2 previousFriendStories:(id)arg3 ;
-(void)storyPresenterWillBeginPresentingStory:(id)arg1 ;
-(void)storyPresenterDidFinishPresentingStory:(id)arg1 ;
-(void)storyPresenterWillBeginAnimatingToDismissStory:(id)arg1 ;
-(void)storyPresenterDidCancelDismissingStory:(id)arg1 ;
-(void)storyPresenterDidFinishDismissingStory:(id)arg1 ;
-(void)storyPresenterWillBeginPlayingStory:(id)arg1 friendStories:(id)arg2 viewLocation:(long long)arg3 ;
-(void)storyPresenter:(id)arg1 didBeginPlayingFriendStories:(id)arg2 ;
-(void)storyPresenter:(id)arg1 didFinishViewingFriendStories:(id)arg2 firstStoryDisplayed:(id)arg3 isReplayMode:(BOOL)arg4 becameFullyViewed:(BOOL)arg5 ;
-(void)viewDidAppearWithURL:(id)arg1 additionalInfo:(id)arg2 ;
-(id)productNavigationDelegate;
-(void)momentsOptInCard:(id)arg1 didTapNotify:(id)arg2 ;
-(void)cameraCardViewControllerDidDismiss:(id)arg1 dismissType:(unsigned long long)arg2 ;
-(void)cameraCardViewControllerShowProfileView:(id)arg1 suggestedFriend:(id)arg2 ;
-(void)_cardDidRemoveWillAnimateChanges;
-(void)cameraCardTableViewCell:(id)arg1 willAnimateHeightWithAnimations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissCreativePreview;
-(id)initWithScanResults:(id)arg1 scanSource:(long long)arg2 userSession:(id)arg3 pageSource:(long long)arg4 lensRemover:(id)arg5 ;
-(void)setSkipRecordInScanHistory:(BOOL)arg1 ;
-(id)initWithScannableActions:(id)arg1 responseDictionary:(id)arg2 scanData:(id)arg3 scannableId:(id)arg4 scanSource:(long long)arg5 codeType:(int)arg6 version:(int)arg7 userSession:(id)arg8 lensRemover:(id)arg9 ;
-(id)initWithLens:(id)arg1 scanSource:(long long)arg2 userSession:(id)arg3 pageSource:(long long)arg4 ;
-(void)_didTapTableView;
-(void)setScanSource:(long long)arg1 ;
-(void)_presentCardsAnimated;
-(void)_provideScanFeedback;
-(void)_showScanCards:(id)arg1 ;
-(void)_handleSingleCardCellHeightOverrideWithCard:(id)arg1 ;
-(BOOL)skipRecordInScanHistory;
-(BOOL)openFromCameraRoll;
-(void)_showProfileView:(id)arg1 ;
-(id<SCHydraReplySnapDelegate>)scanReplySnapDelegate;
-(void)_handleWillBeginPresentingEdition;
-(void)_handleDidDismissEdition;
-(void)dismissScanResultsAnimated:(BOOL)arg1 ;
-(void)scanCardProvider:(id)arg1 didProvideScanCards:(id)arg2 ;
-(void)scanCardProviderDidNotProvideScanCards:(id)arg1 ;
-(BOOL)openFromPreview;
-(BOOL)relaunchFromInformationIcon;
-(id<SCLensRemoverProtocol>)lensRemover;
-(void)deepLinkCard:(id)arg1 didDeepLinkToURL:(id)arg2 ;
-(void)deepLinkCard:(id)arg1 chatLinkToURL:(id)arg2 ;
-(void)deepLinkCard:(id)arg1 didTapShareUrl:(id)arg2 ;
-(void)sendWithShareController:(id)arg1 ;
-(void)shareShazamURL:(id)arg1 songTitle:(id)arg2 artistName:(id)arg3 ;
-(id)scanCardOpenUrlNavigationDelegate;
-(void)adpreviewCard:(id)arg1 didTapOpenAd:(id)arg2 ;
-(void)sendLensURLWithController:(id)arg1 ;
-(void)shareLensURL:(id)arg1 ;
-(void)reportLensWithController:(id)arg1 ;
-(void)searchVPResultsCard:(id)arg1 deepLinkWithUrl:(id)arg2 ;
-(void)searchVPResultsCard:(id)arg1 openActionMenu:(id)arg2 ;
-(void)scanCardPresentViewController:(id)arg1 ;
-(void)scanCardDismissViewController;
-(void)scanCardDidFinish;
-(void)setDeeplinkSourceType:(long long)arg1 ;
-(long long)scanSource;
-(void)setDelegate:(id<SCScanResultViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id<SCScanResultViewControllerDelegate>)delegate;
-(BOOL)prefersStatusBarHidden;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)pausePlayback;
-(id<NavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<NavigationDelegate>)arg1 ;
@end
