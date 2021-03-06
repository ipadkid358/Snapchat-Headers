/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGalleryLeftSwipableViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Snapchat/SCGalleryImportCameraRollSectionHeaderDelegate.h>
#import <Snapchat/SCProgressOverlayViewDelegate.h>
#import <Snapchat/SCTimeProfilable.h>

@protocol SCGalleryImportCameraRollViewControllerDelegate;
@class SCUserSession, SCGalleryImportCameraRollViewControllerConfiguration, UIActivityIndicatorView, UIView, UICollectionView, UILabel, SCMemoriesRoundButton, NSNumberFormatter, SCProgressOverlayView, PHCachingImageManager, SCGalleryImportCameraRollAssetItemsFetcher, SCGalleryImportCameraRollAssetItemsImporter, NSArray, NSString;

@interface SCGalleryImportCameraRollViewController : SCGalleryLeftSwipableViewController <UICollectionViewDataSource, UICollectionViewDelegate, SCGalleryImportCameraRollSectionHeaderDelegate, SCProgressOverlayViewDelegate, SCTimeProfilable> {

	SCUserSession* _userSession;
	SCGalleryImportCameraRollViewControllerConfiguration* _configuration;
	UIActivityIndicatorView* _loadingView;
	UIView* _headerView;
	UIView* _importStateContainerView;
	UIView* _completeStateContainerView;
	UICollectionView* _collectionView;
	UILabel* _infoLabel;
	SCMemoriesRoundButton* _importSnapsButton;
	NSNumberFormatter* _importSnapsButtonNumberFormatter;
	SCProgressOverlayView* _progressOverlayView;
	unsigned long long _toggleButtonState;
	PHCachingImageManager* _imageManager;
	SCGalleryImportCameraRollAssetItemsFetcher* _assetItemsFetcher;
	SCGalleryImportCameraRollAssetItemsImporter* _assetItemsImporter;
	NSArray* _assetItems;
	id<SCGalleryImportCameraRollViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCGalleryImportCameraRollViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)context;
-(void)statusBarTapped;
-(BOOL)shouldDisplayStatusBar;
-(BOOL)disableLeftSwipe;
-(id)pageName;
-(BOOL)shouldPopToRootViewController;
-(BOOL)shouldPopToRootViewControllerLater;
-(BOOL)_isProcessing;
-(void)progressOverlayViewDidCancel:(id)arg1 ;
-(void)_hideLoadingView;
-(void)_didPressBackButton;
-(void)galleryImportCameraRollSectionHeaderDidPressToggleAllButton:(id)arg1 ;
-(void)_fetch;
-(void)_updateImportSnapsButton;
-(void)_selectAllEligibleAssetItems;
-(void)_deselectAllSelectedAssetItems;
-(void)_loadHeaderViewForContainerView:(id)arg1 ;
-(void)_didPressImportButton;
-(id)_allSelectedAssetItems;
-(void)_importAssetItems:(id)arg1 ;
-(void)_loadImportStateViewsIfNeeded;
-(void)_completeFetchWithAssetItems:(id)arg1 ;
-(void)_loadCompleteStateViewsIfNeeded;
-(void)_cancelImportWithImportedAssetItems:(id)arg1 notImportedAssetItems:(id)arg2 ;
-(void)_completeImportWithImportedAssetItems:(id)arg1 ;
-(void)_unloadImportStateViewsIfNeeded;
-(id)initWithUserSession:(id)arg1 configuration:(id)arg2 ;
-(void)_unloadCompleteStateViewsIfNeeded;
-(void)_notifyDidFinishWithDelay;
-(void)setDelegate:(id<SCGalleryImportCameraRollViewControllerDelegate>)arg1 ;
-(id<SCGalleryImportCameraRollViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLoad;
-(void)_showLoadingView;
@end

