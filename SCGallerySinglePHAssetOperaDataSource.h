/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCGallerySingleItemOperaDataSource.h>

@protocol SCGallerySingleItemOperaDataSourceDelegate, SCGalleryItem;
@class SCUserSession, SCGalleryOperaMediaManager, SCOperaViewModel, NSString, NSMutableSet, SCGalleryPhotoLibraryObserver;

@interface SCGallerySinglePHAssetOperaDataSource : NSObject <SCGallerySingleItemOperaDataSource> {

	SCUserSession* _userSession;
	id<SCGallerySingleItemOperaDataSourceDelegate> _delegate;
	SCGalleryOperaMediaManager* _mediaManager;
	SCOperaViewModel* _currentViewModel;
	NSString* _dataSourceId;
	SCD_Struct_SC329 _mediaScenePath;
	NSMutableSet* _existingMediaLoadedProperties;
	id<SCGalleryItem> _item;
	SCGalleryPhotoLibraryObserver* _photoLibraryObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCGallerySingleItemOperaDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) SCGalleryOperaMediaManager * mediaManager;                            //@synthesize mediaManager=_mediaManager - In the implementation block
@property (nonatomic,retain) SCOperaViewModel * currentViewModel;                                         //@synthesize currentViewModel=_currentViewModel - In the implementation block
@property (nonatomic,copy,readonly) NSString * singleDataSourceId;                                        //@synthesize dataSourceId=_dataSourceId - In the implementation block
@property (assign,nonatomic) SCD_Struct_SC329 mediaScenePath;                                             //@synthesize mediaScenePath=_mediaScenePath - In the implementation block
-(void)setMediaScenePath:(SCD_Struct_SC329)arg1 ;
-(SCD_Struct_SC329)mediaScenePath;
-(SCGalleryOperaMediaManager *)mediaManager;
-(void)setMediaManager:(SCGalleryOperaMediaManager *)arg1 ;
-(void)setCurrentViewModel:(SCOperaViewModel *)arg1 ;
-(SCOperaViewModel *)currentViewModel;
-(id)resolveGallerySnapWithPageId:(id)arg1 ;
-(void)buildViewModels;
-(void)prepareToViewPageWithPageId:(id)arg1 ;
-(void)removeMediaWithPageId:(id)arg1 ;
-(void)startToBrowsePageWithPageId:(id)arg1 distanceToCurrentDataSource:(long long)arg2 ;
-(void)manualFetchHDMediaWithPageId:(id)arg1 ;
-(void)handleMoveToNextEventAtPageId:(id)arg1 didTapToNext:(BOOL)arg2 ;
-(void)attemptToAttachPresentationFrame:(id)arg1 toPageId:(id)arg2 ;
-(NSString *)singleDataSourceId;
-(id)initWithItem:(id)arg1 userSession:(id)arg2 ;
-(void)_unobservePHAssetChanges;
-(void)_observePHAssetChanges;
-(void)_appendMediaLoadedProperties:(id)arg1 ;
-(void)_removeAllMediaLoadedProperties;
-(void)_reloadMediaContent:(id)arg1 ;
-(void)setDelegate:(id<SCGallerySingleItemOperaDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(id<SCGallerySingleItemOperaDataSourceDelegate>)delegate;
@end

