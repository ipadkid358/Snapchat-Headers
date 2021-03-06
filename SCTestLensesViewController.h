/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>

@class UIActivityIndicatorView, UISearchBar, NSArray, NSMutableArray, SCTestLensManager, NSString;

@interface SCTestLensesViewController : UITableViewController <UIAlertViewDelegate, UISearchBarDelegate> {

	UIActivityIndicatorView* _spinner;
	UISearchBar* _searchBar;
	NSArray* _filteredLenses;
	NSArray* _allLenses;
	NSMutableArray* _selectedLenses;
	SCTestLensManager* _testLensManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)requestAllLenses;
-(id)filteredLensesByQuery:(id)arg1 scope:(long long)arg2 ;
-(void)requestLensesWithCursor:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)dismiss;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
@end

