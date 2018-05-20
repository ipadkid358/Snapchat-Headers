/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:14 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <Snapchat/SCMultiSnapV2CollectionViewCellDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Snapchat/SCMultiSnapCollectionViewContentSizeDelegate.h>
#import <Snapchat/SCMultiSnapIndexProvider.h>
#import <Snapchat/SCImageProcessVideoPlaybackSessionListener.h>

@protocol SCMultiSnapV2PlayerHandler, SCMultiSnapStateHandlerDelegate, SCMultiSnapV2CollectionViewControllerDelegate;
@class SCMultiSnapCollectionView, NSIndexPath, SCMultiSnapConfiguration, NSString;

@interface SCMultiSnapV2CollectionViewController : UICollectionViewController <SCMultiSnapV2CollectionViewCellDelegate, UICollectionViewDelegateFlowLayout, SCMultiSnapCollectionViewContentSizeDelegate, SCMultiSnapIndexProvider, SCImageProcessVideoPlaybackSessionListener> {

	id<SCMultiSnapV2PlayerHandler> _playerHandler;
	SCMultiSnapCollectionView* _collectionView;
	NSIndexPath* _selectedIndexPath;
	SCMultiSnapConfiguration* _configuration;
	SCD_Struct_LS191 _playheadTime;
	id<SCMultiSnapStateHandlerDelegate> _segmentOperationDelegate;
	id<SCMultiSnapV2CollectionViewControllerDelegate> _previewDelegate;

}

@property (assign,nonatomic,__weak) id<SCMultiSnapStateHandlerDelegate> segmentOperationDelegate;                   //@synthesize segmentOperationDelegate=_segmentOperationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCMultiSnapV2CollectionViewControllerDelegate> previewDelegate;              //@synthesize previewDelegate=_previewDelegate - In the implementation block
@property (nonatomic,readonly) SCMultiSnapConfiguration * configuration; 
@property (nonatomic,readonly) long long editingIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)videoPlaybackSession:(id)arg1 didRenderFrameAtTime:(SCD_Struct_LS191)arg2 ;
-(BOOL)multiSnapV2CollectionViewCellIsCollapsed:(id)arg1 ;
-(void)multiSnapV2CollectionViewCell:(id)arg1 didSeekToTime:(SCD_Struct_LS191)arg2 ;
-(void)multiSnapV2CollectionViewCell:(id)arg1 didTrimSegmentToRange:(SCD_Struct_BC197)arg2 ;
-(void)multiSnapV2CollectionViewCellFinishedSeeking:(id)arg1 ;
-(void)multiSnapV2CollectionViewCell:(id)arg1 didSplitSegmentAtTime:(SCD_Struct_LS191)arg2 ;
-(void)multiSnapV2CollectionViewCell:(id)arg1 needsToScrollInAnimated:(BOOL)arg2 ;
-(void)multiSnapV2CollectionViewCellDidDeleteSegment:(id)arg1 ;
-(void)displayTapToTrimTooltip;
-(id)_cellAtIndex:(long long)arg1 ;
-(long long)editingIndex;
-(long long)_currentPlayingIndex;
-(void)_selectSegmentAtIndex:(long long)arg1 ;
-(void)_deselectSelectedSegment;
-(BOOL)_cellsCollapsed;
-(void)_autoScrollAnimated:(BOOL)arg1 ;
-(CGRect)_frameForCellAtIndex:(long long)arg1 ;
-(void)_updateCollectionViewCellsLayout;
-(BOOL)_cellAtIndexIsOffscreenToRight:(long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 playerHandler:(id)arg2 ;
-(void)fetchAndSetThumbnailsForCapturedSingleSegment;
-(void)startEnterEditingModeWithThumbnailsHidden:(BOOL)arg1 ;
-(BOOL)deselectSelectedSegmentIfAny;
-(void)revealThumbnails;
-(void)updateConfigurationForFastPreview:(id)arg1 ;
-(void)updateEditedThumbnails:(id)arg1 forSegmentId:(long long)arg2 ;
-(void)updateCaptureSegment:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateCaptureSegmentWithFinalDuration:(SCD_Struct_LS191)arg1 ;
-(id<SCMultiSnapStateHandlerDelegate>)segmentOperationDelegate;
-(void)setSegmentOperationDelegate:(id<SCMultiSnapStateHandlerDelegate>)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(CGSize)preferredContentSize;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(double)preferredHeight;
-(SCMultiSnapConfiguration *)configuration;
-(id<SCMultiSnapV2CollectionViewControllerDelegate>)previewDelegate;
-(void)setPreviewDelegate:(id<SCMultiSnapV2CollectionViewControllerDelegate>)arg1 ;
@end
