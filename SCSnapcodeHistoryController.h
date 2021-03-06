/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGenericSettingsViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Snapchat/SCScanResultViewControllerDelegate.h>
#import <Snapchat/SWTableViewCellDelegate.h>

@protocol SCPerforming, NavigationDelegate;
@class NSMutableArray, UIActivityIndicatorView, UIView, UILabel, SCUserSession, ScanHistoryCell, SCScanHistoryCellFactory, UITableView, NSString;

@interface SCSnapcodeHistoryController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, SCScanResultViewControllerDelegate, SWTableViewCellDelegate> {

	NSMutableArray* _recentSnapcodes;
	UIActivityIndicatorView* _loadingIndicator;
	UIView* _overlayView;
	UILabel* _errorSubtextLabel;
	id<SCPerforming> _performer;
	SCUserSession* _userSession;
	BOOL _showingSnapcodeScan;
	ScanHistoryCell* _selectedCell;
	BOOL _hasMorePages;
	UIActivityIndicatorView* _loadingSpinner;
	SCScanHistoryCellFactory* _cellFactory;
	id<NavigationDelegate> _navigationDelegate;
	UITableView* _tableView;

}

@property (nonatomic,retain) UITableView * tableView;               //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)leftButtonPressed;
-(id)titleForHeader:(id)arg1 ;
-(BOOL)disableLeftSwipe;
-(BOOL)swipeableTableViewCellShouldHideUtilityButtonsOnSwipe:(id)arg1 ;
-(void)swipeableTableViewCell:(id)arg1 didTriggerRightUtilityButtonWithIndex:(long long)arg2 ;
-(id)rightUtilityButtons;
-(void)scanResultViewControllerDidDismiss:(id)arg1 dismissType:(unsigned long long)arg2 ;
-(void)_initTableView;
-(id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 ;
-(void)showAlert:(id)arg1 title:(id)arg2 ;
-(void)initLoadingSpinner;
-(void)getScanHistoryFromServer:(long long)arg1 pageCount:(long long)arg2 firstPage:(BOOL)arg3 ;
-(id)loadingCell;
-(void)_clearAllScansPressed;
-(void)_scanHistoryCellPresentScanResult:(id)arg1 ;
-(void)_showDeleteConfirmDialog:(id)arg1 ;
-(void)didConfirmPressDeleteButton:(id)arg1 ;
-(void)_initMessage;
-(void)setupErrorSubtext;
-(void)_closeHighlightItem;
-(void)_finishedHideSnapcodeFocusView;
-(void)_clearAllScans;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)showAlert:(id)arg1 ;
@end

