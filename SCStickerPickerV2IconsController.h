/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol SCStickerPickerV2IconsControllerDelegate, SCStickerPickerV2IconsDataSource;
@class NSIndexPath, UIView, UICollectionViewLayout, UICollectionView, NSString;

@interface SCStickerPickerV2IconsController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate> {

	NSIndexPath* _selectedCategoryIndex;
	UIView* _highlightedSuperCategoryIndicatorView;
	UICollectionViewLayout* _superIconsCollectionViewLayout;
	long long _lastSelectedSubCategoryIndex;
	UICollectionView* _superIconsCollectionView;
	id<SCStickerPickerV2IconsControllerDelegate> _delegate;
	id<SCStickerPickerV2IconsDataSource> _dataSource;

}

@property (retain) UICollectionView * superIconsCollectionView;                                   //@synthesize superIconsCollectionView=_superIconsCollectionView - In the implementation block
@property (retain) id<SCStickerPickerV2IconsControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCStickerPickerV2IconsDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UICollectionView *)superIconsCollectionView;
-(void)setSuperCategoryHighlightedItemIndex:(double)arg1 ;
-(id)_categoryIconCellAccessibilityIdentifierFromIndexPath:(long long)arg1 ;
-(void)setSuperIconsCollectionView:(UICollectionView *)arg1 ;
-(void)_handleSuperIconTap:(id)arg1 ;
-(CGRect)_frameForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 ;
-(id)_getHighlightedIndicatorProperties:(id)arg1 withHighlightedItemIndex:(double)arg2 ;
-(void)_updateHighlightedIndicatorView:(id)arg1 withIndicatorView:(id)arg2 withHighlightedItemIndex:(double)arg3 withIconSize:(double)arg4 withIndicatorOffset:(double)arg5 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataSource:(id<SCStickerPickerV2IconsDataSource>)arg1 ;
-(void)setDelegate:(id<SCStickerPickerV2IconsControllerDelegate>)arg1 ;
-(id<SCStickerPickerV2IconsDataSource>)dataSource;
-(id<SCStickerPickerV2IconsControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(void)setSelectedIndex:(id)arg1 ;
@end

