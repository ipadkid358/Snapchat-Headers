/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaEventListener.h>
#import <Snapchat/SCGalleryOperaActionHandlerSessionDelegate.h>
#import <Snapchat/SCGalleryItemsOperaDataSourceDelegate.h>

@protocol SCStartChatDelegate, SCGalleryOperaPresenterDelegate;
@class SCUserSession, SCOperaViewController, SCOperaConfiguration, SCOperaEventListenerAnnouncer, SCGalleryItemsOperaDataSource, SCOperaPerformanceTrackingPlugin, SCOperaPlaylistPluginsManager, SCGalleryOperaActionHandlerSession, SCGalleryOperaViewingMetricsSession, UIView, UIViewController, SCGalleryOperaConfiguration, NSString;

@interface SCGalleryOperaPresenter : NSObject <SCOperaEventListener, SCGalleryOperaActionHandlerSessionDelegate, SCGalleryItemsOperaDataSourceDelegate> {

	SCUserSession* _userSession;
	SCOperaViewController* _operaVC;
	SCOperaConfiguration* _operaConfiguration;
	SCOperaEventListenerAnnouncer* _eventAnnouncer;
	SCGalleryItemsOperaDataSource* _itemsDataSource;
	SCOperaPerformanceTrackingPlugin* _operaPerformanceTracker;
	SCOperaPlaylistPluginsManager* _playlistPluginManager;
	SCGalleryOperaActionHandlerSession* _actionHandlerSession;
	SCGalleryOperaViewingMetricsSession* _viewingMetricsSession;
	UIView* _sourceView;
	UIViewController* _fromViewController;
	SCGalleryOperaConfiguration* _configuration;
	BOOL _isInPresentationAnimation;
	BOOL _isInOperaActionMenu;
	BOOL _enterActionMenuFromLongPress;
	BOOL _shouldDeferLoadNeighborForRootViewModel;
	/*^block*/id _presentationCompletionHandler;
	double _topInset;
	NSString* _sourcePageName;
	BOOL _isPresented;
	id<SCStartChatDelegate> _startChatDelegate;
	id<SCGalleryOperaPresenterDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL isPresented;                                               //@synthesize isPresented=_isPresented - In the implementation block
@property (assign,nonatomic,__weak) id<SCStartChatDelegate> startChatDelegate;                 //@synthesize startChatDelegate=_startChatDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCGalleryOperaPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SCGalleryOperaConfiguration * configuration;                    //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3 ;
-(id)_registeredEventsForOperaSession;
-(void)setStartChatDelegate:(id<SCStartChatDelegate>)arg1 ;
-(id<SCStartChatDelegate>)startChatDelegate;
-(id)initWithItems:(id)arg1 initialIndex:(long long)arg2 initialSnapId:(id)arg3 configuration:(id)arg4 userSession:(id)arg5 ;
-(void)presentOperaFromViewController:(id)arg1 sourcePageName:(id)arg2 sourceView:(id)arg3 sourceImage:(id)arg4 topInset:(double)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)initWithItems:(id)arg1 initialIndex:(long long)arg2 configuration:(id)arg3 userSession:(id)arg4 ;
-(id)currentViewItem;
-(void)dimissOperaFromItemsDataSource:(id)arg1 ;
-(void)exitOperaActionMenuFromItemsDataSource:(id)arg1 ;
-(void)actionHandlerSession:(id)arg1 shouldExitActionMenu:(id)arg2 ;
-(void)actionHandlerSessionDismissOpera:(id)arg1 ;
-(BOOL)actionHandlerSessionEnterActionMenuFromLongPress:(id)arg1 ;
-(void)_setupOperaVC;
-(void)_setupOperaSessions;
-(void)_setupOperaPlaylistPluginManager;
-(long long)_transitionModeForItem:(id)arg1 ;
-(id)_maskedSourceView:(long long)arg1 ;
-(long long)_transitionOrientationBasedOnCurrentViewItem;
-(void)_didOpenCurrentViewItem:(BOOL)arg1 ;
-(void)forceDismiss;
-(void)_didStartToBrowseFromContext:(id)arg1 ;
-(void)_ensureOperaIsInActionMenu:(BOOL)arg1 ;
-(void)_updateRotateVideoPinchStartStateFromContext:(id)arg1 ;
-(void)updateOperaPlaylistWithItems:(id)arg1 ;
-(void)setDelegate:(id<SCGalleryOperaPresenterDelegate>)arg1 ;
-(void)dealloc;
-(id<SCGalleryOperaPresenterDelegate>)delegate;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(SCGalleryOperaConfiguration *)configuration;
-(BOOL)isPresented;
-(void)setIsPresented:(BOOL)arg1 ;
@end

