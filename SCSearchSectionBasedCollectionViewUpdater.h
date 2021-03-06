/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSearchCollectionViewSectionDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Snapchat/SCTimeProfilable.h>
#import <Snapchat/SCSearchCollectionViewSectionSupplementaryViewProviderDelegate.h>
#import <Snapchat/SCSearchSectionBasedCollectionViewLayoutDelegate.h>

@protocol SCSearchSectionBasedCollectionViewUpdaterDelegate, UICollectionViewDelegate;
@class UICollectionView, NSArray, NSMutableSet, SCSearchGCDBlockTimer, NSDictionary, NSString;

@interface SCSearchSectionBasedCollectionViewUpdater : NSObject <SCSearchCollectionViewSectionDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SCTimeProfilable, SCSearchCollectionViewSectionSupplementaryViewProviderDelegate, SCSearchSectionBasedCollectionViewLayoutDelegate> {

	UICollectionView* _collectionView;
	NSArray* _pendingSections;
	BOOL _isPendingUpdateAnimated;
	NSMutableSet* _mutableLoadingSectionIndex;
	SCSearchGCDBlockTimer* _collectionViewUpdateTimer;
	CGPoint _lastOffset;
	double _lastOriginCaptureTime;
	double _scrollVelocity;
	CGSize _contentSize;
	NSDictionary* _layoutAttributesByIndexPath;
	NSDictionary* _supplementaryAttributesByIndexPath;
	BOOL _isUpdating;
	id<SCSearchSectionBasedCollectionViewUpdaterDelegate> _delegate;
	id<UICollectionViewDelegate> _collectionViewDelegate;
	NSArray* _sections;

}

@property (assign,nonatomic,__weak) id<SCSearchSectionBasedCollectionViewUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<UICollectionViewDelegate> collectionViewDelegate;                         //@synthesize collectionViewDelegate=_collectionViewDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sections;                                                          //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) BOOL isUpdating;                                                                  //@synthesize isUpdating=_isUpdating - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)context;
-(void)setCollectionViewDelegate:(id<UICollectionViewDelegate>)arg1 ;
-(id<UICollectionViewDelegate>)collectionViewDelegate;
-(void)_tearDownSections:(id)arg1 ;
-(void)_applySectionWithConfigurations:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateCollectionViewIfNeeded;
-(BOOL)_shouldUpdateLayout;
-(void)_prepareLayoutUpdate;
-(void)_updateResultCollectionViewLayoutInteractively;
-(void)_updateResultCollectionViewLayout;
-(void)_setIsUpdating:(BOOL)arg1 ;
-(void)_forceUpdateCollectionViewAnimated:(BOOL)arg1 ;
-(void)_updateCollectionViewWithSections:(id)arg1 animated:(BOOL)arg2 ;
-(void)_invalidateResultCollectionViewLayout;
-(void)_handleUpdateLayoutCompletionWithFinished:(BOOL)arg1 ;
-(void)_handleCollectionViewUpdateWithSections:(id)arg1 insertSectionsIndexSet:(id)arg2 deleteSectionsIndexSet:(id)arg3 reloadSectionsIndexSet:(id)arg4 insertItemsIndexPaths:(id)arg5 deleteItemsIndexPaths:(id)arg6 reloadItemsIndexPaths:(id)arg7 ;
-(void)_handleResultsCollectionViewUpdateCompletionWithFinished:(BOOL)arg1 ;
-(void)_setUpSections:(id)arg1 ;
-(void)_applyConfigurationsForSectionWithConfigurations:(id)arg1 ;
-(void)searchResultSection:(id)arg1 reloadCellsAtIndexesIfNeeded:(id)arg2 ;
-(void)searchResultSection:(id)arg1 didUpdateLayoutWithInteraction:(BOOL)arg2 ;
-(CGSize)collectionViewBoundsSizeForSearchResultSection:(id)arg1 ;
-(void)collectionViewSection:(id)arg1 scrollToItemAtIndexInSection:(unsigned long long)arg2 scrollPosition:(unsigned long long)arg3 animated:(BOOL)arg4 ;
-(id)presentingViewControllerForCollectionViewSection:(id)arg1 ;
-(id)sectionSupplementaryViewProvider:(id)arg1 dequeueSupplementaryElementOfKind:(id)arg2 withReuseIdentifier:(id)arg3 atIndexInSection:(unsigned long long)arg4 ;
-(id)sectionSupplementaryViewProvider:(id)arg1 supplementaryViewOfElementKind:(id)arg2 atIndexInSection:(unsigned long long)arg3 ;
-(void)setSectionWithConfigurations:(id)arg1 animated:(BOOL)arg2 ;
-(id)collectionViewSection:(id)arg1 dequeueSupplementaryViewOfElementKind:(id)arg2 withReuseIdentifier:(id)arg3 forIndexInSection:(unsigned long long)arg4 ;
-(id)searchResultSection:(id)arg1 dequeueReusableCellWithReuseIdentifier:(id)arg2 forIndexInSection:(unsigned long long)arg3 ;
-(id)searchResultSection:(id)arg1 cellForItemAtIndexInSection:(unsigned long long)arg2 ;
-(void)searchResultSectionUpdateIfNeeded:(id)arg1 ;
-(UIEdgeInsets)sectionInsetsForCollectionViewSection:(id)arg1 ;
-(id)searchResultSection:(id)arg1 indexPathForCell:(id)arg2 ;
-(void)setDelegate:(id<SCSearchSectionBasedCollectionViewUpdaterDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<SCSearchSectionBasedCollectionViewUpdaterDelegate>)delegate;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(NSArray *)sections;
-(BOOL)isUpdating;
-(id)initWithCollectionView:(id)arg1 ;
-(void)prepareLayout:(id)arg1 ;
@end

