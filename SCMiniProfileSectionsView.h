/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class NSMutableArray, UICollectionView, NSArray, NSString;

@interface SCMiniProfileSectionsView : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {

	NSMutableArray* _sectionControllers;
	long long _cellStyle;
	BOOL _centersContent;
	BOOL _centerFirstSection;
	UICollectionView* _collectionView;

}

@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) BOOL centerFirstSection;                        //@synthesize centerFirstSection=_centerFirstSection - In the implementation block
@property (nonatomic,copy) NSArray * sectionControllers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sectionControllerForSection:(long long)arg1 ;
-(NSArray *)sectionControllers;
-(void)setSectionControllers:(NSArray *)arg1 ;
-(void)reloadAllSections;
-(void)reloadSection:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 cellStyle:(long long)arg2 centersContent:(BOOL)arg3 ;
-(void)_reloadContentInsetAnimated:(BOOL)arg1 ;
-(BOOL)centerFirstSection;
-(void)reloadSections:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCenterFirstSection:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)topInset;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)_reloadData;
-(double)contentHeight;
-(CGRect)frameForCellAtIndexPath:(id)arg1 ;
-(CGRect)contentFrame;
@end

