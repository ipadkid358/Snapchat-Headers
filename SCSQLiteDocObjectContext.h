/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCDocObjectContext.h>
#import <Snapchat/SCDocObjectIndexBuilder.h>

@protocol OS_dispatch_queue, SCDocObjectActivityMonitor;
@class NSObject, NSString;

@interface SCSQLiteDocObjectContext : SCDocObjectContext <SCDocObjectIndexBuilder> {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _path;
	id<SCDocObjectActivityMonitor> _activityMonitor;
	unique_ptr<SQLiteConnection, std::__1::default_delete<SQLiteConnection> >* _writeConnection;
	unique_ptr<SC::ObjectPool<SQLiteConnection, 63>, std::__1::default_delete<SC::ObjectPool<SQLiteConnection, 63> > >* _readConnections;
	BOOL _tableHasUnindexed;
	unordered_map<long, SCDocObjectClassFunctionPointer, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, SCDocObjectClassFunctionPointer> > >* _tableFunctionPointer;
	unordered_map<long, std::__1::unordered_map<long long, SCDocObject *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, SCDocObject *> > >, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, std::__1::unordered_map<long long, SCDocObject *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, SCDocObject *> > > > > >* _tableUpdatedObjectPool;
	unordered_map<long, std::__1::unordered_map<long long, SCDocObject *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, SCDocObject *> > >, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, std::__1::unordered_map<long long, SCDocObject *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, SCDocObject *> > > > > >* _tableObjectPool;
	unordered_set<long, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<long> >* _tableCreated;
	atomic<unsigned long long> _changesTimestamp;
	unordered_map<long, unsigned long long, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, unsigned long long> > >* _tableChangesTimestamp;
	atomic<unsigned long long> _observationToken;
	unordered_map<long, std::__1::unordered_map<long long, std::__1::unordered_map<unsigned long long, SCObjectObservation, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCObjectObservation> > >, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::unordered_map<unsigned long long, SCObjectObservation, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCObjectObservation> > > > > >, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, std::__1::unordered_map<long long, std::__1::unordered_map<unsigned long long, SCObjectObservation, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCObjectObservation> > >, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::unordered_map<unsigned long long, SCObjectObservation, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCObjectObservation> > > > > > > > >* _tableObjectObservationPool;
	atomic<unsigned long long> _fetchedResultObservationToken;
	unordered_map<long, std::__1::unordered_map<unsigned long long, SCFetchedResultObserver, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCFetchedResultObserver> > >, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, std::__1::unordered_map<unsigned long long, SCFetchedResultObserver, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, SCFetchedResultObserver> > > > > >* _tableFetchedResultObserverPool;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)SQLiteDocObjectCurrentBlockFetching;
+(id)SQLiteDocObjectCurrentContext;
-(void)unobserveFetchedResult:(unsigned long long)arg1 fetchedResultId:(unsigned long long)arg2 table:(long long)arg3 ;
-(void)unobserve:(unsigned long long)arg1 rowid:(long long)arg2 table:(long long)arg3 ;
-(void)_observe:(id)arg1 klass:(Class)arg2 rowid:(long long)arg3 table:(const char*)arg4 token:(unsigned long long)arg5 callbackQueue:(id)arg6 changeHandler:(/*^block*/id)arg7 ;
-(void)_observeFetchedResult:(id)arg1 fetchedResultId:(unsigned long long)arg2 table:(const char*)arg3 token:(unsigned long long)arg4 callbackQueue:(id)arg5 changeHandler:(/*^block*/id)arg6 ;
-(void)_triggerRebuildTableIndexes;
-(void)_unobserve:(unsigned long long)arg1 rowid:(long long)arg2 table:(long long)arg3 ;
-(void)_unobserveFetchedResult:(unsigned long long)arg1 fetchedResultId:(unsigned long long)arg2 table:(long long)arg3 ;
-(void)_buildIndexes:(const vector<const char *, std::__1::allocator<const char *> >*)arg1 forTable:(long long)arg2 tableFunctionPointer:(SCDocObjectClassFunctionPointer*)arg3 ;
-(void)buildIndexes:(vector<const char *, std::__1::allocator<const char *> >*)arg1 forTable:(long long)arg2 tableFunctionPointer:(SCDocObjectClassFunctionPointer*)arg3 ;
-(id)initWithPath:(id)arg1 options:(compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, std::__1::less<std::__1::basic_string<char> >, true> >)arg2 monitor:(id)arg3 ;
-(id)fetchWithBlock:(/*^block*/id)arg1 ;
-(Builder*)fetchForClass:(Class)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)observe:(id)arg1 callbackQueue:(id)arg2 changeHandler:(/*^block*/id)arg3 ;
-(id)observeFetchedResult:(id)arg1 callbackQueue:(id)arg2 changeHandler:(/*^block*/id)arg3 ;
-(SQLiteConnection*)writeConnection;
-(id)objectForClass:(Class)arg1 byRowid:(long long)arg2 buffer:(const void*)arg3 ;
-(void)setFetchedObject:(id)arg1 forClass:(Class)arg2 byRowid:(long long)arg3 ;
-(void)setUpdatedObject:(id)arg1 forClass:(Class)arg2 byRowid:(long long)arg3 ;
-(void)dealloc;
-(BOOL)_performChanges:(/*^block*/id)arg1 ;
-(void)shutdown;
@end

