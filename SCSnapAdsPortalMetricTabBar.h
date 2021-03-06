/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol SCSnapAdsPortalMetricTabBarDelegate;
@class UIColor, SCGalleryTabBarCollectionViewLayout, UICollectionView, UIView, UITapGestureRecognizer, NSMutableArray, NSArray, NSString;

@interface SCSnapAdsPortalMetricTabBar : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {

	UIColor* _normalStateColor;
	UIColor* _highlightedStateColor;
	SCGalleryTabBarCollectionViewLayout* _collectionViewLayout;
	UICollectionView* _collectionView;
	UIView* _highlightedIndicatorView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	NSMutableArray* _highlightedIndicatorViewWidthArray;
	id<SCSnapAdsPortalMetricTabBarDelegate> _delegate;
	NSArray* _items;
	unsigned long long _highlightedItemIndex;

}

@property (assign,nonatomic,__weak) id<SCSnapAdsPortalMetricTabBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * items;                                                        //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) unsigned long long highlightedItemIndex;                              //@synthesize highlightedItemIndex=_highlightedItemIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHighlightedItemIndex:(unsigned long long)arg1 ;
-(void)_updateHighlightLevelForVisibleItems;
-(void)_updateHighlightedIndicatorView;
-(unsigned long long)highlightedItemIndex;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SCSnapAdsPortalMetricTabBarDelegate>)arg1 ;
-(id<SCSnapAdsPortalMetricTabBarDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(CGRect)_frameForItemAtIndex:(long long)arg1 ;
@end

