/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCLensDiscoveryViewController.h>
#import <Snapchat/SCLensDiscoverySearchResultsViewControllerDelegate.h>
#import <Snapchat/SCSearchViewDelegate.h>

@protocol SCArcadiaViewControllerDelegate;
@class NSMutableArray, NSSet, UIButton, UINavigationBar, UIView, SCSearchView, UIBarButtonItem, SCLensDiscoverySearchResultsViewController, SCUserSession, SCLens, SCArcadiaDataProvider, NSString;

@interface SCArcadiaViewController : SCLensDiscoveryViewController <SCLensDiscoverySearchResultsViewControllerDelegate, SCSearchViewDelegate> {

	NSMutableArray* _selectedLenses;
	NSSet* _selectedLensIds;
	UIButton* _multipleSelectionButton;
	BOOL _multipleSelection;
	UINavigationBar* _navigationBar;
	UIView* _searchContainerView;
	SCSearchView* _searchBar;
	UIBarButtonItem* _deselectBarButtonItem;
	UIBarButtonItem* _spaceBarButtonItem;
	SCLensDiscoverySearchResultsViewController* _searchResultsViewController;
	SCUserSession* _userSession;
	double _sessionStartTimestamp;
	BOOL _isShown;
	id<SCArcadiaViewControllerDelegate> _delegate;
	SCLens* _lastSelectedLens;

}

@property (retain) SCArcadiaDataProvider * dataProvider; 
@property (assign,nonatomic,__weak) id<SCArcadiaViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isShown;                                                   //@synthesize isShown=_isShown - In the implementation block
@property (nonatomic,readonly) SCLens * lastSelectedLens;                                      //@synthesize lastSelectedLens=_lastSelectedLens - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_arcadiaSessionStoppedWithViewTimeSec:(double)arg1 ;
+(void)_arcadiaLensSelected:(id)arg1 categoryTag:(id)arg2 autoOpen:(BOOL)arg3 ;
-(void)searchView:(id)arg1 didChangeToText:(id)arg2 byChangingCharactersInRange:(NSRange)arg3 replacementString:(id)arg4 ;
-(BOOL)searchViewShouldReturn:(id)arg1 withSearchText:(id)arg2 ;
-(id)initWithUserSession:(id)arg1 ;
-(SCLens *)lastSelectedLens;
-(void)didCreateSearchResultsViewController;
-(void)toggleMultipleSelection;
-(void)updateLeftBarButtonItems;
-(void)didSetupNavigationBar;
-(id)spaceBarButtonItem;
-(id)deselectBarButtonItem;
-(void)updateSearchResultsSelectionIfPossible;
-(void)didSelectObject:(id)arg1 inCategoryWithId:(id)arg2 ;
-(void)lensDiscoverySearchResultsViewController:(id)arg1 didSelectObject:(id)arg2 ;
-(void)didCreateTopBar;
-(id)selectedLensIds;
-(void)willReloadData;
-(BOOL)lensDiscoveryGroupCell:(id)arg1 isObjectNewWithId:(id)arg2 inCategoryWithId:(id)arg3 ;
-(void)lensDiscoveryCellProducer:(id)arg1 didDequeueLensDiscoveryCell:(id)arg2 forLens:(id)arg3 ;
-(void)setDelegate:(id<SCArcadiaViewControllerDelegate>)arg1 ;
-(id<SCArcadiaViewControllerDelegate>)delegate;
-(BOOL)isShown;
-(void)dismissKeyboard;
-(void)dismiss;
-(void)deselectAll;
-(id)searchResultsViewController;
-(void)hideAnimated:(BOOL)arg1 ;
-(void)showAnimated:(BOOL)arg1 ;
@end
