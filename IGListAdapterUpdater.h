/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/IGListUpdatingDelegate.h>

@protocol IGListAdapterUpdaterDelegate;
@class NSArray, NSMutableArray, IGListBatchUpdates, IGListBatchUpdateData, NSString;

@interface IGListAdapterUpdater : NSObject <IGListUpdatingDelegate> {

	BOOL _movesAsDeletesInserts;
	BOOL _allowsBackgroundReloading;
	BOOL _queuedUpdateIsAnimated;
	BOOL _queuedReloadData;
	id<IGListAdapterUpdaterDelegate> _delegate;
	long long _experiments;
	NSArray* _fromObjects;
	NSArray* _toObjects;
	NSArray* _pendingTransitionToObjects;
	NSMutableArray* _completionBlocks;
	IGListBatchUpdates* _batchUpdates;
	/*^block*/id _objectTransitionBlock;
	/*^block*/id _reloadUpdates;
	long long _state;
	IGListBatchUpdateData* _applyingUpdateData;

}

@property (nonatomic,copy) NSArray * fromObjects;                                           //@synthesize fromObjects=_fromObjects - In the implementation block
@property (nonatomic,copy) NSArray * toObjects;                                             //@synthesize toObjects=_toObjects - In the implementation block
@property (nonatomic,copy) NSArray * pendingTransitionToObjects;                            //@synthesize pendingTransitionToObjects=_pendingTransitionToObjects - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionBlocks;                             //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (assign,nonatomic) BOOL queuedUpdateIsAnimated;                                   //@synthesize queuedUpdateIsAnimated=_queuedUpdateIsAnimated - In the implementation block
@property (nonatomic,retain) IGListBatchUpdates * batchUpdates;                             //@synthesize batchUpdates=_batchUpdates - In the implementation block
@property (nonatomic,copy) id objectTransitionBlock;                                        //@synthesize objectTransitionBlock=_objectTransitionBlock - In the implementation block
@property (nonatomic,copy) id reloadUpdates;                                                //@synthesize reloadUpdates=_reloadUpdates - In the implementation block
@property (assign,getter=hasQueuedReloadData,nonatomic) BOOL queuedReloadData;              //@synthesize queuedReloadData=_queuedReloadData - In the implementation block
@property (assign,nonatomic) long long state;                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) IGListBatchUpdateData * applyingUpdateData;                    //@synthesize applyingUpdateData=_applyingUpdateData - In the implementation block
@property (assign,nonatomic,__weak) id<IGListAdapterUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL movesAsDeletesInserts;                                    //@synthesize movesAsDeletesInserts=_movesAsDeletesInserts - In the implementation block
@property (assign,nonatomic) BOOL allowsBackgroundReloading;                                //@synthesize allowsBackgroundReloading=_allowsBackgroundReloading - In the implementation block
@property (assign,nonatomic) long long experiments;                                         //@synthesize experiments=_experiments - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)debugDescriptionLines;
-(id)objectLookupPointerFunctions;
-(void)performUpdateWithCollectionView:(id)arg1 fromObjects:(id)arg2 toObjects:(id)arg3 animated:(BOOL)arg4 objectTransitionBlock:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)reloadDataWithCollectionView:(id)arg1 reloadUpdateBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)reloadCollectionView:(id)arg1 sections:(id)arg2 ;
-(void)performUpdateWithCollectionView:(id)arg1 animated:(BOOL)arg2 itemUpdates:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)reloadItemInCollectionView:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)insertItemsIntoCollectionView:(id)arg1 indexPaths:(id)arg2 ;
-(void)deleteItemsFromCollectionView:(id)arg1 indexPaths:(id)arg2 ;
-(void)moveItemInCollectionView:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(BOOL)hasQueuedReloadData;
-(IGListBatchUpdates *)batchUpdates;
-(NSArray *)fromObjects;
-(NSArray *)toObjects;
-(id)reloadUpdates;
-(void)cleanStateBeforeUpdates;
-(void)cleanStateAfterUpdates;
-(id)objectTransitionBlock;
-(BOOL)queuedUpdateIsAnimated;
-(void)setApplyingUpdateData:(IGListBatchUpdateData *)arg1 ;
-(void)performBatchUpdatesItemBlockApplied;
-(BOOL)allowsBackgroundReloading;
-(void)beginPerformBatchUpdatesToObjects:(id)arg1 ;
-(id)flushCollectionView:(id)arg1 withDiffResult:(id)arg2 batchUpdates:(id)arg3 fromObjects:(id)arg4 ;
-(IGListBatchUpdateData *)applyingUpdateData;
-(void)queueUpdateWithCollectionView:(id)arg1 ;
-(BOOL)movesAsDeletesInserts;
-(void)setPendingTransitionToObjects:(NSArray *)arg1 ;
-(void)setQueuedUpdateIsAnimated:(BOOL)arg1 ;
-(void)setFromObjects:(NSArray *)arg1 ;
-(void)setToObjects:(NSArray *)arg1 ;
-(void)setReloadUpdates:(id)arg1 ;
-(void)setQueuedReloadData:(BOOL)arg1 ;
-(void)setObjectTransitionBlock:(id)arg1 ;
-(void)setBatchUpdates:(IGListBatchUpdates *)arg1 ;
-(void)performReloadDataWithCollectionView:(id)arg1 ;
-(void)performBatchUpdatesWithCollectionView:(id)arg1 ;
-(NSArray *)pendingTransitionToObjects;
-(void)setMovesAsDeletesInserts:(BOOL)arg1 ;
-(void)setAllowsBackgroundReloading:(BOOL)arg1 ;
-(id)init;
-(void)setDelegate:(id<IGListAdapterUpdaterDelegate>)arg1 ;
-(id<IGListAdapterUpdaterDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSMutableArray *)completionBlocks;
-(long long)experiments;
-(void)setExperiments:(long long)arg1 ;
-(BOOL)hasChanges;
-(void)setCompletionBlocks:(NSMutableArray *)arg1 ;
@end

