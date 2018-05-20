/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCRequestTaskSchedulingInfo : NSObject {

	BOOL _isHighPriority;
	long long _numRunningRegularTasks;
	long long _numRunningHighPriorityTasks;
	unsigned long long _runningLargeUponScheduled;
	unsigned long long _runningSmallUponScheduled;
	unsigned long long _queuedLargeUponScheduled;
	unsigned long long _queuedSmallUponScheduled;
	double _runStartTime;

}

@property (assign,nonatomic) BOOL isHighPriority;                                       //@synthesize isHighPriority=_isHighPriority - In the implementation block
@property (assign,nonatomic) long long numRunningRegularTasks;                          //@synthesize numRunningRegularTasks=_numRunningRegularTasks - In the implementation block
@property (assign,nonatomic) long long numRunningHighPriorityTasks;                     //@synthesize numRunningHighPriorityTasks=_numRunningHighPriorityTasks - In the implementation block
@property (assign,nonatomic) unsigned long long runningLargeUponScheduled;              //@synthesize runningLargeUponScheduled=_runningLargeUponScheduled - In the implementation block
@property (assign,nonatomic) unsigned long long runningSmallUponScheduled;              //@synthesize runningSmallUponScheduled=_runningSmallUponScheduled - In the implementation block
@property (assign,nonatomic) unsigned long long queuedLargeUponScheduled;               //@synthesize queuedLargeUponScheduled=_queuedLargeUponScheduled - In the implementation block
@property (assign,nonatomic) unsigned long long queuedSmallUponScheduled;               //@synthesize queuedSmallUponScheduled=_queuedSmallUponScheduled - In the implementation block
@property (assign,nonatomic) double runStartTime;                                       //@synthesize runStartTime=_runStartTime - In the implementation block
-(void)setIsHighPriority:(BOOL)arg1 ;
-(long long)numRunningRegularTasks;
-(void)setNumRunningRegularTasks:(long long)arg1 ;
-(long long)numRunningHighPriorityTasks;
-(void)setNumRunningHighPriorityTasks:(long long)arg1 ;
-(unsigned long long)runningLargeUponScheduled;
-(void)setRunningLargeUponScheduled:(unsigned long long)arg1 ;
-(unsigned long long)runningSmallUponScheduled;
-(void)setRunningSmallUponScheduled:(unsigned long long)arg1 ;
-(unsigned long long)queuedLargeUponScheduled;
-(void)setQueuedLargeUponScheduled:(unsigned long long)arg1 ;
-(unsigned long long)queuedSmallUponScheduled;
-(void)setQueuedSmallUponScheduled:(unsigned long long)arg1 ;
-(double)runStartTime;
-(void)setRunStartTime:(double)arg1 ;
-(BOOL)isHighPriority;
@end
