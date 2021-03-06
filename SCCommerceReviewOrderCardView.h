/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Snapchat/SCProductReviewOrderContainerViewCellDelegate.h>

@protocol SCCommerceReviewOrderCardViewDelegate;
@class SCLoadingIndicatorView, UIImageView, UILabel, UIView, UITableView, SCUserSession, SOJUCommerceStoreInfo, NSString;

@interface SCCommerceReviewOrderCardView : UIView <UITableViewDataSource, UITableViewDelegate, SCProductReviewOrderContainerViewCellDelegate> {

	SCLoadingIndicatorView* _storeIconImageLoadingView;
	UIImageView* _storeImageView;
	UILabel* _storeTitleLabel;
	UILabel* _numberOfItemsLabel;
	UIView* _storeInfoView;
	UITableView* _tableView;
	SCUserSession* _userSession;
	SOJUCommerceStoreInfo* _storeInfo;
	id<SCCommerceReviewOrderCardViewDelegate> _delegate;

}

@property (nonatomic,retain) UIImageView * storeImageView;                                           //@synthesize storeImageView=_storeImageView - In the implementation block
@property (nonatomic,retain) SCLoadingIndicatorView * storeIconImageLoadingView;                     //@synthesize storeIconImageLoadingView=_storeIconImageLoadingView - In the implementation block
@property (assign,nonatomic,__weak) SCUserSession * userSession;                                     //@synthesize userSession=_userSession - In the implementation block
@property (assign,nonatomic,__weak) SOJUCommerceStoreInfo * storeInfo;                               //@synthesize storeInfo=_storeInfo - In the implementation block
@property (assign,nonatomic,__weak) id<SCCommerceReviewOrderCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCLoadingIndicatorView *)storeIconImageLoadingView;
-(void)setStoreIconImageLoadingView:(SCLoadingIndicatorView *)arg1 ;
-(UIImageView *)storeImageView;
-(double)_itemTableHeight;
-(id)_subTotalWithCurrencyFormat;
-(id)_createOrderLineItemContainerView:(id)arg1 ;
-(id)_createSubTotalView:(id)arg1 ;
-(id)_createOrderReturnView:(id)arg1 ;
-(void)productReviewOrderContainerViewCell:(id)arg1 didRemoveItem:(id)arg2 ;
-(void)productReviewOrderContainerViewCell:(id)arg1 didClickQuantityForItem:(id)arg2 ;
-(void)addItem:(id)arg1 parentProduct:(id)arg2 ;
-(double)calculatedHeight;
-(void)setStoreImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCCommerceReviewOrderCardViewDelegate>)arg1 ;
-(void)reloadData;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<SCCommerceReviewOrderCardViewDelegate>)delegate;
-(SCUserSession *)userSession;
-(void)setUserSession:(SCUserSession *)arg1 ;
-(void)setStoreInfo:(SOJUCommerceStoreInfo *)arg1 ;
-(SOJUCommerceStoreInfo *)storeInfo;
@end

