/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Snapchat/SCProductStorePageImageSizeDelegate.h>

@protocol SCProductStorePageViewDelegate;
@class SCLoadingIndicatorView, UICollectionView, NSArray, SOJUCommerceStoreInfo, NSMutableDictionary, SCUserSession, SOJUCommerceProductInfo, NSString;

@interface SCProductStorePageView : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, SCProductStorePageImageSizeDelegate> {

	SCLoadingIndicatorView* _loadingIndicator;
	UICollectionView* _productImageCollection;
	double _collectionCellWidth;
	double _collectionCellHeight;
	NSArray* _productItems;
	SOJUCommerceStoreInfo* _storeInfo;
	NSMutableDictionary* _imageSizeDict;
	SCUserSession* _userSession;
	id<SCProductStorePageViewDelegate> _delegate;
	SOJUCommerceProductInfo* _demoProductInfo;

}

@property (assign,nonatomic,__weak) id<SCProductStorePageViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SOJUCommerceProductInfo * demoProductInfo;                       //@synthesize demoProductInfo=_demoProductInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_initView;
-(void)updateProductsWithCategory:(id)arg1 storeInfo:(id)arg2 userSession:(id)arg3 ;
-(void)productStoreTitle:(id)arg1 size:(CGSize)arg2 forCell:(id)arg3 ;
-(id)getKeyFor:(id)arg1 ;
-(void)_didSelectItemAtIndexPath:(id)arg1 ;
-(id)_productPrice:(id)arg1 ;
-(SOJUCommerceProductInfo *)demoProductInfo;
-(void)setDemoProductInfo:(SOJUCommerceProductInfo *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SCProductStorePageViewDelegate>)arg1 ;
-(id<SCProductStorePageViewDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
@end

