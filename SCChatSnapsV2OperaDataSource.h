/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCChatBaseSnapOperaDataSource.h>
#import <Snapchat/SCTimeProfilable.h>

@protocol SCPerforming, SCBaseMediaMessageOperaDataSourceDelegate, SCOperaGifProviderSCOperaImageProvider;
@class SCChat, NSMutableArray, NSMutableDictionary, NSMutableSet, NSDate, NSString, SCUserSession, SCOperaViewModel;

@interface SCChatSnapsV2OperaDataSource : SCChatBaseSnapOperaDataSource <SCTimeProfilable> {

	id<SCPerforming> _performer;
	SCChat* _chat;
	NSMutableArray* _snaps;
	NSMutableDictionary* _snapMapping;
	NSMutableDictionary* _viewModelMapping;
	NSMutableArray* _viewModels;
	NSMutableArray* _auxilliaryViewModels;
	NSMutableSet* _currentlyUnarchivingSnapIds;
	NSDate* _lastMessageTimestamp;
	NSString* _currentlyPlayingId;
	SCUserSession* _userSession;
	id<SCBaseMediaMessageOperaDataSourceDelegate> _delegate;
	BOOL _shouldEnableZoom;
	BOOL _containsMultipleMedias;
	BOOL _needToAnimationBaseThumbnailViewWhenClosing;
	NSString* _conversationId;
	long long _messageType;
	SCOperaViewModel* _rootViewModel;
	id<SCOperaGifProvider><SCOperaImageProvider> _imageProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)context;
-(void)chatsUpdated:(id)arg1 ;
-(id)messageIdForPage:(id)arg1 ;
-(id)viewModelForPageId:(id)arg1 ;
-(void)prepareMediaForPresentation:(id)arg1 ;
-(BOOL)shouldEnableZoom;
-(BOOL)containsMultipleMedias;
-(BOOL)needToAnimationBaseThumbnailViewWhenClosing;
-(id)rootViewModel;
-(void)setRootViewModel:(id)arg1 ;
-(void)prepareForPlayback:(id)arg1 ;
-(id)initWithChat:(id)arg1 performer:(id)arg2 userSession:(id)arg3 ;
-(long long)initialMediaType;
-(unsigned long long)numberOfSnapsFromPageId:(id)arg1 ;
-(void)unobserveAllSnaps;
-(void)snapFailedToPlay:(id)arg1 withReason:(long long)arg2 withReasonDetail:(id)arg3 ;
-(void)_addSnapToViewModels:(id)arg1 ;
-(void)_logStackPlaybackStart;
-(void)_updateAuxillaryView:(id)arg1 ;
-(void)_observeSnap:(id)arg1 ;
-(BOOL)_shouldBatchDownloads;
-(void)_prepareSnap:(id)arg1 shouldDownload:(BOOL)arg2 ;
-(void)_testImageSnapForCorrectMedia:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_unobserveSnap:(id)arg1 ;
-(void)_removeSnapFromDataSource:(id)arg1 ;
-(void)_updateViewModelForSnap:(id)arg1 ;
-(void)_unarchiveSnap:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_getViewModelsAfterCurrentlyPlayingSnapWithBlock:(/*^block*/id)arg1 ;
-(double)_totalTimeForSnaps:(id)arg1 ;
-(void)dealloc;
-(void)refresh;
-(void)setRootIndex:(unsigned long long)arg1 ;
-(id)conversationId;
-(id)imageProvider;
-(void)_addObservers;
-(long long)messageType;
@end

