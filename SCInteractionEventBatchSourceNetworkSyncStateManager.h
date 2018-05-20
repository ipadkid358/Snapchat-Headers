/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCInteractionEventBatchSourceNetworkSyncStateManagerDelegate;
@class SCInteractionEventBatch, SCSearchGCDBlockTimer, SCQueuePerformer;

@interface SCInteractionEventBatchSourceNetworkSyncStateManager : NSObject {

	SCInteractionEventBatch* _syncedEventBatch;
	long long _syncedSource;
	long long _currentSources;
	SCSearchGCDBlockTimer* _timer;
	SCQueuePerformer* _performer;
	BOOL _hasSyncStarted;
	id<SCInteractionEventBatchSourceNetworkSyncStateManagerDelegate> _delegate;

}

@property (assign) BOOL hasSyncStarted;                                                                                     //@synthesize hasSyncStarted=_hasSyncStarted - In the implementation block
@property (assign,nonatomic,__weak) id<SCInteractionEventBatchSourceNetworkSyncStateManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithPerformer:(id)arg1 ;
-(void)_clearSyncState;
-(BOOL)hasSyncStarted;
-(void)setHasSyncStarted:(BOOL)arg1 ;
-(void)_updateSyncedFeedItems:(long long)arg1 feedItems:(id)arg2 requestStartTime:(id)arg3 ;
-(void)_processBatch;
-(void)startSync:(long long)arg1 response:(id)arg2 requestStartTime:(id)arg3 ;
-(void)addUFSResponseEventBatch:(id)arg1 fallbackProcessingBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)setDelegate:(id<SCInteractionEventBatchSourceNetworkSyncStateManagerDelegate>)arg1 ;
-(id<SCInteractionEventBatchSourceNetworkSyncStateManagerDelegate>)delegate;
@end

