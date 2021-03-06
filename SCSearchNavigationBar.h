/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <Snapchat/SCSearchNavigationItemDelegate.h>

@protocol SCSearchNavigationBarDelegate;
@class SCGrowingButton, SCSearchView, NSArray, SCSearchNavigationItem, NSString;

@interface SCSearchNavigationBar : UIView <SCSearchNavigationItemDelegate> {

	SCGrowingButton* _backButton;
	CGPoint _navigationBarContentOffset;
	SCSearchView* _searchView;
	NSArray* _rightBarButtonItems;
	SCSearchNavigationItem* _navigationItem;
	id<SCSearchNavigationBarDelegate> _delegate;
	CGPoint _searchViewOriginOffset;
	UIEdgeInsets _layoutInsets;

}

@property (assign,nonatomic,__weak) id<SCSearchNavigationBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SCSearchView * searchView;                                      //@synthesize searchView=_searchView - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rightBarButtonItems;                           //@synthesize rightBarButtonItems=_rightBarButtonItems - In the implementation block
@property (nonatomic,retain) SCSearchNavigationItem * navigationItem;                        //@synthesize navigationItem=_navigationItem - In the implementation block
@property (assign,nonatomic) UIEdgeInsets layoutInsets;                                      //@synthesize layoutInsets=_layoutInsets - In the implementation block
@property (assign,nonatomic) CGPoint searchViewOriginOffset;                                 //@synthesize searchViewOriginOffset=_searchViewOriginOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLayoutInsets:(UIEdgeInsets)arg1 ;
-(void)_updateWithNavigationItem;
-(void)_initBackButtonIfNeeded;
-(void)didClickBackButton;
-(void)searchNavigationItemDidUpdate:(id)arg1 ;
-(void)setSearchViewOriginOffset:(CGPoint)arg1 ;
-(CGPoint)searchViewOriginOffset;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCSearchNavigationBarDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SCSearchNavigationBarDelegate>)delegate;
-(SCSearchNavigationItem *)navigationItem;
-(NSArray *)rightBarButtonItems;
-(void)setNavigationItem:(SCSearchNavigationItem *)arg1 ;
-(SCSearchView *)searchView;
-(void)setSearchView:(SCSearchView *)arg1 ;
-(UIEdgeInsets)layoutInsets;
@end

