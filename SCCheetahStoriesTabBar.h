/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <Snapchat/SCCheetahStoriesTabBarCollectionViewLayoutDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Snapchat/SCSearchTabBar.h>

@protocol SCSearchTabBarDelegate;
@class UICollectionView, SCCheetahStoriesTabBarCollectionViewLayout, UIView, NSArray, NSString;

@interface SCCheetahStoriesTabBar : UIView <SCCheetahStoriesTabBarCollectionViewLayoutDelegate, UICollectionViewDelegate, UICollectionViewDataSource, SCSearchTabBar> {

	UICollectionView* _tabCollectionView;
	SCCheetahStoriesTabBarCollectionViewLayout* _collectionViewLayout;
	UIView* _highlightedUnderlineView;
	double _tabBarPreferredHeight;
	long long _selectedIndex;
	NSArray* _tabBarItems;
	id<SCSearchTabBarDelegate> _tabBarDelegate;
	double _selectedIndexWithOffsetRatio;
	long long _interfaceStyle;
	UIView* _actionButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCSearchTabBarDelegate> tabBarDelegate;              //@synthesize tabBarDelegate=_tabBarDelegate - In the implementation block
@property (nonatomic,copy) NSArray * tabBarItems;                                           //@synthesize tabBarItems=_tabBarItems - In the implementation block
@property (assign,nonatomic) double selectedIndexWithOffsetRatio;                           //@synthesize selectedIndexWithOffsetRatio=_selectedIndexWithOffsetRatio - In the implementation block
@property (assign,nonatomic) long long interfaceStyle;                                      //@synthesize interfaceStyle=_interfaceStyle - In the implementation block
@property (nonatomic,retain) UIView * actionButton;                                         //@synthesize actionButton=_actionButton - In the implementation block
-(void)setSelectedIndexWithOffsetRatio:(double)arg1 ;
-(void)setTabBarDelegate:(id<SCSearchTabBarDelegate>)arg1 ;
-(void)setSelectedIndexWithOffsetRatio:(double)arg1 animated:(BOOL)arg2 ;
-(CGSize)storiesTabBarCollectionViewLayout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(id<SCSearchTabBarDelegate>)tabBarDelegate;
-(double)selectedIndexWithOffsetRatio;
-(long long)interfaceStyle;
-(void)setInterfaceStyle:(long long)arg1 ;
-(void)_updateHighlightedUnderlineView:(double)arg1 ;
-(long long)selectedIndex:(id)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setTabBarItems:(NSArray *)arg1 ;
-(NSArray *)tabBarItems;
-(void)setActionButton:(UIView *)arg1 ;
-(UIView *)actionButton;
-(CGRect)_frameForItemAtIndex:(long long)arg1 ;
@end
