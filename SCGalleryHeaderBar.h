/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>
#import <Snapchat/SCHovaNavigationBarDataSource.h>
#import <Snapchat/SCSearchViewDelegate.h>
#import <Snapchat/SCSpectaclesButtonItemDelegate.h>

@protocol SCGalleryHeaderBarDelegate;
@class SCMemoriesHovaNavigationBar, SCNavigationItem_DEPRECATED, SCNavigationBarButtonItem, SCSpectaclesButtonItem, NSArray, SCSentinel, SCLagunaAppStatusCoordinator, UIView, SCExpandedButton, UILabel, SCUserSession, SCPreviewTooltipBalloon, SCBitmojiProfileView, SCSearchView, NSString;

@interface SCGalleryHeaderBar : UIView <SCHovaNavigationBarDataSource, SCSearchViewDelegate, SCSpectaclesButtonItemDelegate> {

	SCMemoriesHovaNavigationBar* _navigationBar;
	SCNavigationItem_DEPRECATED* _navigationItem;
	SCNavigationBarButtonItem* _selectButtonItem;
	SCSpectaclesButtonItem* _spectaclesButtonItem;
	NSArray* _defaultRightButtonItems;
	unsigned long long _mode;
	SCSentinel* _sentinel;
	SCLagunaAppStatusCoordinator* _lagunaAppStatusCoordinator;
	UIView* _defaultContainerView;
	SCExpandedButton* _searchButton;
	SCExpandedButton* _questionButton;
	SCExpandedButton* _selectButton;
	UILabel* _titleLabel;
	UILabel* _selectCountLabel;
	SCUserSession* _userSession;
	SCPreviewTooltipBalloon* _toolTipBalloon;
	BOOL _selectedItemCountHidden;
	id<SCGalleryHeaderBarDelegate> _delegate;
	long long _selectedItemCount;
	unsigned long long _leftButtonMode;

}

@property (assign,nonatomic,__weak) id<SCGalleryHeaderBarDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long selectedItemCount;                                                //@synthesize selectedItemCount=_selectedItemCount - In the implementation block
@property (assign,getter=isSelectedItemCountHidden,nonatomic) BOOL selectedItemCountHidden;              //@synthesize selectedItemCountHidden=_selectedItemCountHidden - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                                                  //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) BOOL isSelectMode; 
@property (assign,nonatomic) BOOL selectionEnabled; 
@property (assign,nonatomic) unsigned long long leftButtonMode;                                          //@synthesize leftButtonMode=_leftButtonMode - In the implementation block
@property (nonatomic,readonly) SCBitmojiProfileView * bitmojiProfileView; 
@property (nonatomic,readonly) SCSearchView * searchView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)searchViewShouldBeginEditing:(id)arg1 ;
-(SCBitmojiProfileView *)bitmojiProfileView;
-(void)didSelectProfileButton:(id)arg1 ;
-(void)_didPressSelectButton;
-(void)_exitSelectModeAnimated:(BOOL)arg1 ;
-(CGRect)_modeContainerViewBounds;
-(void)_didPressSelectBackButton;
-(void)setSelectedItemCount:(long long)arg1 ;
-(long long)selectedItemCount;
-(void)_updateRightButtonItems:(BOOL)arg1 ;
-(void)_enterSelectMode:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_showQuestionMark;
-(void)_didPressQuestionButton;
-(BOOL)isSelectMode;
-(id)_setupLeftHeaderButtonWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(double)navigationBar:(id)arg1 percentVisibleForItemAtIndex:(long long)arg2 ;
-(double)navigationBar:(id)arg1 percentOverscrolledForItemAtIndex:(long long)arg2 ;
-(id)navigationBar:(id)arg1 searchPlaceholderForItemAtIndex:(long long)arg2 ;
-(NSRange)visibleRangeForNavigationBar:(id)arg1 ;
-(void)spectaclesButtonItemPressed:(id)arg1 ;
-(id)initWithNavigationItem:(id)arg1 userSession:(id)arg2 frame:(CGRect)arg3 ;
-(void)refreshSpectaclesStatusIcon:(id)arg1 ;
-(void)updateNavigationBarPosition:(double)arg1 ;
-(void)setSelectedItemCountHidden:(BOOL)arg1 ;
-(void)setLeftButtonMode:(unsigned long long)arg1 ;
-(BOOL)selectionEnabled;
-(void)setSelectionEnabled:(BOOL)arg1 ;
-(void)showSearchToolTip;
-(id)questionButton;
-(BOOL)isSelectedItemCountHidden;
-(unsigned long long)leftButtonMode;
-(void)setDelegate:(id<SCGalleryHeaderBarDelegate>)arg1 ;
-(id<SCGalleryHeaderBarDelegate>)delegate;
-(unsigned long long)mode;
-(void)setMode:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(SCSearchView *)searchView;
@end

