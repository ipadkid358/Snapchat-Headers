/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:30 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchQueryCoordinating.h>

@class SCSearchSession, SCSearchQuery, SCSearchNavigationCoordinator, NSString;

@interface SCProfileV3ContactsQueryCoordinator : NSObject <SCSearchQueryCoordinating> {

	SCSearchSession* _searchSession;
	BOOL _isLoading;
	SCSearchQuery* _currentQuery;
	SCSearchNavigationCoordinator* _navigationCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isLoading;                                                          //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,copy) SCSearchQuery * currentQuery;                                                //@synthesize currentQuery=_currentQuery - In the implementation block
@property (assign,nonatomic,__weak) SCSearchNavigationCoordinator * navigationCoordinator;              //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
-(SCSearchNavigationCoordinator *)navigationCoordinator;
-(void)resultsForQuery:(id)arg1 updatingBlock:(/*^block*/id)arg2 ;
-(id)initWithSearchSession:(id)arg1 ;
-(BOOL)canPerformQuery:(id)arg1 ;
-(void)setNavigationCoordinator:(SCSearchNavigationCoordinator *)arg1 ;
-(id)_noResultsSectionDescriptor;
-(id)_contactsSectionDescriptorForQuery:(id)arg1 ;
-(id)_phoneBookSectionDescriptorForQuery:(id)arg1 ;
-(id)_needContactsPermissionsSectionDescriptor;
-(BOOL)isLoading;
-(void)setCurrentQuery:(SCSearchQuery *)arg1 ;
-(SCSearchQuery *)currentQuery;
@end

