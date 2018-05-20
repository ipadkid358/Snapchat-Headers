/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGenericSettingsViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Snapchat/TTTAttributedLabelDelegate.h>

@class SCUserSession, UILabel, TTTAttributedLabel, UITableView, NSString;

@interface SCAdInfoPreferencesViewController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, TTTAttributedLabelDelegate> {

	SCUserSession* _userSession;
	UILabel* _textLabel;
	TTTAttributedLabel* _adsInfoLabel;
	UITableView* _tableView;

}

@property (nonatomic,retain) UITableView * tableView;               //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2 ;
-(void)leftButtonPressed;
-(id)titleForHeader:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 ;
-(BOOL)shouldPopToRootViewControllerLater;
-(id)getPageViewName;
-(id)adsInfoCell;
-(id)newAdsInfoHeaderTextLabel;
-(id)newAdsInfoLabel;
-(void)layoutAccessoryTableViewCell:(id)arg1 textLabel:(id)arg2 attributionLabel:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
@end

