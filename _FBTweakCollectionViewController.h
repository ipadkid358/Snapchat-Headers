/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UISearchResultsUpdating.h>

@protocol _FBTweakCollectionViewControllerDelegate;
@class UITableView, NSArray, UISearchController, FBTweakCategory, NSString;

@interface _FBTweakCollectionViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchResultsUpdating> {

	UITableView* _tableView;
	NSArray* _sortedCollections;
	UISearchController* _searchController;
	FBTweakCategory* _tweakCategory;
	id<_FBTweakCollectionViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) FBTweakCategory * tweakCategory;                                         //@synthesize tweakCategory=_tweakCategory - In the implementation block
@property (assign,nonatomic,__weak) id<_FBTweakCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTweakCategory:(id)arg1 ;
-(void)_keyboardFrameChanged:(id)arg1 ;
-(FBTweakCategory *)tweakCategory;
-(void)setDelegate:(id<_FBTweakCollectionViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<_FBTweakCollectionViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)_done;
@end
