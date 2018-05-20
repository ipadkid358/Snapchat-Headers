/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, SCQueuePerformer;

@interface SCRequestConcurrencyCounter : NSObject {

	NSMutableDictionary* _registeredTasks;
	NSMutableDictionary* _largeDLTasksInContext;
	NSMutableDictionary* _largeDLTasksInURLSessionPriority;
	SCQueuePerformer* _performer;
	unsigned long long _numOfAnalyticTasks;
	unsigned long long _numOfMetadataTasks;
	unsigned long long _numOfUploadTasks;
	unsigned long long _numOfSmallDLTasks;
	unsigned long long _numOfLargeDLTasks;
	unsigned long long _numOfBatchSmallDLTasks;
	unsigned long long _numOfLargeOutOfContextDownloadTasks;
	unsigned long long _numOfLargeInContextDownloadTasks;
	unsigned long long _numOfSmallOutOfContextDownloadTasks;
	unsigned long long _numOfSmallInContextDownloadTasks;

}

@property (assign) unsigned long long numOfAnalyticTasks;                               //@synthesize numOfAnalyticTasks=_numOfAnalyticTasks - In the implementation block
@property (assign) unsigned long long numOfMetadataTasks;                               //@synthesize numOfMetadataTasks=_numOfMetadataTasks - In the implementation block
@property (assign) unsigned long long numOfUploadTasks;                                 //@synthesize numOfUploadTasks=_numOfUploadTasks - In the implementation block
@property (assign) unsigned long long numOfSmallDLTasks;                                //@synthesize numOfSmallDLTasks=_numOfSmallDLTasks - In the implementation block
@property (assign) unsigned long long numOfLargeDLTasks;                                //@synthesize numOfLargeDLTasks=_numOfLargeDLTasks - In the implementation block
@property (assign) unsigned long long numOfBatchSmallDLTasks;                           //@synthesize numOfBatchSmallDLTasks=_numOfBatchSmallDLTasks - In the implementation block
@property (assign) unsigned long long numOfLargeOutOfContextDownloadTasks;              //@synthesize numOfLargeOutOfContextDownloadTasks=_numOfLargeOutOfContextDownloadTasks - In the implementation block
@property (assign) unsigned long long numOfLargeInContextDownloadTasks;                 //@synthesize numOfLargeInContextDownloadTasks=_numOfLargeInContextDownloadTasks - In the implementation block
@property (assign) unsigned long long numOfSmallOutOfContextDownloadTasks;              //@synthesize numOfSmallOutOfContextDownloadTasks=_numOfSmallOutOfContextDownloadTasks - In the implementation block
@property (assign) unsigned long long numOfSmallInContextDownloadTasks;                 //@synthesize numOfSmallInContextDownloadTasks=_numOfSmallInContextDownloadTasks - In the implementation block
+(unsigned long long)_numberOfTasksInArray:(id)arg1 thatMatch:(/*^block*/id)arg2 ;
-(BOOL)hasRegisteredTask:(id)arg1 ;
-(unsigned long long)numOfAnalyticTasks;
-(unsigned long long)numOfUploadTasks;
-(unsigned long long)numOfBatchSmallDLTasks;
-(unsigned long long)numOfSmallDLTasks;
-(unsigned long long)numOfLargeDLTasks;
-(void)updateTask:(id)arg1 willRunTask:(BOOL)arg2 ;
-(void)setNumOfAnalyticTasks:(unsigned long long)arg1 ;
-(unsigned long long)numOfMetadataTasks;
-(void)setNumOfMetadataTasks:(unsigned long long)arg1 ;
-(void)setNumOfUploadTasks:(unsigned long long)arg1 ;
-(void)setNumOfBatchSmallDLTasks:(unsigned long long)arg1 ;
-(void)setNumOfSmallDLTasks:(unsigned long long)arg1 ;
-(unsigned long long)numOfSmallOutOfContextDownloadTasks;
-(void)setNumOfSmallOutOfContextDownloadTasks:(unsigned long long)arg1 ;
-(unsigned long long)numOfSmallInContextDownloadTasks;
-(void)setNumOfSmallInContextDownloadTasks:(unsigned long long)arg1 ;
-(void)setNumOfLargeDLTasks:(unsigned long long)arg1 ;
-(unsigned long long)numOfLargeOutOfContextDownloadTasks;
-(void)setNumOfLargeOutOfContextDownloadTasks:(unsigned long long)arg1 ;
-(unsigned long long)numOfLargeInContextDownloadTasks;
-(void)setNumOfLargeInContextDownloadTasks:(unsigned long long)arg1 ;
-(BOOL)_isCriticalTask:(id)arg1 ;
-(void)addContext:(id)arg1 toTask:(id)arg2 ;
-(void)removeContext:(id)arg1 toTask:(id)arg2 ;
-(unsigned long long)numOfCriticalTasks;
-(unsigned long long)numOfLargeDLTasksInContext:(id)arg1 ;
-(unsigned long long)numOfLargeDLTasksInURLSessionPriority:(float)arg1 ;
-(unsigned long long)numOfLargeDLTasksInContext:(id)arg1 URLSessionPriority:(float)arg2 ;
-(unsigned long long)numOfRunningInContextDownloadTasks;
-(unsigned long long)numOfRunningLargeInContextDownloadTasks;
-(id)init;
-(void)reset;
-(void)registerTask:(id)arg1 ;
-(void)unregisterTask:(id)arg1 ;
@end

