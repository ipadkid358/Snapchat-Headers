/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaPlaylistDataSource.h>
#import <Snapchat/SCOperaPlaylistAdInsertionProtocol.h>
#import <Snapchat/SCOperaPlaylistAdTrackProtocol.h>

@protocol SCOperaPlaylistAdTrackProtocol, SCOperaPlaylistAdInsertionProtocol, SCOperaPlaylistItemController;
@class NSMutableDictionary, SCDiscoverFeedSessionAdDataSource, SCOperaViewController, NSString;

@interface SCCompositeDynamicAdDataSource : NSObject <SCOperaPlaylistDataSource, SCOperaPlaylistAdInsertionProtocol, SCOperaPlaylistAdTrackProtocol> {

	NSMutableDictionary* _adInsertionHandlerMap;
	NSMutableDictionary* _adTrackHandlerMap;
	id<SCOperaPlaylistAdTrackProtocol> _currentGroupAdTrackHandler;
	id<SCOperaPlaylistAdInsertionProtocol> _currentGroupAdInsertionHandler;
	SCDiscoverFeedSessionAdDataSource* _discoverFeedSessionAdDataSource;
	SCOperaViewController* _operaViewController;
	id<SCOperaPlaylistItemController> _playlistItemController;

}

@property (assign,nonatomic,__weak) SCOperaViewController * operaViewController;                           //@synthesize operaViewController=_operaViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SCOperaPlaylistItemController> playlistItemController;              //@synthesize playlistItemController=_playlistItemController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareMediaForItem:(id)arg1 waitForDownloading:(BOOL)arg2 startWaitingForDownloadCallback:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeMediaForItem:(id)arg1 ;
-(id)dataModelForItem:(id)arg1 ;
-(void)pagesPropertiesForDataModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)teardownDataModelForItem:(id)arg1 ;
-(void)resolvePlaylistItemGroup:(id)arg1 ;
-(void)unresolvePlaylistItemGroup:(id)arg1 ;
-(void)loadMediaForPlaylistItemGroup:(id)arg1 ;
-(id)dataModelForGroup:(id)arg1 ;
-(BOOL)canResolvePlaylistItemGroupDataModel:(id)arg1 ;
-(id)playlistItemGroupForDataModel:(id)arg1 ;
-(BOOL)needToPrepareMediaBeforeDisplay;
-(void)setPlaylistItemController:(id<SCOperaPlaylistItemController>)arg1 ;
-(void)setOperaViewController:(SCOperaViewController *)arg1 ;
-(id)adSessionId;
-(void)updateDynamicDataSourceForPlaylistGroup:(id)arg1 ;
-(void)startViewingPlaylistItemGroup:(id)arg1 previousItemGroup:(id)arg2 ;
-(void)startViewingPlaylistItem:(id)arg1 ;
-(id)adRequestClientIdForItem:(id)arg1 playlistItemController:(id)arg2 ;
-(long long)adSnapIndexForItem:(id)arg1 ;
-(void)stopViewingPlaylistItem:(id)arg1 isViewingLongform:(BOOL)arg2 ;
-(id)skippedItemAroundItem:(id)arg1 pageLeft:(BOOL)arg2 ;
-(BOOL)isNofillAdItem:(id)arg1 ;
-(id)adViewContextForSkippedItem:(id)arg1 aroundItem:(id)arg2 pageLeft:(BOOL)arg3 ;
-(void)logAdSkipWithAdItem:(id)arg1 aroundItem:(id)arg2 pageLeft:(BOOL)arg3 ;
-(id)skippedAdGroupAroundGroup:(id)arg1 pagedLeft:(BOOL)arg2 ;
-(void)stopViewingPlaylistItemGroup:(id)arg1 nextPlaylistItemGroup:(id)arg2 ;
-(BOOL)isNofillAdGroup:(id)arg1 ;
-(id)adRequestClientIdForGroup:(id)arg1 ;
-(id)adViewContextForSkippedGroup:(id)arg1 ;
-(void)logAdSkipWithAdGroup:(id)arg1 ;
-(id)adViewContextForItem:(id)arg1 operaViewController:(id)arg2 ;
-(unsigned long long)adProductTypeForItem:(id)arg1 playlistItemController:(id)arg2 ;
-(id<SCOperaPlaylistItemController>)playlistItemController;
-(SCOperaViewController *)operaViewController;
-(BOOL)_isGeneratedStoriesAdProductSupported;
-(id)_dynamicDataSourceForGroupId:(id)arg1 ;
-(id)_dynamicDataSourceForItemId:(id)arg1 ;
-(id)_adTrackHandlerForItem:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 activeDFTabIndex:(long long)arg2 ;
-(void)teardown;
@end

