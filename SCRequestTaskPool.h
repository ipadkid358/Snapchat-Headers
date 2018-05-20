/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface SCRequestTaskPool : NSObject {

	unsigned long long _numberOfInContextTasks;
	NSArray* _currentContexts;
	NSMutableDictionary* _tasks;
	NSMutableOrderedSet* _orderedTasksSet;

}

@property (nonatomic,retain) NSMutableDictionary * tasks;                        //@synthesize tasks=_tasks - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * orderedTasksSet;              //@synthesize orderedTasksSet=_orderedTasksSet - In the implementation block
@property (nonatomic,copy) NSArray * currentContexts;                            //@synthesize currentContexts=_currentContexts - In the implementation block
-(NSArray *)currentContexts;
-(void)_removeTaskFromOrderedTasksSet:(id)arg1 ;
-(void)_addTaskToOrderedTasksSet:(id)arg1 ;
-(NSMutableOrderedSet *)orderedTasksSet;
-(BOOL)_isInContextLargeDownloadTask:(id)arg1 ;
-(void)_countInContextLargeDownloadTasks;
-(void)setOrderedTasksSet:(NSMutableOrderedSet *)arg1 ;
-(void)setCurrentContexts:(NSArray *)arg1 ;
-(id)taskForKey:(id)arg1 ;
-(void)boostTaskIfNecessary:(id)arg1 ;
-(id)removeTaskForKey:(id)arg1 ;
-(BOOL)isInContextIdleState;
-(id)orderedTasks;
-(id)init;
-(void)addTask:(id)arg1 ;
-(id)allTasks;
-(NSMutableDictionary *)tasks;
-(void)setTasks:(NSMutableDictionary *)arg1 ;
@end
