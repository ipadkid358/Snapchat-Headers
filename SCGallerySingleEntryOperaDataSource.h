/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCGalleryLagunaContentTransferStatusUpdaterDelegate.h>
#import <Snapchat/SCGallerySingleItemOperaDataSource.h>

@protocol SCGallerySingleItemOperaDataSourceDelegate, SCGalleryEntry, SCObserving;
@class SCGalleryOperaMediaManager, SCOperaViewModel, NSString, SCGalleryOperaConfiguration, SCUserSession, NSMutableDictionary, NSArray, NSDictionary;

@interface SCGallerySingleEntryOperaDataSource : NSObject <SCGalleryLagunaContentTransferStatusUpdaterDelegate, SCGallerySingleItemOperaDataSource> {

	SCGalleryOperaConfiguration* _configuration;
	SCUserSession* _userSession;
	id<SCGallerySingleItemOperaDataSourceDelegate> _delegate;
	SCGalleryOperaMediaManager* _mediaManager;
	SCOperaViewModel* _currentViewModel;
	NSString* _dataSourceId;
	SCD_Struct_SC329 _baseMediaScenePath;
	NSMutableDictionary* _snapIdToViewModelMap;
	NSMutableDictionary* _snapIdToLoadedMediaProperties;
	id<SCGalleryEntry> _entry;
	NSArray* _snaps;
	NSMutableDictionary* _snapIdToGallerySnap;
	NSDictionary* _snapIdToSnapHighlightState;
	id<SCObserving> _observeContext;
	NSMutableDictionary* _snapIdToDelayToLoadContentStatusUpdater;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCGallerySingleItemOperaDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) SCGalleryOperaMediaManager * mediaManager;                            //@synthesize mediaManager=_mediaManager - In the implementation block
@property (nonatomic,retain) SCOperaViewModel * currentViewModel;                                         //@synthesize currentViewModel=_currentViewModel - In the implementation block
@property (nonatomic,copy,readonly) NSString * singleDataSourceId;                                        //@synthesize dataSourceId=_dataSourceId - In the implementation block
@property (assign,nonatomic) SCD_Struct_SC329 mediaScenePath;                                             //@synthesize baseMediaScenePath=_baseMediaScenePath - In the implementation block
-(void)setMediaScenePath:(SCD_Struct_SC329)arg1 ;
-(SCD_Struct_SC329)mediaScenePath;
-(SCGalleryOperaMediaManager *)mediaManager;
-(void)setMediaManager:(SCGalleryOperaMediaManager *)arg1 ;
-(void)setCurrentViewModel:(SCOperaViewModel *)arg1 ;
-(SCOperaViewModel *)currentViewModel;
-(void)_appenedPropertiesToPage:(id)arg1 newProperties:(id)arg2 ;
-(void)_observeEntryChanges;
-(void)_unobserveEntryChanges;
-(void)lagunaContentTransferStatusUpdater:(id)arg1 didFinishDownloadForContentComponent:(unsigned long long)arg2 ;
-(void)_updatePlaylistGroupBasedOnEntry:(id)arg1 ;
-(void)_addSnapToDelayToLoadMap:(id)arg1 ;
-(void)_startToLoadSnap:(id)arg1 ;
-(void)_removeSnapFromDelayToLoadMap:(id)arg1 ;
-(void)_removeAllMediaLoadedPropertiesForSnapId:(id)arg1 ;
-(id)resolveGallerySnapWithPageId:(id)arg1 ;
-(void)_appendMediaLoadedPropertiesForSnapId:(id)arg1 newProperties:(id)arg2 ;
-(id)_applyCroppingIfNecessaryForImage:(id)arg1 snap:(id)arg2 ;
-(void)_didLoadContentWithSnapId:(id)arg1 loadedProperties:(id)arg2 mediaLoaded:(BOOL)arg3 ;
-(id)_attemptToRecoverEntry:(id)arg1 ;
-(id)_buildSnapIdToGallerySnapMapFromSnaps:(id)arg1 ;
-(id)_updateSnapIdToHighlightStateMapFromSnaps:(id)arg1 ;
-(void)_updateViewModelGroup;
-(void)_updateSingleViewModelForSnap:(id)arg1 ;
-(id)_pageForGallerySnap:(id)arg1 ;
-(void)_removePropertiesFromPage:(id)arg1 removePropertyWithKeys:(id)arg2 ;
-(void)_updateEntry:(id)arg1 changedKeys:(id)arg2 ;
-(unsigned long long)_interestedLagunaContentWithSnap:(id)arg1 ;
-(void)buildViewModels;
-(void)prepareToViewPageWithPageId:(id)arg1 ;
-(void)removeMediaWithPageId:(id)arg1 ;
-(void)startToBrowsePageWithPageId:(id)arg1 distanceToCurrentDataSource:(long long)arg2 ;
-(void)manualFetchHDMediaWithPageId:(id)arg1 ;
-(void)handleMoveToNextEventAtPageId:(id)arg1 didTapToNext:(BOOL)arg2 ;
-(void)attemptToAttachPresentationFrame:(id)arg1 toPageId:(id)arg2 ;
-(NSString *)singleDataSourceId;
-(id)initWithEntry:(id)arg1 dataSourceId:(id)arg2 configuration:(id)arg3 userSession:(id)arg4 ;
-(void)setDelegate:(id<SCGallerySingleItemOperaDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(id<SCGallerySingleItemOperaDataSourceDelegate>)delegate;
@end
