/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSearchUpdateListener.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Snapchat/SCSearchSectionBasedCollectionViewUpdaterDelegate.h>

@protocol SCPerforming;
@class UICollectionView, SCStoryManagementDataSource, NSString;

@interface SCStoryManagementSnapCollectionViewPagingController : NSObject <SCSearchUpdateListener, UICollectionViewDelegate, SCSearchSectionBasedCollectionViewUpdaterDelegate> {

	UICollectionView* _targetCollectionView;
	SCStoryManagementDataSource* _dataSource;
	double _cellWidth;
	id<SCPerforming> _dataSourceQueryPerformer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(UIEdgeInsets)sectionInsetsForSectionBasedCollectionViewUpdater:(id)arg1 ;
-(id)presentingViewControllerForSectionBasedCollectionViewUpdater:(id)arg1 ;
-(void)sectionBasedCollectionViewUpdaterWillUpdateCollectionView:(id)arg1 ;
-(void)sectionBasedCollectionViewUpdater:(id)arg1 didUpdateSectionsWithAnimationFinished:(BOOL)arg2 ;
-(void)sectionBasedCollectionViewUpdater:(id)arg1 didUpdateLayoutWithAnimationFinished:(BOOL)arg2 ;
-(void)sectionBasedCollectionViewUpdater:(id)arg1 didSetUpSections:(id)arg2 ;
-(void)sectionBasedCollectionViewUpdater:(id)arg1 didTearDownSections:(id)arg2 ;
-(void)_scrollCollectionViewBasedOnCurrentSnapCellIndex;
-(void)_scrollToSnapCellIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)_snapCellIndexAtContentOffsetX:(double)arg1 ;
-(void)_updateDataSourceBasedOnCurrentCenterSnapCell;
-(unsigned long long)_currentSnapCellIndex;
-(id)initWithCollectionView:(id)arg1 dataSource:(id)arg2 cellWidth:(double)arg3 ;
-(void)pageToSnapDataModel:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
@end

