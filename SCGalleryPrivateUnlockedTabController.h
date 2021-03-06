/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCGalleryPrivateGalleryManagerListener.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Snapchat/SCGalleryCollectionViewHelperDataSource.h>
#import <Snapchat/SCGalleryCollectionViewSelectionHelperDataSource.h>
#import <Snapchat/SCGalleryCollectionViewSelectionHelperDelegate.h>
#import <Snapchat/SCTimeProfilable.h>
#import <Snapchat/SCGalleryEntryViewCellDelegate.h>
#import <Snapchat/SCGalleryTabController.h>

@protocol SCGalleryTabControllerDelegate;
@class SCGalleryDebugSyncStatusChecker, NSArray, UIView, SCGalleryTabCollectionView, SCGalleryCollectionViewHelper, SCGalleryCollectionViewSelectionHelper, SCGalleryTabCollectionViewFlowLayout, SCGalleryCollectionViewLayoutCalculator, SCGalleryPrivateTabUnlockedEmptyStateController, NSMutableArray, NSHashTable, SCUserSession, UIViewController, SCGalleryTabsConfiguration, NSString;

@interface SCGalleryPrivateUnlockedTabController : NSObject <SCGalleryPrivateGalleryManagerListener, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, SCGalleryCollectionViewHelperDataSource, SCGalleryCollectionViewSelectionHelperDataSource, SCGalleryCollectionViewSelectionHelperDelegate, SCTimeProfilable, SCGalleryEntryViewCellDelegate, SCGalleryTabController> {

	SCGalleryDebugSyncStatusChecker* _debugSyncStatusChecker;
	BOOL _didReceiveData;
	NSArray* _galleryEntriesToDisplay;
	NSArray* _displayedGalleryEntries;
	UIView* _view;
	SCGalleryTabCollectionView* _collectionView;
	SCGalleryCollectionViewHelper* _collectionViewHelper;
	SCGalleryCollectionViewSelectionHelper* _collectionViewSelectionHelper;
	SCGalleryTabCollectionViewFlowLayout* _collectionViewLayout;
	SCGalleryCollectionViewLayoutCalculator* _nonuniformCollectionViewLayoutCalculator;
	SCGalleryPrivateTabUnlockedEmptyStateController* _emptyStateController;
	double _lastNotifiedScrollContentOffset;
	NSMutableArray* _scrollingAnimationCompletionBlocks;
	NSHashTable* _referencedEntryCells;
	BOOL _visible;
	BOOL _focused;
	BOOL _loading;
	BOOL _showsImportFromCameraRollView;
	unsigned long long _selectMode;
	id<SCGalleryTabControllerDelegate> _delegate;
	unsigned long long _tabType;
	SCUserSession* _userSession;
	UIViewController* _containerViewController;
	SCGalleryTabsConfiguration* _configuration;
	NSArray* _allGalleryEntries;
	UIEdgeInsets _scrollContentInset;

}

