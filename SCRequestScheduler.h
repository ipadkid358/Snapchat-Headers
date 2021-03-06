/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCRequestTaskRunDelegate, SCNetworkInterceptor, SCRequestSchedulerDelegate, SCPerforming;
#import <Snapchat/Snapchat-Structs.h>
@class NSArray, NSString, SCRequestConcurrencyController, SCRequestTaskPool, NSSet, SCRequestManagerRunningTaskState, NSMutableDictionary, SCAPIClient, SCRequestManagerLogger, SCDownloadConsumptionRecorder, SCNetworkRequestRankingLogger, SCNetworkRequestRankingHandler;

@interface SCRequestScheduler : NSObject {

	NSArray* _contexts;
	NSString* _URLSessionHighPriorityContext;
	BOOL _isInHighPriorityContext;
	SCNetworkTraceFileStructRef _traceFile;
	id<SCRequestTaskRunDelegate> _taskRunDelegate;
	SCRequestConcurrencyController* _concurrencyController;
	BOOL _isCriticalMode;
	BOOL _isBackgroundDownloadPaused;
	BOOL _isAllDownloadPaused;
	BOOL _isContextOnlyModeForCurrentContextSession;
	NSArray*<SCNetworkInterceptor> _networkInterceptors;
	id<SCRequestSchedulerDelegate> _delegate;
	SCRequestTaskPool* _allTasks;
	NSSet* _allTaskPools;
	SCRequestManagerRunningTaskState* _runningTaskState;
	NSMutableDictionary* _runningTasks;
	SCRequestTaskPool* _wwanTasks;
	SCAPIClient* _httpClient;
	SCRequestManagerLogger* _networkManagerLogger;
	SCDownloadConsumptionRecorder* _downloadConsumptionRecorder;
	SCNetworkRequestRankingLogger* _networkRequestRankingLogger;
	SCNetworkRequestRankingHandler* _networkRequestRankingHandler;
	id<SCPerforming> _queuePerformer;

}

