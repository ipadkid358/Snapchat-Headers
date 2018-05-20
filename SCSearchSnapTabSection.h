/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSearchMenuHeaderViewDelegate.h>
#import <Snapchat/SCSearchHScrollContainerCollectionViewCellDelegate.h>
#import <Snapchat/SCTimeProfilable.h>
#import <Snapchat/SCSearchEventListener.h>
#import <Snapchat/SCSearchCollectionViewSectionSupplementaryViewProviding.h>
#import <Snapchat/SCSearchCollectionViewSection.h>
#import <Snapchat/SCSearchEventAnnouncing.h>

@protocol SCSearchCollectionViewSectionDelegate, SCSearchIntentHandler, SCSearchCollectionViewSectionSupplementaryViewProviderDelegate;
@class SCSearchSession, SCSearchMenuHeaderView, NSMutableArray, NSArray, NSMutableDictionary, SCSearchQuery, SCSearchDynamicStory, SCSearchEventListenerAnnouncer, SCSearchCachedRequestManager, SCSearchCollectionViewSectionUpdateModel, NSString;

@interface SCSearchSnapTabSection : NSObject <SCSearchMenuHeaderViewDelegate, SCSearchHScrollContainerCollectionViewCellDelegate, SCTimeProfilable, SCSearchEventListener, SCSearchCollectionViewSectionSupplementaryViewProviding, SCSearchCollectionViewSection, SCSearchEventAnnouncing> {

