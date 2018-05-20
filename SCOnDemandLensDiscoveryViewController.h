/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCLensDiscoveryViewController.h>
#import <Snapchat/SCSearchViewDelegate.h>
#import <Snapchat/SCLensDiscoverySearchResultsViewControllerDelegate.h>

@protocol SCOnDemandLensDiscoveryViewControllerDelegate;
@class SCSearchNavigationBar, SCUserSession, SCLensDiscoverySearchResultsViewController, NSSet, SCLensURLDataFetcher, SCOnDemandLensAllTimeHitsDataProvider, NSString;

@interface SCOnDemandLensDiscoveryViewController : SCLensDiscoveryViewController <SCSearchViewDelegate, SCLensDiscoverySearchResultsViewControllerDelegate> {

	SCSearchNavigationBar* _searchNavigationBar;
	SCUserSession* _userSession;
	SCLensDiscoverySearchResultsViewController* _searchResultsViewController;
	NSSet* _selectedLensIds;
	SCLensURLDataFetcher* _lensUrlDataFetcher;
	id<SCOnDemandLensDiscoveryViewControllerDelegate> _delegate;

}

@property (retain) SCOnDemandLensAllTimeHitsDataProvider * dataProvider; 
@property (assign,nonatomic,__weak) id<SCOnDemandLensDiscoveryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)searchView:(id)arg1 didChangeToText:(id)arg2 byChangingCharactersInRange:(NSRange)arg3 replacementString:(id)arg4 ;
-(BOOL)searchViewShouldReturn:(id)arg1 withSearchText:(id)arg2 ;
-(void)updateSearchResultsSelectionIfPossible;
-(void)didSelectObject:(id)arg1 inCategoryWithId:(id)arg2 ;
-(void)lensDiscoverySearchResultsViewController:(id)arg1 didSelectObject:(id)arg2 ;
-(void)didCreateTopBar;
-(id)selectedLensIds;
-(void)willReloadData;
-(void)lensDiscoveryCellProducer:(id)arg1 didDequeueLensDiscoveryCell:(id)arg2 forLens:(id)arg3 ;
-(id)initWithUserSession:(id)arg1 delegate:(id)arg2 ;
-(BOOL)shouldUseTableSeparator;
-(void)setDelegate:(id<SCOnDemandLensDiscoveryViewControllerDelegate>)arg1 ;
-(id<SCOnDemandLensDiscoveryViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)dismissKeyboard;
-(void)dismiss;
-(id)searchResultsViewController;
@end

