/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:41 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchQueryCoordinating.h>

@protocol SCSearchQueryCoordinatingSCSearchEventAnnouncing;
@class SCMapSearchSession, SCSearchEventListenerAnnouncer, SCSearchQueryResult, SCSearchQuery, SCSearchNavigationCoordinator, NSString;

@interface SCMapSearchV1QueryCoordinator : NSObject <SCSearchQueryCoordinating> {

	SCMapSearchSession* _mapSearchSession;
	SCSearchEventListenerAnnouncer* _eventAnnouncer;
	id<SCSearchQueryCoordinating><SCSearchEventAnnouncing> _mapSearchQueryCoordinator;
	id<SCSearchQueryCoordinating><SCSearchEventAnnouncing> _searchQueryCoordinator;
	SCSearchQueryResult* _latestMapQueryResult;
	SCSearchQueryResult* _lastestSearchQueryResult;
	SCSearchQuery* _currentQuery;
	SCSearchNavigationCoordinator* _navigationCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isLoading; 
@property (nonatomic,copy) SCSearchQuery * currentQuery;                                                //@synthesize currentQuery=_currentQuery - In the implementation block
@property (assign,nonatomic,__weak) SCSearchNavigationCoordinator * navigationCoordinator;              //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
+(id)announcerIdentifier;
-(void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3 ;
-(SCSearchNavigationCoordinator *)navigationCoordinator;
-(void)resultsForQuery:(id)arg1 updatingBlock:(/*^block*/id)arg2 ;
-(id)initWithSearchSession:(id)arg1 ;
-(BOOL)canPerformQuery:(id)arg1 ;
-(void)setNavigationCoordinator:(SCSearchNavigationCoordinator *)arg1 ;
-(void)_queryCoordinatorDidUpdateWithUpdatingBlock:(/*^block*/id)arg1 error:(id)arg2 ;
-(id)_combinedQueryResultFromMapResult:(id)arg1 searchResult:(id)arg2 ;
-(id)_filteredSectionDescriptors:(id)arg1 ;
-(BOOL)isLoading;
-(void)addListener:(id)arg1 ;
-(void)setCurrentQuery:(SCSearchQuery *)arg1 ;
-(SCSearchQuery *)currentQuery;
-(void)removeListener:(id)arg1 ;
@end

