/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCRequestManagerHelper.h>
#import <Snapchat/SCNetworkManagerDelegate.h>

@protocol SCNetworkInterceptor, SCRequestManagerDelegate, SCPerforming;
@class NSArray, NSString, SCConnectionManager, SCNetworkRequestRankingLogger, SCNetworkManager, SCConnectionClassManager, NSObject, SCRequestTaskPool, NSSet, SCRequestManagerRunningTaskState, NSMutableDictionary, NSMutableSet, SCAPIClient, SCRequestManagerLogger, SCDownloadConsumptionRecorder;

@interface SCRequestManager : NSObject <SCRequestManagerHelper, SCNetworkManagerDelegate> {

	NSArray* _contexts;
	NSString* _URLSessionHighPriorityContext;
	BOOL _isInHighPriorityContext;
	SCNetworkTraceFileStructRef _traceFile;
	SCConnectionManager* _connectionManager;
	SCNetworkRequestRankingLogger* _networkRequestRankingLogger;
	SCNetworkManager* _networkManager;
	SCConnectionClassManager* _connectionClassManager;
	NSArray*<SCNetworkInterceptor> _networkInterceptors;
	NSObject* _networkInterceptorsLock;
	BOOL _networkManagerEnabled;
	BOOL _isBackgroundDownloadPaused;
	BOOL _isCriticalMode;
	BOOL _isViewingSessionMode;
	BOOL _isChatSessionMode;
	BOOL _isContextOnlyModeForCurrentContextSession;
	id<SCRequestManagerDelegate> _delegate;
	SCRequestTaskPool* _allTasks;
	NSSet* _allTaskPools;
	SCRequestManagerRunningTaskState* _runningTaskState;
	NSMutableDictionary* _runningTasks;
	SCRequestTaskPool* _wwanTasks;
	NSMutableSet* _userWaitingTasks;
	SCAPIClient* _httpClient;
	SCRequestManagerLogger* _downloadManagerLogger;
	SCDownloadConsumptionRecorder* _downloadConsumptionRecorder;
	id<SCPerforming> _queuePerformer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SCRequestTaskPool * allTasks;                                             //@synthesize allTasks=_allTasks - In the implementation block
@property (nonatomic,retain) NSSet * allTaskPools;                                                     //@synthesize allTaskPools=_allTaskPools - In the implementation block
@property (nonatomic,retain) SCRequestManagerRunningTaskState * runningTaskState;                      //@synthesize runningTaskState=_runningTaskState - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * runningTasks;                                       //@synthesize runningTasks=_runningTasks - In the implementation block
@property (nonatomic,retain) SCRequestTaskPool * wwanTasks;                                            //@synthesize wwanTasks=_wwanTasks - In the implementation block
@property (nonatomic,retain) NSMutableSet * userWaitingTasks;                                          //@synthesize userWaitingTasks=_userWaitingTasks - In the implementation block
@property (nonatomic,retain) SCAPIClient * httpClient;                                                 //@synthesize httpClient=_httpClient - In the implementation block
@property (nonatomic,retain) SCRequestManagerLogger * downloadManagerLogger;                           //@synthesize downloadManagerLogger=_downloadManagerLogger - In the implementation block
@property (nonatomic,retain) SCDownloadConsumptionRecorder * downloadConsumptionRecorder;              //@synthesize downloadConsumptionRecorder=_downloadConsumptionRecorder - In the implementation block
@property (assign,nonatomic) BOOL isBackgroundDownloadPaused;                                          //@synthesize isBackgroundDownloadPaused=_isBackgroundDownloadPaused - In the implementation block
@property (nonatomic,retain) id<SCPerforming> queuePerformer;                                          //@synthesize queuePerformer=_queuePerformer - In the implementation block
@property (assign,nonatomic) BOOL isCriticalMode;                                                      //@synthesize isCriticalMode=_isCriticalMode - In the implementation block
@property (assign,nonatomic) BOOL isViewingSessionMode;                                                //@synthesize isViewingSessionMode=_isViewingSessionMode - In the implementation block
@property (assign,nonatomic) BOOL isChatSessionMode;                                                   //@synthesize isChatSessionMode=_isChatSessionMode - In the implementation block
@property (assign,nonatomic) BOOL isContextOnlyModeForCurrentContextSession;                           //@synthesize isContextOnlyModeForCurrentContextSession=_isContextOnlyModeForCurrentContextSession - In the implementation block
@property (nonatomic,copy) NSArray*<SCNetworkInterceptor> networkInterceptors; 
@property (assign,nonatomic,__weak) id<SCRequestManagerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
+(long long)_numberOfTasksInArray:(id)arg1 thatMatch:(/*^block*/id)arg2 ;
+(id)_filterTasks:(id)arg1 with:(/*^block*/id)arg2 ;
+(id)requestContextForCloudFSSnapWithId:(id)arg1 ;
+(id)requestContextsForWatchingFriendStories:(id)arg1 ;
+(id)requestContextForStorySnapViewingSessionWithClientId:(id)arg1 ;
+(id)requestContextForDsnapViewingSessionWithId:(id)arg1 ;
+(id)requestContextForFriendStoriesWithUsername:(id)arg1 ;
+(id)requestContextForEditionViewingSessionWithId:(id)arg1 ;
+(id)requestContextsForStory:(id)arg1 inFriendStories:(id)arg2 includePage:(BOOL)arg3 ;
+(id)pageContextForFriendStories:(id)arg1 ;
+(id)requestContextForFriendStoriesInChatViewWithUsername:(id)arg1 ;
+(id)requestContextForSearchStoryWithId:(id)arg1 ;
+(id)pageContextForStory:(id)arg1 ;
+(id)shared;
-(id<SCPerforming>)queuePerformer;
-(long long)_shouldRunAnalyticsV2Task:(id)arg1 ;
-(long long)_shouldRunMetadataTask:(id)arg1 ;
-(unsigned long long)numOfUploadTasks;
-(unsigned long long)numOfLargeDLTasks;
-(BOOL)_isCriticalTask:(id)arg1 ;
-(BOOL)criticalModeEnabled;
-(void)submitRequest:(id)arg1 authenticator:(id)arg2 completionQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)submitRequest:(id)arg1 authenticator:(id)arg2 successQueue:(id)arg3 failureQueue:(id)arg4 successBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 ;
-(id)_submitRequestToEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 key:(id)arg4 contexts:(id)arg5 requestParser:(id)arg6 requestType:(long long)arg7 priority:(long long)arg8 method:(long long)arg9 authenticated:(BOOL)arg10 authenticator:(id)arg11 maxNumRequestAttempts:(id)arg12 successQueue:(id)arg13 failureQueue:(id)arg14 successBlock:(/*^block*/id)arg15 failureBlock:(/*^block*/id)arg16 ;
-(id)submitRequestToEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 key:(id)arg4 contexts:(id)arg5 requestParser:(id)arg6 requestType:(long long)arg7 priority:(long long)arg8 method:(long long)arg9 authenticated:(BOOL)arg10 authenticator:(id)arg11 successQueue:(id)arg12 failureQueue:(id)arg13 successBlock:(/*^block*/id)arg14 failureBlock:(/*^block*/id)arg15 ;
-(id)submitImmediateRequestToEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 key:(id)arg4 contexts:(id)arg5 requestParser:(id)arg6 requestType:(long long)arg7 method:(long long)arg8 authenticated:(BOOL)arg9 authenticator:(id)arg10 successQueue:(id)arg11 failureQueue:(id)arg12 successBlock:(/*^block*/id)arg13 failureBlock:(/*^block*/id)arg14 ;
-(id)submitImmediateRequestToEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 key:(id)arg4 contexts:(id)arg5 requestParser:(id)arg6 requestType:(long long)arg7 method:(long long)arg8 authenticated:(BOOL)arg9 authenticator:(id)arg10 maxNumRequestAttempts:(id)arg11 successQueue:(id)arg12 failureQueue:(id)arg13 successBlock:(/*^block*/id)arg14 failureBlock:(/*^block*/id)arg15 ;
-(id)submitRequestToEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 key:(id)arg4 contexts:(id)arg5 requestParser:(id)arg6 requestType:(long long)arg7 priority:(long long)arg8 method:(long long)arg9 authenticated:(BOOL)arg10 authenticator:(id)arg11 completionQueue:(id)arg12 completionBlock:(/*^block*/id)arg13 ;
-(SCRequestTaskPool *)wwanTasks;
-(void)_resetRunningTasks;
-(void)_networkReachabilityStatusDidChangeWithNotification:(id)arg1 ;
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
-(SCRequestManagerLogger *)downloadManagerLogger;
-(id)_loggerParameter;
-(void)boostRequestWithKey:(id)arg1 toHigherPriority:(long long)arg2 ;
-(void)_boostRequestWithKey:(id)arg1 toHigherPriority:(long long)arg2 ;
-(void)boostRequestWithKey:(id)arg1 toHigherConnectivity:(long long)arg2 ;
-(void)_boostRequestWithKey:(id)arg1 toHigherConnectivity:(long long)arg2 ;
-(void)addContext:(id)arg1 toRequestWithKey:(id)arg2 ;
-(void)_addContext:(id)arg1 toRequestWithKey:(id)arg2 ;
-(void)_updateTask:(id)arg1 withContexts:(id)arg2 ;
-(void)enableCriticalMode;
-(void)disableCriticalMode;
-(id)_pauseRequestsIfNecessaryForNewTask:(id)arg1 ;
-(long long)_shouldRunTask:(id)arg1 ;
-(unsigned long long)_maxLargeRequests;
-(unsigned long long)_maxSmallRequests;
-(void)_willRunTask:(id)arg1 withRunnableStatus:(long long)arg2 ;
-(long long)_shouldRunUploadOrAnalyticTask:(id)arg1 ;
-(long long)_shouldRunDownloadTask:(id)arg1 ;
-(BOOL)isCriticalMode;
-(BOOL)_isAnyCriticalTaskRunning;
-(BOOL)_isUserWaitingTask:(id)arg1 ;
-(BOOL)_hasUserWaitingTasks;
-(BOOL)_isLargeDownloadTask:(id)arg1 ;
-(BOOL)isContextOnlyModeForCurrentContextSession;
-(BOOL)_isInContextTask:(id)arg1 ;
-(unsigned long long)_numberOfRunningSmallOutOfContextDownloadTasks;
-(unsigned long long)_maxSmallOutOfContextRequests;
-(BOOL)_isInContextIdleState;
-(unsigned long long)_numberOfRunningLargeOutOfContextDownloadTasks;
-(unsigned long long)_maxLargeOutOfContextRequests;
-(BOOL)_isInChatSessionTask:(id)arg1 ;
-(long long)_numberOfRunningInChatSessionLargeDownloadTasks;
-(unsigned long long)_numberOfRunningOutOfChatSessionLargeDownloadTasks;
-(long long)_shouldRunLargeDownloadtaskInURLSessionHighPriorityContext:(id)arg1 ;
-(long long)_shouldRunLargeDownloadTask:(id)arg1 ;
-(unsigned long long)_maxHighPriorityInContextMsgRequests;
-(BOOL)_willExceedSingleContextLargeDownloadConcurrencyWithTask:(id)arg1 ;
-(unsigned long long)_maxLargeRequestsFromSingleContext;
-(void)_calculateSessionPriorityForTask:(id)arg1 ;
-(BOOL)_isUserWaitingLargeDownloadTask:(id)arg1 ;
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
-(id)_pauseOutOfContextTasksIfNecessary;
-(void)addContext:(id)arg1 ;
-(void)removeContexts:(id)arg1 ;
-(void)removeContext:(id)arg1 disableContextOnlyModeIfRemoved:(BOOL)arg2 ;
-(void)pauseBackgroundDownloads;
-(void)resumeBackgroundDownloads;
-(NSSet *)allTaskPools;
-(BOOL)_isPerfectMatchingScore:(unsigned long long)arg1 ;
-(BOOL)_hasIntersetContext:(id)arg1 ;
-(void)downloadStateForRequestWithKey:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)_numberOfRunningTasksThatMatch:(/*^block*/id)arg1 ;
-(long long)_numberOfQueuedTasksThatMatch:(/*^block*/id)arg1 ;
-(void)setWwanTasks:(SCRequestTaskPool *)arg1 ;
-(void)setAllTaskPools:(NSSet *)arg1 ;
-(unsigned long long)totalRequestConcurrency;
-(unsigned long long)downloadRequestConcurrency;
-(unsigned long long)metadataRequestConcurrency;
-(void)consumeContentWithKey:(id)arg1 ;
-(BOOL)_isInSessionTask:(id)arg1 ;
-(id)_pauseNonUserWaitingLargeDownloadTasksForTask:(id)arg1 ;
-(id)_pauseOutOfChatSessionTasksIfNecessaryForTask:(id)arg1 ;
-(id)_pauseOutOfContextTasksIfNecessaryForTask:(id)arg1 ;
-(id)_pauseOutOfSessionTasksIfNecessaryForTask:(id)arg1 ;
-(id)_pauseNonCriticalResumableDownloadTasksIfNecessaryFor:(id)arg1 ;
-(id)_runningTasksThatMatch:(/*^block*/id)arg1 ;
-(id)_pauseTasks:(id)arg1 withCount:(long long)arg2 withSortComparator:(/*^block*/id)arg3 forReason:(id)arg4 ;
-(id)_pauseOutOfContextLargeDownloadTasks:(long long)arg1 ;
-(unsigned long long)_maxConcurrentLargeDownloadConcurrencyInSessionMode;
-(long long)_numberOfRunningInSessionLargeDownloadTasks;
-(unsigned long long)_numberOfQueueingLargeInContextDownloadTasks;
-(id)_pauseTasksIfPossible:(id)arg1 forReason:(id)arg2 ;
-(void)_pauseTask:(id)arg1 forReason:(id)arg2 ;
-(BOOL)_isInStoriesContext;
-(BOOL)_isInMessageContext;
-(void)contextsDidChangeForNetworkManager:(id)arg1 ;
-(void)enableViewingSessionMode;
-(void)disableViewingSessionMode;
-(void)enableChatSessionMode;
-(void)disableChatSessionMode;
-(BOOL)_isCriticalDownloadTask:(id)arg1 ;
-(unsigned long long)_numberOfRunningLargeCriticalDownloadTasks;
-(long long)_numberOfRunningDownloadTasks;
-(SCRequestManagerRunningTaskState *)runningTaskState;
-(void)setRunningTaskState:(SCRequestManagerRunningTaskState *)arg1 ;
-(NSMutableSet *)userWaitingTasks;
-(void)setUserWaitingTasks:(NSMutableSet *)arg1 ;
-(void)setDownloadManagerLogger:(SCRequestManagerLogger *)arg1 ;
-(void)setDownloadConsumptionRecorder:(SCDownloadConsumptionRecorder *)arg1 ;
-(BOOL)isBackgroundDownloadPaused;
-(void)setIsBackgroundDownloadPaused:(BOOL)arg1 ;
-(void)setQueuePerformer:(id<SCPerforming>)arg1 ;
-(void)setIsCriticalMode:(BOOL)arg1 ;
-(BOOL)isViewingSessionMode;
-(void)setIsViewingSessionMode:(BOOL)arg1 ;
-(BOOL)isChatSessionMode;
-(void)setIsChatSessionMode:(BOOL)arg1 ;
-(void)setIsContextOnlyModeForCurrentContextSession:(BOOL)arg1 ;
-(id)_requestToEndpoint:(id)arg1 parameters:(id)arg2 uploadData:(id)arg3 key:(id)arg4 contexts:(id)arg5 requestParser:(id)arg6 requestType:(long long)arg7 priority:(long long)arg8 method:(long long)arg9 authenticated:(BOOL)arg10 ;
-(id)init;
-(void)setDelegate:(id<SCRequestManagerDelegate>)arg1 ;
-(id<SCRequestManagerDelegate>)delegate;
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
