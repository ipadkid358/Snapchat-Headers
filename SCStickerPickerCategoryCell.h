/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Snapchat/SCStickerPickerCategoryCellScrollbarDelegate.h>
#import <Snapchat/SCTimeProfilable.h>
#import <Snapchat/SCStickerQuerySuggestionControllerDelegate.h>
#import <Snapchat/SCCustomStickerManagerListener.h>
#import <Snapchat/SCGiphyStickerSearchSectionDelegate.h>
#import <Snapchat/SCBitmojiAvatarPickerViewControllerDelegate.h>

@protocol SCStickerPickerCategoryDelegate, SCStickerPickerMenuDelegate;
@class SCUserSession, UICollectionView, UIImageView, SCBitmojiAvatarPicker, SCPreviewTooltipBalloon, UITapGestureRecognizer, UILongPressGestureRecognizer, SCStickerPickerStickerCell, SCStickerCategory, SCStickerPickerCategoryCellScrollbar, SCStickerQuerySuggestionController, NSString, SCCustomStickerEmptyPage, NSArray, UIImage;

@interface SCStickerPickerCategoryCell : UICollectionViewCell <UICollectionViewDataSource, UIGestureRecognizerDelegate, UICollectionViewDelegate, SCStickerPickerCategoryCellScrollbarDelegate, SCTimeProfilable, SCStickerQuerySuggestionControllerDelegate, SCCustomStickerManagerListener, SCGiphyStickerSearchSectionDelegate, SCBitmojiAvatarPickerViewControllerDelegate> {

	SCUserSession* _userSession;
	UICollectionView* _collectionView;
	UIImageView* _skinTonePicker;
	SCBitmojiAvatarPicker* _friendmojiPicker;
	SCPreviewTooltipBalloon* _friendmojiHint;
	long long _portraitColumnCount;
	long long _landscapeColumnCount;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	SCStickerPickerStickerCell* _skinToneCell;
	SCStickerCategory* _stickerCategory;
	BOOL _supportsSkinTone;
	BOOL _shouldSuppressDidScrollForScrollbar;
	SCStickerPickerCategoryCellScrollbar* _scrollbar;
	double _topOffset;
	SCPreviewTooltipBalloon* _tooltip;
	SCStickerPickerStickerCell* _stickerCellIsMoving;
	BOOL _needQueryHeader;
	BOOL _needShownQuerySection;
	long long _orientation;
	SCStickerQuerySuggestionController* _querySuggestor;
	BOOL _shouldDisplayScrollbar;
	NSString* _stickerIdForCellShowingFriendmojiPicker;
	SCCustomStickerEmptyPage* _customStickerEmptyAutoSection;
	double _itemHeight;
	NSArray* _contexts;
	BOOL _enableAutoCustomSticker;
	BOOL _enableFilterMenu;
	BOOL _enableWhiteUiV2;
	BOOL _useVerticalGiphySection;
	BOOL _isRecentCategory;
	BOOL _showAutocompleteToggle;
	id<SCStickerPickerCategoryDelegate> _delegate;
	id<SCStickerPickerMenuDelegate> _pickerMenuDelegate;
	double _bottomInset;
	unsigned long long _sourceType;
	UIImage* _previewImage;

}

