/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaSession.h>
#import <Snapchat/SCSearchEventListener.h>
#import <Snapchat/SCOperaPlaylistItemExtraPropertiesProvider.h>
#import <Snapchat/SCSearchEventAnnouncing.h>

@protocol SCOperaSubscribeActionHandler, SCOperaPlaylistItemController;
@class NSString, SCDiscoverUserProperties, SCUserSession, SCDiscoverOperaSessionLoggingContext, SCDiscoverLogger, SCOperaEventListenerAnnouncer, SCSingleDiscoverEditionSession, NSMutableSet, CADisplayLink, SCCheetahStoriesMiniProfileHandler, SCDiscoverOperaMediaManager, SCSearchEventListenerAnnouncer, SCOperaViewController;

@interface SCDiscoverEditionsSession : NSObject <SCOperaSession, SCSearchEventListener, SCOperaPlaylistItemExtraPropertiesProvider, SCSearchEventAnnouncing> {

	unsigned long long _context;
	NSString* _sortOrderId;
	SCDiscoverUserProperties* _discoverUserProperties;
	SCUserSession* _userSession;
	SCDiscoverOperaSessionLoggingContext* _loggingContext;
	SCDiscoverLogger* _logger;
	NSString* _deepLinkId;
	SCOperaEventListenerAnnouncer* _eventAnnouncer;
	SCSingleDiscoverEditionSession* _currentEditionSession;
	NSMutableSet* _groupIdsDisplayingChrome;
	BOOL _hasLoggedFinishViewingSession;
	CADisplayLink* _foregroundDisplayLink;
	NSMutableSet* _topSnapsViewed;
	NSMutableSet* _discoverEditionsForAdChunkCleanup;
	id<SCOperaSubscribeActionHandler> _subscribeActionHandler;
	SCCheetahStoriesMiniProfileHandler* _miniProfileHandler;
	SCDiscoverOperaMediaManager* _mediaManager;
	BOOL _isViewingLongform;
	SCSearchEventListenerAnnouncer* _searchEventAnnouncer;
	SCOperaViewController* _operaViewController;
	id<SCOperaPlaylistItemController> _playlistItemController;
	long long _channelIndex;
	double _timeViewed;
	long long _editionCount;

}

@property (assign,nonatomic,__weak) SCOperaViewController * operaViewController;                           //@synthesize operaViewController=_operaViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SCOperaPlaylistItemController> playlistItemController;              //@synthesize playlistItemController=_playlistItemController - In the implementation block
@property (nonatomic,readonly) long long channelIndex;                                                     //@synthesize channelIndex=_channelIndex - In the implementation block
@property (nonatomic,readonly) double timeViewed;                                                          //@synthesize timeViewed=_timeViewed - In the implementation block
@property (nonatomic,readonly) long long editionCount;                                                     //@synthesize editionCount=_editionCount - In the implementation block
@property (nonatomic,readonly) SCDiscoverOperaSessionLoggingContext * loggingContext;                      //@synthesize loggingContext=_loggingContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3 ;
-(double)timeViewed;
-(BOOL)fullView;
-(long long)editionViewCount;
-(long long)editionCount;
-(void)setEventAnnouncer:(id)arg1 ;
-(void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3 ;
-(void)extraPropertiesForDataModel:(id)arg1 item:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)registeredEventsForOperaSession;
-(void)setPlaylistItemController:(id<SCOperaPlaylistItemController>)arg1 ;
-(void)setOperaViewController:(SCOperaViewController *)arg1 ;
-(id)lastInteraction;
-(id<SCOperaPlaylistItemController>)playlistItemController;
-(SCOperaViewController *)operaViewController;
-(id)initWithContext:(unsigned long long)arg1 channelIndex:(long long)arg2 sortOrderId:(id)arg3 discoverUserProperties:(id)arg4 userSession:(id)arg5 loggingContext:(id)arg6 deepLinkId:(id)arg7 subscribeActionHandler:(id)arg8 miniProfileHandler:(id)arg9 mediaManager:(id)arg10 ;
-(BOOL)hasSessionEnded;
-(void)clearEventAnnouncer;
-(BOOL)currentEditionBecameFullyViewed;
-(BOOL)currentEditionWasInitiallyFullyViewed;
-(BOOL)shouldUseExtendedResetToCamera;
-(id)currentEditionSessionId;
-(SCDiscoverOperaSessionLoggingContext *)loggingContext;
-(long long)numTopSnapsViewed;
-(long long)channelIndex;
-(void)_viewWillEnterForeground;
-(void)_editionDoesDisplaySinceForegroundedApp;
-(void)_updateCurrentEditionSessionIfNecessaryWithContext:(id)arg1 event:(id)arg2 ;
-(void)_cleanUpAdChunks;
-(void)_endCurrentEditionSessionAndAggregateMetrics;
-(id)_editionSessionForEdition:(id)arg1 openViewContext:(id)arg2 ;
-(id)_extraPropertiesForOnboardingTooltipsForChunk:(id)arg1 ;
-(BOOL)_shouldShowChromeForPlaylistItem:(id)arg1 chunk:(id)arg2 editionSession:(id)arg3 ;
-(id)currentDSnapId;
-(void)_endSession;
-(id)edition;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
