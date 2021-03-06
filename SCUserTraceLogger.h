/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class SCQueueWithCapacity, NSObject, SCCrashEventLogger, NSMutableArray;

@interface SCUserTraceLogger : NSObject {

	SCQueueWithCapacity* _traces;
	NSObject*<OS_dispatch_semaphore> _tracesSemaphore;
	SCCrashEventLogger* _crashEventLogger;
	NSMutableArray* _events;

}

@property (nonatomic,retain) NSMutableArray * events;              //@synthesize events=_events - In the implementation block
+(id)shared;
-(void)addObservers;
-(id)initWithCrashEventLogger:(id)arg1 ;
-(void)logCrashTraceEvent:(id)arg1 ;
-(void)reportEvents;
-(BOOL)logUserTraceEvent:(id)arg1 ;
-(void)logUserTraceSnapEvent:(id)arg1 isImage:(BOOL)arg2 snapId:(id)arg3 ;
-(void)logUserTraceStoryEvent:(id)arg1 isImage:(BOOL)arg2 storyId:(id)arg3 hasNoMedia:(BOOL)arg4 ;
-(void)logUserTraceScrollingEventWithStartingY:(double)arg1 endingY:(double)arg2 pageName:(id)arg3 ;
-(id)getUserLastFiveTraces;
-(void)dealloc;
-(void)didEnterBackground:(id)arg1 ;
-(NSMutableArray *)events;
-(void)clearEvents;
-(void)setEvents:(NSMutableArray *)arg1 ;
@end

