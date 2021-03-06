/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:32 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Snapchat/SCProductReviewOrderDetailTableViewCellDelegate.h>

@protocol SCProductReviewOrderContainerViewCellDelegate;
@class NSString, SCUserSession, NSArray, UITableView;

@interface SCProductReviewOrderContainerViewCell : UITableViewCell <UITableViewDataSource, UITableViewDelegate, SCProductReviewOrderDetailTableViewCellDelegate> {

	NSString* _storeId;
	SCUserSession* _userSession;
	NSArray* _lineItems;
	NSArray* _cellHeights;
	id<SCProductReviewOrderContainerViewCellDelegate> _delegate;
	UITableView* _tableView;

}

@property (nonatomic,retain) UITableView * tableView;                                                        //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) id<SCProductReviewOrderContainerViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellHeightsForLineItems:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 storeId:(id)arg3 userSession:(id)arg4 ;
-(void)updateCart;
-(void)_initTable;
-(void)_setupTableScroll;
-(void)_scrollToTopOfCurrentlyVisibleCell;
-(void)productReviewOrderDetailTableViewCell:(id)arg1 didClickQuantityForItem:(id)arg2 ;
-(void)productReviewOrderDetailTableViewCell:(id)arg1 didClickRemoveItem:(id)arg2 ;
-(void)setDelegate:(id<SCProductReviewOrderContainerViewCellDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<SCProductReviewOrderContainerViewCellDelegate>)delegate;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(int)indexOfItem:(id)arg1 ;
@end

