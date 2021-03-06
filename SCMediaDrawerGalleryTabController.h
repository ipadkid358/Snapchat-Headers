/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:26 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Snapchat/SCGalleryCollectionViewSelectionHelperDataSource.h>
#import <Snapchat/SCGalleryCollectionViewSelectionHelperDelegate.h>
#import <Snapchat/SCMergedGalleryDataSourceListener.h>
#import <Snapchat/SCMediaDrawerTabController.h>

@protocol SCMediaDrawerTabControllerDelegate;
@class SCUserSession, NSArray, NSMutableDictionary, UICollectionView, SCGalleryCollectionViewSelectionHelper, UIPanGestureRecognizer, UIView, NSString, UIScrollView;

@interface SCMediaDrawerGalleryTabController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, SCGalleryCollectionViewSelectionHelperDataSource, SCGalleryCollectionViewSelectionHelperDelegate, SCMergedGalleryDataSourceListener, SCMediaDrawerTabController> {

	SCUserSession* _userSession;
	NSArray* _publicSnapEntries;
	NSMutableDictionary* _entryIdToCGSizeValueInPoints;
	UICollectionView* _collectionView;
	SCGalleryCollectionViewSelectionHelper* _selectHelper;
	UIPanGestureRecognizer* _panGesture;
	BOOL _isClosingDrawer;
	UIView* _view;
	id<SCMediaDrawerTabControllerDelegate> _delegate;
	double _topMargin;
	double _bottomMargin;

}

@property (assign,nonatomic) double topMargin;                                                    //@synthesize topMargin=_topMargin - In the implementation block
@property (assign,nonatomic) double bottomMargin;                                                 //@synthesize bottomMargin=_bottomMargin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCMediaDrawerTabControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long itemType; 
@property (nonatomic,readonly) UIView * view;                                                     //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView; 
-(void)scrollToPercent:(double)arg1 ;
-(id)initWithUserSession:(id)arg1 delegate:(id)arg2 ;
-(void)_handlerDownPan:(id)arg1 ;
-(void)_animate:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)itemsInScrollViewRect:(CGRect)arg1 ;
-(void)animateSelectingDrawerItem:(id)arg1 ;
-(void)animateDeselectDrawerItem:(id)arg1 isDeselectingLastItem:(BOOL)arg2 ;
-(void)animateDeselectAll;
-(void)updateScrollViewWithTopMargin:(double)arg1 deltaContentOffset:(double)arg2 animated:(BOOL)arg3 ;
-(void)scrollToTopWithTopMargin:(double)arg1 ;
-(void)scrollToDrawerItem:(id)arg1 ;
-(void)tabCellWillDisplay;
-(void)didFocusOnTab;
-(CGSize)_sizeInPointsForItemAtIndexPathWithVerticalLayout:(id)arg1 ;
-(id)galleryCollectionViewSelectionHelper:(id)arg1 galleryItemAtIndexPath:(id)arg2 ;
-(id)galleryCollectionViewSelectionHelper:(id)arg1 snapsAtIndexPath:(id)arg2 ;
-(BOOL)galleryCollectionViewSelectionHelper:(id)arg1 isItemInteractionEnabledAtIndexPath:(id)arg2 ;
-(BOOL)galleryCollectionViewSelectionHelper:(id)arg1 shouldChangeSelectionMode:(unsigned long long)arg2 atIndexPath:(id)arg3 ;
-(void)galleryCollectionViewSelectionHelper:(id)arg1 didChangeSelectionMode:(unsigned long long)arg2 atIndexPath:(id)arg3 ;
-(void)galleryCollectionViewSelectionHelper:(id)arg1 didTapItemAtIndexPath:(id)arg2 selectionMode:(unsigned long long)arg3 ;
-(void)galleryCollectionViewSelectionHelper:(id)arg1 handleLongPress:(id)arg2 itemAtIndexPath:(id)arg3 selectionMode:(unsigned long long)arg4 ;
-(BOOL)galleryCollectionViewIsFullyVisible:(id)arg1 ;
-(void)dataSource:(id)arg1 didChangeEntries:(id)arg2 failedEntries:(id)arg3 fetchEntryError:(id)arg4 ;
-(void)dataSource:(id)arg1 didChangeEntriesWithNewContentAvailable:(id)arg2 ;
-(unsigned long long)galleryEntryCount;
-(void)setDelegate:(id<SCMediaDrawerTabControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<SCMediaDrawerTabControllerDelegate>)delegate;
-(UIView *)view;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(double)topMargin;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIScrollView *)scrollView;
-(long long)itemType;
-(double)bottomMargin;
-(void)setTopMargin:(double)arg1 ;
-(void)setBottomMargin:(double)arg1 ;
@end

