/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCMapCarouselVerticalScrollingView.h>
#import <Snapchat/SCMapExplorerCarouselItemViewDelegate.h>
#import <Snapchat/SCMapExplorerViewsVerticalScrollingViewCellDelegate.h>
#import <Snapchat/SCMapCarouselInteractiveSubview.h>

@protocol SCMapExplorerMyStatusVerticalScrollingViewDelegate;
@class SCUserSession, SCMapExplorerViewsVerticalScrollingViewCell, SCMapExplorerMyStatus, NSString;

@interface SCMapExplorerMyStatusVerticalScrollingView : SCMapCarouselVerticalScrollingView <SCMapExplorerCarouselItemViewDelegate, SCMapExplorerViewsVerticalScrollingViewCellDelegate, SCMapCarouselInteractiveSubview> {

	SCUserSession* _userSession;
	BOOL _isStatusViewed;
	SCMapExplorerViewsVerticalScrollingViewCell* _viewsCell;
	id<SCMapExplorerMyStatusVerticalScrollingViewDelegate> _delegate;
	SCMapExplorerMyStatus* _status;

}

@property (assign,nonatomic,__weak) id<SCMapExplorerMyStatusVerticalScrollingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SCMapExplorerMyStatus * status;                                                      //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didCompletelyLoseFocus;
-(id)initWithFrame:(CGRect)arg1 userSession:(id)arg2 ;
-(void)explorerCarouselItemViewDidTapChat:(id)arg1 ;
-(void)explorerCarouselItemViewDidTapProfile:(id)arg1 ;
-(void)explorerCarouselItemViewDidLongPressProfile:(id)arg1 ;
-(void)explorerCarouselItemViewDidTapStory:(id)arg1 ;
-(void)explorerCarouselItemViewWantsToPlayMapStory:(id)arg1 withPoiId:(id)arg2 fromSourceView:(id)arg3 ;
-(double)_offsetForFullyVisible;
-(void)explorerViewsCellDidTapArrow:(id)arg1 ;
-(void)explorerViewsCellDidTapTrash:(id)arg1 ;
-(void)explorerViewsCell:(id)arg1 didTapStoryForFriend:(id)arg2 baseView:(id)arg3 ;
-(void)explorerViewsCell:(id)arg1 didTapFriend:(id)arg2 ;
-(void)explorerViewsCell:(id)arg1 didLongPressFriend:(id)arg2 ;
-(void)setDelegate:(id<SCMapExplorerMyStatusVerticalScrollingViewDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(id<SCMapExplorerMyStatusVerticalScrollingViewDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(SCMapExplorerMyStatus *)status;
-(void)setStatus:(SCMapExplorerMyStatus *)arg1 ;
-(void)updateContentInset;
@end

