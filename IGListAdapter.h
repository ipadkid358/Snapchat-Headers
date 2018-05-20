/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Snapchat/IGListCollectionContext.h>
#import <Snapchat/IGListBatchContext.h>

@protocol IGListAdapterDataSource, IGListAdapterDelegate, UICollectionViewDelegate, UIScrollViewDelegate, IGListUpdatingDelegate;
@class UICollectionView, NSMapTable, UIViewController, IGListSectionMap, IGListDisplayHandler, IGListWorkingRangeHandler, IGListAdapterProxy, UIView, NSMutableSet, NSString;

@interface IGListAdapter : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGListCollectionContext, IGListBatchContext> {

	UICollectionView* _collectionView;
	BOOL _isDequeuingCell;
	BOOL _isSendingWorkingRangeDisplayUpdates;
	NSMapTable* _viewSectionControllerMap;
	BOOL _isInUpdateBlock;
	UIViewController* _viewController;
	id<IGListAdapterDataSource> _dataSource;
	id<IGListAdapterDelegate> _delegate;
	id<UICollectionViewDelegate> _collectionViewDelegate;
	id<UIScrollViewDelegate> _scrollViewDelegate;
	id<IGListUpdatingDelegate> _updater;
	long long _experiments;
	IGListSectionMap* _sectionMap;
	IGListDisplayHandler* _displayHandler;
	IGListWorkingRangeHandler* _workingRangeHandler;
	IGListAdapterProxy* _delegateProxy;
	UIView* _emptyBackgroundView;
	IGListSectionMap* _previousSectionMap;
	NSMutableSet* _registeredCellClasses;
	NSMutableSet* _registeredNibNames;
	NSMutableSet* _registeredSupplementaryViewIdentifiers;
	NSMutableSet* _registeredSupplementaryViewNibNames;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<IGListUpdatingDelegate> updater;                                      //@synthesize updater=_updater - In the implementation block
@property (nonatomic,readonly) IGListSectionMap * sectionMap;                                         //@synthesize sectionMap=_sectionMap - In the implementation block
@property (nonatomic,readonly) IGListDisplayHandler * displayHandler;                                 //@synthesize displayHandler=_displayHandler - In the implementation block
@property (nonatomic,readonly) IGListWorkingRangeHandler * workingRangeHandler;                       //@synthesize workingRangeHandler=_workingRangeHandler - In the implementation block
@property (nonatomic,retain) IGListAdapterProxy * delegateProxy;                                      //@synthesize delegateProxy=_delegateProxy - In the implementation block
@property (nonatomic,retain) UIView * emptyBackgroundView;                                            //@synthesize emptyBackgroundView=_emptyBackgroundView - In the implementation block
@property (assign,nonatomic) BOOL isInUpdateBlock;                                                    //@synthesize isInUpdateBlock=_isInUpdateBlock - In the implementation block
@property (nonatomic,retain) IGListSectionMap * previousSectionMap;                                   //@synthesize previousSectionMap=_previousSectionMap - In the implementation block
@property (nonatomic,retain) NSMutableSet * registeredCellClasses;                                    //@synthesize registeredCellClasses=_registeredCellClasses - In the implementation block
@property (nonatomic,retain) NSMutableSet * registeredNibNames;                                       //@synthesize registeredNibNames=_registeredNibNames - In the implementation block
@property (nonatomic,retain) NSMutableSet * registeredSupplementaryViewIdentifiers;                   //@synthesize registeredSupplementaryViewIdentifiers=_registeredSupplementaryViewIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableSet * registeredSupplementaryViewNibNames;                      //@synthesize registeredSupplementaryViewNibNames=_registeredSupplementaryViewNibNames - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                                //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * collectionView; 
@property (assign,nonatomic,__weak) id<IGListAdapterDataSource> dataSource;                           //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGListAdapterDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<UICollectionViewDelegate> collectionViewDelegate;              //@synthesize collectionViewDelegate=_collectionViewDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> scrollViewDelegate;                      //@synthesize scrollViewDelegate=_scrollViewDelegate - In the implementation block
@property (assign,nonatomic) long long experiments;                                                   //@synthesize experiments=_experiments - In the implementation block
@property (nonatomic,readonly) CGSize containerSize; 
@property (nonatomic,readonly) UIEdgeInsets containerInset; 
@property (nonatomic,readonly) CGSize insetContainerSize; 
-(id)debugDescriptionLines;
-(id)sectionControllerForObject:(id)arg1 ;
-(long long)sectionForSectionController:(id)arg1 ;
-(long long)sectionForObject:(id)arg1 ;
-(id)sectionControllerForSection:(long long)arg1 ;
-(IGListSectionMap *)sectionMap;
-(id)initWithUpdater:(id)arg1 viewController:(id)arg2 workingRangeSize:(long long)arg3 ;
-(void)updateCollectionViewDelegate;
-(void)updateAfterPublicSettingsChange;
-(void)createProxyAndUpdateCollectionViewDelegate;
-(void)updateObjects:(id)arg1 dataSource:(id)arg2 ;
-(id)layoutAttributesForIndexPath:(id)arg1 supplementaryKinds:(id)arg2 ;
-(void)setPreviousSectionMap:(IGListSectionMap *)arg1 ;
-(id)sectionMapUsingPreviousIfInUpdateBlock:(BOOL)arg1 ;
-(id)sectionControllerForView:(id)arg1 ;
-(id)objectAtSection:(long long)arg1 ;
-(id)supplementaryViewSourceAtIndexPath:(id)arg1 ;
-(void)updateBackgroundViewShouldHide:(BOOL)arg1 ;
-(BOOL)isInUpdateBlock;
-(IGListSectionMap *)previousSectionMap;
-(id)visibleSectionControllers;
-(id)indexPathForSectionController:(id)arg1 index:(long long)arg2 usePreviousIfInUpdateBlock:(BOOL)arg3 ;
-(NSMutableSet *)registeredCellClasses;
-(NSMutableSet *)registeredNibNames;
-(NSMutableSet *)registeredSupplementaryViewIdentifiers;
-(NSMutableSet *)registeredSupplementaryViewNibNames;
-(void)setIsInUpdateBlock:(BOOL)arg1 ;
-(BOOL)itemCountIsZero;
-(id)indexPathsFromSectionController:(id)arg1 indexes:(id)arg2 usePreviousIfInUpdateBlock:(BOOL)arg3 ;
-(CGSize)containerSizeForSectionController:(id)arg1 ;
-(long long)indexForCell:(id)arg1 sectionController:(id)arg2 ;
-(id)cellForItemAtIndex:(long long)arg1 sectionController:(id)arg2 ;
-(id)visibleCellsForSectionController:(id)arg1 ;
-(id)visibleIndexPathsForSectionController:(id)arg1 ;
-(void)deselectItemAtIndex:(long long)arg1 sectionController:(id)arg2 animated:(BOOL)arg3 ;
-(void)selectItemAtIndex:(long long)arg1 sectionController:(id)arg2 animated:(BOOL)arg3 scrollPosition:(unsigned long long)arg4 ;
-(id)dequeueReusableCellOfClass:(Class)arg1 forSectionController:(id)arg2 atIndex:(long long)arg3 ;
-(id)dequeueReusableCellWithNibName:(id)arg1 bundle:(id)arg2 forSectionController:(id)arg3 atIndex:(long long)arg4 ;
-(id)dequeueReusableCellFromStoryboardWithIdentifier:(id)arg1 forSectionController:(id)arg2 atIndex:(long long)arg3 ;
-(id)dequeueReusableSupplementaryViewOfKind:(id)arg1 forSectionController:(id)arg2 class:(Class)arg3 atIndex:(long long)arg4 ;
-(id)dequeueReusableSupplementaryViewFromStoryboardOfKind:(id)arg1 withIdentifier:(id)arg2 forSectionController:(id)arg3 atIndex:(long long)arg4 ;
-(id)dequeueReusableSupplementaryViewOfKind:(id)arg1 forSectionController:(id)arg2 nibName:(id)arg3 bundle:(id)arg4 atIndex:(long long)arg5 ;
-(void)invalidateLayoutForSectionController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performBatchAnimated:(BOOL)arg1 updates:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)scrollToSectionController:(id)arg1 atIndex:(long long)arg2 scrollPosition:(unsigned long long)arg3 animated:(BOOL)arg4 ;
-(UIEdgeInsets)containerInset;
-(CGSize)insetContainerSize;
-(void)reloadInSectionController:(id)arg1 atIndexes:(id)arg2 ;
-(void)insertInSectionController:(id)arg1 atIndexes:(id)arg2 ;
-(void)deleteInSectionController:(id)arg1 atIndexes:(id)arg2 ;
-(void)moveInSectionController:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3 ;
-(void)reloadSectionController:(id)arg1 ;
-(id)initWithUpdater:(id)arg1 viewController:(id)arg2 ;
-(void)setCollectionViewDelegate:(id<UICollectionViewDelegate>)arg1 ;
-(void)scrollToObject:(id)arg1 supplementaryKinds:(id)arg2 scrollDirection:(long long)arg3 scrollPosition:(unsigned long long)arg4 animated:(BOOL)arg5 ;
-(void)performUpdatesAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)reloadDataWithCompletion:(/*^block*/id)arg1 ;
-(void)reloadObjects:(id)arg1 ;
-(id)objectForSectionController:(id)arg1 ;
-(id)visibleObjects;
-(id)visibleCellsForObject:(id)arg1 ;
-(CGSize)sizeForItemAtIndexPath:(id)arg1 ;
-(CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)mapView:(id)arg1 toSectionController:(id)arg2 ;
-(void)removeMapForView:(id)arg1 ;
-(id<UICollectionViewDelegate>)collectionViewDelegate;
-(IGListDisplayHandler *)displayHandler;
-(IGListWorkingRangeHandler *)workingRangeHandler;
-(UIView *)emptyBackgroundView;
-(void)setEmptyBackgroundView:(UIView *)arg1 ;
-(void)setRegisteredCellClasses:(NSMutableSet *)arg1 ;
-(void)setRegisteredNibNames:(NSMutableSet *)arg1 ;
-(void)setRegisteredSupplementaryViewIdentifiers:(NSMutableSet *)arg1 ;
-(void)setRegisteredSupplementaryViewNibNames:(NSMutableSet *)arg1 ;
-(IGListAdapterProxy *)delegateProxy;
-(CGSize)containerSize;
-(void)setDataSource:(id<IGListAdapterDataSource>)arg1 ;
-(void)setDelegate:(id<IGListAdapterDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)debugDescription;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<IGListAdapterDataSource>)dataSource;
-(id<IGListAdapterDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id<UIScrollViewDelegate>)scrollViewDelegate;
-(void)setScrollViewDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(long long)experiments;
-(void)setExperiments:(long long)arg1 ;
-(id)objects;
-(void)setUpdater:(id<IGListUpdatingDelegate>)arg1 ;
-(id<IGListUpdatingDelegate>)updater;
-(void)setDelegateProxy:(IGListAdapterProxy *)arg1 ;
@end

