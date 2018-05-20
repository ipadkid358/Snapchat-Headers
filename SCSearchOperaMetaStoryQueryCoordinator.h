/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchQueryCoordinating.h>
#import <Snapchat/SCSearchEventAnnouncing.h>

@class SCUserSession, SCSearchEventListenerAnnouncer, SCSearchCachedRequestManager, SCSearchQuery, SCSearchNavigationCoordinator, NSString;

@interface SCSearchOperaMetaStoryQueryCoordinator : NSObject <SCSearchQueryCoordinating, SCSearchEventAnnouncing> {

	SCUserSession* _userSession;
	SCSearchEventListenerAnnouncer* _eventAnnouncer;
	SCSearchCachedRequestManager* _cachedRequestManager;
	SCSearchQuery* _currentQuery;
	BOOL _isLoading;
	SCSearchNavigationCoordinator* _navigationCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isLoading;                                                          //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,copy) SCSearchQuery * currentQuery;                                                //@synthesize currentQuery=_currentQuery - In the implementation block
@property (assign,nonatomic,__weak) SCSearchNavigationCoordinator * navigationCoordinator;              //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
+(id)announcerIdentifier;
-(void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3 ;
-(id)initWithUserSession:(id)arg1 ;
-(SCSearchNavigationCoordinator *)navigationCoordinator;
-(void)resultsForQuery:(id)arg1 updatingBlock:(/*^block*/id)arg2 ;
-(BOOL)canPerformQuery:(id)arg1 ;
-(void)setNavigationCoordinator:(SCSearchNavigationCoordinator *)arg1 ;
-(void)_setChatSectionWithQuery:(id)arg1 updatingBlock:(/*^block*/id)arg2 ;
-(void)_setLocalSectionWithQuery:(id)arg1 queryInfo:(id)arg2 updatingBlock:(/*^block*/id)arg3 ;
-(void)_fetchMetaStoryResponseWithQuery:(id)arg1 queryInfo:(id)arg2 updatingBlock:(/*^block*/id)arg3 ;
-(void)_handleResponse:(id)arg1 withQuery:(id)arg2 updatingBlock:(/*^block*/id)arg3 ;
-(void)_updateWithQuery:(id)arg1 response:(id)arg2 updatingBlock:(/*^block*/id)arg3 ;
-(id)_sectionDescriptorsFromQuery:(id)arg1 response:(id)arg2 ;
-(BOOL)isLoading;
-(void)addListener:(id)arg1 ;
-(void)setCurrentQuery:(SCSearchQuery *)arg1 ;
-(SCSearchQuery *)currentQuery;
-(void)removeListener:(id)arg1 ;
@end