@property (nonatomic,readonly) SCUserSession * userSession;                                    //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * containerViewController;              //@synthesize containerViewController=_containerViewController - In the implementation block
@property (nonatomic,readonly) SCGalleryTabsConfiguration * configuration;                     //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allGalleryEntries;                               //@synthesize allGalleryEntries=_allGalleryEntries - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long tabType;                                     //@synthesize tabType=_tabType - In the implementation block
@property (assign,nonatomic) UIEdgeInsets scrollContentInset;                                  //@synthesize scrollContentInset=_scrollContentInset - In the implementation block
@property (assign,nonatomic) double scrollContentOffset; 
@property (assign,nonatomic) double scrollContentDistanceToTop; 
@property (assign,nonatomic) BOOL visible;                                                     //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) BOOL focused;                                                     //@synthesize focused=_focused - In the implementation block
@property (assign,nonatomic) BOOL loading;                                                     //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) unsigned long long selectMode;                                    //@synthesize selectMode=_selectMode - In the implementation block
@property (assign,nonatomic) BOOL showsImportFromCameraRollView;                               //@synthesize showsImportFromCameraRollView=_showsImportFromCameraRollView - In the implementation block
@property (assign,nonatomic,__weak) id<SCGalleryTabControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
+(int)context;
-(unsigned long long)tabType;
-(id)galleryCollectionViewSelectionHelper:(id)arg1 galleryItemAtIndexPath:(id)arg2 ;
-(id)galleryCollectionViewSelectionHelper:(id)arg1 snapsAtIndexPath:(id)arg2 ;
-(BOOL)galleryCollectionViewSelectionHelper:(id)arg1 isItemInteractionEnabledAtIndexPath:(id)arg2 ;
-(BOOL)galleryCollectionViewSelectionHelper:(id)arg1 shouldChangeSelectionMode:(unsigned long long)arg2 atIndexPath:(id)arg3 ;
-(void)galleryCollectionViewSelectionHelper:(id)arg1 didChangeSelectionMode:(unsigned long long)arg2 atIndexPath:(id)arg3 ;
-(void)galleryCollectionViewSelectionHelper:(id)arg1 didTapItemAtIndexPath:(id)arg2 selectionMode:(unsigned long long)arg3 ;
-(void)galleryCollectionViewSelectionHelper:(id)arg1 handleLongPress:(id)arg2 itemAtIndexPath:(id)arg3 selectionMode:(unsigned long long)arg4 ;
-(BOOL)galleryCollectionViewIsFullyVisible:(id)arg1 ;
-(void)setSelectMode:(unsigned long long)arg1 ;
-(void)galleryEntryViewCell:(id)arg1 shouldDeselectForEntry:(id)arg2 ;
-(unsigned long long)selectMode;
-(id)selectedGallerySnaps;
-(id)selectedGalleryItems;
-(id)galleryCollectionViewHelper:(id)arg1 itemAtIndexPath:(id)arg2 ;
-(void)operaPresenterDidDismiss:(id)arg1 item:(id)arg2 ;
-(double)scrollContentOffset;
-(double)scrollContentDistanceToTop;
-(void)galleryViewWillAppear;
-(void)galleryViewDidDisappear;
-(void)setScrollContentOffset:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)privateGalleryManagerDidUpdatePassphrase:(id)arg1 ;
-(void)privateGalleryManagerDidSetup:(id)arg1 ;
-(void)privateGalleryManagerDidLock:(id)arg1 ;
-(void)privateGalleryManagerDidUnlock:(id)arg1 ;
-(void)_updateWithScrollContentInset;
-(void)setScrollContentDistanceToTop:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_notifyScrollContentOffsetChange;
-(id)initWithUserSession:(id)arg1 containerViewController:(id)arg2 configuration:(id)arg3 delegate:(id)arg4 tabType:(unsigned long long)arg5 ;
-(id)indexPathForItem:(id)arg1 isFeatured:(BOOL)arg2 ;
-(void)changeSelectionMode:(unsigned long long)arg1 forGalleryItem:(id)arg2 ;
-(void)changeSelectionMode:(unsigned long long)arg1 forGallerySnap:(id)arg2 ;
-(void)scrollToGalleryItem:(id)arg1 animated:(BOOL)arg2 ;
-(double)scrollBarTopOffset;
-(unsigned long long)currentMediaScenePathComponent;
-(BOOL)shouldAlignInitialScrollContentDistanceToTopOfOtherTabControllerToThisTabController;
-(BOOL)shouldAlignInitialScrollContentDistanceToTopOfThisTabControllerToOtherTabController;
-(UIEdgeInsets)scrollContentInset;
-(void)setScrollContentInset:(UIEdgeInsets)arg1 ;
-(void)setScrollContentOffset:(double)arg1 ;
-(void)setScrollContentDistanceToTop:(double)arg1 ;
-(BOOL)showsImportFromCameraRollView;
-(void)setShowsImportFromCameraRollView:(BOOL)arg1 ;
-(NSArray *)allGalleryEntries;
-(UIEdgeInsets)_collectionViewLayoutSectionInset;
-(void)_updateDisplayedGalleryEntries;
-(void)_notifyDisplayedContentDidChange;
-(void)setDelegate:(id<SCGalleryTabControllerDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isDragging;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<SCGalleryTabControllerDelegate>)delegate;
-(id)view;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)isViewLoaded;
-(BOOL)visible;
-(BOOL)isTracking;
-(BOOL)isEditing;
-(id)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setVisible:(BOOL)arg1 ;
-(void)endEditing;
-(void)loadViewIfNeeded;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(SCGalleryTabsConfiguration *)configuration;
-(id)itemsInRect:(CGRect)arg1 ;
-(SCUserSession *)userSession;
-(BOOL)loading;
-(void)setFocused:(BOOL)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(id)allItems;
-(UIViewController *)containerViewController;
-(void)updateWithData:(id)arg1 ;
-(BOOL)focused;
-(BOOL)isPrivate;
-(BOOL)shouldDisplay;
@end

