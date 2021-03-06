/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@protocol SCCheetahStoriesTabBarCollectionViewLayoutDelegate;
@class NSArray;

@interface SCCheetahStoriesTabBarCollectionViewLayout : UICollectionViewLayout {

	NSArray* _itemOriginXs;
	NSArray* _layoutAttributes;
	NSArray* _itemSizeValues;
	CGSize _contentSize;
	BOOL _needsRebuildLayoutAttributes;
	CGRect _lastLayoutBounds;
	id<SCCheetahStoriesTabBarCollectionViewLayoutDelegate> _delegate;
	double _minimumInteritemSpacing;
	double _contentInsetLeft;
	long long _tabBarStyleType;

}

@property (assign,nonatomic,__weak) id<SCCheetahStoriesTabBarCollectionViewLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double minimumInteritemSpacing;                                                      //@synthesize minimumInteritemSpacing=_minimumInteritemSpacing - In the implementation block
@property (assign,nonatomic) double contentInsetLeft;                                                             //@synthesize contentInsetLeft=_contentInsetLeft - In the implementation block
@property (assign,nonatomic) long long tabBarStyleType;                                                           //@synthesize tabBarStyleType=_tabBarStyleType - In the implementation block
-(void)_buildLayoutAttributes;
-(void)_updateSelectionEffect;
-(void)setTabBarStyleType:(long long)arg1 ;
-(double)offsetXForSelectedIndexWithOffsetRatio:(double)arg1 ;
-(double)indexWithOffsetForOffsetX:(double)arg1 ;
-(long long)tabBarStyleType;
-(id)_contentOffsetXForItems;
-(BOOL)_underlineStyleTypeNeedToUpdateOffset;
-(void)setDelegate:(id<SCCheetahStoriesTabBarCollectionViewLayoutDelegate>)arg1 ;
-(id<SCCheetahStoriesTabBarCollectionViewLayoutDelegate>)delegate;
-(void)setMinimumInteritemSpacing:(double)arg1 ;
-(double)minimumInteritemSpacing;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)setContentInsetLeft:(double)arg1 ;
-(double)contentInsetLeft;
@end