@property (assign,nonatomic,__weak) id<SCStickerPickerCategoryDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCStickerPickerMenuDelegate> pickerMenuDelegate;              //@synthesize pickerMenuDelegate=_pickerMenuDelegate - In the implementation block
@property (assign,nonatomic) double contentOffsetY; 
@property (assign,nonatomic) double bottomInset;                                                     //@synthesize bottomInset=_bottomInset - In the implementation block
@property (nonatomic,readonly) BOOL isAtTop; 
@property (assign,nonatomic) unsigned long long sourceType;                                          //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) BOOL isRecentCategory;                                                //@synthesize isRecentCategory=_isRecentCategory - In the implementation block
@property (assign,nonatomic) BOOL showAutocompleteToggle;                                            //@synthesize showAutocompleteToggle=_showAutocompleteToggle - In the implementation block
@property (nonatomic,retain) UIImage * previewImage;                                                 //@synthesize previewImage=_previewImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)context;
-(void)didCloseAvatarPickerWithoutSelectingAvatar;
-(void)avatarPickerBitmojiUserSelected:(id)arg1 ;
-(void)tooltipBalloonDismissed;
-(void)customStickerDataDidChange;
-(void)customStickerAutoSectionDataDidChange;
-(double)contentOffsetY;
-(void)setContentOffsetY:(double)arg1 ;
-(id)_stickerCellForGestureRecognizer:(id)arg1 ;
-(void)sectionCell:(id)arg1 stickerSelected:(id)arg2 center:(CGPoint)arg3 thumbnail:(id)arg4 index:(unsigned long long)arg5 ;
-(id)initWithFrame:(CGRect)arg1 shouldIncludeQueryHeader:(BOOL)arg2 useVerticalGiphySection:(BOOL)arg3 ;
-(void)collectionViewTapped:(id)arg1 ;
-(void)collectionViewLongPressed:(id)arg1 ;
-(void)_completeForStickerMoving;
-(void)deleteCellFromAutoSection:(id)arg1 horizontalCell:(id)arg2 isMovedToSave:(BOOL)arg3 isDeleted:(BOOL)arg4 ;
-(double)_calculateContentWidth;
-(double)_spacingWithOrientation:(long long)arg1 ;
-(double)_itemHeightWithOrientation:(long long)arg1 spacing:(double)arg2 shouldDisplayScrollbar:(BOOL)arg3 ;
-(id)_contextsForNetworkRequest;
-(void)hideSkinTonePicker;
-(void)_layoutCollectionView;
-(void)resetLayout:(long long)arg1 ;
-(void)fadeOutTooltip;
-(long long)_correctSectionIndex:(long long)arg1 needQueryHeader:(BOOL)arg2 ;
-(void)appendSkinTone:(long long)arg1 cell:(id)arg2 ;
-(id<SCStickerPickerMenuDelegate>)pickerMenuDelegate;
-(void)setOpacityForVisibleEmojis:(double)arg1 userInteractionEnabled:(BOOL)arg2 selectedStickerCell:(id)arg3 duration:(double)arg4 ;
-(double)_tooltipYOffsetForCell:(id)arg1 extraHeight:(double)arg2 ;
-(id)_bestCellForFriendmojiHint;
-(BOOL)touchInSkinTonePickerRange:(CGPoint)arg1 ;
-(long long)skinToneFromLoc:(CGPoint)arg1 ;
-(void)deleteCellFromSavedSection:(id)arg1 ;
-(void)showSkinTonePicker:(id)arg1 ;
-(BOOL)_showFriendmojiPicker:(id)arg1 ;
-(void)_prepareForStickerMoving:(id)arg1 ;
-(void)_setOpacityForCustomStickerCells:(double)arg1 duration:(double)arg2 userInteractionEnabled:(BOOL)arg3 ;
-(void)_scrollScrollbarToCurrentSectionAnimated:(BOOL)arg1 ;
-(void)categoryCellScrollbar:(id)arg1 didScrollToSection:(long long)arg2 ;
-(void)querySuggestControllerDidSelectItem:(id)arg1 ;
-(void)startEmptySectionVideoPlay;
-(void)stopEmptySectionVideoPlay;
-(void)updateStickersInSection:(long long)arg1 ;
-(void)setStickerCategory:(id)arg1 isRecentCategory:(BOOL)arg2 orientation:(long long)arg3 userSession:(id)arg4 queryKeywords:(id)arg5 enableWhiteUiV2:(BOOL)arg6 hasSubCategories:(BOOL)arg7 ;
-(BOOL)isAtTop;
-(BOOL)isCollectionViewGestureRecognizer:(id)arg1 ;
-(BOOL)canSubCellCollectionViewHandleGesture:(id)arg1 ;
-(void)showToolTipBelowFirstCellWithText:(id)arg1 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAt:(long long)arg3 ;
-(BOOL)showFriendmojiHintIfPossible;
-(void)hideSuggestor;
-(void)showSuggestor;
-(void)updateCollectionViewAnimated:(BOOL)arg1 deltaContentOffset:(double)arg2 topMargin:(double)arg3 ;
-(void)setPickerMenuDelegate:(id<SCStickerPickerMenuDelegate>)arg1 ;
-(BOOL)isRecentCategory;
-(BOOL)showAutocompleteToggle;
-(void)setShowAutocompleteToggle:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCStickerPickerCategoryDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(id<SCStickerPickerCategoryDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)prepareForReuse;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(unsigned long long)sourceType;
-(void)setSourceType:(unsigned long long)arg1 ;
-(void)setBottomInset:(double)arg1 ;
-(double)bottomInset;
-(void)setPreviewImage:(UIImage *)arg1 ;
-(UIImage *)previewImage;
-(void)removeSection:(long long)arg1 ;
@end

