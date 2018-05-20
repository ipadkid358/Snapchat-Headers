/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Snapchat/SCStickerPickerCategoryDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Snapchat/SCStickerSearchBarDelegate.h>
#import <Snapchat/SCTimeProfilable.h>
#import <Snapchat/SCSearchViewDelegate.h>
#import <Snapchat/SCStickerPickerV2IconsControllerDelegate.h>
#import <Snapchat/SCStickerSearchAnimatedTooltipDelegate.h>
#import <Snapchat/SCStickerPickerSubCategoryTabBarDataSource.h>
#import <Snapchat/SCStickerPickerSubCategoryTabBarDelegate.h>

@protocol SCStickerPickerMenuDelegate, SCStickerPickerMenuDataSource;
@class SCUserSession, SCSessionRequestManager, UIView, SCStickerSearchBar, SCStickerSearchAnimatedTooltip, SCSearchView, SCStickeFriendMojiSearchController, UIVisualEffectView, UICollectionView, UILabel, SCStickerPickerIconsCollectionViewLayout, SCStickerPickerCollectionView, SCStickerPickerCategoryCell, SCStickerCategory, NSArray, NSMutableDictionary, NSIndexPath, UIPanGestureRecognizer, NSString, SCStickerTagFuzzySearch, SCStickerGiphySearchRequestManager, SCStickerPickerLogger, UIImageView, SCStickerPickerStickerCell, UITextView, SCCustomStickerEmptyPage, UIImage, SCStickerPickerV2IconsController, SCRoundedCornersView, NSTimer, SCStickerPickerSubCategoryTabBar, NSLayoutConstraint;

@interface SCStickerPickerMenuView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, SCStickerPickerCategoryDelegate, UIGestureRecognizerDelegate, SCStickerSearchBarDelegate, SCTimeProfilable, SCSearchViewDelegate, SCStickerPickerV2IconsControllerDelegate, SCStickerSearchAnimatedTooltipDelegate, SCStickerPickerSubCategoryTabBarDataSource, SCStickerPickerSubCategoryTabBarDelegate> {

	SCUserSession* _userSession;
	SCSessionRequestManager* _requestManager;
	double _iconViewSize;
	double _iconSize;
	UIView* _gradientView;
	SCStickerSearchBar* _stickerSearchBar;
	SCStickerSearchAnimatedTooltip* _searchBarAnimatedTooltip;
	SCSearchView* _searchBarView;
	SCStickeFriendMojiSearchController* _friendMojiSearchController;
	UIView* _lineSeparator;
	UIView* _headerView;
	UIVisualEffectView* _iconsCollectionBlurView;
	UICollectionView* _iconsCollectionsView;
	UILabel* _noResultsLabel;
	BOOL _scrollingLocked;
	SCStickerPickerIconsCollectionViewLayout* _iconsCollectionViewLayout;
	SCStickerPickerCollectionView* _stickerCategoriesCollectionView;
	SCStickerPickerCategoryCell* _searchDisplayCell;
	SCStickerPickerCategoryCell* _pretypeSearchDisplayCell;
	SCStickerCategory* _searchResultsStickerCategory;
	SCStickerCategory* _preTypeSearchResultsStickerCategory;
	NSArray* _popularQueries;
	UIVisualEffectView* _blurBackground;
	NSMutableDictionary* _categoryVisibleStickerContentOffsetYs;
	NSIndexPath* _selectedCategoryIndex;
	NSIndexPath* _previousCategoryIndex;
	UIPanGestureRecognizer* _panGestureRecognizer;
	unsigned long long _sourceType;
	BOOL _isPresenting;
	double _stickerPickerCategoryCellCollectionViewTopInset;
	BOOL _suppressDidscrollEvents;
	NSString* _currentSearchText;
	SCStickerTagFuzzySearch* _stickerSearch;
	SCStickerGiphySearchRequestManager* _giphySearchManager;
	NSArray* _giphySearchResultHolder;
	NSString* _giphySearchHolderText;
	BOOL _shouldKeyboardShow;
	long long _enterSearchCount;
	long long _pretypeStickerTagSelectCount;
	long long _prefixMatchStickerTagSelectCount;
	BOOL _isQuickSend;
	/*^block*/id _stickerSearchBlock;
	/*^block*/id _giphyStickerSearchBlock;
	SCStickerPickerLogger* _stickerPickerLogger;
	UIImageView* _sitckerIsMoving;
	SCStickerPickerStickerCell* _cellIsMoving;
	BOOL _inDeleteStickerMode;
	UITextView* _debuggingTextLabel;
	SCCustomStickerEmptyPage* _customStickerEmptyPage;
	UIImage* _previewImage;
	double _buttomInset;
	BOOL _singleCategoryMode;
	NSString* _lastStickerPackContext;
	BOOL _enableWhiteUIV1;
	BOOL _enableWhiteUIV2;
	BOOL _enableGiphySticker;
	BOOL _hasPretypingPage;
	BOOL _isSearchingGiphyStickers;
	BOOL _isFetchingGiphyTrending;
	SCStickerPickerV2IconsController* _iconsController;
	SCRoundedCornersView* _stickerCategoryCellBackgroundView;
	NSTimer* _giphySearchTimeoutTimer;
	NSTimer* _giphyTrendingTimer;
	/*^block*/id _giphyTrendingCompletionBlock;
	BOOL _isOpen;
	id<SCStickerPickerMenuDelegate> _delegate;
	id<SCStickerPickerMenuDataSource> _dataSource;
	UIView* _tabBarContainer;
	SCStickerPickerSubCategoryTabBar* _subCategoryTabBar;
	NSLayoutConstraint* _tabBarBottomConstraint;
	NSMutableDictionary* _lastSelectedSubCategory;

}

