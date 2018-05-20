/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCCloudSyncLogger <NSObject>
@required
-(void)beginUploadForURL:(id)arg1 snapId:(id)arg2 objectType:(long long)arg3 dataSizeInBytes:(unsigned long long)arg4;
-(void)endUploadForURL:(id)arg1 succeeded:(BOOL)arg2 statusCode:(long long)arg3 parameters:(id)arg4;
-(void)logBlizzardAbandonOperation:(id)arg1 entryId:(id)arg2 snapId:(id)arg3 mediaId:(id)arg4 operationType:(long long)arg5 abandonReason:(long long)arg6 detail:(id)arg7;
-(void)logException:(id)arg1 detail:(id)arg2 params:(id)arg3;
-(void)setTotalEntryCountFromServer:(long long)arg1;
-(void)createMemoriesS2RWithDescription:(id)arg1;
-(void)logNewQueuedOperationWithParams:(id)arg1 queueLength:(long long)arg2 blockedDurationInSec:(double)arg3;
-(void)cloudSyncDidPerformStep:(unsigned long long)arg1 consoleParam:(id)arg2 metricParam:(id)arg3;
-(void)initialSyncDidStartWithSyncToken:(id)arg1;
-(void)logBackupErrorWithMessage:(id)arg1 retryCount:(unsigned long long)arg2 statusCode:(id)arg3 detailStatusCode:(id)arg4 fromRetry:(BOOL)arg5 operationParams:(id)arg6;
-(void)logBlizzardBackupError:(unsigned long long)arg1 fromRetry:(BOOL)arg2;
-(void)logFinishedOperationWithParams:(id)arg1 operationType:(unsigned long long)arg2 totalTimeInSec:(double)arg3 networkProcessingTimeInSec:(double)arg4 queueLength:(long long)arg5 logContexts:(id)arg6 tempCellularBackupEnabled:(BOOL)arg7;
-(void)logResyncOperationWithParams:(id)arg1;
-(void)initialSyncDidFinishWithToken:(id)arg1;
-(void)didStartParsingResponse;
-(void)didSyncedSnapsCount:(unsigned long long)arg1 savedSnapsCount:(unsigned long long)arg2;
-(void)logCloudSyncerStatus;
-(void)logResyncOperationTotalTimeInSec:(double)arg1;
-(void)initialSyncRequestDidFinishWithEntryCount:(unsigned long long)arg1;
-(void)initialSyncDidPaginateWithToken:(id)arg1;
-(void)logSkipedOperationsFromOutOfOrderDeletion:(id)arg1 logContexts:(id)arg2 deleteEntryIds:(id)arg3 backupNowEnabled:(BOOL)arg4;
-(void)logSkippedMediaUpload:(id)arg1 reason:(id)arg2;
-(BOOL)performEntryCountHealthCheck:(long long)arg1;

@end

