/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSearchEventListener.h>
#import <Snapchat/SCSearchSectionBasedCollectionViewUpdaterDelegate.h>
#import <Snapchat/SCSearchQueryStateAwareSupplementaryViewProviderDelegate.h>
#import <Snapchat/SCSearchEventAnnouncing.h>

@protocol SCSearchQueryCoordinating, SCSearchSectionCreating, SCSearchIntentHandler, SCSearchQueryResultControllerDelegate;
@class SCSearchSectionController, UICollectionView, SCSearchQuery, NSArray, SCSearchEventListenerAnnouncer, SCSearchSectionBasedCollectionViewUpdater, NSString;

@interface SCSearchQueryResultController : NSObject <SCSearchEventListener, SCSearchSectionBasedCollectionViewUpdaterDelegate, SCSearchQueryStateAwareSupplementaryViewProviderDelegate, SCSearchEventAnnouncing> {

	id<SCSearchQueryCoordinating> _queryCoordinator;
	id<SCSearchSectionCreating> _sectionCreator;
	id<SCSearchIntentHandler> _intentHandler;
	SCSearchSectionController* _sectionController;
	UICollectionView* _resultCollectionView;
	SCSearchQuery* _pendingQuery;
	long long _pendingResultState;
	SCSearchQuery* _displayedQuery;
	NSArray* _noResultSectionDescriptors;
	SCSearchEventListenerAnnouncer* _eventAnnouncer;
	BOOL _shouldPerformAnimationWhenQueryChanges;
	id<SCSearchQueryResultControllerDelegate> _delegate;
	SCSearchSectionBasedCollectionViewUpdater* _collectionViewUpdater;
	SCSearchQuery* _query;
	long long _currentQueryResultState;

}

@property (assign,nonatomic) BOOL shouldPerformAnimationWhenQueryChanges;                                      //@synthesize shouldPerformAnimationWhenQueryChanges=_shouldPerformAnimationWhenQueryChanges - In the implementation block
@property (assign,nonatomic,__weak) id<SCSearchQueryResultControllerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<UICollectionViewDelegate> collectionViewDelegate; 
@property (nonatomic,readonly) SCSearchSectionBasedCollectionViewUpdater * collectionViewUpdater;              //@synthesize collectionViewUpdater=_collectionViewUpdater - In the implementation block
@property (nonatomic,copy) SCSearchQuery * query;                                                              //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) long long currentQueryResultState;                                              //@synthesize currentQueryResultState=_currentQueryResultState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3 ;
-(void)setCollectionViewDelegate:(id<UICollectionViewDelegate>)arg1 ;
-(id<UICollectionViewDelegate>)collectionViewDelegate;
-(UIEdgeInsets)sectionInsetsForSectionBasedCollectionViewUpdater:(id)arg1 ;
-(id)presentingViewControllerForSectionBasedCollectionViewUpdater:(id)arg1 ;
-(void)sectionBasedCollectionViewUpdaterWillUpdateCollectionView:(id)arg1 ;
-(void)sectionBasedCollectionViewUpdater:(id)arg1 didUpdateSectionsWithAnimationFinished:(BOOL)arg2 ;
-(void)sectionBasedCollectionViewUpdater:(id)arg1 didUpdateLayoutWithAnimationFinished:(BOOL)arg2 ;
-(void)sectionBasedCollectionViewUpdater:(id)arg1 didSetUpSections:(id)arg2 ;
-(void)sectionBasedCollectionViewUpdater:(id)arg1 didTearDownSections:(id)arg2 ;
-(void)_applyNewQueryResults:(id)arg1 ;
-(void)_updateCurrentResultState:(long long)arg1 ;
-(BOOL)_hasItemsInResult;
-(void)_updateWithNoResultSections;
-(void)_announceNoResultEvent;
-(void)_updateResultsWithQuery:(id)arg1 sectionDescriptors:(id)arg2 resultState:(long long)arg3 ;
-(void)_applySectionsChangesWithQuery:(id)arg1 newSectionWithConfigurations:(id)arg2 resultState:(long long)arg3 ;
-(void)_notifyQueryStateAwareSupplementaryViewProviders;
-(void)queryStateAwareSupplementaryViewProviderWantsReload:(id)arg1 ;
-(id)initWithResultCollectionView:(id)arg1 queryCoordinator:(id)arg2 sectionCreator:(id)arg3 intentHandler:(id)arg4 ;
-(BOOL)shouldPerformAnimationWhenQueryChanges;
-(void)setShouldPerformAnimationWhenQueryChanges:(BOOL)arg1 ;
-(SCSearchSectionBasedCollectionViewUpdater *)collectionViewUpdater;
-(long long)currentQueryResultState;
-(void)setDelegate:(id<SCSearchQueryResultControllerDelegate>)arg1 ;
-(id<SCSearchQueryResultControllerDelegate>)delegate;
-(SCSearchQuery *)query;
-(void)setQuery:(SCSearchQuery *)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