	SCSearchSession* _searchSession;
	SCSearchMenuHeaderView* _headerView;
	NSMutableArray* _mutableContainerConfigurations;
	NSArray* _sectionHeaders;
	NSArray* _suggestionCards;
	NSMutableDictionary* _mutableCategoricalResponsesForTab;
	unsigned long long _selectedIndex;
	unsigned long long _numberOfExpansions;
	double _preferredCellHeight;
	double _collectionViewWidth;
	BOOL _shouldEnableLoop;
	BOOL _shouldEnablePreload;
	SCSearchQuery* _currentQuery;
	SCSearchDynamicStory* _lastViewedStory;
	SCSearchEventListenerAnnouncer* _eventAnnouncer;
	SCSearchCachedRequestManager* _cachedRequestManager;
	id<SCSearchCollectionViewSectionDelegate> _delegate;
	id<SCSearchIntentHandler> _intentHandler;
	SCSearchCollectionViewSectionUpdateModel* _sectionUpdateModel;
	long long _dataLoadingStatus;
	id<SCSearchCollectionViewSectionSupplementaryViewProviderDelegate> _supplementaryViewProviderDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCSearchCollectionViewSectionSupplementaryViewProviderDelegate> supplementaryViewProviderDelegate;              //@synthesize supplementaryViewProviderDelegate=_supplementaryViewProviderDelegate - In the implementation block
@property (nonatomic,readonly) long long sectionHeaderDisplayStrategy; 
@property (nonatomic,copy) SCSearchCollectionViewSectionUpdateModel * sectionUpdateModel;                                                              //@synthesize sectionUpdateModel=_sectionUpdateModel - In the implementation block
@property (assign,nonatomic,__weak) id<SCSearchCollectionViewSectionDelegate> delegate;                                                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCSearchIntentHandler> intentHandler;                                                                           //@synthesize intentHandler=_intentHandler - In the implementation block
@property (assign,nonatomic) long long dataLoadingStatus;                                                                                              //@synthesize dataLoadingStatus=_dataLoadingStatus - In the implementation block
@property (nonatomic,retain) id<SCSearchCollectionViewSectionLayoutProviding> layoutCalculator; 
+(id)announcerIdentifier;
+(int)context;
-(void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3 ;
-(long long)sectionHeaderDisplayStrategy;
-(id)viewForSupplementaryElementOfKind:(id)arg1 atIndexInSection:(unsigned long long)arg2 ;
-(CGSize)referenceSizeForSupplementaryElementOfKind:(id)arg1 atIndexInSection:(unsigned long long)arg2 withWidth:(double)arg3 ;
-(id)viewClassesForSupplementaryViewsByElementKind;
-(void)setSupplementaryViewProviderDelegate:(id<SCSearchCollectionViewSectionSupplementaryViewProviderDelegate>)arg1 ;
-(void)_announceScrollValue:(BOOL)arg1 ;
-(CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2 ;
-(id)reuseCellClassesByIdentifiers;
-(unsigned long long)numberOfCellsInSection;
-(id)cellForItemAtIndexInSection:(unsigned long long)arg1 ;
-(SCSearchCollectionViewSectionUpdateModel *)sectionUpdateModel;
-(void)setSectionUpdateModel:(SCSearchCollectionViewSectionUpdateModel *)arg1 ;
-(id<SCSearchIntentHandler>)intentHandler;
-(void)setIntentHandler:(id<SCSearchIntentHandler>)arg1 ;
-(long long)dataLoadingStatus;
-(void)setDataLoadingStatus:(long long)arg1 ;
-(id)supplementaryViewProvider;
-(void)collectionViewWillDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexInSection:(unsigned long long)arg3 ;
-(void)collectionViewWillDisplayCell:(id)arg1 atIndexInSection:(unsigned long long)arg2 ;
-(id<SCSearchCollectionViewSectionSupplementaryViewProviderDelegate>)supplementaryViewProviderDelegate;
-(id)initWithSearchSession:(id)arg1 ;
-(void)_updateSection;
-(void)_updateWithConfiguration:(id)arg1 ;
-(void)searchMenuHeaderView:(id)arg1 didScrollToItemAtIndex:(unsigned long long)arg2 ;
-(void)_announceCachedResults:(id)arg1 forCacheKey:(id)arg2 ;
-(void)_resetScrollingAndUpdatingWithConfiguration:(id)arg1 ;
-(void)_loadHeaderViewIfNeeded;
-(void)_loadStoriesForSuggestionAtIndexPath:(unsigned long long)arg1 ;
-(void)_updateSelectedIndex:(unsigned long long)arg1 ;
-(void)_updateDynamicStories:(id)arg1 forSuggestionCard:(id)arg2 withNewContainerConfiguration:(id)arg3 ;
-(id)_extraDataForIndexPath:(id)arg1 action:(long long)arg2 categoricalResponse:(id)arg3 ;
-(void)_handleLocationAuthorizedForSuggestionCard:(id)arg1 ;
-(void)_handleLocationUnauthorized;
-(id)_extraDataForIndexPath:(id)arg1 actionIdentifier:(id)arg2 categoricalResponse:(id)arg3 ;
-(void)_updateContainerConfigurations:(id)arg1 numberOfExpansions:(unsigned long long)arg2 preferredHeight:(double)arg3 ;
-(void)_updatePreferredCellHeight:(double)arg1 shouldUpdateIfChanged:(BOOL)arg2 isInteracting:(BOOL)arg3 ;
-(void)_updateDataSourceWithSuggestionCards:(id)arg1 sectionTitles:(id)arg2 categoricalResponsesForTab:(id)arg3 containerConfigurations:(id)arg4 numberOfExpansions:(unsigned long long)arg5 selectedIndex:(unsigned long long)arg6 preferredHeight:(double)arg7 query:(id)arg8 shouldEnableLoop:(BOOL)arg9 ;
-(void)_announceSearchResultsForSuggestionCard:(id)arg1 categoricalResponse:(id)arg2 queryType:(long long)arg3 ;
-(void)_loadStoriesForSuggestionCardIfNeeded:(id)arg1 ;
-(void)_handleStoriesLoadResponseWithResponse:(id)arg1 searchRequest:(id)arg2 forSuggestionCard:(id)arg3 currentQueryUUID:(id)arg4 resultsQueryUUID:(id)arg5 isResponseUpToDate:(BOOL)arg6 isCachedResponse:(BOOL)arg7 requestSentTimestamp:(id)arg8 ;
-(void)_announceResultsWithQueryUUID:(id)arg1 currentQueryUUID:(id)arg2 forCacheKey:(id)arg3 ;
-(void)_announceResponseLatencyWithLatency:(double)arg1 isResponseUpToDate:(BOOL)arg2 isCachedResponse:(BOOL)arg3 ;
-(void)_announceResultsForSuggestionCard:(id)arg1 categoricalResponse:(id)arg2 ;
-(void)_announceCellsForSuggestionCard:(id)arg1 withCellViewModels:(id)arg2 ;
-(void)_announceCellsWereScrolled:(BOOL)arg1 andCellsForSuggestionCard:(id)arg2 withCellViewModels:(id)arg3 ;
-(void)_announceScrollValueIfPossible:(BOOL)arg1 ;
-(BOOL)_selectedIndexPossible;
-(void)hscrollContainerCollectionViewCell:(id)arg1 didTapItemAtIndexPath:(id)arg2 inContainerAtIndex:(unsigned long long)arg3 ;
-(void)hscrollContainerCollectionViewCell:(id)arg1 didLongPressItemAtIndexPath:(id)arg2 inContainerAtIndex:(unsigned long long)arg3 ;
-(void)hscrollContainerCollectionViewCell:(id)arg1 didTriggerActionFromItemAtIndexPath:(id)arg2 withActionModel:(id)arg3 fromSourceView:(id)arg4 inContainerAtIndex:(unsigned long long)arg5 ;
-(void)hscrollContainerCollectionViewCell:(id)arg1 didTapViewMoreInContainerAtIndex:(unsigned long long)arg2 ;
-(void)hscrollContainerCollectionViewCell:(id)arg1 didDragToItemAtIndex:(unsigned long long)arg2 distanceRatio:(double)arg3 ;
-(void)hscrollContainerCollectionViewCell:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2 ;
-(void)hscrollContainerCollectionViewCell:(id)arg1 willDisplayCellAtIndexPath:(id)arg2 ;
-(void)setDelegate:(id<SCSearchCollectionViewSectionDelegate>)arg1 ;
-(id<SCSearchCollectionViewSectionDelegate>)delegate;
-(void)tearDown;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)applyConfiguration:(id)arg1 ;
-(void)setUp;
@end

