/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Snapchat/SCMapExplorerViewerCollectionViewCellDelegate.h>

@protocol SCMapExplorerViewsVerticalScrollingViewCellDelegate;
@class SCUserSession, UIView, CALayer, UIImageView, SCMapExplorerViewCountView, UICollectionView, Friends, NSArray, NSString;

@interface SCMapExplorerViewsVerticalScrollingViewCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, SCMapExplorerViewerCollectionViewCellDelegate> {

	SCUserSession* _userSession;
	UIView* _containerView;
	UIView* _peekBarView;
	CALayer* _peekBarBottomBorderLayer;
	UIImageView* _arrowImageView;
	SCMapExplorerViewCountView* _viewCountView;
	UIImageView* _trashImageView;
	UICollectionView* _viewerCollectionView;
	Friends* _friends;
	BOOL _arrowPointingDown;
	id<SCMapExplorerViewsVerticalScrollingViewCellDelegate> _delegate;
	NSArray* _viewerUserIDs;

}

@property (assign,nonatomic,__weak) id<SCMapExplorerViewsVerticalScrollingViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * viewerUserIDs;                                                            //@synthesize viewerUserIDs=_viewerUserIDs - In the implementation block
@property (assign,getter=isArrowPointingDown,nonatomic) BOOL arrowPointingDown;                                    //@synthesize arrowPointingDown=_arrowPointingDown - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightForViewWithWidth:(double)arg1 viewCount:(unsigned long long)arg2 ;
-(void)_rebuildUI;
-(void)setArrowPointingDown:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setViewerUserIDs:(id)arg1 userSession:(id)arg2 ;
-(BOOL)isArrowPointingDown;
-(void)explorerViewerCollectionViewCellDidTapName:(id)arg1 ;
-(void)explorerViewerCollectionViewCellDidLongPressName:(id)arg1 ;
-(void)explorerViewerCollectionViewCellDidTapStory:(id)arg1 ;
-(void)didTapArrow:(id)arg1 ;
-(void)didTapTrash:(id)arg1 ;
-(void)setArrowPointingDown:(BOOL)arg1 ;
-(NSArray *)viewerUserIDs;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCMapExplorerViewsVerticalScrollingViewCellDelegate>)arg1 ;
-(id<SCMapExplorerViewsVerticalScrollingViewCellDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
@end