@property (nonatomic,retain) SCRequestTaskPool * allTasks;                                             //@synthesize allTasks=_allTasks - In the implementation block
@property (nonatomic,retain) NSSet * allTaskPools;                                                     //@synthesize allTaskPools=_allTaskPools - In the implementation block
@property (nonatomic,retain) SCRequestManagerRunningTaskState * runningTaskState;                      //@synthesize runningTaskState=_runningTaskState - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * runningTasks;                                       //@synthesize runningTasks=_runningTasks - In the implementation block
@property (nonatomic,retain) SCRequestTaskPool * wwanTasks;                                            //@synthesize wwanTasks=_wwanTasks - In the implementation block
@property (nonatomic,retain) SCAPIClient * httpClient;                                                 //@synthesize httpClient=_httpClient - In the implementation block
@property (nonatomic,copy) SCRequestManagerLogger * networkManagerLogger;                              //@synthesize networkManagerLogger=_networkManagerLogger - In the implementation block
@property (nonatomic,retain) SCDownloadConsumptionRecorder * downloadConsumptionRecorder;              //@synthesize downloadConsumptionRecorder=_downloadConsumptionRecorder - In the implementation block
@property (nonatomic,copy) SCNetworkRequestRankingLogger * networkRequestRankingLogger;                //@synthesize networkRequestRankingLogger=_networkRequestRankingLogger - In the implementation block
@property (nonatomic,copy) SCNetworkRequestRankingHandler * networkRequestRankingHandler;              //@synthesize networkRequestRankingHandler=_networkRequestRankingHandler - In the implementation block
@property (assign,nonatomic) BOOL isBackgroundDownloadPaused;                                          //@synthesize isBackgroundDownloadPaused=_isBackgroundDownloadPaused - In the implementation block
@property (assign,nonatomic) BOOL isAllDownloadPaused;                                                 //@synthesize isAllDownloadPaused=_isAllDownloadPaused - In the implementation block
@property (nonatomic,copy) id<SCPerforming> queuePerformer;                                            //@synthesize queuePerformer=_queuePerformer - In the implementation block
@property (assign,nonatomic) BOOL isCriticalMode;                                                      //@synthesize isCriticalMode=_isCriticalMode - In the implementation block
@property (assign,nonatomic) BOOL isContextOnlyModeForCurrentContextSession;                           //@synthesize isContextOnlyModeForCurrentContextSession=_isContextOnlyModeForCurrentContextSession - In the implementation block
@property (copy) NSArray*<SCNetworkInterceptor> networkInterceptors;                                   //@synthesize networkInterceptors=_networkInterceptors - In the implementation block
@property (assign,nonatomic,__weak) id<SCRequestSchedulerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
+(long long)_numberOfTasksInArray:(id)arg1 thatMatch:(/*^block*/id)arg2 ;
-(id<SCPerforming>)queuePerformer;
-(long long)_shouldRunAnalyticsV2Task:(id)arg1 ;
-(long long)_shouldRunMetadataTask:(id)arg1 ;
-(unsigned long long)numOfUploadTasks;
-(unsigned long long)numOfLargeDLTasks;
-(BOOL)_isCriticalTask:(id)arg1 ;
-(void)submitRequest:(id)arg1 authenticator:(id)arg2 completionQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)submitRequest:(id)arg1 authenticator:(id)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 successBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 ;
-(SCRequestTaskPool *)wwanTasks;
-(void)setRunningTasks:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)runningTasks;
-(void)_updateUserInitiatedForTask:(id)arg1 ;
-(void)_cancelRequestWithkey:(id)arg1 ;
-(void)_enqueueTask:(id)arg1 ;
-(NSArray*<SCNetworkInterceptor>)networkInterceptors;
-(void)submitRequest:(id)arg1 authenticator:(id)arg2 progressiveUpdateQueue:(id)arg3 progressiveUpdateBlock:(/*^block*/id)arg4 ;
-(void)cancelRequestWithKey:(id)arg1 ;
-(void)cancelQueuedRequestWithKey:(id)arg1 ;
-(id)_removeTaskForKey:(id)arg1 ;
-(void)cancelRequestWithKey:(id)arg1 queue:(id)arg2 byProducingResumeData:(/*^block*/id)arg3 ;
-(void)_cancelRequestWithKey:(id)arg1 queue:(id)arg2 byProducingResumeData:(/*^block*/id)arg3 ;
-(void)_didRunTaskWithKey:(id)arg1 data:(id)arg2 ;
-(void)cancelRequestsWithContext:(id)arg1 ;
-(void)_cancelRequestsWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_enqueueTask:(id)arg1 andRun:(BOOL)arg2 ;
-(id)_loggerParameter;
-(void)addContext:(id)arg1 toRequestWithKey:(id)arg2 ;
-(void)_addContext:(id)arg1 toRequestWithKey:(id)arg2 ;
-(void)_updateTask:(id)arg1 withContexts:(id)arg2 ;
-(void)enableCriticalMode;
-(void)disableCriticalMode;
-(long long)_shouldRunTask:(id)arg1 ;
-(unsigned long long)_maxLargeRequests;
-(unsigned long long)_maxSmallRequests;
-(long long)_shouldRunUploadOrAnalyticTask:(id)arg1 ;
-(long long)_shouldRunDownloadTask:(id)arg1 ;
-(BOOL)isCriticalMode;
-(BOOL)_isAnyCriticalTaskRunning;
-(BOOL)isContextOnlyModeForCurrentContextSession;
-(unsigned long long)_numberOfRunningSmallOutOfContextDownloadTasks;
-(unsigned long long)_maxSmallOutOfContextRequests;
-(BOOL)_isInContextIdleState;
-(unsigned long long)_numberOfRunningLargeOutOfContextDownloadTasks;
-(unsigned long long)_maxLargeOutOfContextRequests;
-(long long)_shouldRunLargeDownloadtaskInURLSessionHighPriorityContext:(id)arg1 ;
-(long long)_shouldRunLargeDownloadTask:(id)arg1 ;
-(unsigned long long)_maxHighPriorityInContextMsgRequests;
-(BOOL)_willExceedSingleContextLargeDownloadConcurrencyWithTask:(id)arg1 ;
-(unsigned long long)_maxLargeRequestsFromSingleContext;
-(void)_calculateSessionPriorityForTask:(id)arg1 ;
-(void)_logSchedulingInfoForTask:(id)arg1 ;
-(void)_removeRunningTaskWithKey:(id)arg1 ;
-(BOOL)_shouldCreateConsumptionRecordWithTask:(id)arg1 data:(id)arg2 ;
-(SCDownloadConsumptionRecorder *)downloadConsumptionRecorder;
-(void)setNetworkInterceptors:(NSArray*<SCNetworkInterceptor>)arg1 ;
-(void)contextsWithBlock:(/*^block*/id)arg1 ;
-(void)setContexts:(id)arg1 withRequestManagerMode:(long long)arg2 ;
-(void)_setContexts:(id)arg1 withQueuePerformer:(BOOL)arg2 ;
-(void)_setContexts:(id)arg1 withQueuePerformer:(BOOL)arg2 withRequestManagerMode:(long long)arg3 ;
-(BOOL)_shouldEnterContextOnlyMode:(long long)arg1 withContexts:(id)arg2 ;
-(BOOL)_shouldLeaveContextOnlyMode:(long long)arg1 withContexts:(id)arg2 ;
-(void)_setCurrentContextsForRunningTasks;
-(void)addContext:(id)arg1 ;
-(void)removeContexts:(id)arg1 ;
-(void)removeContext:(id)arg1 disableContextOnlyModeIfRemoved:(BOOL)arg2 ;
-(void)pauseBackgroundDownloads;
-(void)resumeBackgroundDownloads;
-(NSSet *)allTaskPools;
-(BOOL)_hasIntersetContext:(id)arg1 ;
-(void)downloadStateForRequestWithKey:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)_numberOfRunningTasksThatMatch:(/*^block*/id)arg1 ;
-(long long)_numberOfQueuedTasksThatMatch:(/*^block*/id)arg1 ;
-(void)setWwanTasks:(SCRequestTaskPool *)arg1 ;
-(void)setAllTaskPools:(NSSet *)arg1 ;
-(unsigned long long)totalRequestConcurrency;
-(unsigned long long)downloadRequestConcurrency;
-(unsigned long long)metadataRequestConcurrency;
-(unsigned long long)_numberOfRunningLargeCriticalDownloadTasks;
-(long long)_numberOfRunningDownloadTasks;
-(SCRequestManagerRunningTaskState *)runningTaskState;
-(void)setRunningTaskState:(SCRequestManagerRunningTaskState *)arg1 ;
-(void)setDownloadConsumptionRecorder:(SCDownloadConsumptionRecorder *)arg1 ;
-(BOOL)isBackgroundDownloadPaused;
-(void)setIsBackgroundDownloadPaused:(BOOL)arg1 ;
-(void)setQueuePerformer:(id<SCPerforming>)arg1 ;
-(void)setIsCriticalMode:(BOOL)arg1 ;
-(void)setIsContextOnlyModeForCurrentContextSession:(BOOL)arg1 ;
-(unsigned long long)_maxBatchSmallRequests;
-(void)_resetTasks;
-(void)_setupNetworkTracing;
-(void)_handleUserInitiatedRequestTask:(id)arg1 andRun:(BOOL)arg2 ;
-(void)_addContext:(id)arg1 toRequestTask:(id)arg2 andRun:(BOOL)arg3 ;
-(void)_checkConcurrencyControlAndRunTasks:(id)arg1 ;
-(id)_tasksToPauseWithTasksToRun:(id)arg1 ;
-(void)_pauseTasks:(id)arg1 forReason:(id)arg2 ;
-(id)_tasksToExecuteWithTasksToRun:(id)arg1 ;
-(void)_runTasks:(id)arg1 ;
-(void)_willRunTask:(id)arg1 ;
-(void)_logRequestRetriedForRequest:(id)arg1 error:(id)arg2 ;
-(id)initWithQueuePerformer:(id)arg1 taskRunDelegate:(id)arg2 networkManagerLogger:(id)arg3 networkRequestRankingLogger:(id)arg4 ;
-(void)handleUserInitiatedRequestWithKey:(id)arg1 ;
-(void)allowRequestRunOnWwanWithKey:(id)arg1 ;
-(void)networkReachabilityStatusDidChangeWithNotification:(id)arg1 ;
-(SCRequestManagerLogger *)networkManagerLogger;
-(void)setNetworkManagerLogger:(SCRequestManagerLogger *)arg1 ;
-(SCNetworkRequestRankingLogger *)networkRequestRankingLogger;
-(void)setNetworkRequestRankingLogger:(SCNetworkRequestRankingLogger *)arg1 ;
-(SCNetworkRequestRankingHandler *)networkRequestRankingHandler;
-(void)setNetworkRequestRankingHandler:(SCNetworkRequestRankingHandler *)arg1 ;
-(BOOL)isAllDownloadPaused;
-(void)setIsAllDownloadPaused:(BOOL)arg1 ;
-(void)setDelegate:(id<SCRequestSchedulerDelegate>)arg1 ;
-(id<SCRequestSchedulerDelegate>)delegate;
-(void)_run;
-(void)reset;
-(void)removeContext:(id)arg1 ;
-(SCAPIClient *)httpClient;
-(void)setHttpClient:(SCAPIClient *)arg1 ;
-(void)_addTask:(id)arg1 ;
-(SCRequestTaskPool *)allTasks;
-(void)setContexts:(id)arg1 ;
-(void)setAllTasks:(SCRequestTaskPool *)arg1 ;
@end