@property (nonatomic,retain) UIView * tabBarContainer;                                          //@synthesize tabBarContainer=_tabBarContainer - In the implementation block
@property (nonatomic,retain) SCStickerPickerSubCategoryTabBar * subCategoryTabBar;              //@synthesize subCategoryTabBar=_subCategoryTabBar - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * tabBarBottomConstraint;                       //@synthesize tabBarBottomConstraint=_tabBarBottomConstraint - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lastSelectedSubCategory;                     //@synthesize lastSelectedSubCategory=_lastSelectedSubCategory - In the implementation block
@property (assign,nonatomic,__weak) id<SCStickerPickerMenuDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCStickerPickerMenuDataSource> dataSource;               //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL isOpen;                                                       //@synthesize isOpen=_isOpen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)pickerMenuBottomInsetForInterfaceOrientation:(long long)arg1 ;
+(double)pickerMenuCornerRadiusForPreview;
+(BOOL)shouldEnableStickerSearchPretyping;
+(int)context;
-(void)searchBarDidBeginEditing:(id)arg1 ;
-(long long)stickerPickerType;
-(void)searchView:(id)arg1 didChangeToText:(id)arg2 byChangingCharactersInRange:(NSRange)arg3 replacementString:(id)arg4 ;
-(void)searchViewBackButtonTapped:(id)arg1 ;
-(void)searchViewDidBeginEditing:(id)arg1 ;
-(void)searchViewDidEndEditing:(id)arg1 ;
-(BOOL)searchViewShouldReturn:(id)arg1 withSearchText:(id)arg2 ;
-(BOOL)searchViewShouldDeleteCharacter:(id)arg1 ;
-(void)_pan:(id)arg1 ;
-(void)tooltipFinishAnimation;
-(void)_tap:(id)arg1 ;
-(void)friendmojiAvatarPickerClosedWithFriendmojiType:(long long)arg1 selectedStickerId:(id)arg2 ;
-(void)_stopStickerSearch;
-(void)_startStickerSearch:(id)arg1 ;
-(void)closeWithShouldClearSearchBar:(BOOL)arg1 shouldAnimate:(BOOL)arg2 withStickerPicked:(BOOL)arg3 ;
-(void)updateVisibleStickerCategoryCellCollectionViewAnimated:(BOOL)arg1 deltaContentOffset:(double)arg2 topMargin:(double)arg3 ;
-(id)initWithFrame:(CGRect)arg1 sourceType:(unsigned long long)arg2 isQuickSend:(BOOL)arg3 hideGiphy:(BOOL)arg4 commonLoggingParameters:(id)arg5 userSession:(id)arg6 previewImage:(id)arg7 bottomInset:(double)arg8 ;
-(void)reloadDataWithDataSourceUpdateHint:(id)arg1 ;
-(void)openAtCategory:(id)arg1 sticker:(id)arg2 isSingleCategoryMode:(BOOL)arg3 ;
-(void)reloadDataWithDataSourceUpdateHint:(id)arg1 shouldRefreshSuperCategoryIcons:(BOOL)arg2 ;
-(BOOL)avatarPickerRequestedWithBitmojiUsers:(id)arg1 targetView:(id)arg2 delegate:(id)arg3 ;
-(BOOL)friendmojiHintRequestedWithTargetView:(id)arg1 delegate:(id)arg2 ;
-(void)stickerPickerCategoryCellScrollViewWillBeginDragging:(id)arg1 ;
-(void)stickerPickerCategoryCellScrollViewDidScroll:(id)arg1 ;
-(void)stickerPickerCategoryCellScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)setupSafeAreaFrame:(CGRect)arg1 bottomInset:(double)arg2 ;
-(void)willStartToRotate;
-(void)endCustomStickerMoving:(id)arg1 recentSectionView:(id)arg2 stickerCell:(id)arg3 completionHanlder:(/*^block*/id)arg4 ;
-(void)lockScroll;
-(void)unlockScroll;
-(void)stickerPickerCategoryFriendmojiAvatarIdChanged:(id)arg1 ;
-(void)categoryCell:(id)arg1 metaStickerSelected:(id)arg2 index:(unsigned long long)arg3 ;
-(void)categoryCell:(id)arg1 stickerSelected:(id)arg2 center:(CGPoint)arg3 thumbnail:(id)arg4 index:(unsigned long long)arg5 ;
-(void)stickerPickerCategoryCellDidTapEmptyScreen;
-(void)moveCustomStickerCell:(id)arg1 ;
-(void)beginCustomStickerMoving:(id)arg1 forCell:(id)arg2 ;
-(void)stickerSearchQuerySuggestionTapped:(id)arg1 ;
-(BOOL)stickerPickerCatogoryCellCanSelectSticker:(id)arg1 ;
-(void)setLastSelectedSubCategory:(NSMutableDictionary *)arg1 ;
-(void)_configurePreTypeWithQueryKeywords:(id)arg1 ;
-(void)setTabBarContainer:(UIView *)arg1 ;
-(UIView *)tabBarContainer;
-(void)setSubCategoryTabBar:(SCStickerPickerSubCategoryTabBar *)arg1 ;
-(SCStickerPickerSubCategoryTabBar *)subCategoryTabBar;
-(void)setTabBarBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)tabBarBottomConstraint;
-(void)_transitionTabBarToPercentage:(double)arg1 ;
-(void)_addStickerPickerDebuggingView;
-(double)_topInsetForBackgroundView;
-(void)_resetLayoutWithUpdateHint:(id)arg1 shouldRefreshSuperCategoryIcons:(BOOL)arg2 ;
-(void)_updatePretypeSearchView;
-(void)setGradientWithinSearchCell:(BOOL)arg1 ;
-(id)_categoryIndexToSubIconIndex:(id)arg1 ;
-(void)_updateAndSelectStickerCategoryCellWithSubCategory:(id)arg1 withCurrentSelectedCategoryIndex:(id)arg2 ;
-(void)_updateContextBasedOnCategory:(id)arg1 ;
-(void)_logStickerCategoryViewedAtIndexPath:(id)arg1 ;
-(void)_showSearchResults;
-(long long)currentSuperCategoryType;
-(void)_hidePretypeSearchResults;
-(void)_showPretypeSearchResults;
-(void)_startGiphyTrending;
-(BOOL)_selectedCategoryhasSubCategories;
-(void)_saveCategoryContentOffsetY;
-(BOOL)_customStickerIsMovedtoSaveSection:(id)arg1 recentSectionView:(id)arg2 stickerCell:(id)arg3 ;
-(CGPoint)_convertStickerLocation:(id)arg1 ;
-(void)updateCustomStickerDataToBeDeleted:(id)arg1 ;
-(void)_checkDidDisplayCustomStickerPageAtIndexPath:(id)arg1 cell:(id)arg2 ;
-(void)_checkEndDisplayingCustomStickerPageAtIndexPath:(id)arg1 cell:(id)arg2 isDragging:(BOOL)arg3 ;
-(long long)categoryTypeForIndex:(long long)arg1 ;
-(NSMutableDictionary *)lastSelectedSubCategory;
-(void)_configureStickerCategoryIconCell:(id)arg1 normalIconImage:(id)arg2 selectedIconImage:(id)arg3 isHighlighted:(BOOL)arg4 ;
-(id)_categoryIconCellAccessibilityIdentifierFromIndexPath:(long long)arg1 ;
-(void)setSelectedIndex:(id)arg1 highlightedIndex:(double)arg2 selectionPercentage:(double)arg3 ;
-(id)_selectedStickerPickerCategoryCell;
-(void)_checkWillDisplayFriendmojiHintForCell:(id)arg1 ;
-(void)selectSubCategoryAtIndex:(long long)arg1 ;
-(id)_correctIndexForSuperIcon:(id)arg1 ;
-(void)_animateViewsIn;
-(void)_updateTranslationForDismissalAnimationWithAlpha:(double)arg1 translation:(double)arg2 isDragging:(BOOL)arg3 ;
-(void)_prepareToAnimateViewsInIfNeeded;
-(void)_removeStickerPackContext;
-(id)_currentStickerPickerCategoryCell;
-(void)_animateViewsOut;
-(void)_clearSearchBar;
-(void)_beginBlurAnimation;
-(void)_removeBlurAnimationAndFreezeLayerTree:(BOOL)arg1 ;
-(void)_panVertical:(id)arg1 ;
-(void)_updateTranslationForDismissalAnimationWithPercentage:(double)arg1 ;
-(id)_subIconIndexToCategoryIndex:(id)arg1 ;
-(void)_doStickerSearch:(id)arg1 friendAvatarId:(id)arg2 ;
-(void)_startGiphySearch:(id)arg1 ;
-(void)_startGiphyTrendingTimer;
-(void)_handleGiphyTrendingLoaded:(id)arg1 ;
-(void)_clearGiphyTrendingTimer;
-(unsigned long long)_giphyStickerCategoryIndex:(id)arg1 giphyTrending:(BOOL)arg2 ;
-(void)_removeGiphyTrendingFromPreType;
-(void)removeGiphyFromResults:(id)arg1 currentActiveStickerCategory:(id)arg2 giphyTrending:(BOOL)arg3 sectionIndex:(unsigned long long)arg4 ;
-(void)_stopGiphySearch;
-(void)_startGiphySearchTimer;
-(void)_doGiphyStickerSearch:(id)arg1 ;
-(void)_clearGiphySearchTimeoutTimer;
-(void)_removeGiphySearchResults;
-(void)_handleGiphySearchStickersLoaded:(id)arg1 query:(id)arg2 ;
-(void)_viewWasDoubleTapped:(id)arg1 ;
-(void)xButtonPressed:(id)arg1 ;
-(void)didSelectSuperIconAtIndex:(long long)arg1 ;
-(long long)numberOfSubCategoriesForTabBar:(id)arg1 ;
-(id)tabBar:(id)arg1 imageForSubCategoryAtIndex:(long long)arg2 ;
-(void)tabBar:(id)arg1 didSelectSubCategoryAtIndex:(long long)arg2 ;
-(void)layoutSubviews;
-(void)setDataSource:(id<SCStickerPickerMenuDataSource>)arg1 ;
-(void)setDelegate:(id<SCStickerPickerMenuDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<SCStickerPickerMenuDataSource>)dataSource;
-(id<SCStickerPickerMenuDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)setSelectedIndex:(id)arg1 ;
-(void)didRotate;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)_hideSearchResults;
-(BOOL)isOpen;
-(void)resetLayout;
-(void)setIsOpen:(BOOL)arg1 ;
@end
